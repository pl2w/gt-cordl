#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateEntitlementCatalogItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpdateEntitlementCatalogItemRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateEntitlementCatalogItemRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateEntitlementCatalogItemRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateEntitlementCatalogItemRequest*, "", "UpdateEntitlementCatalogItemRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateEntitlementCatalogItemRequest
class CORDL_TYPE UpdateEntitlementCatalogItemRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_entitlementId, put=set_entitlementId)) ::StringW  entitlementId;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_inGameId, put=set_inGameId)) ::StringW  inGameId;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_type, put=set_type)) ::StringW  type;

/// @brief Method Dispose, addr 0x5374ad4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::UpdateEntitlementCatalogItemRequest* New_ctor() ;

static inline ::GlobalNamespace::UpdateEntitlementCatalogItemRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5374c40, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5375754, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5374944, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x53749f8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::UpdateEntitlementCatalogItemRequest*  obj) ;

/// @brief Method get_entitlementId, addr 0x537517c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_entitlementId() ;

/// @brief Method get_envId, addr 0x5374fd0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_inGameId, addr 0x53754d4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_inGameId() ;

/// @brief Method get_name, addr 0x5375328, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_titleId, addr 0x5374e24, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_type, addr 0x5375680, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_type() ;

/// @brief Method set_entitlementId, addr 0x53750a4, size 0xd8, virtual false, abstract: false, final false
inline void set_entitlementId(::StringW  value) ;

/// @brief Method set_envId, addr 0x5374ef8, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_inGameId, addr 0x53753fc, size 0xd8, virtual false, abstract: false, final false
inline void set_inGameId(::StringW  value) ;

/// @brief Method set_name, addr 0x5375250, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_titleId, addr 0x5374d4c, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_type, addr 0x53755a8, size 0xd8, virtual false, abstract: false, final false
inline void set_type(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5374a38, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::UpdateEntitlementCatalogItemRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateEntitlementCatalogItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateEntitlementCatalogItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateEntitlementCatalogItemRequest(UpdateEntitlementCatalogItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateEntitlementCatalogItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateEntitlementCatalogItemRequest(UpdateEntitlementCatalogItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9633};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateEntitlementCatalogItemRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateEntitlementCatalogItemRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
