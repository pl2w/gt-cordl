#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_Values`1_TimingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyAnimationSystem_Values`1_TimingData)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Values_1_StylePropertyAnimationSystem_TimingData;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Values_1_StylePropertyAnimationSystem_TimingData);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Values_1_StylePropertyAnimationSystem_TimingData, "UnityEngine.UIElements", "StylePropertyAnimationSystem/Values`1/TimingData");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<T>
struct CORDL_TYPE Values_1_StylePropertyAnimationSystem_TimingData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Values_1_StylePropertyAnimationSystem_TimingData() ;

// Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Values_1_StylePropertyAnimationSystem_TimingData(int64_t  startTimeMs, int32_t  durationMs, ::System::Func_2<float_t,float_t>*  easingCurve, float_t  easedProgress, float_t  reversingShorteningFactor, bool  isStarted, int32_t  delayMs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8233};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field startTimeMs, offset: 0x0, size: 0x8, def value: None
 int64_t  startTimeMs;

/// @brief Field durationMs, offset: 0x8, size: 0x4, def value: None
 int32_t  durationMs;

/// @brief Field easingCurve, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<float_t,float_t>*  easingCurve;

/// @brief Field easedProgress, offset: 0x18, size: 0x4, def value: None
 float_t  easedProgress;

/// @brief Field reversingShorteningFactor, offset: 0x1c, size: 0x4, def value: None
 float_t  reversingShorteningFactor;

/// @brief Field isStarted, offset: 0x20, size: 0x1, def value: None
 bool  isStarted;

/// @brief Field delayMs, offset: 0x24, size: 0x4, def value: None
 int32_t  delayMs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
