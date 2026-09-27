#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleComplexSelector_PseudoStateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleComplexSelector_PseudoStateData)
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Forward declare root types
namespace GlobalNamespace {
struct StyleComplexSelector_PseudoStateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StyleComplexSelector_PseudoStateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StyleComplexSelector_PseudoStateData, "UnityEngine.UIElements", "StyleComplexSelector/PseudoStateData");
// Dependencies UnityEngine.UIElements.PseudoStates
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleComplexSelector/PseudoStateData
struct CORDL_TYPE StyleComplexSelector_PseudoStateData {
public:
// Declarations
/// @brief Method .ctor, addr 0xb78dc7c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::PseudoStates  state, bool  negate) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleComplexSelector_PseudoStateData() ;

// Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None, comment: None }, CppParam { name: "negate", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr StyleComplexSelector_PseudoStateData(::UnityEngine::UIElements::PseudoStates  state, bool  negate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field state, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::UIElements::PseudoStates  state;

/// @brief Field negate, offset: 0x4, size: 0x1, def value: None
 bool  negate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StyleComplexSelector_PseudoStateData, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StyleComplexSelector_PseudoStateData, negate) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StyleComplexSelector_PseudoStateData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
