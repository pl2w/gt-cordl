#pragma once
// IWYU pragma private; include "GlobalNamespace/UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestCompleteDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper)
namespace GlobalNamespace {
class UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper*, "", "UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0*, "", "UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper/SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0");
// Dependencies MothershipRequestCompleteDelegateWrapper, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper
class CORDL_TYPE UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper : public ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper {
public:
// Declarations
using SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0 = ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper*  selfInstance;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Method Dispose, addr 0x536aef0, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x536b25c, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x536b12c, size 0x130, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper::SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodOnCompleteCallback, addr 0x536ac64, size 0xfc, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnCompleteCallback(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x536b05c, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x536ad60, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x536ae14, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline void setStaticF_selfInstance(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x536ae54, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper(UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper(UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9612};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigDelegate0, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper, ___swigDelegate0) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper/SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0
class CORDL_TYPE UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x536b7d4, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x536b880, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x536b7c0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x536b534, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0(UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0(UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_SwigDelegateUnlockProgressionTreeNodeAutomationCompleteDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
