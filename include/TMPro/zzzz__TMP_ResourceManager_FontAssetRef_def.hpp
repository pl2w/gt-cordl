#pragma once
// IWYU pragma private; include "TMPro/TMP_ResourceManager_FontAssetRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ResourceManager_FontAssetRef)
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct TMP_ResourceManager_FontAssetRef;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_ResourceManager_FontAssetRef);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_ResourceManager_FontAssetRef, "TMPro", "TMP_ResourceManager/FontAssetRef");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_ResourceManager/FontAssetRef
struct CORDL_TYPE TMP_ResourceManager_FontAssetRef {
public:
// Declarations
/// @brief Method .ctor, addr 0xb39d72c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, ::TMPro::TMP_FontAsset*  fontAsset) ;

// Ctor Parameters []
// @brief default ctor
constexpr TMP_ResourceManager_FontAssetRef() ;

// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None, comment: None }]
constexpr TMP_ResourceManager_FontAssetRef(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, int64_t  familyNameAndStyleHashCode, ::UnityW<::TMPro::TMP_FontAsset>  fontAsset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22994};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field nameHashCode, offset: 0x0, size: 0x4, def value: None
 int32_t  nameHashCode;

/// @brief Field familyNameHashCode, offset: 0x4, size: 0x4, def value: None
 int32_t  familyNameHashCode;

/// @brief Field styleNameHashCode, offset: 0x8, size: 0x4, def value: None
 int32_t  styleNameHashCode;

/// @brief Field familyNameAndStyleHashCode, offset: 0x10, size: 0x8, def value: None
 int64_t  familyNameAndStyleHashCode;

/// @brief Field fontAsset, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  fontAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_ResourceManager_FontAssetRef, nameHashCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_ResourceManager_FontAssetRef, familyNameHashCode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_ResourceManager_FontAssetRef, styleNameHashCode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_ResourceManager_FontAssetRef, familyNameAndStyleHashCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_ResourceManager_FontAssetRef, fontAsset) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_ResourceManager_FontAssetRef) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
