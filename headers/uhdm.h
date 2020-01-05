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
 * File:   <CLASSNAME>.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#include <string>
#include <vector>
#ifndef UHDM_H
#define UHDM_H
#include "include/sv_vpi_user.h"
#include "include/vhpi_user.h"
#include "include/vpi_uhdm.h"
#include "headers/containers.h"

#define uhdmprocess 2071
#define uhdmscope 2072
#define uhdmbegin 2073
#define uhdmnamed_begin 2074
#define uhdmexpr_dist 2075
#define uhdmexpr 2076
#define uhdmdistribution 2077
#define uhdmoperand_group 2078
#define uhdmoperation 2079
#define uhdmoperands 2080
#define uhdmref_obj 2081
#define uhdmvariables 2082
#define uhdmtask_func 2083
#define uhdmleft_expr 2084
#define uhdmright_expr 2085
#define uhdmvariables 2082
#define uhdmclass_defn 2086
#define uhdmref_obj 2081
#define uhdmio_decl 2087
#define uhdmtask 2088
#define uhdmfunction 2089
#define uhdmmodport 2090
#define uhdmio_decls 2091
#define uhdminterface 2092
#define uhdminterface_tf_decl 2093
#define uhdmtasks 2094
#define uhdmfunctions 2095
#define uhdminterface_array 2096
#define uhdmcont_assign 2097
#define uhdmport 2098
#define uhdmmodule_array 2099
#define uhdmprimitive 2100
#define uhdmprimitive_array 2101
#define uhdmmod_path 2102
#define uhdmtchk 2103
#define uhdmdef_param 2104
#define uhdmio_decl 2087
#define uhdmalias_stmt 2105
#define uhdmclocking_block 2106
#define uhdminstance_array 2107
#define uhdmnet 2108
#define uhdmarray_net 2109
#define uhdmlogic_var 2110
#define uhdmarray_var 2111
#define uhdmnamed_event 2112
#define uhdmnamed_event_array 2113
#define uhdmparameters 2114
#define uhdmspec_param 2115
#define uhdmassertion 2116
#define uhdmtypespec 2117
#define uhdmclass_defn 2086
#define uhdminstance 2118
#define uhdmtask_func 2083
#define uhdmnet 2108
#define uhdmarray_net 2109
#define uhdmvariables 2082
#define uhdmparameters 2114
#define uhdmassertion 2116
#define uhdmtypespec 2117
#define uhdmclass_defn 2086
#define uhdminstance 2118
#define uhdmprograms 2119
#define uhdmprogram_arrays 2120
#define uhdmlogic_var 2110
#define uhdmarray_var 2111
#define uhdmarray_var_mem 2121
#define uhdmnamed_event 2112
#define uhdmnamed_event_array 2113
#define uhdmspec_param 2115
#define uhdmmodule 2122
#define uhdminterface 2092
#define uhdmexpr_dist 2075
#define uhdminstance_array 2107
#define uhdmprocess 2071
#define uhdminterface_tf_decls 2123
#define uhdmmodports 2124
#define uhdmglobal_clocking 2125
#define uhdmdefault_clocking 2126
#define uhdmmod_paths 2127
#define uhdmcont_assigns 2128
#define uhdminterfaces 2129
#define uhdminterface_arrays 2130
#define uhdmprogram 2131
#define uhdminstance_array 2107
#define uhdmexpr_dist 2075
#define uhdmprocess 2071
#define uhdmdefault_clocking 2126
#define uhdminterfaces 2129
#define uhdminterface_arrays 2130
#define uhdmcont_assigns 2128
#define uhdmclocking_blocks 2132
#define uhdmpackage 2133
#define uhdmmodule 2122
#define uhdmexpr_dist 2075
#define uhdminstance_array 2107
#define uhdmscope 2072
#define uhdmprocess 2071
#define uhdmprimitives 2134
#define uhdmprimitive_arrays 2135
#define uhdmglobal_clocking 2125
#define uhdmdefault_clocking 2126
#define uhdmmodule_array 2099
#define uhdmports 2136
#define uhdminterfaces 2129
#define uhdminterface_arrays 2130
#define uhdmcont_assigns 2128
#define uhdmmodules 2137
#define uhdmmodule_arrays 2138
#define uhdmmod_paths 2127
#define uhdmtchks 2139
#define uhdmdef_params 2140
#define uhdmio_decls 2091
#define uhdmalias_stmts 2141
#define uhdmclocking_blocks 2132
#define uhdmdesign 2142
#define uhdmallModules 2143
#define uhdmtopModules 2144
#define uhdmallPrograms 2145
#define uhdmallPackages 2146


#include "headers/process.h"
#include "headers/scope.h"
#include "headers/begin.h"
#include "headers/named_begin.h"
#include "headers/expr_dist.h"
#include "headers/expr.h"
#include "headers/distribution.h"
#include "headers/operand_group.h"
#include "headers/operation.h"
#include "headers/ref_obj.h"
#include "headers/variables.h"
#include "headers/task_func.h"
#include "headers/task.h"
#include "headers/function.h"
#include "headers/modport.h"
#include "headers/interface_tf_decl.h"
#include "headers/interface_array.h"
#include "headers/cont_assign.h"
#include "headers/port.h"
#include "headers/module_array.h"
#include "headers/primitive.h"
#include "headers/primitive_array.h"
#include "headers/mod_path.h"
#include "headers/tchk.h"
#include "headers/def_param.h"
#include "headers/io_decl.h"
#include "headers/alias_stmt.h"
#include "headers/clocking_block.h"
#include "headers/instance_array.h"
#include "headers/net.h"
#include "headers/array_net.h"
#include "headers/logic_var.h"
#include "headers/array_var.h"
#include "headers/named_event.h"
#include "headers/named_event_array.h"
#include "headers/parameters.h"
#include "headers/spec_param.h"
#include "headers/assertion.h"
#include "headers/typespec.h"
#include "headers/class_defn.h"
#include "headers/instance.h"
#include "headers/interface.h"
#include "headers/program.h"
#include "headers/package.h"
#include "headers/module.h"
#include "headers/design.h"


#endif

