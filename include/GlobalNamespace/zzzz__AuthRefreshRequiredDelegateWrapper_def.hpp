#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthRefreshRequiredDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AuthRefreshRequiredDelegateWrapper)
namespace GlobalNamespace {
class AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0;
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
class IDisposable;
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
class AuthRefreshRequiredDelegateWrapper;
}
namespace GlobalNamespace {
class AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*, "", "AuthRefreshRequiredDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0*, "", "AuthRefreshRequiredDelegateWrapper/SwigDelegateAuthRefreshRequiredDelegateWrapper_0");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: AuthRefreshRequiredDelegateWrapper
class CORDL_TYPE AuthRefreshRequiredDelegateWrapper : public ::System::Object {
public:
// Declarations
using SwigDelegateAuthRefreshRequiredDelegateWrapper_0 = ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*  selfInstance;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AuthRefreshRequired, addr 0x5268fa4, size 0xd8, virtual true, abstract: false, final false
inline void AuthRefreshRequired(::StringW  arg0) ;

/// @brief Method Dispose, addr 0x5268d5c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5268e58, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5268dc8, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x526927c, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x526914c, size 0x130, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodAuthRefreshRequired, addr 0x5268bb4, size 0x70, virtual false, abstract: false, final false
static inline void SwigDirectorMethodAuthRefreshRequired(::StringW  arg0) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x526907c, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5268c24, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5268c84, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_selfInstance(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x5268cc4, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthRefreshRequiredDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthRefreshRequiredDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthRefreshRequiredDelegateWrapper(AuthRefreshRequiredDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthRefreshRequiredDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthRefreshRequiredDelegateWrapper(AuthRefreshRequiredDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8791};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field swigDelegate0, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper, ___swigDelegate0) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: AuthRefreshRequiredDelegateWrapper/SwigDelegateAuthRefreshRequiredDelegateWrapper_0
class CORDL_TYPE AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5269700, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  arg0, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5269720, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52696ec, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  arg0) ;

static inline ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5269554, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0(AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0(AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper_SwigDelegateAuthRefreshRequiredDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
