/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   Serializer.cpp
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#include <vector>
#include <map>
typedef void any;
#include "headers/containers.h"
#include "headers/uhdm.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "UHDM.capnp.h"
#include <capnp/message.h>
#include <capnp/serialize-packed.h>
#include <iostream>

using namespace UHDM;

const std::vector<vpiHandle> Serializer::Restore(std::string file) {
  Purge();
  std::vector<vpiHandle> designs;
  int fileid = open(file.c_str(), O_RDONLY);
  ::capnp::PackedFdMessageReader message(fileid);
  UhdmRoot::Reader cap_root = message.getRoot<UhdmRoot>();
  unsigned long index = 0;

  ::capnp::List<::capnp::Text>::Reader symbols = cap_root.getSymbols();
  for (auto symbol : symbols) {
    SymbolFactory::Make(symbol);
  }
 
<CAPNP_INIT_FACTORIES>  
  
<CAPNP_RESTORE_FACTORIES>  
  
   for (auto d : designFactory::objects_) {
    vpiHandle designH = uhdm_handleFactory::Make(uhdmdesign, d);
    designs.push_back(designH);
  }
   
  close(fileid); 
  return designs;
}
