#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheet_ImportStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleSheet_ImportStruct)
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace GlobalNamespace {
struct StyleSheet_ImportStruct;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StyleSheet_ImportStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StyleSheet_ImportStruct, "UnityEngine.UIElements", "StyleSheet/ImportStruct");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheet/ImportStruct
struct CORDL_TYPE StyleSheet_ImportStruct {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StyleSheet_ImportStruct() ;

// Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None, comment: None }, CppParam { name: "mediaQueries", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr StyleSheet_ImportStruct(::UnityW<::UnityEngine::UIElements::StyleSheet>  styleSheet, ::ArrayW<::StringW>  mediaQueries) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field styleSheet, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  styleSheet;

/// @brief Field mediaQueries, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  mediaQueries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StyleSheet_ImportStruct, styleSheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StyleSheet_ImportStruct, mediaQueries) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StyleSheet_ImportStruct) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
