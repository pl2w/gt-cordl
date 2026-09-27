#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MothershipRequest)
namespace GlobalNamespace {
class MothershipHTTPResponse;
}
namespace GlobalNamespace {
class MothershipRequestCompleteDelegateWrapper;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipRequest*, "", "MothershipRequest");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipRequest
class CORDL_TYPE MothershipRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_isShared, put=set_isShared)) bool  isShared;

 __declspec(property(get=get_principal, put=set_principal)) ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t*  principal;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_userData, put=set_userData)) ::System::IntPtr  userData;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x529a7f0, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x529a9b8, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52b9bcc, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ProcessResponse, addr 0x52b9d68, size 0x13c, virtual false, abstract: false, final false
inline void ProcessResponse(::GlobalNamespace::MothershipHTTPResponse*  response, ::GlobalNamespace::MothershipResponse*  responseInstance, ::GlobalNamespace::MothershipRequestCompleteDelegateWrapper*  delegate_) ;

/// @brief Method ToHttpRequest, addr 0x52b9c5c, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x529a6b8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52b9af4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipRequest*  obj) ;

/// @brief Method get_isShared, addr 0x52ba364, size 0xd4, virtual false, abstract: false, final false
inline bool get_isShared() ;

/// @brief Method get_principal, addr 0x52ba180, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t* get_principal() ;

/// @brief Method get_userData, addr 0x52b9fbc, size 0xd4, virtual false, abstract: false, final false
inline ::System::IntPtr get_userData() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_isShared, addr 0x52ba28c, size 0xd8, virtual false, abstract: false, final false
inline void set_isShared(bool  value) ;

/// @brief Method set_principal, addr 0x52ba090, size 0xf0, virtual false, abstract: false, final false
inline void set_principal(::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipPrincipal_t*  value) ;

/// @brief Method set_userData, addr 0x52b9ee4, size 0xd8, virtual false, abstract: false, final false
inline void set_userData(::System::IntPtr  value) ;

/// @brief Method swigRelease, addr 0x52b9b34, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipRequest(MothershipRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipRequest(MothershipRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9359};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipRequest, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipRequest, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipRequest) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
