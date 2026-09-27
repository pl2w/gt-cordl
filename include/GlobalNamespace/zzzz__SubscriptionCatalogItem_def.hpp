#pragma once
// IWYU pragma private; include "GlobalNamespace/SubscriptionCatalogItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SubscriptionCatalogItem)
namespace GlobalNamespace {
class SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t;
}
namespace GlobalNamespace {
class SubscriptionPricingVector;
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
class SubscriptionCatalogItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SubscriptionCatalogItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionCatalogItem*, "", "SubscriptionCatalogItem");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: SubscriptionCatalogItem
class CORDL_TYPE SubscriptionCatalogItem : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_created_time, put=set_created_time)) ::StringW  created_time;

 __declspec(property(get=get_env_id, put=set_env_id)) ::StringW  env_id;

 __declspec(property(get=get_external_service_name, put=set_external_service_name)) ::StringW  external_service_name;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_last_updated_time, put=set_last_updated_time)) ::StringW  last_updated_time;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_pricing_and_terms, put=set_pricing_and_terms)) ::GlobalNamespace::SubscriptionPricingVector*  pricing_and_terms;

 __declspec(property(get=get_sku, put=set_sku)) ::StringW  sku;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

 __declspec(property(get=get_title_id, put=set_title_id)) ::StringW  title_id;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x534dd0c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x534de08, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x534dd78, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::SubscriptionCatalogItem* New_ctor() ;

static inline ::GlobalNamespace::SubscriptionCatalogItem* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ParseFromJson, addr 0x534ef94, size 0xfc, virtual false, abstract: false, final false
inline bool ParseFromJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__GenericObjectT_false_rapidjson__Value_t*  object_) ;

/// @brief Method ParseFromString, addr 0x534eeb0, size 0xe4, virtual false, abstract: false, final false
inline bool ParseFromString(::StringW  string_) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x534f090, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x534dbd4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x534dc34, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::SubscriptionCatalogItem*  obj) ;

/// @brief Method get_created_time, addr 0x534e1d8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_created_time() ;

/// @brief Method get_env_id, addr 0x534eddc, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_env_id() ;

/// @brief Method get_external_service_name, addr 0x534ea84, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_external_service_name() ;

/// @brief Method get_id, addr 0x534e02c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_last_updated_time, addr 0x534e384, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_last_updated_time() ;

/// @brief Method get_name, addr 0x534e72c, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_pricing_and_terms, addr 0x534e548, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubscriptionPricingVector* get_pricing_and_terms() ;

/// @brief Method get_sku, addr 0x534e8d8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_sku() ;

/// @brief Method get_title_id, addr 0x534ec30, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_title_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_created_time, addr 0x534e100, size 0xd8, virtual false, abstract: false, final false
inline void set_created_time(::StringW  value) ;

/// @brief Method set_env_id, addr 0x534ed04, size 0xd8, virtual false, abstract: false, final false
inline void set_env_id(::StringW  value) ;

/// @brief Method set_external_service_name, addr 0x534e9ac, size 0xd8, virtual false, abstract: false, final false
inline void set_external_service_name(::StringW  value) ;

/// @brief Method set_id, addr 0x534df54, size 0xd8, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_last_updated_time, addr 0x534e2ac, size 0xd8, virtual false, abstract: false, final false
inline void set_last_updated_time(::StringW  value) ;

/// @brief Method set_name, addr 0x534e654, size 0xd8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_pricing_and_terms, addr 0x534e458, size 0xf0, virtual false, abstract: false, final false
inline void set_pricing_and_terms(::GlobalNamespace::SubscriptionPricingVector*  value) ;

/// @brief Method set_sku, addr 0x534e800, size 0xd8, virtual false, abstract: false, final false
inline void set_sku(::StringW  value) ;

/// @brief Method set_title_id, addr 0x534eb58, size 0xd8, virtual false, abstract: false, final false
inline void set_title_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x534dc74, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::SubscriptionCatalogItem*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionCatalogItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionCatalogItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionCatalogItem(SubscriptionCatalogItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionCatalogItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionCatalogItem(SubscriptionCatalogItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9572};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionCatalogItem, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubscriptionCatalogItem, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionCatalogItem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
