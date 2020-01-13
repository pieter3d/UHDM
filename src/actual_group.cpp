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
 * File:   actual_group.cpp
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */


#include <iostream>
#include "headers/uhdm.h"
#include "actual_group.h"

namespace UHDM {

  bool actual_groupGroupCompliant(any* item) {
    BaseClass* the_item = (BaseClass*) item;
    unsigned int uhdmtype = the_item->getUhdmType();
    if ((uhdmtype != uhdmnets) && (uhdmtype != uhdmlogic_net) && (uhdmtype != uhdminteger_net) && (uhdmtype != uhdmenum_net) && (uhdmtype != uhdmstruct_net) && (uhdmtype != uhdmpacked_array_net) && (uhdmtype != uhdmarray_net) && (uhdmtype != uhdmtime_net) && (uhdmtype != uhdmnet_bit) && (uhdmtype != uhdmnet) && (uhdmtype != uhdmvariables) && (uhdmtype != uhdminterface) && (uhdmtype != uhdminterface_array) && (uhdmtype != uhdmmodport) && (uhdmtype != uhdmnamed_event) && (uhdmtype != uhdmnamed_event_array) && (uhdmtype != uhdmpart_select)) {
      std::cout << "Internal Error: adding wrong object type (" << getUhdmName(uhdmtype) << ") in a actual_group group!\n";   
      return false;
    }
    return true;
  }

  bool actual_groupGroupCompliant(VectorOfany* vec) {
    for (auto item : *vec) {
      if (!actual_groupGroupCompliant(item)) {
	return false;
      }
    }
    return true;
  }
 	     
};

