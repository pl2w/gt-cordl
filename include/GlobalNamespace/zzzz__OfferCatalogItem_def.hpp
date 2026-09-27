#pragma once
// IWYU pragma private; include "GlobalNamespace/OfferCatalogItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OfferCatalogItem)
namespace GlobalNamespace {
class OfferEntitlementMap;
}
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
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
class OfferCatalogItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OfferCatalogItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OfferCatalogItem*, "", "OfferCatalogItem");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: OfferCatalogItem
class CORDL_TYPE OfferCatalogItem : public ::System::Object {
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

 __declspec(property(get=get_display_description, put=set_display_description)) ::StringW  display_description;

 __declspec(property(get=get_display_name, put=set_display_name)) ::StringW  display_name;

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

 __declspec(property(get=get_subscription_catalog_item_id, put=set_subscription_catalog_item_id)) ::StringW  subscription_catalog_item_id;

/// @brief Field subscription_catalog_item_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_subscription_catalog_item_id_name, put=setStaticF_subscription_catalog_item_id_name)) ::StringW  subscription_catalog_item_id_name;

 __declspec(property(get=get_sunset, put=set_sunset)) bool  sunset;

/// @brief Field sunset_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sunset_name, put=setStaticF_sunset_name)) ::StringW  sunset_name;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Field title_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_title_id_name, put=setStaticF_title_id_name)) ::StringW  title_id_name;

 __declspec(property(get=get_transaction_id, put=set_transaction_id)) ::StringW  transaction_id;

/// @brief Field transaction_id_name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_transaction_id_name, put=setStaticF_transaction_id_name)) ::StringW  transaction_id_name;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52e0184, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52e0280, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52e01f0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::OfferCatalogItem* New_ctor() ;

static inline ::GlobalNamespace::OfferCatalogItem* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x52e19d8, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52e1ad4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52e004c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52e00ac, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::OfferCatalogItem*  obj) ;

static inline ::StringW getStaticF_bundle_pricing_name() ;

static inline ::StringW getStaticF_created_time_name() ;

static inline ::StringW getStaticF_discount_percent_name() ;

static inline ::StringW getStaticF_env_id_name() ;

static inline ::StringW getStaticF_last_updated_time_name() ;

static inline ::StringW getStaticF_name_name() ;

static inline ::StringW getStaticF_offer_id_name() ;

static inline ::StringW getStaticF_subscription_catalog_item_id_name() ;

static inline ::StringW getStaticF_sunset_name() ;

static inline ::StringW getStaticF_title_id_name() ;

static inline ::StringW getStaticF_transaction_id_name() ;

/// @brief Method get_bundle_pricing, addr 0x52e0d18, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OfferEntitlementMap* get_bundle_pricing() ;

/// @brief Method get_created_time, addr 0x52e10a8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_discount_percent, addr 0x52e0efc, size 0xd4, virtual false, abstract: false, final false
inline int32_t get_discount_percent() ;

/// @brief Method get_display_description, addr 0x52e1904, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_description() ;

/// @brief Method get_display_name, addr 0x52e1758, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_display_name() ;

/// @brief Method get_env_id, addr 0x52e07fc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_last_updated_time, addr 0x52e1254, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_updated_time() ;

/// @brief Method get_name, addr 0x52e09a8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_offer_id, addr 0x52e04a4, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_offer_id() ;

/// @brief Method get_subscription_catalog_item_id, addr 0x52e1400, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_subscription_catalog_item_id() ;

/// @brief Method get_sunset, addr 0x52e15ac, size 0xd4, virtual false, abstract: false, final false
inline bool get_sunset() ;

/// @brief Method get_title_id, addr 0x52e0650, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Method get_transaction_id, addr 0x52e0b54, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_transaction_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_bundle_pricing_name(::StringW  value) ;

static inline void setStaticF_created_time_name(::StringW  value) ;

static inline void setStaticF_discount_percent_name(::StringW  value) ;

static inline void setStaticF_env_id_name(::StringW  value) ;

static inline void setStaticF_last_updated_time_name(::StringW  value) ;

static inline void setStaticF_name_name(::StringW  value) ;

static inline void setStaticF_offer_id_name(::StringW  value) ;

static inline void setStaticF_subscription_catalog_item_id_name(::StringW  value) ;

static inline void setStaticF_sunset_name(::StringW  value) ;

static inline void setStaticF_title_id_name(::StringW  value) ;

static inline void setStaticF_transaction_id_name(::StringW  value) ;

/// @brief Method set_bundle_pricing, addr 0x52e0c28, size 0xf0, virtual false, abstract: false, final false
inline void set_bundle_pricing(::GlobalNamespace::OfferEntitlementMap*  value) ;

/// @brief Method set_created_time, addr 0x52e0fd0, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_discount_percent, addr 0x52e0e24, size 0xd8, virtual false, abstract: false, final false
inline void set_discount_percent(int32_t  value) ;

/// @brief Method set_display_description, addr 0x52e182c, size 0xd8, virtual false, abstract: false, final false
inline void set_display_description(::StringW  value) ;

/// @brief Method set_display_name, addr 0x52e1680, size 0xd8, virtual false, abstract: false, final false
inline void set_display_name(::StringW  value) ;

/// @brief Method set_env_id, addr 0x52e0724, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_last_updated_time, addr 0x52e117c, size 0xd8, virtual false, abstract: false, final false
inline void set_last_updated_time(::StringW  value) ;

/// @brief Method set_name, addr 0x52e08d0, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_offer_id, addr 0x52e03cc, size 0xd8, virtual false, abstract: false, final false
inline void set_offer_id(::StringW  value) ;

/// @brief Method set_subscription_catalog_item_id, addr 0x52e1328, size 0xd8, virtual false, abstract: false, final false
inline void set_subscription_catalog_item_id(::StringW  value) ;

/// @brief Method set_sunset, addr 0x52e14d4, size 0xd8, virtual false, abstract: false, final false
inline void set_sunset(bool  value) ;

/// @brief Method set_title_id, addr 0x52e0578, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method set_transaction_id, addr 0x52e0a7c, size 0xd8, virtual false, abstract: false, final false
inline void set_transaction_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x52e00ec, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::OfferCatalogItem*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OfferCatalogItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OfferCatalogItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OfferCatalogItem(OfferCatalogItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OfferCatalogItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OfferCatalogItem(OfferCatalogItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9405};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OfferCatalogItem, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfferCatalogItem, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OfferCatalogItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
