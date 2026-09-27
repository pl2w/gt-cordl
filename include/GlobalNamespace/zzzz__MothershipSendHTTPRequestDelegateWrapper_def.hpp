#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipSendHTTPRequestDelegateWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipSendHTTPRequestDelegateWrapper)
namespace GlobalNamespace {
class MothershipHTTPRequest;
}
namespace GlobalNamespace {
class MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0;
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
class MothershipSendHTTPRequestDelegateWrapper;
}
namespace GlobalNamespace {
class MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*);
MARK_REF_T(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*, "", "MothershipSendHTTPRequestDelegateWrapper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0*, "", "MothershipSendHTTPRequestDelegateWrapper/SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef, System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipSendHTTPRequestDelegateWrapper
class CORDL_TYPE MothershipSendHTTPRequestDelegateWrapper : public ::System::Object {
public:
// Declarations
using SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0 = ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0;

/// @brief Field selfInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selfInstance, put=setStaticF_selfInstance)) ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*  selfInstance;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Field swigDelegate0, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_swigDelegate0, put=__cordl_internal_set_swigDelegate0)) ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0*  swigDelegate0;

/// @brief Field swigMethodTypes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_swigMethodTypes0, put=setStaticF_swigMethodTypes0)) ::ArrayW<::System::Type*>  swigMethodTypes0;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52bdc88, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52bdd84, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52bdcf4, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper* New_ctor() ;

static inline ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SendRequest, addr 0x52bded0, size 0xf8, virtual true, abstract: false, final false
inline bool SendRequest(::GlobalNamespace::MothershipHTTPRequest*  request) ;

/// @brief Method SwigDerivedClassHasMethod, addr 0x52be1c8, size 0x2d8, virtual false, abstract: false, final false
inline bool SwigDerivedClassHasMethod(::StringW  methodName, ::ArrayW<::System::Type*>  methodTypes) ;

/// @brief Method SwigDirectorConnect, addr 0x52be098, size 0x130, virtual false, abstract: false, final false
inline void SwigDirectorConnect() ;

/// [MonoPInvokeCallback(typeof(MothershipSendHTTPRequestDelegateWrapper::SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0))]
/// @brief Method SwigDirectorMethodSendRequest, addr 0x52bdab0, size 0xa0, virtual false, abstract: false, final false
static inline bool SwigDirectorMethodSendRequest(::System::IntPtr  request) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0* const& __cordl_internal_get_swigDelegate0() const;

constexpr ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0*& __cordl_internal_get_swigDelegate0() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

constexpr void __cordl_internal_set_swigDelegate0(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0*  value) ;

/// @brief Method .ctor, addr 0x52bdfc8, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52bdb50, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52bdbb0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*  obj) ;

static inline ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper* getStaticF_selfInstance() ;

static inline ::ArrayW<::System::Type*> getStaticF_swigMethodTypes0() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_selfInstance(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*  value) ;

static inline void setStaticF_swigMethodTypes0(::ArrayW<::System::Type*>  value) ;

/// @brief Method swigRelease, addr 0x52bdbf0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipSendHTTPRequestDelegateWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipSendHTTPRequestDelegateWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipSendHTTPRequestDelegateWrapper(MothershipSendHTTPRequestDelegateWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipSendHTTPRequestDelegateWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipSendHTTPRequestDelegateWrapper(MothershipSendHTTPRequestDelegateWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9367};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field swigDelegate0, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0*  ___swigDelegate0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper, ___swigDelegate0) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipSendHTTPRequestDelegateWrapper/SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0
class CORDL_TYPE MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x52be650, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  request, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x52be6ac, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x52be63c, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::System::IntPtr  request) ;

static inline ::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x52be4a0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0(MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0(MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipSendHTTPRequestDelegateWrapper_SwigDelegateMothershipSendHTTPRequestDelegateWrapper_0) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
