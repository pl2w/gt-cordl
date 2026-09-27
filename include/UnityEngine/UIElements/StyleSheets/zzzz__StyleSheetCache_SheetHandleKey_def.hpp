#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetCache_SheetHandleKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheetCache_SheetHandleKey)
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace GlobalNamespace {
struct StyleSheetCache_SheetHandleKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StyleSheetCache_SheetHandleKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StyleSheetCache_SheetHandleKey, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache/SheetHandleKey
struct CORDL_TYPE StyleSheetCache_SheetHandleKey {
public:
// Declarations
/// @brief Method .ctor, addr 0xb8150d0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::StyleSheet*  sheet, int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleSheetCache_SheetHandleKey() ;

// Ctor Parameters [CppParam { name: "sheetInstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StyleSheetCache_SheetHandleKey(int32_t  sheetInstanceID, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field sheetInstanceID, offset: 0x0, size: 0x4, def value: None
 int32_t  sheetInstanceID;

/// @brief Field index, offset: 0x4, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StyleSheetCache_SheetHandleKey, sheetInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StyleSheetCache_SheetHandleKey, index) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StyleSheetCache_SheetHandleKey) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
