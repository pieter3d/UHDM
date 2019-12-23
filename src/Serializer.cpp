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

std::vector<uhdm_handle*> uhdm_handleFactory::objects_;

std::map<BaseClass*, unsigned long> allIds;

void setId(BaseClass* p, unsigned long id) {
  allIds.insert(std::make_pair(p, id));
}

static unsigned long incrId = 0;
unsigned long getId(BaseClass* p) {
  std::map<BaseClass*, unsigned long>::iterator itr = allIds.find(p);
  if (itr == allIds.end()) {
    unsigned long tmp = incrId;
    allIds.insert(std::make_pair(p, incrId));
    incrId++;
    return tmp;		  
  } else {
    return (*itr).second;
  }
}

std::vector<process*> processFactory::objects_;
std::vector<std::vector<process*>*> VectorOfprocessFactory::objects_;
std::vector<scope*> scopeFactory::objects_;
std::vector<std::vector<scope*>*> VectorOfscopeFactory::objects_;
std::vector<interface*> interfaceFactory::objects_;
std::vector<std::vector<interface*>*> VectorOfinterfaceFactory::objects_;
std::vector<interface_array*> interface_arrayFactory::objects_;
std::vector<std::vector<interface_array*>*> VectorOfinterface_arrayFactory::objects_;
std::vector<cont_assign*> cont_assignFactory::objects_;
std::vector<std::vector<cont_assign*>*> VectorOfcont_assignFactory::objects_;
std::vector<port*> portFactory::objects_;
std::vector<std::vector<port*>*> VectorOfportFactory::objects_;
std::vector<module_array*> module_arrayFactory::objects_;
std::vector<std::vector<module_array*>*> VectorOfmodule_arrayFactory::objects_;
std::vector<primitive*> primitiveFactory::objects_;
std::vector<std::vector<primitive*>*> VectorOfprimitiveFactory::objects_;
std::vector<primitive_array*> primitive_arrayFactory::objects_;
std::vector<std::vector<primitive_array*>*> VectorOfprimitive_arrayFactory::objects_;
std::vector<mod_path*> mod_pathFactory::objects_;
std::vector<std::vector<mod_path*>*> VectorOfmod_pathFactory::objects_;
std::vector<tchk*> tchkFactory::objects_;
std::vector<std::vector<tchk*>*> VectorOftchkFactory::objects_;
std::vector<def_param*> def_paramFactory::objects_;
std::vector<std::vector<def_param*>*> VectorOfdef_paramFactory::objects_;
std::vector<io_decl*> io_declFactory::objects_;
std::vector<std::vector<io_decl*>*> VectorOfio_declFactory::objects_;
std::vector<alias_stmt*> alias_stmtFactory::objects_;
std::vector<std::vector<alias_stmt*>*> VectorOfalias_stmtFactory::objects_;
std::vector<clocking_block*> clocking_blockFactory::objects_;
std::vector<std::vector<clocking_block*>*> VectorOfclocking_blockFactory::objects_;
std::vector<instance_array*> instance_arrayFactory::objects_;
std::vector<std::vector<instance_array*>*> VectorOfinstance_arrayFactory::objects_;
std::vector<module*> moduleFactory::objects_;
std::vector<std::vector<module*>*> VectorOfmoduleFactory::objects_;
std::vector<design*> designFactory::objects_;
std::vector<std::vector<design*>*> VectorOfdesignFactory::objects_;


BaseClass* Serializer::getObject(unsigned int objectType, unsigned int index) {
  switch (objectType) {
  case uhdmprocess: return processFactory::objects_[index];
  case uhdmscope: return scopeFactory::objects_[index];
  case uhdminterface: return interfaceFactory::objects_[index];
  case uhdminterface_array: return interface_arrayFactory::objects_[index];
  case uhdmcont_assign: return cont_assignFactory::objects_[index];
  case uhdmport: return portFactory::objects_[index];
  case uhdmmodule_array: return module_arrayFactory::objects_[index];
  case uhdmprimitive: return primitiveFactory::objects_[index];
  case uhdmprimitive_array: return primitive_arrayFactory::objects_[index];
  case uhdmmod_path: return mod_pathFactory::objects_[index];
  case uhdmtchk: return tchkFactory::objects_[index];
  case uhdmdef_param: return def_paramFactory::objects_[index];
  case uhdmio_decl: return io_declFactory::objects_[index];
  case uhdmalias_stmt: return alias_stmtFactory::objects_[index];
  case uhdmclocking_block: return clocking_blockFactory::objects_[index];
  case uhdminstance_array: return instance_arrayFactory::objects_[index];
  case uhdmmodule: return moduleFactory::objects_[index];
  case uhdmdesign: return designFactory::objects_[index];

  default:
    return NULL;
  }
  return NULL;
}

void Serializer::purge() {

  for (auto obj : processFactory::objects_) {
    delete obj;
  }
  processFactory::objects_.clear();

  for (auto obj : scopeFactory::objects_) {
    delete obj;
  }
  scopeFactory::objects_.clear();

  for (auto obj : interfaceFactory::objects_) {
    delete obj;
  }
  interfaceFactory::objects_.clear();

  for (auto obj : interface_arrayFactory::objects_) {
    delete obj;
  }
  interface_arrayFactory::objects_.clear();

  for (auto obj : cont_assignFactory::objects_) {
    delete obj;
  }
  cont_assignFactory::objects_.clear();

  for (auto obj : portFactory::objects_) {
    delete obj;
  }
  portFactory::objects_.clear();

  for (auto obj : module_arrayFactory::objects_) {
    delete obj;
  }
  module_arrayFactory::objects_.clear();

  for (auto obj : primitiveFactory::objects_) {
    delete obj;
  }
  primitiveFactory::objects_.clear();

  for (auto obj : primitive_arrayFactory::objects_) {
    delete obj;
  }
  primitive_arrayFactory::objects_.clear();

  for (auto obj : mod_pathFactory::objects_) {
    delete obj;
  }
  mod_pathFactory::objects_.clear();

  for (auto obj : tchkFactory::objects_) {
    delete obj;
  }
  tchkFactory::objects_.clear();

  for (auto obj : def_paramFactory::objects_) {
    delete obj;
  }
  def_paramFactory::objects_.clear();

  for (auto obj : io_declFactory::objects_) {
    delete obj;
  }
  io_declFactory::objects_.clear();

  for (auto obj : alias_stmtFactory::objects_) {
    delete obj;
  }
  alias_stmtFactory::objects_.clear();

  for (auto obj : clocking_blockFactory::objects_) {
    delete obj;
  }
  clocking_blockFactory::objects_.clear();

  for (auto obj : instance_arrayFactory::objects_) {
    delete obj;
  }
  instance_arrayFactory::objects_.clear();

  for (auto obj : moduleFactory::objects_) {
    delete obj;
  }
  moduleFactory::objects_.clear();

  for (auto obj : designFactory::objects_) {
    delete obj;
  }
  designFactory::objects_.clear();

}

void Serializer::save(std::string file) {
  int fileid = open(file.c_str(), O_CREAT | O_WRONLY , S_IRWXU);
  ::capnp::MallocMessageBuilder message;
  UhdmRoot::Builder cap_root = message.initRoot<UhdmRoot>();
  unsigned long index = 0;


  index = 1;
  for (auto obj : processFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : scopeFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : interfaceFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : interface_arrayFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : cont_assignFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : portFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : module_arrayFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : primitiveFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : primitive_arrayFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : mod_pathFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : tchkFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : def_paramFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : io_declFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : alias_stmtFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : clocking_blockFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : instance_arrayFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : moduleFactory::objects_) {
    setId(obj, index);
    index++;
  }
  index = 1;
  for (auto obj : designFactory::objects_) {
    setId(obj, index);
    index++;
  }
  
  ::capnp::List<Design>::Builder designs = cap_root.initDesigns(designFactory::objects_.size());
  index = 0;
  for (auto design : designFactory::objects_) {
    designs[index].setVpiName(design->get_vpiName());
    index++;
  }
  

 ::capnp::List<Process>::Builder Processs = cap_root.initFactoryProcess(processFactory::objects_.size());
 index = 0;
 for (auto obj : processFactory::objects_) {
    Processs[index].setVpiParent(getId(obj->get_vpiParent()));
    Processs[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Scope>::Builder Scopes = cap_root.initFactoryScope(scopeFactory::objects_.size());
 index = 0;
 for (auto obj : scopeFactory::objects_) {
    Scopes[index].setVpiParent(getId(obj->get_vpiParent()));
    Scopes[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Interface>::Builder Interfaces = cap_root.initFactoryInterface(interfaceFactory::objects_.size());
 index = 0;
 for (auto obj : interfaceFactory::objects_) {
    Interfaces[index].setVpiParent(getId(obj->get_vpiParent()));
    Interfaces[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Interfacearray>::Builder Interfacearrays = cap_root.initFactoryInterfacearray(interface_arrayFactory::objects_.size());
 index = 0;
 for (auto obj : interface_arrayFactory::objects_) {
    Interfacearrays[index].setVpiParent(getId(obj->get_vpiParent()));
    Interfacearrays[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Contassign>::Builder Contassigns = cap_root.initFactoryContassign(cont_assignFactory::objects_.size());
 index = 0;
 for (auto obj : cont_assignFactory::objects_) {
    Contassigns[index].setVpiParent(getId(obj->get_vpiParent()));
    Contassigns[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Port>::Builder Ports = cap_root.initFactoryPort(portFactory::objects_.size());
 index = 0;
 for (auto obj : portFactory::objects_) {
    Ports[index].setVpiParent(getId(obj->get_vpiParent()));
    Ports[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Modulearray>::Builder Modulearrays = cap_root.initFactoryModulearray(module_arrayFactory::objects_.size());
 index = 0;
 for (auto obj : module_arrayFactory::objects_) {
    Modulearrays[index].setVpiParent(getId(obj->get_vpiParent()));
    Modulearrays[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Primitive>::Builder Primitives = cap_root.initFactoryPrimitive(primitiveFactory::objects_.size());
 index = 0;
 for (auto obj : primitiveFactory::objects_) {
    Primitives[index].setVpiParent(getId(obj->get_vpiParent()));
    Primitives[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Primitivearray>::Builder Primitivearrays = cap_root.initFactoryPrimitivearray(primitive_arrayFactory::objects_.size());
 index = 0;
 for (auto obj : primitive_arrayFactory::objects_) {
    Primitivearrays[index].setVpiParent(getId(obj->get_vpiParent()));
    Primitivearrays[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Modpath>::Builder Modpaths = cap_root.initFactoryModpath(mod_pathFactory::objects_.size());
 index = 0;
 for (auto obj : mod_pathFactory::objects_) {
    Modpaths[index].setVpiParent(getId(obj->get_vpiParent()));
    Modpaths[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Tchk>::Builder Tchks = cap_root.initFactoryTchk(tchkFactory::objects_.size());
 index = 0;
 for (auto obj : tchkFactory::objects_) {
    Tchks[index].setVpiParent(getId(obj->get_vpiParent()));
    Tchks[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Defparam>::Builder Defparams = cap_root.initFactoryDefparam(def_paramFactory::objects_.size());
 index = 0;
 for (auto obj : def_paramFactory::objects_) {
    Defparams[index].setVpiParent(getId(obj->get_vpiParent()));
    Defparams[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Iodecl>::Builder Iodecls = cap_root.initFactoryIodecl(io_declFactory::objects_.size());
 index = 0;
 for (auto obj : io_declFactory::objects_) {
    Iodecls[index].setVpiParent(getId(obj->get_vpiParent()));
    Iodecls[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Aliasstmt>::Builder Aliasstmts = cap_root.initFactoryAliasstmt(alias_stmtFactory::objects_.size());
 index = 0;
 for (auto obj : alias_stmtFactory::objects_) {
    Aliasstmts[index].setVpiParent(getId(obj->get_vpiParent()));
    Aliasstmts[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Clockingblock>::Builder Clockingblocks = cap_root.initFactoryClockingblock(clocking_blockFactory::objects_.size());
 index = 0;
 for (auto obj : clocking_blockFactory::objects_) {
    Clockingblocks[index].setVpiParent(getId(obj->get_vpiParent()));
    Clockingblocks[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Instancearray>::Builder Instancearrays = cap_root.initFactoryInstancearray(instance_arrayFactory::objects_.size());
 index = 0;
 for (auto obj : instance_arrayFactory::objects_) {
    Instancearrays[index].setVpiParent(getId(obj->get_vpiParent()));
    Instancearrays[index].setUhdmParentType(obj->get_uhdmParentType());

   index++;
 }
 ::capnp::List<Module>::Builder Modules = cap_root.initFactoryModule(moduleFactory::objects_.size());
 index = 0;
 for (auto obj : moduleFactory::objects_) {
    Modules[index].setVpiParent(getId(obj->get_vpiParent()));
    Modules[index].setUhdmParentType(obj->get_uhdmParentType());
    Modules[index].setVpiName(obj->get_vpiName());
    Modules[index].setVpiTopModule(obj->get_vpiTopModule());
    Modules[index].setVpiDefDecayTime(obj->get_vpiDefDecayTime());
    Modules[index].setInstancearray(getId(obj->get_instance_array()));
 
    if (obj->get_scope()) {  
      ::capnp::List<::uint64_t>::Builder Scopes = Modules[index].initScope(obj->get_scope()->size());
      for (unsigned int ind = 0; ind < obj->get_scope()->size(); ind++) {
        Scopes.set(ind, getId((*obj->get_scope())[ind]));
      }
    }
 
    if (obj->get_process()) {  
      ::capnp::List<::uint64_t>::Builder Processs = Modules[index].initProcess(obj->get_process()->size());
      for (unsigned int ind = 0; ind < obj->get_process()->size(); ind++) {
        Processs.set(ind, getId((*obj->get_process())[ind]));
      }
    }
 
    if (obj->get_primitive()) {  
      ::capnp::List<::uint64_t>::Builder Primitives = Modules[index].initPrimitive(obj->get_primitive()->size());
      for (unsigned int ind = 0; ind < obj->get_primitive()->size(); ind++) {
        Primitives.set(ind, getId((*obj->get_primitive())[ind]));
      }
    }
 
    if (obj->get_primitive_array()) {  
      ::capnp::List<::uint64_t>::Builder Primitivearrays = Modules[index].initPrimitivearray(obj->get_primitive_array()->size());
      for (unsigned int ind = 0; ind < obj->get_primitive_array()->size(); ind++) {
        Primitivearrays.set(ind, getId((*obj->get_primitive_array())[ind]));
      }
    }
    Modules[index].setGlobalclocking(getId(obj->get_global_clocking()));
    Modules[index].setDefaultclocking(getId(obj->get_default_clocking()));
 
    if (obj->get_ports()) {  
      ::capnp::List<::uint64_t>::Builder Portss = Modules[index].initPorts(obj->get_ports()->size());
      for (unsigned int ind = 0; ind < obj->get_ports()->size(); ind++) {
        Portss.set(ind, getId((*obj->get_ports())[ind]));
      }
    }
 
    if (obj->get_interfaces()) {  
      ::capnp::List<::uint64_t>::Builder Interfacess = Modules[index].initInterfaces(obj->get_interfaces()->size());
      for (unsigned int ind = 0; ind < obj->get_interfaces()->size(); ind++) {
        Interfacess.set(ind, getId((*obj->get_interfaces())[ind]));
      }
    }
 
    if (obj->get_interface_arrays()) {  
      ::capnp::List<::uint64_t>::Builder Interfacearrayss = Modules[index].initInterfacearrays(obj->get_interface_arrays()->size());
      for (unsigned int ind = 0; ind < obj->get_interface_arrays()->size(); ind++) {
        Interfacearrayss.set(ind, getId((*obj->get_interface_arrays())[ind]));
      }
    }
 
    if (obj->get_cont_assigns()) {  
      ::capnp::List<::uint64_t>::Builder Contassignss = Modules[index].initContassigns(obj->get_cont_assigns()->size());
      for (unsigned int ind = 0; ind < obj->get_cont_assigns()->size(); ind++) {
        Contassignss.set(ind, getId((*obj->get_cont_assigns())[ind]));
      }
    }
 
    if (obj->get_modules()) {  
      ::capnp::List<::uint64_t>::Builder Moduless = Modules[index].initModules(obj->get_modules()->size());
      for (unsigned int ind = 0; ind < obj->get_modules()->size(); ind++) {
        Moduless.set(ind, getId((*obj->get_modules())[ind]));
      }
    }
 
    if (obj->get_module_array()) {  
      ::capnp::List<::uint64_t>::Builder Modulearrays = Modules[index].initModulearray(obj->get_module_array()->size());
      for (unsigned int ind = 0; ind < obj->get_module_array()->size(); ind++) {
        Modulearrays.set(ind, getId((*obj->get_module_array())[ind]));
      }
    }
 
    if (obj->get_mod_path()) {  
      ::capnp::List<::uint64_t>::Builder Modpaths = Modules[index].initModpath(obj->get_mod_path()->size());
      for (unsigned int ind = 0; ind < obj->get_mod_path()->size(); ind++) {
        Modpaths.set(ind, getId((*obj->get_mod_path())[ind]));
      }
    }
 
    if (obj->get_tchk()) {  
      ::capnp::List<::uint64_t>::Builder Tchks = Modules[index].initTchk(obj->get_tchk()->size());
      for (unsigned int ind = 0; ind < obj->get_tchk()->size(); ind++) {
        Tchks.set(ind, getId((*obj->get_tchk())[ind]));
      }
    }
 
    if (obj->get_def_param()) {  
      ::capnp::List<::uint64_t>::Builder Defparams = Modules[index].initDefparam(obj->get_def_param()->size());
      for (unsigned int ind = 0; ind < obj->get_def_param()->size(); ind++) {
        Defparams.set(ind, getId((*obj->get_def_param())[ind]));
      }
    }
 
    if (obj->get_io_decl()) {  
      ::capnp::List<::uint64_t>::Builder Iodecls = Modules[index].initIodecl(obj->get_io_decl()->size());
      for (unsigned int ind = 0; ind < obj->get_io_decl()->size(); ind++) {
        Iodecls.set(ind, getId((*obj->get_io_decl())[ind]));
      }
    }
 
    if (obj->get_alias_stmt()) {  
      ::capnp::List<::uint64_t>::Builder Aliasstmts = Modules[index].initAliasstmt(obj->get_alias_stmt()->size());
      for (unsigned int ind = 0; ind < obj->get_alias_stmt()->size(); ind++) {
        Aliasstmts.set(ind, getId((*obj->get_alias_stmt())[ind]));
      }
    }
 
    if (obj->get_clocking_block()) {  
      ::capnp::List<::uint64_t>::Builder Clockingblocks = Modules[index].initClockingblock(obj->get_clocking_block()->size());
      for (unsigned int ind = 0; ind < obj->get_clocking_block()->size(); ind++) {
        Clockingblocks.set(ind, getId((*obj->get_clocking_block())[ind]));
      }
    }

   index++;
 }
 ::capnp::List<Design>::Builder Designs = cap_root.initFactoryDesign(designFactory::objects_.size());
 index = 0;
 for (auto obj : designFactory::objects_) {
    Designs[index].setVpiParent(getId(obj->get_vpiParent()));
    Designs[index].setUhdmParentType(obj->get_uhdmParentType());
    Designs[index].setVpiName(obj->get_vpiName());
 
    if (obj->get_allModules()) {  
      ::capnp::List<::uint64_t>::Builder AllModuless = Designs[index].initAllModules(obj->get_allModules()->size());
      for (unsigned int ind = 0; ind < obj->get_allModules()->size(); ind++) {
        AllModuless.set(ind, getId((*obj->get_allModules())[ind]));
      }
    }
 
    if (obj->get_topModules()) {  
      ::capnp::List<::uint64_t>::Builder TopModuless = Designs[index].initTopModules(obj->get_topModules()->size());
      for (unsigned int ind = 0; ind < obj->get_topModules()->size(); ind++) {
        TopModuless.set(ind, getId((*obj->get_topModules())[ind]));
      }
    }

   index++;
 }
  
  writePackedMessageToFd(fileid, message);   
  close(fileid);
}

const std::vector<vpiHandle> Serializer::restore(std::string file) {
  purge();
  std::vector<vpiHandle> designs;
  int fileid = open(file.c_str(), O_RDONLY);
  ::capnp::PackedFdMessageReader message(fileid);
  UhdmRoot::Reader cap_root = message.getRoot<UhdmRoot>();
  unsigned long index = 0;


 ::capnp::List<Process>::Reader Processs = cap_root.getFactoryProcess();
 for (unsigned ind = 0; ind < Processs.size(); ind++) {
   setId(processFactory::make(), ind);
 }

 ::capnp::List<Scope>::Reader Scopes = cap_root.getFactoryScope();
 for (unsigned ind = 0; ind < Scopes.size(); ind++) {
   setId(scopeFactory::make(), ind);
 }

 ::capnp::List<Interface>::Reader Interfaces = cap_root.getFactoryInterface();
 for (unsigned ind = 0; ind < Interfaces.size(); ind++) {
   setId(interfaceFactory::make(), ind);
 }

 ::capnp::List<Interfacearray>::Reader Interfacearrays = cap_root.getFactoryInterfacearray();
 for (unsigned ind = 0; ind < Interfacearrays.size(); ind++) {
   setId(interface_arrayFactory::make(), ind);
 }

 ::capnp::List<Contassign>::Reader Contassigns = cap_root.getFactoryContassign();
 for (unsigned ind = 0; ind < Contassigns.size(); ind++) {
   setId(cont_assignFactory::make(), ind);
 }

 ::capnp::List<Port>::Reader Ports = cap_root.getFactoryPort();
 for (unsigned ind = 0; ind < Ports.size(); ind++) {
   setId(portFactory::make(), ind);
 }

 ::capnp::List<Modulearray>::Reader Modulearrays = cap_root.getFactoryModulearray();
 for (unsigned ind = 0; ind < Modulearrays.size(); ind++) {
   setId(module_arrayFactory::make(), ind);
 }

 ::capnp::List<Primitive>::Reader Primitives = cap_root.getFactoryPrimitive();
 for (unsigned ind = 0; ind < Primitives.size(); ind++) {
   setId(primitiveFactory::make(), ind);
 }

 ::capnp::List<Primitivearray>::Reader Primitivearrays = cap_root.getFactoryPrimitivearray();
 for (unsigned ind = 0; ind < Primitivearrays.size(); ind++) {
   setId(primitive_arrayFactory::make(), ind);
 }

 ::capnp::List<Modpath>::Reader Modpaths = cap_root.getFactoryModpath();
 for (unsigned ind = 0; ind < Modpaths.size(); ind++) {
   setId(mod_pathFactory::make(), ind);
 }

 ::capnp::List<Tchk>::Reader Tchks = cap_root.getFactoryTchk();
 for (unsigned ind = 0; ind < Tchks.size(); ind++) {
   setId(tchkFactory::make(), ind);
 }

 ::capnp::List<Defparam>::Reader Defparams = cap_root.getFactoryDefparam();
 for (unsigned ind = 0; ind < Defparams.size(); ind++) {
   setId(def_paramFactory::make(), ind);
 }

 ::capnp::List<Iodecl>::Reader Iodecls = cap_root.getFactoryIodecl();
 for (unsigned ind = 0; ind < Iodecls.size(); ind++) {
   setId(io_declFactory::make(), ind);
 }

 ::capnp::List<Aliasstmt>::Reader Aliasstmts = cap_root.getFactoryAliasstmt();
 for (unsigned ind = 0; ind < Aliasstmts.size(); ind++) {
   setId(alias_stmtFactory::make(), ind);
 }

 ::capnp::List<Clockingblock>::Reader Clockingblocks = cap_root.getFactoryClockingblock();
 for (unsigned ind = 0; ind < Clockingblocks.size(); ind++) {
   setId(clocking_blockFactory::make(), ind);
 }

 ::capnp::List<Instancearray>::Reader Instancearrays = cap_root.getFactoryInstancearray();
 for (unsigned ind = 0; ind < Instancearrays.size(); ind++) {
   setId(instance_arrayFactory::make(), ind);
 }

 ::capnp::List<Module>::Reader Modules = cap_root.getFactoryModule();
 for (unsigned ind = 0; ind < Modules.size(); ind++) {
   setId(moduleFactory::make(), ind);
 }

 ::capnp::List<Design>::Reader Designs = cap_root.getFactoryDesign();
 for (unsigned ind = 0; ind < Designs.size(); ind++) {
   setId(designFactory::make(), ind);
 }
  
  

 index = 0;
 for (Process::Reader obj : Processs) {
   processFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   processFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Scope::Reader obj : Scopes) {
   scopeFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   scopeFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Interface::Reader obj : Interfaces) {
   interfaceFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   interfaceFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Interfacearray::Reader obj : Interfacearrays) {
   interface_arrayFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   interface_arrayFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Contassign::Reader obj : Contassigns) {
   cont_assignFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   cont_assignFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Port::Reader obj : Ports) {
   portFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   portFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Modulearray::Reader obj : Modulearrays) {
   module_arrayFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   module_arrayFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Primitive::Reader obj : Primitives) {
   primitiveFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   primitiveFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Primitivearray::Reader obj : Primitivearrays) {
   primitive_arrayFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   primitive_arrayFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Modpath::Reader obj : Modpaths) {
   mod_pathFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   mod_pathFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Tchk::Reader obj : Tchks) {
   tchkFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   tchkFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Defparam::Reader obj : Defparams) {
   def_paramFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   def_paramFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Iodecl::Reader obj : Iodecls) {
   io_declFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   io_declFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Aliasstmt::Reader obj : Aliasstmts) {
   alias_stmtFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   alias_stmtFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Clockingblock::Reader obj : Clockingblocks) {
   clocking_blockFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   clocking_blockFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Instancearray::Reader obj : Instancearrays) {
   instance_arrayFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   instance_arrayFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));

   index++;
 }

 index = 0;
 for (Module::Reader obj : Modules) {
   moduleFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   moduleFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));
    moduleFactory::objects_[index]->set_vpiName(obj.getVpiName());
    moduleFactory::objects_[index]->set_vpiTopModule(obj.getVpiTopModule());
    moduleFactory::objects_[index]->set_vpiDefDecayTime(obj.getVpiDefDecayTime());
   if (obj.getInstancearray()) 
     moduleFactory::objects_[index]->set_instance_array(instance_arrayFactory::objects_[obj.getInstancearray()-1]);
    
    if (obj.getScope().size()) { 
      VectorOfscope* vect = VectorOfscopeFactory::make();
      for (unsigned int ind = 0; ind < obj.getScope().size(); ind++) {
         vect->push_back(scopeFactory::objects_[obj.getScope()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_scope(vect);
    }
    
    if (obj.getProcess().size()) { 
      VectorOfprocess* vect = VectorOfprocessFactory::make();
      for (unsigned int ind = 0; ind < obj.getProcess().size(); ind++) {
         vect->push_back(processFactory::objects_[obj.getProcess()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_process(vect);
    }
    
    if (obj.getPrimitive().size()) { 
      VectorOfprimitive* vect = VectorOfprimitiveFactory::make();
      for (unsigned int ind = 0; ind < obj.getPrimitive().size(); ind++) {
         vect->push_back(primitiveFactory::objects_[obj.getPrimitive()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_primitive(vect);
    }
    
    if (obj.getPrimitivearray().size()) { 
      VectorOfprimitive_array* vect = VectorOfprimitive_arrayFactory::make();
      for (unsigned int ind = 0; ind < obj.getPrimitivearray().size(); ind++) {
         vect->push_back(primitive_arrayFactory::objects_[obj.getPrimitivearray()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_primitive_array(vect);
    }
   if (obj.getGlobalclocking()) 
     moduleFactory::objects_[index]->set_global_clocking(clocking_blockFactory::objects_[obj.getGlobalclocking()-1]);
   if (obj.getDefaultclocking()) 
     moduleFactory::objects_[index]->set_default_clocking(clocking_blockFactory::objects_[obj.getDefaultclocking()-1]);
    
    if (obj.getPorts().size()) { 
      VectorOfport* vect = VectorOfportFactory::make();
      for (unsigned int ind = 0; ind < obj.getPorts().size(); ind++) {
         vect->push_back(portFactory::objects_[obj.getPorts()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_ports(vect);
    }
    
    if (obj.getInterfaces().size()) { 
      VectorOfinterface* vect = VectorOfinterfaceFactory::make();
      for (unsigned int ind = 0; ind < obj.getInterfaces().size(); ind++) {
         vect->push_back(interfaceFactory::objects_[obj.getInterfaces()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_interfaces(vect);
    }
    
    if (obj.getInterfacearrays().size()) { 
      VectorOfinterface_array* vect = VectorOfinterface_arrayFactory::make();
      for (unsigned int ind = 0; ind < obj.getInterfacearrays().size(); ind++) {
         vect->push_back(interface_arrayFactory::objects_[obj.getInterfacearrays()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_interface_arrays(vect);
    }
    
    if (obj.getContassigns().size()) { 
      VectorOfcont_assign* vect = VectorOfcont_assignFactory::make();
      for (unsigned int ind = 0; ind < obj.getContassigns().size(); ind++) {
         vect->push_back(cont_assignFactory::objects_[obj.getContassigns()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_cont_assigns(vect);
    }
    
    if (obj.getModules().size()) { 
      VectorOfmodule* vect = VectorOfmoduleFactory::make();
      for (unsigned int ind = 0; ind < obj.getModules().size(); ind++) {
         vect->push_back(moduleFactory::objects_[obj.getModules()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_modules(vect);
    }
    
    if (obj.getModulearray().size()) { 
      VectorOfmodule_array* vect = VectorOfmodule_arrayFactory::make();
      for (unsigned int ind = 0; ind < obj.getModulearray().size(); ind++) {
         vect->push_back(module_arrayFactory::objects_[obj.getModulearray()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_module_array(vect);
    }
    
    if (obj.getModpath().size()) { 
      VectorOfmod_path* vect = VectorOfmod_pathFactory::make();
      for (unsigned int ind = 0; ind < obj.getModpath().size(); ind++) {
         vect->push_back(mod_pathFactory::objects_[obj.getModpath()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_mod_path(vect);
    }
    
    if (obj.getTchk().size()) { 
      VectorOftchk* vect = VectorOftchkFactory::make();
      for (unsigned int ind = 0; ind < obj.getTchk().size(); ind++) {
         vect->push_back(tchkFactory::objects_[obj.getTchk()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_tchk(vect);
    }
    
    if (obj.getDefparam().size()) { 
      VectorOfdef_param* vect = VectorOfdef_paramFactory::make();
      for (unsigned int ind = 0; ind < obj.getDefparam().size(); ind++) {
         vect->push_back(def_paramFactory::objects_[obj.getDefparam()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_def_param(vect);
    }
    
    if (obj.getIodecl().size()) { 
      VectorOfio_decl* vect = VectorOfio_declFactory::make();
      for (unsigned int ind = 0; ind < obj.getIodecl().size(); ind++) {
         vect->push_back(io_declFactory::objects_[obj.getIodecl()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_io_decl(vect);
    }
    
    if (obj.getAliasstmt().size()) { 
      VectorOfalias_stmt* vect = VectorOfalias_stmtFactory::make();
      for (unsigned int ind = 0; ind < obj.getAliasstmt().size(); ind++) {
         vect->push_back(alias_stmtFactory::objects_[obj.getAliasstmt()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_alias_stmt(vect);
    }
    
    if (obj.getClockingblock().size()) { 
      VectorOfclocking_block* vect = VectorOfclocking_blockFactory::make();
      for (unsigned int ind = 0; ind < obj.getClockingblock().size(); ind++) {
         vect->push_back(clocking_blockFactory::objects_[obj.getClockingblock()[ind]-1]);
      }
      moduleFactory::objects_[index]->set_clocking_block(vect);
    }

   index++;
 }

 index = 0;
 for (Design::Reader obj : Designs) {
   designFactory::objects_[index]->set_uhdmParentType(obj.getUhdmParentType());
   designFactory::objects_[index]->set_vpiParent(getObject(obj.getUhdmParentType(),obj.getVpiParent()-1));
    designFactory::objects_[index]->set_vpiName(obj.getVpiName());
    
    if (obj.getAllModules().size()) { 
      VectorOfmodule* vect = VectorOfmoduleFactory::make();
      for (unsigned int ind = 0; ind < obj.getAllModules().size(); ind++) {
         vect->push_back(moduleFactory::objects_[obj.getAllModules()[ind]-1]);
      }
      designFactory::objects_[index]->set_allModules(vect);
    }
    
    if (obj.getTopModules().size()) { 
      VectorOfmodule* vect = VectorOfmoduleFactory::make();
      for (unsigned int ind = 0; ind < obj.getTopModules().size(); ind++) {
         vect->push_back(moduleFactory::objects_[obj.getTopModules()[ind]-1]);
      }
      designFactory::objects_[index]->set_topModules(vect);
    }

   index++;
 }
  
  
   for (auto d : designFactory::objects_) {
    vpiHandle designH = uhdm_handleFactory::make(uhdmdesign, d);
    designs.push_back(designH);
  }
   
  close(fileid); 
  return designs;
}

