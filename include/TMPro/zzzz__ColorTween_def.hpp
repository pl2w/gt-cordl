#pragma once
// IWYU pragma private; include "TMPro/ColorTween.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__ColorTween_ColorTweenMode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ColorTween)
namespace GlobalNamespace {
struct ColorTween_ColorTweenMode;
}
namespace TMPro {
class ColorTween_ColorTweenCallback;
}
namespace TMPro {
class ITweenValue;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace TMPro {
class ColorTween_ColorTweenCallback;
}
namespace TMPro {
struct ColorTween;
}
// Write type traits
MARK_REF_T(::TMPro::ColorTween_ColorTweenCallback*);
MARK_VAL_T(::TMPro::ColorTween);
DEFINE_IL2CPP_CLASS(::TMPro::ColorTween_ColorTweenCallback*, "TMPro", "ColorTween/ColorTweenCallback");
DEFINE_IL2CPP_CLASS(::TMPro::ColorTween, "TMPro", "ColorTween");
// Dependencies TMPro.ColorTween::ColorTweenMode, UnityEngine.Color
namespace TMPro {
// Is value type: true
// CS Name: TMPro.ColorTween
struct CORDL_TYPE ColorTween {
public:
// Declarations
using ColorTweenMode = ::GlobalNamespace::ColorTween_ColorTweenMode;

using ColorTweenCallback = ::TMPro::ColorTween_ColorTweenCallback;

 __declspec(property(get=get_duration, put=set_duration)) float_t  duration;

 __declspec(property(get=get_ignoreTimeScale, put=set_ignoreTimeScale)) bool  ignoreTimeScale;

 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::Color  startColor;

 __declspec(property(get=get_targetColor, put=set_targetColor)) ::UnityEngine::Color  targetColor;

 __declspec(property(get=get_tweenMode, put=set_tweenMode)) ::GlobalNamespace::ColorTween_ColorTweenMode  tweenMode;

/// @brief Convert operator to "::TMPro::ITweenValue"
constexpr operator  ::TMPro::ITweenValue*() ;

/// @brief Method AddOnChangedCallback, addr 0xb352ff8, size 0x94, virtual false, abstract: false, final false
inline void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  callback) ;

/// @brief Method GetDuration, addr 0xb3530dc, size 0x8, virtual false, abstract: false, final false
inline float_t GetDuration() ;

/// @brief Method GetIgnoreTimescale, addr 0xb3530d4, size 0x8, virtual false, abstract: false, final false
inline bool GetIgnoreTimescale() ;

/// @brief Method TweenValue, addr 0xb352f10, size 0xd8, virtual true, abstract: false, final true
inline void TweenValue(float_t  floatPercentage) ;

/// @brief Method ValidTarget, addr 0xb352fe8, size 0x10, virtual true, abstract: false, final true
inline bool ValidTarget() ;

/// @brief Method get_duration, addr 0xb352ef0, size 0x8, virtual true, abstract: false, final true
inline float_t get_duration() ;

/// @brief Method get_ignoreTimeScale, addr 0xb352f00, size 0x8, virtual true, abstract: false, final true
inline bool get_ignoreTimeScale() ;

/// @brief Method get_startColor, addr 0xb352eb0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_startColor() ;

/// @brief Method get_targetColor, addr 0xb352ec8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_targetColor() ;

/// @brief Method get_tweenMode, addr 0xb352ee0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ColorTween_ColorTweenMode get_tweenMode() ;

/// @brief Convert to "::TMPro::ITweenValue"
constexpr ::TMPro::ITweenValue* i___TMPro__ITweenValue() ;

/// @brief Method set_duration, addr 0xb352ef8, size 0x8, virtual false, abstract: false, final false
inline void set_duration(float_t  value) ;

/// @brief Method set_ignoreTimeScale, addr 0xb352f08, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreTimeScale(bool  value) ;

/// @brief Method set_startColor, addr 0xb352ebc, size 0xc, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method set_targetColor, addr 0xb352ed4, size 0xc, virtual false, abstract: false, final false
inline void set_targetColor(::UnityEngine::Color  value) ;

/// @brief Method set_tweenMode, addr 0xb352ee8, size 0x8, virtual false, abstract: false, final false
inline void set_tweenMode(::GlobalNamespace::ColorTween_ColorTweenMode  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ColorTween() ;

// Ctor Parameters [CppParam { name: "m_Target", ty: "::TMPro::ColorTween_ColorTweenCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TargetColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TweenMode", ty: "::GlobalNamespace::ColorTween_ColorTweenMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ColorTween(::TMPro::ColorTween_ColorTweenCallback*  m_Target, ::UnityEngine::Color  m_StartColor, ::UnityEngine::Color  m_TargetColor, ::GlobalNamespace::ColorTween_ColorTweenMode  m_TweenMode, float_t  m_Duration, bool  m_IgnoreTimeScale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Target, offset: 0x0, size: 0x8, def value: None
 ::TMPro::ColorTween_ColorTweenCallback*  m_Target;

/// @brief Field m_StartColor, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Color  m_StartColor;

/// @brief Field m_TargetColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  m_TargetColor;

/// @brief Field m_TweenMode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ColorTween_ColorTweenMode  m_TweenMode;

/// @brief Field m_Duration, offset: 0x2c, size: 0x4, def value: None
 float_t  m_Duration;

/// @brief Field m_IgnoreTimeScale, offset: 0x30, size: 0x1, def value: None
 bool  m_IgnoreTimeScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::ColorTween, m_Target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::ColorTween, m_StartColor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::ColorTween, m_TargetColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::ColorTween, m_TweenMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::ColorTween, m_Duration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::ColorTween, m_IgnoreTimeScale) == 0x30, "Offset mismatch!");

static_assert(sizeof(::TMPro::ColorTween) == 0x38, "Size mismatch!");

} // namespace end def TMPro
// Dependencies UnityEngine.Color, UnityEngine.Events.UnityEvent`1<T0>
namespace TMPro {
// Is value type: false
// CS Name: TMPro.ColorTween/ColorTweenCallback
class CORDL_TYPE ColorTween_ColorTweenCallback : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color> {
public:
// Declarations
static inline ::TMPro::ColorTween_ColorTweenCallback* New_ctor() ;

/// @brief Method .ctor, addr 0xb35308c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorTween_ColorTweenCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorTween_ColorTweenCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorTween_ColorTweenCallback(ColorTween_ColorTweenCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorTween_ColorTweenCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorTween_ColorTweenCallback(ColorTween_ColorTweenCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::ColorTween_ColorTweenCallback) == 0x30, "Size mismatch!");

} // namespace end def TMPro
