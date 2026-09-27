#pragma once
// IWYU pragma private; include "GlobalNamespace/ClientGetMySubscriptionCompleteDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequestCompleteDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ClientGetMySubscriptionCompleteDelegateWrapper)
namespace GlobalNamespace {
class ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0;
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
class ClientGetMySubscriptionCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*, "", "ClientGetMySubscriptionCompleteDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0*, "", "ClientGetMySubscriptionCompleteDelegateWrapper/SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0");
// Dependencies MothershipRequestCompleteDelegateWrapper, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClientGetMySubscriptionCompleteDelegateWrapper
class CORDL_TYPE ClientGetMySubscriptionCompleteDelegateWrapper : public ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper {
public:
// Declarations
using SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0 = ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*  selfInstance;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Method Dispose, addr 0x527a234, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x527a5a0, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x527a470, size 0x130, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(ClientGetMySubscriptionCompleteDelegateWrapper::SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodOnCompleteCallback, addr 0x5279fa8, size 0xfc, virtual false, abstract: false, final false
static inline void SwigDirectorMethodOnCompleteCallback(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x527a3a0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x527a0a4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x527a158, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

static inline void setStaticF_selfInstance(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x527a198, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientGetMySubscriptionCompleteDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientGetMySubscriptionCompleteDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientGetMySubscriptionCompleteDelegateWrapper(ClientGetMySubscriptionCompleteDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientGetMySubscriptionCompleteDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientGetMySubscriptionCompleteDelegateWrapper(ClientGetMySubscriptionCompleteDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8829};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigDelegate0, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper, ___swigDelegate0) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClientGetMySubscriptionCompleteDelegateWrapper/SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0
class CORDL_TYPE ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x527ab18, size 0xac, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x527abc4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x527ab04, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  response, bool  wasSuccess, ::System::IntPtr  error, ::System::IntPtr  userData) ;

static inline ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x527a878, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0(ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0(ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper_SwigDelegateClientGetMySubscriptionCompleteDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
