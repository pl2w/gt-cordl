#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimationController_ControlledAnimationKeyframeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaEventAnimationController_ControlledAnimationKeyframeData)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaEventAnimationController_ControlledAnimationKeyframeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData, "", "GorillaEventAnimationController/ControlledAnimationKeyframeData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaEventAnimationController/ControlledAnimationKeyframeData
struct CORDL_TYPE GorillaEventAnimationController_ControlledAnimationKeyframeData {
public:
// Declarations
/// @brief Method .ctor, addr 0x57f6208, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  _index, float_t  _time, float_t  _startOffset, bool  _animEnabled) ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaEventAnimationController_ControlledAnimationKeyframeData() ;

// Ctor Parameters [CppParam { name: "animationClipIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startOffset", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "animEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GorillaEventAnimationController_ControlledAnimationKeyframeData(int32_t  animationClipIndex, float_t  startTime, float_t  startOffset, bool  animEnabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field animationClipIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  animationClipIndex;

/// @brief Field startTime, offset: 0x4, size: 0x4, def value: None
 float_t  startTime;

/// @brief Field startOffset, offset: 0x8, size: 0x4, def value: None
 float_t  startOffset;

/// @brief Field animEnabled, offset: 0xc, size: 0x1, def value: None
 bool  animEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData, animationClipIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData, startTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData, startOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData, animEnabled) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
