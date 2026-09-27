#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSelectorHelper_SelectorWorkItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleSheet_OrderedSelectorType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleSelectorHelper_SelectorWorkItem)
namespace GlobalNamespace {
struct StyleSheet_OrderedSelectorType;
}
// Forward declare root types
namespace GlobalNamespace {
struct StyleSelectorHelper_SelectorWorkItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem, "UnityEngine.UIElements.StyleSheets", "StyleSelectorHelper/SelectorWorkItem");
// Dependencies UnityEngine.UIElements.StyleSheet::OrderedSelectorType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSelectorHelper/SelectorWorkItem
struct CORDL_TYPE StyleSelectorHelper_SelectorWorkItem {
public:
// Declarations
/// @brief Method .ctor, addr 0xb8150c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::StyleSheet_OrderedSelectorType  type, ::StringW  input) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleSelectorHelper_SelectorWorkItem() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::StyleSheet_OrderedSelectorType", modifiers: "", def_value: None, comment: None }, CppParam { name: "input", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr StyleSelectorHelper_SelectorWorkItem(::GlobalNamespace::StyleSheet_OrderedSelectorType  type, ::StringW  input) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8697};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::StyleSheet_OrderedSelectorType  type;

/// @brief Field input, offset: 0x8, size: 0x8, def value: None
 ::StringW  input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem, input) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
