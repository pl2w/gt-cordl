#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreBundleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StoreBundleData)
namespace GlobalNamespace {
class NexusCreatorCode;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreBundleData;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreBundleData*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreBundleData*, "GorillaNetworking.Store", "StoreBundleData");
// Dependencies UnityEngine.ScriptableObject
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreBundleData
class CORDL_TYPE StoreBundleData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field bundleDescriptionText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleDescriptionText, put=__cordl_internal_set_bundleDescriptionText)) ::StringW  bundleDescriptionText;

/// @brief Field bundleImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleImage, put=__cordl_internal_set_bundleImage)) ::UnityW<::UnityEngine::Sprite>  bundleImage;

/// @brief Field bundleSKU, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundleSKU, put=__cordl_internal_set_bundleSKU)) ::StringW  bundleSKU;

/// @brief Field creatorCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCode, put=__cordl_internal_set_creatorCode)) ::UnityW<::GlobalNamespace::NexusCreatorCode>  creatorCode;

/// @brief Field playfabBundleID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabBundleID, put=__cordl_internal_set_playfabBundleID)) ::StringW  playfabBundleID;

static inline ::GorillaNetworking::Store::StoreBundleData* New_ctor() ;

/// @brief Method OnValidate, addr 0x5ca9010, size 0x134, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::StringW const& __cordl_internal_get_bundleDescriptionText() const;

constexpr ::StringW& __cordl_internal_get_bundleDescriptionText() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_bundleImage() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_bundleImage() ;

constexpr ::StringW const& __cordl_internal_get_bundleSKU() const;

constexpr ::StringW& __cordl_internal_get_bundleSKU() ;

constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode> const& __cordl_internal_get_creatorCode() const;

constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode>& __cordl_internal_get_creatorCode() ;

constexpr ::StringW const& __cordl_internal_get_playfabBundleID() const;

constexpr ::StringW& __cordl_internal_get_playfabBundleID() ;

constexpr void __cordl_internal_set_bundleDescriptionText(::StringW  value) ;

constexpr void __cordl_internal_set_bundleImage(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_bundleSKU(::StringW  value) ;

constexpr void __cordl_internal_set_creatorCode(::UnityW<::GlobalNamespace::NexusCreatorCode>  value) ;

constexpr void __cordl_internal_set_playfabBundleID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ca8f68, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreBundleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreBundleData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreBundleData(StoreBundleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreBundleData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreBundleData(StoreBundleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4429};

/// @brief Field playfabBundleID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___playfabBundleID;

/// @brief Field bundleSKU, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___bundleSKU;

/// @brief Field creatorCode, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NexusCreatorCode>  ___creatorCode;

/// @brief Field bundleImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___bundleImage;

/// @brief Field bundleDescriptionText, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___bundleDescriptionText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreBundleData, ___playfabBundleID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundleData, ___bundleSKU) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundleData, ___creatorCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundleData, ___bundleImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreBundleData, ___bundleDescriptionText) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreBundleData) == 0x40, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
