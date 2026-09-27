#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreBundle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreBundle)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
class NexusCreatorCode;
}
namespace GorillaNetworking::Store {
class BundleStand;
}
namespace GorillaNetworking::Store {
class StoreBundleData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreBundle;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreBundle*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreBundle*, "GorillaNetworking.Store", "StoreBundle");
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreBundle
class CORDL_TYPE StoreBundle : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EffectivePrice)) ::StringW  EffectivePrice;

 __declspec(property(get=get_HasGTFCPrice)) bool  HasGTFCPrice;

 __declspec(property(get=get_HasPrice)) bool  HasPrice;

/// @brief Field _bundleName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bundleName, put=__cordl_internal_set__bundleName)) ::StringW  _bundleName;

/// @brief Field _gtfcPrice, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__gtfcPrice, put=__cordl_internal_set__gtfcPrice)) ::StringW  _gtfcPrice;

/// @brief Field _price, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__price, put=__cordl_internal_set__price)) ::StringW  _price;

/// @brief Field _storeBundleDataReference, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__storeBundleDataReference, put=__cordl_internal_set__storeBundleDataReference)) ::UnityW<::GorillaNetworking::Store::StoreBundleData>  _storeBundleDataReference;

 __declspec(property(get=get_bundleDescriptionText)) ::StringW  bundleDescriptionText;

 __declspec(property(get=get_bundleImage)) ::UnityW<::UnityEngine::Sprite>  bundleImage;

 __declspec(property(get=get_bundleName)) ::StringW  bundleName;

 __declspec(property(get=get_bundleSKU)) ::StringW  bundleSKU;

/// @brief Field bundleStands, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleStands, put=__cordl_internal_set_bundleStands)) ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::BundleStand>>*  bundleStands;

/// @brief Field defaultCurrencySymbol, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultCurrencySymbol, put=setStaticF_defaultCurrencySymbol)) ::StringW  defaultCurrencySymbol;

/// @brief Field defaultPrice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultPrice, put=setStaticF_defaultPrice)) ::StringW  defaultPrice;

 __declspec(property(get=get_gtfcPrice)) ::StringW  gtfcPrice;

/// @brief Field isOwned, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOwned, put=__cordl_internal_set_isOwned)) bool  isOwned;

 __declspec(property(get=get_nexusCreatorCode)) ::UnityW<::GlobalNamespace::NexusCreatorCode>  nexusCreatorCode;

 __declspec(property(get=get_playfabBundleID)) ::StringW  playfabBundleID;

 __declspec(property(get=get_price)) ::StringW  price;

/// @brief Field purchaseButtonStringFormat, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseButtonStringFormat, put=__cordl_internal_set_purchaseButtonStringFormat)) ::StringW  purchaseButtonStringFormat;

/// @brief Field purchaseButtonText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseButtonText, put=__cordl_internal_set_purchaseButtonText)) ::StringW  purchaseButtonText;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5ca42d4, size 0x100, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method InitializebundleStands, addr 0x5ca43d4, size 0x14c, virtual false, abstract: false, final false
inline void InitializebundleStands() ;

static inline ::GorillaNetworking::Store::StoreBundle* New_ctor() ;

static inline ::GorillaNetworking::Store::StoreBundle* New_ctor(::GorillaNetworking::Store::StoreBundleData*  data) ;

/// @brief Method TryUpdateGtfcPrice, addr 0x5ca6e04, size 0x80, virtual false, abstract: false, final false
inline void TryUpdateGtfcPrice(::StringW  bundlePrice) ;

/// @brief Method TryUpdateGtfcPrice, addr 0x5ca8dd0, size 0xe0, virtual false, abstract: false, final false
inline void TryUpdateGtfcPrice(uint32_t  bundlePrice) ;

/// @brief Method TryUpdatePrice, addr 0x5ca6c84, size 0x80, virtual false, abstract: false, final false
inline void TryUpdatePrice(::StringW  bundlePrice) ;

/// @brief Method TryUpdatePrice, addr 0x5ca8838, size 0xe0, virtual false, abstract: false, final false
inline void TryUpdatePrice(uint32_t  bundlePrice) ;

/// @brief Method UpdatePurchaseButtonText, addr 0x5ca89f4, size 0x3dc, virtual false, abstract: false, final false
inline void UpdatePurchaseButtonText() ;

/// @brief Method ValidateBundleData, addr 0x5ca464c, size 0x42c, virtual false, abstract: false, final false
inline void ValidateBundleData() ;

/// @brief Method WithCurrencySymbol, addr 0x5ca8918, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW WithCurrencySymbol(::StringW  bundlePrice) ;

constexpr ::StringW const& __cordl_internal_get__bundleName() const;

constexpr ::StringW& __cordl_internal_get__bundleName() ;

constexpr ::StringW const& __cordl_internal_get__gtfcPrice() const;

constexpr ::StringW& __cordl_internal_get__gtfcPrice() ;

constexpr ::StringW const& __cordl_internal_get__price() const;

constexpr ::StringW& __cordl_internal_get__price() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& __cordl_internal_get__storeBundleDataReference() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& __cordl_internal_get__storeBundleDataReference() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::BundleStand>>* const& __cordl_internal_get_bundleStands() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::BundleStand>>*& __cordl_internal_get_bundleStands() ;

constexpr bool const& __cordl_internal_get_isOwned() const;

constexpr bool& __cordl_internal_get_isOwned() ;

constexpr ::StringW const& __cordl_internal_get_purchaseButtonStringFormat() const;

constexpr ::StringW& __cordl_internal_get_purchaseButtonStringFormat() ;

constexpr ::StringW const& __cordl_internal_get_purchaseButtonText() const;

constexpr ::StringW& __cordl_internal_get_purchaseButtonText() ;

constexpr void __cordl_internal_set__bundleName(::StringW  value) ;

constexpr void __cordl_internal_set__gtfcPrice(::StringW  value) ;

constexpr void __cordl_internal_set__price(::StringW  value) ;

constexpr void __cordl_internal_set__storeBundleDataReference(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value) ;

constexpr void __cordl_internal_set_bundleStands(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::BundleStand>>*  value) ;

constexpr void __cordl_internal_set_isOwned(bool  value) ;

constexpr void __cordl_internal_set_purchaseButtonStringFormat(::StringW  value) ;

constexpr void __cordl_internal_set_purchaseButtonText(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ca8640, size 0x1f8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5ca593c, size 0x214, virtual false, abstract: false, final false
inline void _ctor(::GorillaNetworking::Store::StoreBundleData*  data) ;

/// [CompilerGenerated]
/// @brief Method <get_bundleName>b__27_0, addr 0x5ca8f48, size 0x20, virtual false, abstract: false, final false
inline bool _get_bundleName_b__27_0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

static inline ::StringW getStaticF_defaultCurrencySymbol() ;

static inline ::StringW getStaticF_defaultPrice() ;

/// @brief Method get_EffectivePrice, addr 0x5ca83a0, size 0x78, virtual false, abstract: false, final false
inline ::StringW get_EffectivePrice() ;

/// @brief Method get_HasGTFCPrice, addr 0x5ca8380, size 0x20, virtual false, abstract: false, final false
inline bool get_HasGTFCPrice() ;

/// @brief Method get_HasPrice, addr 0x5ca700c, size 0x88, virtual false, abstract: false, final false
inline bool get_HasPrice() ;

/// @brief Method get_bundleDescriptionText, addr 0x5ca8628, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_bundleDescriptionText() ;

/// @brief Method get_bundleImage, addr 0x5ca8340, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_bundleImage() ;

/// @brief Method get_bundleName, addr 0x5ca8418, size 0x210, virtual false, abstract: false, final false
inline ::StringW get_bundleName() ;

/// @brief Method get_bundleSKU, addr 0x5ca5b50, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_bundleSKU() ;

/// @brief Method get_gtfcPrice, addr 0x5ca8378, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_gtfcPrice() ;

/// @brief Method get_nexusCreatorCode, addr 0x5ca8358, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::NexusCreatorCode> get_nexusCreatorCode() ;

/// @brief Method get_playfabBundleID, addr 0x5ca5924, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_playfabBundleID() ;

/// @brief Method get_price, addr 0x5ca8370, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_price() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_defaultCurrencySymbol(::StringW  value) ;

static inline void setStaticF_defaultPrice(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreBundle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreBundle(StoreBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreBundle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreBundle(StoreBundle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4428};

/// @brief Field purchaseButtonStringFormat, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___purchaseButtonStringFormat;

/// [SerializeField]
/// @brief Field bundleStands, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::BundleStand>>*  ___bundleStands;

/// @brief Field isOwned, offset: 0x20, size: 0x1, def value: None
 bool  ___isOwned;

/// @brief Field _price, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____price;

/// @brief Field _gtfcPrice, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____gtfcPrice;

/// @brief Field _bundleName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____bundleName;

/// @brief Field purchaseButtonText, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___purchaseButtonText;

/// [FormerlySerializedAs("storeBundleDataReference")]
/// [SerializeField]
/// [ReadOnly]
/// @brief Field _storeBundleDataReference, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreBundleData>  ____storeBundleDataReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ___purchaseButtonStringFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ___bundleStands) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ___isOwned) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ____price) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ____gtfcPrice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ____bundleName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ___purchaseButtonText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundle, ____storeBundleDataReference) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreBundle) == 0x50, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
