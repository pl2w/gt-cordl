#pragma once
// IWYU pragma private; include "TMPro/TMP_DynamicFontAssetUtilities_FontReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_DynamicFontAssetUtilities_FontReference)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_DynamicFontAssetUtilities_FontReference;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference, "TMPro", "TMP_DynamicFontAssetUtilities/FontReference");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_DynamicFontAssetUtilities/FontReference
struct CORDL_TYPE TMP_DynamicFontAssetUtilities_FontReference {
public:
// Declarations
/// @brief Method .ctor, addr 0xb359ba4, size 0x294, virtual false, abstract: false, final false
inline void _ctor(::StringW  fontFilePath, ::StringW  faceNameAndStyle, int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr TMP_DynamicFontAssetUtilities_FontReference() ;

// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "hashCode", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_DynamicFontAssetUtilities_FontReference(::StringW  familyName, ::StringW  styleName, int32_t  faceIndex, ::StringW  filePath, uint64_t  hashCode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field familyName, offset: 0x0, size: 0x8, def value: None
 ::StringW  familyName;

/// @brief Field styleName, offset: 0x8, size: 0x8, def value: None
 ::StringW  styleName;

/// @brief Field faceIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  faceIndex;

/// @brief Field filePath, offset: 0x18, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field hashCode, offset: 0x20, size: 0x8, def value: None
 uint64_t  hashCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference, familyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference, styleName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference, faceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference, filePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference, hashCode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
