#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateOfferCatalogItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRequest_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateOfferCatalogItemRequest)
namespace GlobalNamespace {
class OfferEntitlementMap;
}
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
class CreateOfferCatalogItemRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateOfferCatalogItemRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateOfferCatalogItemRequest*, "", "CreateOfferCatalogItemRequest");
// Dependencies MothershipRequest, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateOfferCatalogItemRequest
class CORDL_TYPE CreateOfferCatalogItemRequest : public ::GlobalNamespace::MothershipRequest {
public:
// Declarations
 __declspec(property(get=get_bundle_pricing, put=set_bundle_pricing)) ::GlobalNamespace::OfferEntitlementMap*  bundle_pricing;

/// @brief Field bundle_pricing_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_bundle_pricing_name, put=setStaticF_bundle_pricing_name)) ::StringW  bundle_pricing_name;

 __declspec(property(get=get_discount_percent, put=set_discount_percent)) int32_t  discount_percent;

/// @brief Field discount_percent_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_discount_percent_name, put=setStaticF_discount_percent_name)) ::StringW  discount_percent_name;

 __declspec(property(get=get_envId, put=set_envId)) ::StringW  envId;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field name_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_name_name, put=setStaticF_name_name)) ::StringW  name_name;

 __declspec(property(get=get_subscription_catalog_item_id, put=set_subscription_catalog_item_id)) ::StringW  subscription_catalog_item_id;

/// @brief Field subscription_catalog_item_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_subscription_catalog_item_id_name, put=setStaticF_subscription_catalog_item_id_name)) ::StringW  subscription_catalog_item_id_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_titleId, put=set_titleId)) ::StringW  titleId;

 __declspec(property(get=get_transaction_id, put=set_transaction_id)) ::StringW  transaction_id;

/// @brief Field transaction_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_transaction_id_name, put=setStaticF_transaction_id_name)) ::StringW  transaction_id_name;

/// @brief Method Dispose, addr 0x529141c, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::GlobalNamespace::CreateOfferCatalogItemRequest* New_ctor() ;

static inline ::GlobalNamespace::CreateOfferCatalogItemRequest* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ToHttpRequest, addr 0x5291588, size 0x10c, virtual true, abstract: false, final false
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* ToHttpRequest() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5292298, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x529128c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5291340, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateOfferCatalogItemRequest*  obj) ;

static inline ::StringW getStaticF_bundle_pricing_name() ;

static inline ::StringW getStaticF_discount_percent_name() ;

static inline ::StringW getStaticF_name_name() ;

static inline ::StringW getStaticF_subscription_catalog_item_id_name() ;

static inline ::StringW getStaticF_transaction_id_name() ;

/// @brief Method get_bundle_pricing, addr 0x5291e34, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferEntitlementMap* get_bundle_pricing() ;

/// @brief Method get_discount_percent, addr 0x52921c4, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_discount_percent() ;

/// @brief Method get_envId, addr 0x5291918, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_envId() ;

/// @brief Method get_name, addr 0x5291ac4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_subscription_catalog_item_id, addr 0x5292018, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_subscription_catalog_item_id() ;

/// @brief Method get_titleId, addr 0x529176c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_titleId() ;

/// @brief Method get_transaction_id, addr 0x5291c70, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transaction_id() ;

static inline void setStaticF_bundle_pricing_name(::StringW  value) ;

static inline void setStaticF_discount_percent_name(::StringW  value) ;

static inline void setStaticF_name_name(::StringW  value) ;

static inline void setStaticF_subscription_catalog_item_id_name(::StringW  value) ;

static inline void setStaticF_transaction_id_name(::StringW  value) ;

/// @brief Method set_bundle_pricing, addr 0x5291d44, size 0xf0, virtual false, abstract: false, final false
inline void set_bundle_pricing(::GlobalNamespace::OfferEntitlementMap*  value) ;

/// @brief Method set_discount_percent, addr 0x52920ec, size 0xd8, virtual false, abstract: false, final false
inline void set_discount_percent(int32_t  value) ;

/// @brief Method set_envId, addr 0x5291840, size 0xd8, virtual false, abstract: false, final false
inline void set_envId(::StringW  value) ;

/// @brief Method set_name, addr 0x52919ec, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_subscription_catalog_item_id, addr 0x5291f40, size 0xd8, virtual false, abstract: false, final false
inline void set_subscription_catalog_item_id(::StringW  value) ;

/// @brief Method set_titleId, addr 0x5291694, size 0xd8, virtual false, abstract: false, final false
inline void set_titleId(::StringW  value) ;

/// @brief Method set_transaction_id, addr 0x5291b98, size 0xd8, virtual false, abstract: false, final false
inline void set_transaction_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5291380, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateOfferCatalogItemRequest*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateOfferCatalogItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferCatalogItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateOfferCatalogItemRequest(CreateOfferCatalogItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferCatalogItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateOfferCatalogItemRequest(CreateOfferCatalogItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8871};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateOfferCatalogItemRequest, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateOfferCatalogItemRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
