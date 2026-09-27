#pragma once
// IWYU pragma private; include "GlobalNamespace/RoundedBoxVideoController_BoxAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RoundedBoxVideoController_BoxAnimation)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
struct RoundedBoxVideoController_BoxAnimation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, "", "RoundedBoxVideoController/BoxAnimation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoundedBoxVideoController/BoxAnimation
struct CORDL_TYPE RoundedBoxVideoController_BoxAnimation {
public:
// Declarations
/// @brief Method SetColor, addr 0xa426564, size 0x20, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Update, addr 0xa426584, size 0xd0, virtual false, abstract: false, final false
inline void Update(float_t  animationTime) ;

// Ctor Parameters []
// @brief default ctor
constexpr RoundedBoxVideoController_BoxAnimation() ;

// Ctor Parameters [CppParam { name: "rectTransform", ty: "::UnityW<::UnityEngine::RectTransform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "image", ty: "::UnityW<::UnityEngine::UI::Image>", modifiers: "", def_value: None, comment: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "animationMaxHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startVelocity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "acceleration", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr RoundedBoxVideoController_BoxAnimation(::UnityW<::UnityEngine::RectTransform>  rectTransform, ::UnityW<::UnityEngine::UI::Image>  image, float_t  duration, float_t  startHeight, float_t  animationMaxHeight, float_t  startVelocity, float_t  startTime, float_t  acceleration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field rectTransform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  rectTransform;

/// @brief Field image, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  image;

/// @brief Field duration, offset: 0x10, size: 0x4, def value: None
 float_t  duration;

/// @brief Field startHeight, offset: 0x14, size: 0x4, def value: None
 float_t  startHeight;

/// @brief Field animationMaxHeight, offset: 0x18, size: 0x4, def value: None
 float_t  animationMaxHeight;

/// @brief Field startVelocity, offset: 0x1c, size: 0x4, def value: None
 float_t  startVelocity;

/// @brief Field startTime, offset: 0x20, size: 0x4, def value: None
 float_t  startTime;

/// @brief Field acceleration, offset: 0x24, size: 0x4, def value: None
 float_t  acceleration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, rectTransform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, image) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, startHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, animationMaxHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, startVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, startTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation, acceleration) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoundedBoxVideoController_BoxAnimation) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
