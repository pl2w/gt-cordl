#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateOfferCatalogItemResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateOfferCatalogItemResponse)
namespace GlobalNamespace {
class MothershipResponse;
}
namespace GlobalNamespace {
class OfferEntitlementMap;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateOfferCatalogItemResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateOfferCatalogItemResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateOfferCatalogItemResponse*, "", "CreateOfferCatalogItemResponse");
// Dependencies MothershipResponse, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateOfferCatalogItemResponse
class CORDL_TYPE CreateOfferCatalogItemResponse : public ::GlobalNamespace::MothershipResponse {
public:
// Declarations
 __declspec(property(get=get_bundle_pricing, put=set_bundle_pricing)) ::GlobalNamespace::OfferEntitlementMap*  bundle_pricing;

/// @brief Field bundle_pricing_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_bundle_pricing_name, put=setStaticF_bundle_pricing_name)) ::StringW  bundle_pricing_name;

 __declspec(property(get=get_created_time, put=set_created_time)) ::StringW  created_time;

/// @brief Field created_time_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_created_time_name, put=setStaticF_created_time_name)) ::StringW  created_time_name;

 __declspec(property(get=get_discount_percent, put=set_discount_percent)) int32_t  discount_percent;

/// @brief Field discount_percent_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_discount_percent_name, put=setStaticF_discount_percent_name)) ::StringW  discount_percent_name;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

/// @brief Field env_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_env_id_name, put=setStaticF_env_id_name)) ::StringW  env_id_name;

 __declspec(property(get=get_last_updated_time, put=set_last_updated_time)) ::StringW  last_updated_time;

/// @brief Field last_updated_time_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_last_updated_time_name, put=setStaticF_last_updated_time_name)) ::StringW  last_updated_time_name;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field name_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_name_name, put=setStaticF_name_name)) ::StringW  name_name;

 __declspec(property(get=get_offer_id, put=set_offer_id)) ::StringW  offer_id;

/// @brief Field offer_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offer_id_name, put=setStaticF_offer_id_name)) ::StringW  offer_id_name;

 __declspec(property(get=get_sunset, put=set_sunset)) bool  sunset;

/// @brief Field sunset_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sunset_name, put=setStaticF_sunset_name)) ::StringW  sunset_name;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

 __declspec(property(get=get_transaction_id, put=set_transaction_id)) ::StringW  transaction_id;

/// @brief Field transaction_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_transaction_id_name, put=setStaticF_transaction_id_name)) ::StringW  transaction_id_name;

/// @brief Method Dispose, addr 0x52925f4, size 0x16c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FromMothershipResponse, addr 0x5292844, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CreateOfferCatalogItemResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response) ;

static inline ::GlobalNamespace::CreateOfferCatalogItemResponse* New_ctor() ;

static inline ::GlobalNamespace::CreateOfferCatalogItemResponse* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromResponseString, addr 0x5292760, size 0xe4, virtual true, abstract: false, final false
inline bool ParseFromResponseString(::StringW  response) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5293a64, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5292464, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5292518, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::CreateOfferCatalogItemResponse*  obj) ;

static inline ::StringW getStaticF_bundle_pricing_name() ;

static inline ::StringW getStaticF_created_time_name() ;

static inline ::StringW getStaticF_discount_percent_name() ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_last_updated_time_name() ;

static inline ::StringW getStaticF_name_name() ;

static inline ::StringW getStaticF_offer_id_name() ;

static inline ::StringW getStaticF_sunset_name() ;

static inline ::StringW getStaticF_title_id_name() ;

static inline ::StringW getStaticF_transaction_id_name() ;

/// @brief Method get_bundle_pricing, addr 0x52932a8, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferEntitlementMap* get_bundle_pricing() ;

/// @brief Method get_created_time, addr 0x5293638, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_discount_percent, addr 0x529348c, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_discount_percent() ;

/// @brief Method get_env_id, addr 0x5292d8c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_last_updated_time, addr 0x52937e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_updated_time() ;

/// @brief Method get_name, addr 0x5292f38, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_offer_id, addr 0x5292a34, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_id() ;

/// @brief Method get_sunset, addr 0x5293990, size 0xd4, virtual false, abstract: false, final false
inline bool get_sunset() ;

/// @brief Method get_title_id, addr 0x5292be0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_transaction_id, addr 0x52930e4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transaction_id() ;

static inline void setStaticF_bundle_pricing_name(::StringW  value) ;

static inline void setStaticF_created_time_name(::StringW  value) ;

static inline void setStaticF_discount_percent_name(::StringW  value) ;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_last_updated_time_name(::StringW  value) ;

static inline void setStaticF_name_name(::StringW  value) ;

static inline void setStaticF_offer_id_name(::StringW  value) ;

static inline void setStaticF_sunset_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

static inline void setStaticF_transaction_id_name(::StringW  value) ;

/// @brief Method set_bundle_pricing, addr 0x52931b8, size 0xf0, virtual false, abstract: false, final false
inline void set_bundle_pricing(::GlobalNamespace::OfferEntitlementMap*  value) ;

/// @brief Method set_created_time, addr 0x5293560, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_discount_percent, addr 0x52933b4, size 0xd8, virtual false, abstract: false, final false
inline void set_discount_percent(int32_t  value) ;

/// @brief Method set_env_id, addr 0x5292cb4, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_last_updated_time, addr 0x529370c, size 0xd8, virtual false, abstract: false, final false
inline void set_last_updated_time(::StringW  value) ;

/// @brief Method set_name, addr 0x5292e60, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_offer_id, addr 0x529295c, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_id(::StringW  value) ;

/// @brief Method set_sunset, addr 0x52938b8, size 0xd8, virtual false, abstract: false, final false
inline void set_sunset(bool  value) ;

/// @brief Method set_title_id, addr 0x5292b08, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_transaction_id, addr 0x529300c, size 0xd8, virtual false, abstract: false, final false
inline void set_transaction_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5292558, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::CreateOfferCatalogItemResponse*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateOfferCatalogItemResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferCatalogItemResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateOfferCatalogItemResponse(CreateOfferCatalogItemResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateOfferCatalogItemResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateOfferCatalogItemResponse(CreateOfferCatalogItemResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8872};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateOfferCatalogItemResponse, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateOfferCatalogItemResponse) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
