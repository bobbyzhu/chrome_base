
#ifdef GET_GROUPS
#endif // GET_GROUPS


#ifdef GET_PACKAGES
PACKAGE("alpha", -1, false)
PACKAGE("alpha.core", -1, true)
PACKAGE("alpha.cplusplus", -1, true)
PACKAGE("alpha.deadcode", -1, true)
PACKAGE("alpha.osx", -1, true)
PACKAGE("alpha.osx.cocoa", -1, true)
PACKAGE("alpha.security", -1, true)
PACKAGE("alpha.security.taint", -1, true)
PACKAGE("alpha.unix", -1, true)
PACKAGE("alpha.unix.cstring", -1, true)
PACKAGE("core", -1, false)
PACKAGE("core.builtin", -1, false)
PACKAGE("core.uninitialized", -1, false)
PACKAGE("cplusplus", -1, false)
PACKAGE("deadcode", -1, false)
PACKAGE("debug", -1, false)
PACKAGE("llvm", -1, false)
PACKAGE("osx", -1, false)
PACKAGE("osx.cocoa", -1, false)
PACKAGE("osx.coreFoundation", -1, false)
PACKAGE("osx.coreFoundation.containers", -1, false)
PACKAGE("security", -1, false)
PACKAGE("security.insecureAPI", -1, false)
PACKAGE("unix", -1, false)
PACKAGE("unix.cstring", -1, true)
#endif // GET_PACKAGES


#ifdef GET_CHECKERS
CHECKER("debug.Stats", AnalyzerStatsChecker, AnalyzerStatsChecker.cpp, "Emit warnings with analyzer statistics", -1, false)
CHECKER("alpha.security.ArrayBound", ArrayBoundChecker, ArrayBoundChecker.cpp, "Warn about buffer overflows (older checker)", -1, true)
CHECKER("alpha.security.ArrayBoundV2", ArrayBoundCheckerV2, ArrayBoundCheckerV2.cpp, "Warn about buffer overflows (newer checker)", -1, true)
CHECKER("core.AttributeNonNull", AttrNonNullChecker, AttrNonNullChecker.cpp, "Check for null pointers passed as arguments to a function whose arguments are marked with the 'nonnull' attribute", -1, false)
CHECKER("alpha.core.BoolAssignment", BoolAssignmentChecker, BoolAssignmentChecker.cpp, "Warn about assigning non-{0,1} values to Boolean variables", -1, true)
CHECKER("core.builtin.BuiltinFunctions", BuiltinFunctionChecker, BuiltinFunctionChecker.cpp, "Evaluate compiler builtin functions (e.g., alloca())", -1, false)
CHECKER("osx.coreFoundation.CFError", CFErrorChecker, NSErrorChecker.cpp, "Check usage of CFErrorRef* parameters", -1, false)
CHECKER("debug.DumpCFG", CFGDumper, DebugCheckers.cpp, "Display Control-Flow Graphs", -1, false)
CHECKER("debug.ViewCFG", CFGViewer, DebugCheckers.cpp, "View Control-Flow Graphs using GraphViz", -1, false)
CHECKER("osx.coreFoundation.CFNumber", CFNumberCreateChecker, BasicObjCFoundationChecks.cpp, "Check for proper uses of CFNumberCreate", -1, false)
CHECKER("osx.coreFoundation.CFRetainRelease", CFRetainReleaseChecker, BasicObjCFoundationChecks.cpp, "Check for null arguments to CFRetain/CFRelease/CFMakeCollectable", -1, false)
CHECKER("alpha.unix.cstring.BufferOverlap", CStringBufferOverlap, CStringChecker.cpp, "Checks for overlap in two buffer arguments", -1, true)
CHECKER("alpha.unix.cstring.NotNullTerminated", CStringNotNullTerm, CStringChecker.cpp, "Check for arguments which are not null-terminating strings", -1, true)
CHECKER("unix.cstring.NullArg", CStringNullArg, CStringChecker.cpp, "Check for null pointers being passed as arguments to C string functions", -1, true)
CHECKER("alpha.unix.cstring.OutOfBounds", CStringOutOfBounds, CStringChecker.cpp, "Check for out-of-bounds access in string functions", -1, true)
CHECKER("unix.cstring.BadSizeArg", CStringSyntaxChecker, CStringSyntaxChecker.cpp, "Check the size argument passed into C string functions for common erroneous patterns", -1, true)
CHECKER("core.CallAndMessage", CallAndMessageChecker, CallAndMessageChecker.cpp, "Check for logical errors for function calls and Objective-C message expressions (e.g., uninitialized arguments, null function pointers)", -1, false)
CHECKER("debug.DumpCalls", CallDumper, TraversalChecker.cpp, "Print calls as they are traversed by the engine", -1, false)
CHECKER("debug.DumpCallGraph", CallGraphDumper, DebugCheckers.cpp, "Display Call Graph", -1, false)
CHECKER("debug.ViewCallGraph", CallGraphViewer, DebugCheckers.cpp, "View Call Graph using GraphViz", -1, false)
CHECKER("alpha.core.CastSize", CastSizeChecker, CastSizeChecker.cpp, "Check when casting a malloc'ed type T, whether the size is a multiple of the size of T", -1, true)
CHECKER("alpha.core.CastToStruct", CastToStructChecker, CastToStructChecker.cpp, "Check for cast from non-struct pointer to struct pointer", -1, true)
CHECKER("alpha.unix.Chroot", ChrootChecker, ChrootChecker.cpp, "Check improper use of chroot", -1, true)
CHECKER("osx.cocoa.ClassRelease", ClassReleaseChecker, BasicObjCFoundationChecks.cpp, "Check for sending 'retain', 'release', or 'autorelease' directly to a Class", -1, false)
CHECKER("debug.ConfigDumper", ConfigDumper, DebugCheckers.cpp, "Dump config table", -1, false)
CHECKER("deadcode.DeadStores", DeadStoresChecker, DeadStoresChecker.cpp, "Check for values stored to variables that are never read afterwards", -1, false)
CHECKER("core.NullDereference", DereferenceChecker, DereferenceChecker.cpp, "Check for dereferences of null pointers", -1, false)
CHECKER("alpha.osx.cocoa.DirectIvarAssignment", DirectIvarAssignment, DirectIvarAssignment.cpp, "Check for direct assignments to instance variables", -1, true)
CHECKER("alpha.osx.cocoa.DirectIvarAssignmentForAnnotatedFunctions", DirectIvarAssignmentForAnnotatedFunctions, DirectIvarAssignment.cpp, "Check for direct assignments to instance variables in the methods annotated with objc_no_direct_instance_variable_assignment", -1, true)
CHECKER("core.DivideZero", DivZeroChecker, DivZeroChecker.cpp, "Check for division by zero", -1, false)
CHECKER("debug.DumpDominators", DominatorsTreeDumper, DebugCheckers.cpp, "Print the dominance tree for a given CFG", -1, false)
CHECKER("core.DynamicTypePropagation", DynamicTypePropagation, DynamicTypePropagation.cpp, "Generate dynamic type information", -1, false)
CHECKER("debug.ExprInspection", ExprInspectionChecker, ExprInspectionChecker.cpp, "Check the analyzer's understanding of expressions", -1, false)
CHECKER("alpha.core.FixedAddr", FixedAddressChecker, FixedAddressChecker.cpp, "Check for assignment of a fixed address to a pointer", -1, true)
CHECKER("security.FloatLoopCounter", FloatLoopCounter, CheckSecuritySyntaxOnly.cpp, "Warn on using a floating point value as a loop counter (CERT: FLP30-C, FLP30-CPP)", -1, false)
CHECKER("alpha.security.taint.TaintPropagation", GenericTaintChecker, GenericTaintChecker.cpp, "Generate taint information used by other checkers", -1, true)
CHECKER("alpha.deadcode.IdempotentOperations", IdempotentOperationChecker, IdempotentOperationChecker.cpp, "Warn about idempotent operations", -1, true)
CHECKER("alpha.osx.cocoa.InstanceVariableInvalidation", InstanceVariableInvalidation, IvarInvalidationChecker.cpp, "Check that the invalidatable instance variables are invalidated in the methods annotated with objc_instance_variable_invalidator", -1, true)
CHECKER("llvm.Conventions", LLVMConventionsChecker, LLVMConventionsChecker.cpp, "Check code for LLVM codebase conventions", -1, false)
CHECKER("debug.DumpLiveVars", LiveVariablesDumper, DebugCheckers.cpp, "Print results of live variable analysis", -1, false)
CHECKER("osx.SecKeychainAPI", MacOSKeychainAPIChecker, MacOSKeychainAPIChecker.cpp, "Check for proper uses of Secure Keychain APIs", -1, false)
CHECKER("osx.API", MacOSXAPIChecker, MacOSXAPIChecker.cpp, "Check for proper uses of various Mac OS X APIs", -1, false)
CHECKER("alpha.unix.MallocWithAnnotations", MallocOptimistic, MallocChecker.cpp, "Check for memory leaks, double free, and use-after-free problems. Assumes that all user-defined functions which might free a pointer are annotated.", -1, true)
CHECKER("alpha.security.MallocOverflow", MallocOverflowSecurityChecker, MallocOverflowSecurityChecker.cpp, "Check for overflows in the arguments to malloc()", -1, true)
CHECKER("unix.Malloc", MallocPessimistic, MallocChecker.cpp, "Check for memory leaks, double free, and use-after-free problems.", -1, false)
CHECKER("unix.MallocSizeof", MallocSizeofChecker, MallocSizeofChecker.cpp, "Check for dubious malloc arguments involving sizeof", -1, false)
CHECKER("alpha.osx.cocoa.MissingInvalidationMethod", MissingInvalidationMethod, IvarInvalidationChecker.cpp, "Check that the invalidation methods are present in classes that contain invalidatable instance variables", -1, true)
CHECKER("osx.cocoa.NSAutoreleasePool", NSAutoreleasePoolChecker, NSAutoreleasePoolChecker.cpp, "Warn for suboptimal uses of NSAutoreleasePool in Objective-C GC mode", -1, false)
CHECKER("osx.cocoa.NSError", NSErrorChecker, NSErrorChecker.cpp, "Check usage of NSError** parameters", -1, false)
CHECKER("osx.cocoa.NilArg", NilArgChecker, BasicObjCFoundationChecks.cpp, "Check for prohibited nil arguments to ObjC method calls", -1, false)
CHECKER("core.builtin.NoReturnFunctions", NoReturnFunctionChecker, NoReturnFunctionChecker.cpp, "Evaluate \"panic\" functions that are known to not return to the caller", -1, false)
CHECKER("osx.cocoa.AtSync", ObjCAtSyncChecker, ObjCAtSyncChecker.cpp, "Check for nil pointers used as mutexes for @synchronized", -1, false)
CHECKER("osx.coreFoundation.containers.PointerSizedValues", ObjCContainersASTChecker, ObjCContainersASTChecker.cpp, "Warns if 'CFArray', 'CFDictionary', 'CFSet' are created with non-pointer-size values", -1, false)
CHECKER("osx.coreFoundation.containers.OutOfBounds", ObjCContainersChecker, ObjCContainersChecker.cpp, "Checks for index out-of-bounds when using 'CFArray' API", -1, false)
CHECKER("alpha.osx.cocoa.Dealloc", ObjCDeallocChecker, CheckObjCDealloc.cpp, "Warn about Objective-C classes that lack a correct implementation of -dealloc", -1, true)
CHECKER("osx.cocoa.Loops", ObjCLoopChecker, BasicObjCFoundationChecks.cpp, "Improved modeling of loops using Cocoa collection types", -1, false)
CHECKER("osx.cocoa.IncompatibleMethodTypes", ObjCMethSigsChecker, CheckObjCInstMethSignature.cpp, "Warn about Objective-C method signatures with type incompatibilities", -1, false)
CHECKER("osx.cocoa.NonNilReturnValue", ObjCNonNilReturnValueChecker, BasicObjCFoundationChecks.cpp, "Model the APIs that are guaranteed to return a non-nil value", -1, false)
CHECKER("osx.cocoa.SelfInit", ObjCSelfInitChecker, ObjCSelfInitChecker.cpp, "Check that 'self' is properly initialized inside an initializer method", -1, false)
CHECKER("alpha.osx.cocoa.MissingSuperCall", ObjCSuperCallChecker, ObjCMissingSuperCallChecker.cpp, "Warn about Objective-C methods that lack a necessary call to super", -1, true)
CHECKER("osx.cocoa.UnusedIvars", ObjCUnusedIvarsChecker, ObjCUnusedIVarsChecker.cpp, "Warn about private ivars that are never used", -1, false)
CHECKER("alpha.core.PointerArithm", PointerArithChecker, PointerArithChecker, "Check for pointer arithmetic on locations other than array elements", -1, true)
CHECKER("alpha.core.PointerSub", PointerSubChecker, PointerSubChecker, "Check for pointer subtractions on two pointers pointing to different memory chunks", -1, true)
CHECKER("alpha.unix.PthreadLock", PthreadLockChecker, PthreadLockChecker.cpp, "Simple lock -> unlock checker", -1, true)
CHECKER("osx.cocoa.RetainCount", RetainCountChecker, RetainCountChecker.cpp, "Check for leaks and improper reference count management", -1, false)
CHECKER("alpha.security.ReturnPtrRange", ReturnPointerRangeChecker, ReturnPointerRangeChecker.cpp, "Check for an out-of-bound pointer being returned to callers", -1, true)
CHECKER("core.uninitialized.UndefReturn", ReturnUndefChecker, ReturnUndefChecker.cpp, "Check for uninitialized values being returned to the caller", -1, false)
CHECKER("alpha.unix.SimpleStream", SimpleStreamChecker, SimpleStreamChecker.cpp, "Check for misuses of stream APIs", -1, true)
CHECKER("alpha.core.SizeofPtr", SizeofPointerChecker, CheckSizeofPointer.cpp, "Warn about unintended use of sizeof() on pointer expressions", -1, true)
CHECKER("core.StackAddressEscape", StackAddrEscapeChecker, StackAddrEscapeChecker.cpp, "Check that addresses to stack memory do not escape the function", -1, false)
CHECKER("alpha.unix.Stream", StreamChecker, StreamChecker.cpp, "Check stream handling functions", -1, true)
CHECKER("debug.TaintTest", TaintTesterChecker, TaintTesterChecker.cpp, "Mark tainted symbols as such.", -1, false)
CHECKER("debug.DumpTraversal", TraversalDumper, TraversalChecker.cpp, "Print branch conditions as they are traversed by the engine", -1, false)
CHECKER("security.insecureAPI.UncheckedReturn", UncheckedReturn, CheckSecuritySyntaxOnly.cpp, "Warn on uses of functions whose return values must be always checked", -1, false)
CHECKER("core.uninitialized.Branch", UndefBranchChecker, UndefBranchChecker.cpp, "Check for uninitialized values used as branch conditions", -1, false)
CHECKER("core.uninitialized.CapturedBlockVariable", UndefCapturedBlockVarChecker, UndefCapturedBlockVarChecker.cpp, "Check for blocks that capture uninitialized values", -1, false)
CHECKER("core.UndefinedBinaryOperatorResult", UndefResultChecker, UndefResultChecker.cpp, "Check for undefined results of binary operators", -1, false)
CHECKER("core.uninitialized.ArraySubscript", UndefinedArraySubscriptChecker, UndefinedArraySubscriptChecker.cpp, "Check for uninitialized values used as array subscripts", -1, false)
CHECKER("core.uninitialized.Assign", UndefinedAssignmentChecker, UndefinedAssignmentChecker.cpp, "Check for assigning uninitialized values", -1, false)
CHECKER("unix.API", UnixAPIChecker, UnixAPIChecker.cpp, "Check calls to various UNIX/Posix functions", -1, false)
CHECKER("alpha.deadcode.UnreachableCode", UnreachableCodeChecker, UnreachableCodeChecker.cpp, "Check unreachable code", -1, true)
CHECKER("core.VLASize", VLASizeChecker, VLASizeChecker.cpp, "Check for declarations of VLA of undefined or zero size", -1, false)
CHECKER("osx.cocoa.VariadicMethodTypes", VariadicMethodTypeChecker, BasicObjCFoundationChecks.cpp, "Check for passing non-Objective-C types to variadic collection initialization methods that expect only Objective-C types", -1, false)
CHECKER("alpha.cplusplus.VirtualCall", VirtualCallChecker, VirtualCallChecker.cpp, "Check virtual function calls during construction or destruction", -1, true)
CHECKER("security.insecureAPI.getpw", getpw, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'getpw' function", -1, false)
CHECKER("security.insecureAPI.gets", gets, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'gets' function", -1, false)
CHECKER("security.insecureAPI.mkstemp", mkstemp, CheckSecuritySyntaxOnly.cpp, "Warn when 'mkstemp' is passed fewer than 6 X's in the format string", -1, false)
CHECKER("security.insecureAPI.mktemp", mktemp, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'mktemp' function", -1, false)
CHECKER("security.insecureAPI.rand", rand, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'rand', 'random', and related functions", -1, false)
CHECKER("security.insecureAPI.strcpy", strcpy, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'strcpy' and 'strcat' functions", -1, false)
CHECKER("security.insecureAPI.vfork", vfork, CheckSecuritySyntaxOnly.cpp, "Warn on uses of the 'vfork' function", -1, false)
#endif // GET_CHECKERS


#ifdef GET_MEMBER_ARRAYS
static const short SubPackageArray0[] = { 1, 9, 11, 22, 29, 14, -1 };
static const short SubPackageArray1[] = { 2, 3, 4, 5, 6, 7, 8, -1 };
static const short CheckerArray2[] = { 4, -1 };
static const short CheckerArray3[] = { 20, -1 };
static const short CheckerArray4[] = { 21, -1 };
static const short CheckerArray5[] = { 33, -1 };
static const short CheckerArray6[] = { 61, -1 };
static const short CheckerArray7[] = { 62, -1 };
static const short CheckerArray8[] = { 68, -1 };
static const short SubPackageArray9[] = { 10, -1 };
static const short CheckerArray10[] = { 83, -1 };
static const short SubPackageArray11[] = { 12, 13, -1 };
static const short CheckerArray12[] = { 36, -1 };
static const short CheckerArray13[] = { 80, -1 };
static const short SubPackageArray14[] = { 15, -1 };
static const short SubPackageArray15[] = { 16, 19, 20, 17, 18, 21, -1 };
static const short CheckerArray16[] = { 54, -1 };
static const short CheckerArray17[] = { 27, -1 };
static const short CheckerArray18[] = { 28, -1 };
static const short CheckerArray19[] = { 37, -1 };
static const short CheckerArray20[] = { 46, -1 };
static const short CheckerArray21[] = { 59, -1 };
static const short SubPackageArray22[] = { 27, 23, 24, 26, 25, -1 };
static const short CheckerArray23[] = { 1, -1 };
static const short CheckerArray24[] = { 2, -1 };
static const short CheckerArray25[] = { 43, -1 };
static const short CheckerArray26[] = { 65, -1 };
static const short SubPackageArray27[] = { 28, -1 };
static const short CheckerArray28[] = { 35, -1 };
static const short SubPackageArray29[] = { 35, 30, 31, 32, 34, 33, -1 };
static const short CheckerArray30[] = { 22, -1 };
static const short CheckerArray31[] = { 42, -1 };
static const short CheckerArray32[] = { 63, -1 };
static const short CheckerArray33[] = { 67, -1 };
static const short CheckerArray34[] = { 70, -1 };
static const short SubPackageArray35[] = { 38, 36, 37, -1 };
static const short CheckerArray36[] = { 11, -1 };
static const short CheckerArray37[] = { 12, -1 };
static const short CheckerArray38[] = { 14, -1 };
static const short SubPackageArray39[] = { 48, 51, 44, 41, 40, 47, 42, 46, 45, 43, -1 };
static const short CheckerArray40[] = { 3, -1 };
static const short CheckerArray41[] = { 16, -1 };
static const short CheckerArray42[] = { 29, -1 };
static const short CheckerArray43[] = { 31, -1 };
static const short CheckerArray44[] = { 26, -1 };
static const short CheckerArray45[] = { 69, -1 };
static const short CheckerArray46[] = { 76, -1 };
static const short CheckerArray47[] = { 81, -1 };
static const short SubPackageArray48[] = { 50, 49, -1 };
static const short CheckerArray49[] = { 5, -1 };
static const short CheckerArray50[] = { 50, -1 };
static const short SubPackageArray51[] = { 52, 53, 54, 55, 56, -1 };
static const short CheckerArray52[] = { 77, -1 };
static const short CheckerArray53[] = { 78, -1 };
static const short CheckerArray54[] = { 74, -1 };
static const short CheckerArray55[] = { 75, -1 };
static const short CheckerArray56[] = { 66, -1 };
static const short SubPackageArray58[] = { 59, -1 };
static const short CheckerArray59[] = { 25, -1 };
static const short SubPackageArray60[] = { 65, 66, 71, 62, 72, 63, 61, 67, 64, 69, 70, 68, -1 };
static const short CheckerArray61[] = { 24, -1 };
static const short CheckerArray62[] = { 7, -1 };
static const short CheckerArray63[] = { 18, -1 };
static const short CheckerArray64[] = { 17, -1 };
static const short CheckerArray65[] = { 30, -1 };
static const short CheckerArray66[] = { 39, -1 };
static const short CheckerArray67[] = { 72, -1 };
static const short CheckerArray68[] = { 32, -1 };
static const short CheckerArray69[] = { 0, -1 };
static const short CheckerArray70[] = { 71, -1 };
static const short CheckerArray71[] = { 8, -1 };
static const short CheckerArray72[] = { 19, -1 };
static const short SubPackageArray73[] = { 74, -1 };
static const short CheckerArray74[] = { 38, -1 };
static const short SubPackageArray75[] = { 78, 91, 76, 77, -1 };
static const short CheckerArray76[] = { 41, -1 };
static const short CheckerArray77[] = { 40, -1 };
static const short SubPackageArray78[] = { 79, 85, 80, 90, 83, 81, 89, 88, 82, 86, 84, 87, -1 };
static const short CheckerArray79[] = { 51, -1 };
static const short CheckerArray80[] = { 23, -1 };
static const short CheckerArray81[] = { 56, -1 };
static const short CheckerArray82[] = { 55, -1 };
static const short CheckerArray83[] = { 47, -1 };
static const short CheckerArray84[] = { 48, -1 };
static const short CheckerArray85[] = { 49, -1 };
static const short CheckerArray86[] = { 57, -1 };
static const short CheckerArray87[] = { 64, -1 };
static const short CheckerArray88[] = { 58, -1 };
static const short CheckerArray89[] = { 60, -1 };
static const short CheckerArray90[] = { 82, -1 };
static const short SubPackageArray91[] = { 95, 93, 94, 92, -1 };
static const short CheckerArray92[] = { 6, -1 };
static const short CheckerArray93[] = { 9, -1 };
static const short CheckerArray94[] = { 10, -1 };
static const short SubPackageArray95[] = { 97, 96, -1 };
static const short CheckerArray96[] = { 53, -1 };
static const short CheckerArray97[] = { 52, -1 };
static const short SubPackageArray98[] = { 100, 99, -1 };
static const short CheckerArray99[] = { 34, -1 };
static const short SubPackageArray100[] = { 103, 102, 105, 104, 106, 107, 108, 101, -1 };
static const short CheckerArray101[] = { 73, -1 };
static const short CheckerArray102[] = { 84, -1 };
static const short CheckerArray103[] = { 85, -1 };
static const short CheckerArray104[] = { 86, -1 };
static const short CheckerArray105[] = { 87, -1 };
static const short CheckerArray106[] = { 88, -1 };
static const short CheckerArray107[] = { 89, -1 };
static const short CheckerArray108[] = { 90, -1 };
static const short SubPackageArray109[] = { 113, 110, 111, 112, -1 };
static const short CheckerArray110[] = { 79, -1 };
static const short CheckerArray111[] = { 44, -1 };
static const short CheckerArray112[] = { 45, -1 };
static const short SubPackageArray113[] = { 115, 114, -1 };
static const short CheckerArray114[] = { 15, -1 };
static const short CheckerArray115[] = { 13, -1 };
#endif // GET_MEMBER_ARRAYS


#ifdef GET_CHECKNAME_TABLE
  { "alpha",                                                     0, SubPackageArray0, false },
  { "alpha.core",                                                0, SubPackageArray1, true },
  { "alpha.core.BoolAssignment",                                 CheckerArray2, 0, false },
  { "alpha.core.CastSize",                                       CheckerArray3, 0, false },
  { "alpha.core.CastToStruct",                                   CheckerArray4, 0, false },
  { "alpha.core.FixedAddr",                                      CheckerArray5, 0, false },
  { "alpha.core.PointerArithm",                                  CheckerArray6, 0, false },
  { "alpha.core.PointerSub",                                     CheckerArray7, 0, false },
  { "alpha.core.SizeofPtr",                                      CheckerArray8, 0, false },
  { "alpha.cplusplus",                                           0, SubPackageArray9, true },
  { "alpha.cplusplus.VirtualCall",                               CheckerArray10, 0, false },
  { "alpha.deadcode",                                            0, SubPackageArray11, true },
  { "alpha.deadcode.IdempotentOperations",                       CheckerArray12, 0, false },
  { "alpha.deadcode.UnreachableCode",                            CheckerArray13, 0, false },
  { "alpha.osx",                                                 0, SubPackageArray14, true },
  { "alpha.osx.cocoa",                                           0, SubPackageArray15, true },
  { "alpha.osx.cocoa.Dealloc",                                   CheckerArray16, 0, false },
  { "alpha.osx.cocoa.DirectIvarAssignment",                      CheckerArray17, 0, false },
  { "alpha.osx.cocoa.DirectIvarAssignmentForAnnotatedFunctions", CheckerArray18, 0, false },
  { "alpha.osx.cocoa.InstanceVariableInvalidation",              CheckerArray19, 0, false },
  { "alpha.osx.cocoa.MissingInvalidationMethod",                 CheckerArray20, 0, false },
  { "alpha.osx.cocoa.MissingSuperCall",                          CheckerArray21, 0, false },
  { "alpha.security",                                            0, SubPackageArray22, true },
  { "alpha.security.ArrayBound",                                 CheckerArray23, 0, false },
  { "alpha.security.ArrayBoundV2",                               CheckerArray24, 0, false },
  { "alpha.security.MallocOverflow",                             CheckerArray25, 0, false },
  { "alpha.security.ReturnPtrRange",                             CheckerArray26, 0, false },
  { "alpha.security.taint",                                      0, SubPackageArray27, true },
  { "alpha.security.taint.TaintPropagation",                     CheckerArray28, 0, false },
  { "alpha.unix",                                                0, SubPackageArray29, true },
  { "alpha.unix.Chroot",                                         CheckerArray30, 0, false },
  { "alpha.unix.MallocWithAnnotations",                          CheckerArray31, 0, false },
  { "alpha.unix.PthreadLock",                                    CheckerArray32, 0, false },
  { "alpha.unix.SimpleStream",                                   CheckerArray33, 0, false },
  { "alpha.unix.Stream",                                         CheckerArray34, 0, false },
  { "alpha.unix.cstring",                                        0, SubPackageArray35, true },
  { "alpha.unix.cstring.BufferOverlap",                          CheckerArray36, 0, false },
  { "alpha.unix.cstring.NotNullTerminated",                      CheckerArray37, 0, false },
  { "alpha.unix.cstring.OutOfBounds",                            CheckerArray38, 0, false },
  { "core",                                                      0, SubPackageArray39, false },
  { "core.AttributeNonNull",                                     CheckerArray40, 0, false },
  { "core.CallAndMessage",                                       CheckerArray41, 0, false },
  { "core.DivideZero",                                           CheckerArray42, 0, false },
  { "core.DynamicTypePropagation",                               CheckerArray43, 0, false },
  { "core.NullDereference",                                      CheckerArray44, 0, false },
  { "core.StackAddressEscape",                                   CheckerArray45, 0, false },
  { "core.UndefinedBinaryOperatorResult",                        CheckerArray46, 0, false },
  { "core.VLASize",                                              CheckerArray47, 0, false },
  { "core.builtin",                                              0, SubPackageArray48, false },
  { "core.builtin.BuiltinFunctions",                             CheckerArray49, 0, false },
  { "core.builtin.NoReturnFunctions",                            CheckerArray50, 0, false },
  { "core.uninitialized",                                        0, SubPackageArray51, false },
  { "core.uninitialized.ArraySubscript",                         CheckerArray52, 0, false },
  { "core.uninitialized.Assign",                                 CheckerArray53, 0, false },
  { "core.uninitialized.Branch",                                 CheckerArray54, 0, false },
  { "core.uninitialized.CapturedBlockVariable",                  CheckerArray55, 0, false },
  { "core.uninitialized.UndefReturn",                            CheckerArray56, 0, false },
  { "cplusplus",                                                 0, 0, false },
  { "deadcode",                                                  0, SubPackageArray58, false },
  { "deadcode.DeadStores",                                       CheckerArray59, 0, false },
  { "debug",                                                     0, SubPackageArray60, false },
  { "debug.ConfigDumper",                                        CheckerArray61, 0, false },
  { "debug.DumpCFG",                                             CheckerArray62, 0, false },
  { "debug.DumpCallGraph",                                       CheckerArray63, 0, false },
  { "debug.DumpCalls",                                           CheckerArray64, 0, false },
  { "debug.DumpDominators",                                      CheckerArray65, 0, false },
  { "debug.DumpLiveVars",                                        CheckerArray66, 0, false },
  { "debug.DumpTraversal",                                       CheckerArray67, 0, false },
  { "debug.ExprInspection",                                      CheckerArray68, 0, false },
  { "debug.Stats",                                               CheckerArray69, 0, false },
  { "debug.TaintTest",                                           CheckerArray70, 0, false },
  { "debug.ViewCFG",                                             CheckerArray71, 0, false },
  { "debug.ViewCallGraph",                                       CheckerArray72, 0, false },
  { "llvm",                                                      0, SubPackageArray73, false },
  { "llvm.Conventions",                                          CheckerArray74, 0, false },
  { "osx",                                                       0, SubPackageArray75, false },
  { "osx.API",                                                   CheckerArray76, 0, false },
  { "osx.SecKeychainAPI",                                        CheckerArray77, 0, false },
  { "osx.cocoa",                                                 0, SubPackageArray78, false },
  { "osx.cocoa.AtSync",                                          CheckerArray79, 0, false },
  { "osx.cocoa.ClassRelease",                                    CheckerArray80, 0, false },
  { "osx.cocoa.IncompatibleMethodTypes",                         CheckerArray81, 0, false },
  { "osx.cocoa.Loops",                                           CheckerArray82, 0, false },
  { "osx.cocoa.NSAutoreleasePool",                               CheckerArray83, 0, false },
  { "osx.cocoa.NSError",                                         CheckerArray84, 0, false },
  { "osx.cocoa.NilArg",                                          CheckerArray85, 0, false },
  { "osx.cocoa.NonNilReturnValue",                               CheckerArray86, 0, false },
  { "osx.cocoa.RetainCount",                                     CheckerArray87, 0, false },
  { "osx.cocoa.SelfInit",                                        CheckerArray88, 0, false },
  { "osx.cocoa.UnusedIvars",                                     CheckerArray89, 0, false },
  { "osx.cocoa.VariadicMethodTypes",                             CheckerArray90, 0, false },
  { "osx.coreFoundation",                                        0, SubPackageArray91, false },
  { "osx.coreFoundation.CFError",                                CheckerArray92, 0, false },
  { "osx.coreFoundation.CFNumber",                               CheckerArray93, 0, false },
  { "osx.coreFoundation.CFRetainRelease",                        CheckerArray94, 0, false },
  { "osx.coreFoundation.containers",                             0, SubPackageArray95, false },
  { "osx.coreFoundation.containers.OutOfBounds",                 CheckerArray96, 0, false },
  { "osx.coreFoundation.containers.PointerSizedValues",          CheckerArray97, 0, false },
  { "security",                                                  0, SubPackageArray98, false },
  { "security.FloatLoopCounter",                                 CheckerArray99, 0, false },
  { "security.insecureAPI",                                      0, SubPackageArray100, false },
  { "security.insecureAPI.UncheckedReturn",                      CheckerArray101, 0, false },
  { "security.insecureAPI.getpw",                                CheckerArray102, 0, false },
  { "security.insecureAPI.gets",                                 CheckerArray103, 0, false },
  { "security.insecureAPI.mkstemp",                              CheckerArray104, 0, false },
  { "security.insecureAPI.mktemp",                               CheckerArray105, 0, false },
  { "security.insecureAPI.rand",                                 CheckerArray106, 0, false },
  { "security.insecureAPI.strcpy",                               CheckerArray107, 0, false },
  { "security.insecureAPI.vfork",                                CheckerArray108, 0, false },
  { "unix",                                                      0, SubPackageArray109, false },
  { "unix.API",                                                  CheckerArray110, 0, false },
  { "unix.Malloc",                                               CheckerArray111, 0, false },
  { "unix.MallocSizeof",                                         CheckerArray112, 0, false },
  { "unix.cstring",                                              0, SubPackageArray113, true },
  { "unix.cstring.BadSizeArg",                                   CheckerArray114, 0, false },
  { "unix.cstring.NullArg",                                      CheckerArray115, 0, false },
#endif // GET_CHECKNAME_TABLE

