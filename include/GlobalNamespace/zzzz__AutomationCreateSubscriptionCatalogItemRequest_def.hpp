#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomationCreateSubscriptionCatalogItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AutomationCreateSubscriptionCatalogItemRequest)
namespace GlobalNamespace {
class SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t;
}
namespace GlobalNamespace {
class SubscriptionPricingVector;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class AutomationCreateSubscriptionCatalogItemRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest*, "", "AutomationCreateSubscriptionCatalogItemRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutomationCreateSubscriptionCatalogItemRequest
class CORDL_TYPE AutomationCreateSubscriptionCatalogItemRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_external_service_name, put=set_external_service_name)) ::StringW  external_service_name;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_pricing_and_terms, put=set_pricing_and_terms)) ::GlobalNamespace::SubscriptionPricingVector*  pricing_and_terms;

 __declspec(property(get=get_sku, put=set_sku)) ::StringW  sku;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

/// @brief Method Dispose, addr 0x526a4e4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest* New_ctor() ;

static inline ::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x526a650, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x526b1b4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x526a354, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x526a408, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest*  obj) ;

/// @brief Method get_envId, addr 0x526a9e0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_external_service_name, addr 0x526ab8c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_name() ;

/// @brief Method get_name, addr 0x526ad38, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_pricing_and_terms, addr 0x526aefc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubscriptionPricingVector* get_pricing_and_terms() ;

/// @brief Method get_sku, addr 0x526b0e0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_sku() ;

/// @brief Method get_titleId, addr 0x526a834, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method set_envId, addr 0x526a908, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_external_service_name, addr 0x526aab4, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_name(::StringW  value) ;

/// @brief Method set_name, addr 0x526ac60, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_pricing_and_terms, addr 0x526ae0c, size 0xf0, virtual false, abstract: false, final false
inline void set_pricing_and_terms(::GlobalNamespace::SubscriptionPricingVector*  value) ;

/// @brief Method set_sku, addr 0x526b008, size 0xd8, virtual false, abstract: false, final false
inline void set_sku(::StringW  value) ;

/// @brief Method set_titleId, addr 0x526a75c, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method swigRelease, addr 0x526a448, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutomationCreateSubscriptionCatalogItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutomationCreateSubscriptionCatalogItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutomationCreateSubscriptionCatalogItemRequest(AutomationCreateSubscriptionCatalogItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutomationCreateSubscriptionCatalogItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutomationCreateSubscriptionCatalogItemRequest(AutomationCreateSubscriptionCatalogItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8794};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutomationCreateSubscriptionCatalogItemRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
