#pragma once
// IWYU pragma private; include "GlobalNamespace/SendNotificationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SendNotificationRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class StringVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class SendNotificationRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SendNotificationRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SendNotificationRequest*, "", "SendNotificationRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SendNotificationRequest
class CORDL_TYPE SendNotificationRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_body, put=set_body)) ::StringW  body;

 __declspec(property(get=get_recipients, put=set_recipients)) ::GlobalNamespace::StringVector*  recipients;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title, put=set_title)) ::StringW  title;

/// @brief Method Dispose, addr 0x531f280, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::SendNotificationRequest* New_ctor() ;

static inline ::GlobalNamespace::SendNotificationRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x531f940, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x531fa4c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x531f0f0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x531f1a4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SendNotificationRequest*  obj) ;

/// @brief Method get_body, addr 0x531f86c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_body() ;

/// @brief Method get_recipients, addr 0x531f4dc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StringVector* get_recipients() ;

/// @brief Method get_title, addr 0x531f6c0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title() ;

/// @brief Method set_body, addr 0x531f794, size 0xd8, virtual false, abstract: false, final false
inline void set_body(::StringW  value) ;

/// @brief Method set_recipients, addr 0x531f3ec, size 0xf0, virtual false, abstract: false, final false
inline void set_recipients(::GlobalNamespace::StringVector*  value) ;

/// @brief Method set_title, addr 0x531f5e8, size 0xd8, virtual false, abstract: false, final false
inline void set_title(::StringW  value) ;

/// @brief Method swigRelease, addr 0x531f1e4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SendNotificationRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SendNotificationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SendNotificationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SendNotificationRequest(SendNotificationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendNotificationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendNotificationRequest(SendNotificationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9491};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SendNotificationRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SendNotificationRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
