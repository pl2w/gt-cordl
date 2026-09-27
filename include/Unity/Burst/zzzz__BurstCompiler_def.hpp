#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BurstCompiler)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Delegate;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate;
}
namespace Unity::Burst {
class BurstCompilerOptions;
}
namespace Unity::Burst {
class BurstCompiler_BurstCompilerHelper;
}
namespace Unity::Burst {
class BurstCompiler_FakeDelegate;
}
namespace Unity::Burst {
class BurstCompiler___c;
}
namespace Unity::Burst {
template<typename T>
struct FunctionPointer_1;
}
// Forward declare root types
namespace Unity::Burst {
class BurstCompiler;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate;
}
namespace Unity::Burst {
class BurstCompiler_BurstCompilerHelper;
}
namespace Unity::Burst {
class BurstCompiler_FakeDelegate;
}
namespace Unity::Burst {
class BurstCompiler___c;
}
// Write type traits
MARK_REF_T(::Unity::Burst::BurstCompiler*);
MARK_REF_T(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*);
MARK_REF_T(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*);
MARK_REF_T(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*);
MARK_REF_T(::Unity::Burst::BurstCompiler_BurstCompilerHelper*);
MARK_REF_T(::Unity::Burst::BurstCompiler_FakeDelegate*);
MARK_REF_T(::Unity::Burst::BurstCompiler___c*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler*, "Unity.Burst", "BurstCompiler");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler_BurstCompilerHelper*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler_FakeDelegate*, "Unity.Burst", "BurstCompiler/FakeDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler___c*, "Unity.Burst", "BurstCompiler/<>c");
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler
class CORDL_TYPE BurstCompiler : public ::System::Object {
public:
// Declarations
using BurstCompilerHelper = ::Unity::Burst::BurstCompiler_BurstCompilerHelper;

using FakeDelegate = ::Unity::Burst::BurstCompiler_FakeDelegate;

using __c = ::Unity::Burst::BurstCompiler___c;

/// @brief Field DummyMethodInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DummyMethodInfo, put=setStaticF_DummyMethodInfo)) ::System::Reflection::MethodInfo*  DummyMethodInfo;

/// @brief Field Options, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Options, put=setStaticF_Options)) ::Unity::Burst::BurstCompilerOptions*  Options;

/// @brief Field _IsEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsEnabled, put=setStaticF__IsEnabled)) bool  _IsEnabled;

/// @brief Method Compile, addr 0xae7fcf0, size 0x11c, virtual false, abstract: false, final false
static inline void* Compile(::System::Object*  delegateObj, bool  isFunctionPointer, bool  deterministicCompilation) ;

/// @brief Method Compile, addr 0xae7fe0c, size 0x53c, virtual false, abstract: false, final false
static inline void* Compile(::System::Object*  delegateObj, ::System::Reflection::MethodInfo*  methodInfo, bool  isFunctionPointer, bool  isILPostProcessing, bool  deterministicCompilation) ;

/// @brief Method CompileFunctionPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline ::Unity::Burst::FunctionPointer_1<T> CompileFunctionPointer(T  delegateMethod) ;

/// @brief Method DummyMethod, addr 0xae80408, size 0x4, virtual false, abstract: false, final false
static inline void DummyMethod() ;

static inline ::System::Reflection::MethodInfo* getStaticF_DummyMethodInfo() ;

static inline ::Unity::Burst::BurstCompilerOptions* getStaticF_Options() ;

static inline bool getStaticF__IsEnabled() ;

/// @brief Method get_IsEnabled, addr 0xae7fc54, size 0x9c, virtual false, abstract: false, final false
static inline bool get_IsEnabled() ;

static inline void setStaticF_DummyMethodInfo(::System::Reflection::MethodInfo*  value) ;

static inline void setStaticF_Options(::Unity::Burst::BurstCompilerOptions*  value) ;

static inline void setStaticF__IsEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompiler(BurstCompiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompiler(BurstCompiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompiler) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/<>c
class CORDL_TYPE BurstCompiler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Burst::BurstCompiler___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Func_2<::System::Attribute*,bool>*  __9__22_0;

static inline ::Unity::Burst::BurstCompiler___c* New_ctor() ;

/// @brief Method <Compile>b__22_0, addr 0xae80a90, size 0x6c, virtual false, abstract: false, final false
inline bool _Compile_b__22_0(::System::Attribute*  s) ;

/// @brief Method .ctor, addr 0xae80a88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Burst::BurstCompiler___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Attribute*,bool>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Unity::Burst::BurstCompiler___c*  value) ;

static inline void setStaticF___9__22_0(::System::Func_2<::System::Attribute*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompiler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompiler___c(BurstCompiler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompiler___c(BurstCompiler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32169};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompiler___c) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/FakeDelegate
class CORDL_TYPE BurstCompiler_FakeDelegate : public ::System::Object {
public:
// Declarations
/// @brief [Preserve]
 __declspec(property(get=get_Method)) ::System::Reflection::MethodInfo*  Method;

/// @brief Field <Method>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Method_k__BackingField, put=__cordl_internal_set__Method_k__BackingField)) ::System::Reflection::MethodInfo*  _Method_k__BackingField;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__Method_k__BackingField() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__Method_k__BackingField() ;

constexpr void __cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Method, addr 0xae80a18, size 0x8, virtual false, abstract: false, final false
inline ::System::Reflection::MethodInfo* get_Method() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompiler_FakeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_FakeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompiler_FakeDelegate(BurstCompiler_FakeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_FakeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompiler_FakeDelegate(BurstCompiler_FakeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32168};

/// [CompilerGenerated]
/// @brief Field <Method>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ____Method_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler_FakeDelegate, ____Method_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::BurstCompiler_FakeDelegate) == 0x18, "Size mismatch!");

} // namespace end def Unity::Burst
// [BurstCompile]
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper
class CORDL_TYPE BurstCompiler_BurstCompilerHelper : public ::System::Object {
public:
// Declarations
using IsBurstEnabledDelegate = ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate;

using IsBurstEnabled_00000145$BurstDirectCall = ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall;

using IsBurstEnabled_00000145$PostfixBurstDelegate = ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate;

/// @brief Field IsBurstEnabledImpl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IsBurstEnabledImpl, put=setStaticF_IsBurstEnabledImpl)) ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*  IsBurstEnabledImpl;

/// @brief Field IsBurstGenerated, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsBurstGenerated, put=setStaticF_IsBurstGenerated)) bool  IsBurstGenerated;

/// [BurstDiscard]
/// @brief Method DiscardedMethod, addr 0xae8063c, size 0x8, virtual false, abstract: false, final false
static inline void DiscardedMethod(::by_ref<bool>  value) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Unity.Burst.BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate))]
/// @brief Method IsBurstEnabled, addr 0xae8056c, size 0x4, virtual false, abstract: false, final false
static inline bool IsBurstEnabled() ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(Unity.Burst.BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate))]
/// @brief Method IsBurstEnabled$BurstManaged, addr 0xae807fc, size 0x50, virtual false, abstract: false, final false
static inline bool IsBurstEnabled$BurstManaged() ;

/// @brief Method IsCompiledByBurst, addr 0xae80644, size 0x38, virtual false, abstract: false, final false
static inline bool IsCompiledByBurst(::System::Delegate*  del) ;

static inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* getStaticF_IsBurstEnabledImpl() ;

static inline bool getStaticF_IsBurstGenerated() ;

static inline void setStaticF_IsBurstEnabledImpl(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*  value) ;

static inline void setStaticF_IsBurstGenerated(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompiler_BurstCompilerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_BurstCompilerHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompiler_BurstCompilerHelper(BurstCompiler_BurstCompilerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_BurstCompilerHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompiler_BurstCompilerHelper(BurstCompiler_BurstCompilerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompiler_BurstCompilerHelper) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
// Dependencies System.IntPtr, System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$BurstDirectCall
class CORDL_TYPE BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xae80a00, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xae80910, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xae80570, size 0xcc, virtual false, abstract: false, final false
static inline bool Invoke() ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$PostfixBurstDelegate
class CORDL_TYPE BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xae808fc, size 0x14, virtual true, abstract: false, final false
inline bool Invoke() ;

static inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xae80860, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Burst
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
class CORDL_TYPE BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xae8084c, size 0x14, virtual true, abstract: false, final false
inline bool Invoke() ;

static inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xae80760, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Burst
