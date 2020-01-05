@0xfff7299129556877;

struct ObjIndexType {
   index @0 : UInt64;
   type  @1 : UInt32;
}

struct UhdmRoot {
  designs @0 : List(Design);
  symbols @1 : List(Text);
  factoryProcess @2 :List(Process);
  factoryBegin @3 :List(Begin);
  factoryNamedbegin @4 :List(Namedbegin);
  factoryDistribution @5 :List(Distribution);
  factoryOperation @6 :List(Operation);
  factoryRefobj @7 :List(Refobj);
  factoryTask @8 :List(Task);
  factoryFunction @9 :List(Function);
  factoryModport @10 :List(Modport);
  factoryInterfacetfdecl @11 :List(Interfacetfdecl);
  factoryInterfacearray @12 :List(Interfacearray);
  factoryContassign @13 :List(Contassign);
  factoryPort @14 :List(Port);
  factoryModulearray @15 :List(Modulearray);
  factoryPrimitive @16 :List(Primitive);
  factoryPrimitivearray @17 :List(Primitivearray);
  factoryModpath @18 :List(Modpath);
  factoryTchk @19 :List(Tchk);
  factoryDefparam @20 :List(Defparam);
  factoryIodecl @21 :List(Iodecl);
  factoryAliasstmt @22 :List(Aliasstmt);
  factoryClockingblock @23 :List(Clockingblock);
  factoryInstancearray @24 :List(Instancearray);
  factoryArraynet @25 :List(Arraynet);
  factoryLogicvar @26 :List(Logicvar);
  factoryArrayvar @27 :List(Arrayvar);
  factoryNamedevent @28 :List(Namedevent);
  factoryNamedeventarray @29 :List(Namedeventarray);
  factorySpecparam @30 :List(Specparam);
  factoryClassdefn @31 :List(Classdefn);
  factoryInterface @32 :List(Interface);
  factoryProgram @33 :List(Program);
  factoryPackage @34 :List(Package);
  factoryModule @35 :List(Module);
  factoryDesign @36 :List(Design);

}


struct Process {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Begin {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiName @4 :UInt64;
vpiFullName @5 :UInt64;
}
struct Namedbegin {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiName @4 :UInt64;
vpiFullName @5 :UInt64;
}
struct Distribution {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Operation {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiOpType @4 :Int64;
operands @5 :List(ObjIndexType);
vpiDecompile @6 :UInt64;
vpiSize @7 :Int64;
}
struct Refobj {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Task {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiName @4 :UInt64;
vpiFullName @5 :UInt64;
vpiMethod @6 :Bool;
vpiAccessType @7 :Int64;
vpiVisibility @8 :Int64;
vpiVirtual @9 :Bool;
vpiAutomatic @10 :Bool;
vpiDPIContext @11 :Bool;
vpiDPICStr @12 :Int64;
vpiDPICIdentifier @13 :UInt64;
leftexpr @14 :ObjIndexType;
rightexpr @15 :ObjIndexType;
variables @16 :ObjIndexType;
classdefn @17 :UInt64;
refobj @18 :UInt64;
iodecl @19 :UInt64;
}
struct Function {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiSigned @4 :Bool;
vpiSize @5 :Int64;
vpiFuncType @6 :Int64;
vpiName @7 :UInt64;
vpiFullName @8 :UInt64;
vpiMethod @9 :Bool;
vpiAccessType @10 :Int64;
vpiVisibility @11 :Int64;
vpiVirtual @12 :Bool;
vpiAutomatic @13 :Bool;
vpiDPIContext @14 :Bool;
vpiDPICStr @15 :Int64;
vpiDPICIdentifier @16 :UInt64;
leftexpr @17 :ObjIndexType;
rightexpr @18 :ObjIndexType;
variables @19 :ObjIndexType;
classdefn @20 :UInt64;
refobj @21 :UInt64;
iodecl @22 :UInt64;
}
struct Modport {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiName @4 :UInt64;
iodecls @5 :List(UInt64);
interface @6 :UInt64;
}
struct Interfacetfdecl {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiAccessType @4 :UInt64;
tasks @5 :List(UInt64);
functions @6 :List(UInt64);
}
struct Interfacearray {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Contassign {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Port {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Modulearray {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Primitive {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Primitivearray {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Modpath {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Tchk {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Defparam {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Iodecl {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Aliasstmt {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Clockingblock {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Instancearray {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Arraynet {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Logicvar {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Arrayvar {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Namedevent {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Namedeventarray {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Specparam {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Classdefn {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
}
struct Interface {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiIndex @4 :UInt64;
exprdist @5 :ObjIndexType;
instancearray @6 :ObjIndexType;
process @7 :List(ObjIndexType);
interfacetfdecls @8 :List(UInt64);
modports @9 :List(UInt64);
globalclocking @10 :UInt64;
defaultclocking @11 :UInt64;
modpaths @12 :List(UInt64);
contassigns @13 :List(UInt64);
interfaces @14 :List(UInt64);
interfacearrays @15 :List(UInt64);
vpiName @16 :UInt64;
vpiFullName @17 :UInt64;
vpiDefName @18 :UInt64;
vpiArrayMember @19 :Bool;
vpiCellInstance @20 :Bool;
vpiDefNetType @21 :Int64;
vpiDefFile @22 :UInt64;
vpiDefDelayMode @23 :Int64;
vpiProtected @24 :Bool;
vpiTimePrecision @25 :Int64;
vpiTimeUnit @26 :Int64;
vpiUnconnDrive @27 :Int64;
vpiLibrary @28 :UInt64;
vpiCell @29 :UInt64;
vpiConfig @30 :UInt64;
vpiAutomatic @31 :Bool;
vpiTop @32 :Bool;
taskfunc @33 :List(ObjIndexType);
net @34 :List(ObjIndexType);
arraynet @35 :List(ObjIndexType);
variables @36 :List(ObjIndexType);
parameters @37 :List(ObjIndexType);
assertion @38 :List(ObjIndexType);
typespec @39 :List(ObjIndexType);
classdefn @40 :List(ObjIndexType);
instance @41 :ObjIndexType;
programs @42 :List(UInt64);
programarrays @43 :List(UInt64);
logicvar @44 :List(UInt64);
arrayvar @45 :List(UInt64);
arrayvarmem @46 :List(UInt64);
namedevent @47 :List(UInt64);
namedeventarray @48 :List(UInt64);
specparam @49 :List(UInt64);
module @50 :UInt64;
}
struct Program {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiIndex @4 :UInt64;
instancearray @5 :ObjIndexType;
exprdist @6 :ObjIndexType;
process @7 :List(ObjIndexType);
defaultclocking @8 :UInt64;
interfaces @9 :List(UInt64);
interfacearrays @10 :List(UInt64);
contassigns @11 :List(UInt64);
clockingblocks @12 :List(UInt64);
vpiName @13 :UInt64;
vpiFullName @14 :UInt64;
vpiDefName @15 :UInt64;
vpiArrayMember @16 :Bool;
vpiCellInstance @17 :Bool;
vpiDefNetType @18 :Int64;
vpiDefFile @19 :UInt64;
vpiDefDelayMode @20 :Int64;
vpiProtected @21 :Bool;
vpiTimePrecision @22 :Int64;
vpiTimeUnit @23 :Int64;
vpiUnconnDrive @24 :Int64;
vpiLibrary @25 :UInt64;
vpiCell @26 :UInt64;
vpiConfig @27 :UInt64;
vpiAutomatic @28 :Bool;
vpiTop @29 :Bool;
taskfunc @30 :List(ObjIndexType);
net @31 :List(ObjIndexType);
arraynet @32 :List(ObjIndexType);
variables @33 :List(ObjIndexType);
parameters @34 :List(ObjIndexType);
assertion @35 :List(ObjIndexType);
typespec @36 :List(ObjIndexType);
classdefn @37 :List(ObjIndexType);
instance @38 :ObjIndexType;
programs @39 :List(UInt64);
programarrays @40 :List(UInt64);
logicvar @41 :List(UInt64);
arrayvar @42 :List(UInt64);
arrayvarmem @43 :List(UInt64);
namedevent @44 :List(UInt64);
namedeventarray @45 :List(UInt64);
specparam @46 :List(UInt64);
module @47 :UInt64;
}
struct Package {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiUnit @4 :Bool;
vpiName @5 :UInt64;
vpiFullName @6 :UInt64;
vpiDefName @7 :UInt64;
vpiArrayMember @8 :Bool;
vpiCellInstance @9 :Bool;
vpiDefNetType @10 :Int64;
vpiDefFile @11 :UInt64;
vpiDefDelayMode @12 :Int64;
vpiProtected @13 :Bool;
vpiTimePrecision @14 :Int64;
vpiTimeUnit @15 :Int64;
vpiUnconnDrive @16 :Int64;
vpiLibrary @17 :UInt64;
vpiCell @18 :UInt64;
vpiConfig @19 :UInt64;
vpiAutomatic @20 :Bool;
vpiTop @21 :Bool;
taskfunc @22 :List(ObjIndexType);
net @23 :List(ObjIndexType);
arraynet @24 :List(ObjIndexType);
variables @25 :List(ObjIndexType);
parameters @26 :List(ObjIndexType);
assertion @27 :List(ObjIndexType);
typespec @28 :List(ObjIndexType);
classdefn @29 :List(ObjIndexType);
instance @30 :ObjIndexType;
programs @31 :List(UInt64);
programarrays @32 :List(UInt64);
logicvar @33 :List(UInt64);
arrayvar @34 :List(UInt64);
arrayvarmem @35 :List(UInt64);
namedevent @36 :List(UInt64);
namedeventarray @37 :List(UInt64);
specparam @38 :List(UInt64);
module @39 :UInt64;
}
struct Module {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiIndex @4 :UInt64;
vpiTopModule @5 :Bool;
vpiDefDecayTime @6 :Int64;
exprdist @7 :ObjIndexType;
instancearray @8 :ObjIndexType;
scope @9 :List(ObjIndexType);
process @10 :List(ObjIndexType);
primitives @11 :List(ObjIndexType);
primitivearrays @12 :List(ObjIndexType);
globalclocking @13 :UInt64;
defaultclocking @14 :UInt64;
modulearray @15 :UInt64;
ports @16 :List(UInt64);
interfaces @17 :List(UInt64);
interfacearrays @18 :List(UInt64);
contassigns @19 :List(UInt64);
modules @20 :List(UInt64);
modulearrays @21 :List(UInt64);
modpaths @22 :List(UInt64);
tchks @23 :List(UInt64);
defparams @24 :List(UInt64);
iodecls @25 :List(UInt64);
aliasstmts @26 :List(UInt64);
clockingblocks @27 :List(UInt64);
vpiName @28 :UInt64;
vpiFullName @29 :UInt64;
vpiDefName @30 :UInt64;
vpiArrayMember @31 :Bool;
vpiCellInstance @32 :Bool;
vpiDefNetType @33 :Int64;
vpiDefFile @34 :UInt64;
vpiDefDelayMode @35 :Int64;
vpiProtected @36 :Bool;
vpiTimePrecision @37 :Int64;
vpiTimeUnit @38 :Int64;
vpiUnconnDrive @39 :Int64;
vpiLibrary @40 :UInt64;
vpiCell @41 :UInt64;
vpiConfig @42 :UInt64;
vpiAutomatic @43 :Bool;
vpiTop @44 :Bool;
taskfunc @45 :List(ObjIndexType);
net @46 :List(ObjIndexType);
arraynet @47 :List(ObjIndexType);
variables @48 :List(ObjIndexType);
parameters @49 :List(ObjIndexType);
assertion @50 :List(ObjIndexType);
typespec @51 :List(ObjIndexType);
classdefn @52 :List(ObjIndexType);
instance @53 :ObjIndexType;
programs @54 :List(UInt64);
programarrays @55 :List(UInt64);
logicvar @56 :List(UInt64);
arrayvar @57 :List(UInt64);
arrayvarmem @58 :List(UInt64);
namedevent @59 :List(UInt64);
namedeventarray @60 :List(UInt64);
specparam @61 :List(UInt64);
module @62 :UInt64;
}
struct Design {
vpiParent @0 :UInt64;
uhdmParentType @1 :UInt64;
vpiFile @2 :UInt64;
vpiLineNo @3 :UInt32;
vpiName @4 :UInt64;
allModules @5 :List(UInt64);
topModules @6 :List(UInt64);
allPrograms @7 :List(UInt64);
allPackages @8 :List(UInt64);
}



