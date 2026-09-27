#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_Values`1_StyleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem_Values`1_StyleData)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Values_1_StylePropertyAnimationSystem_StyleData;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Values_1_StylePropertyAnimationSystem_StyleData);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Values_1_StylePropertyAnimationSystem_StyleData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/StyleData");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<T>
struct CORDL_TYPE Values_1_StylePropertyAnimationSystem_StyleData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Values_1_StylePropertyAnimationSystem_StyleData() ;

// Ctor Parameters [CppParam { name: "startValue", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "endValue", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "reversingAdjustedStartValue", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentValue", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr Values_1_StylePropertyAnimationSystem_StyleData(T  startValue, T  endValue, T  reversingAdjustedStartValue, T  currentValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field startValue, offset: 0x0, size: 0x8, def value: None
 T  startValue;

/// @brief Field endValue, offset: 0x8, size: 0x8, def value: None
 T  endValue;

/// @brief Field reversingAdjustedStartValue, offset: 0x10, size: 0x8, def value: None
 T  reversingAdjustedStartValue;

/// @brief Field currentValue, offset: 0x18, size: 0x8, def value: None
 T  currentValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
