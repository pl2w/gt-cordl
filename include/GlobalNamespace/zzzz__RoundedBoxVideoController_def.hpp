#pragma once
// IWYU pragma private; include "GlobalNamespace/RoundedBoxVideoController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RoundedBoxVideoController)
namespace GlobalNamespace {
struct RoundedBoxVideoController_BoxAnimation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class RoundedBoxVideoController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoundedBoxVideoController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoundedBoxVideoController*, "", "RoundedBoxVideoController");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoundedBoxVideoController
class CORDL_TYPE RoundedBoxVideoController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BoxAnimation = ::GlobalNamespace::RoundedBoxVideoController_BoxAnimation;

/// @brief Field animationCycleDuration, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationCycleDuration, put=__cordl_internal_set_animationCycleDuration)) float_t  animationCycleDuration;

/// @brief Field animationDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationDuration, put=__cordl_internal_set_animationDuration)) float_t  animationDuration;

/// @brief Field animationTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationTime, put=__cordl_internal_set_animationTime)) float_t  animationTime;

/// @brief Field animationTimeID, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationTimeID, put=__cordl_internal_set_animationTimeID)) int32_t  animationTimeID;

/// @brief Field animations, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_animations, put=__cordl_internal_set_animations)) ::System::Collections::Generic::List_1<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>*  animations;

/// @brief Field backgroundImage, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundImage, put=__cordl_internal_set_backgroundImage)) ::UnityW<::UnityEngine::UI::Image>  backgroundImage;

/// @brief Field boxColors, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_boxColors, put=__cordl_internal_set_boxColors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  boxColors;

/// @brief Field boxes, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_boxes, put=__cordl_internal_set_boxes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  boxes;

/// @brief Field colorA, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorA, put=__cordl_internal_set_colorA)) ::UnityEngine::Color  colorA;

/// @brief Field colorAID, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorAID, put=__cordl_internal_set_colorAID)) int32_t  colorAID;

/// @brief Field colorB, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorB, put=__cordl_internal_set_colorB)) ::UnityEngine::Color  colorB;

/// @brief Field colorBID, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorBID, put=__cordl_internal_set_colorBID)) int32_t  colorBID;

/// @brief Field columnDirectionID, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_columnDirectionID, put=__cordl_internal_set_columnDirectionID)) int32_t  columnDirectionID;

/// @brief Field cycleCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleCount, put=__cordl_internal_set_cycleCount)) int32_t  cycleCount;

/// @brief Field direction, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::UnityEngine::Vector2  direction;

/// @brief Field isPlaying, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlaying, put=__cordl_internal_set_isPlaying)) bool  isPlaying;

/// @brief Field leftLabel, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftLabel, put=__cordl_internal_set_leftLabel)) ::UnityW<::TMPro::TextMeshProUGUI>  leftLabel;

/// @brief Field pauseIcon, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_pauseIcon, put=__cordl_internal_set_pauseIcon)) ::UnityW<::UnityEngine::Sprite>  pauseIcon;

/// @brief Field playIcon, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playIcon, put=__cordl_internal_set_playIcon)) ::UnityW<::UnityEngine::Sprite>  playIcon;

/// @brief Field playPauseImg, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playPauseImg, put=__cordl_internal_set_playPauseImg)) ::UnityW<::UnityEngine::UI::Image>  playPauseImg;

/// @brief Field rightLabel, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightLabel, put=__cordl_internal_set_rightLabel)) ::UnityW<::TMPro::TextMeshProUGUI>  rightLabel;

/// @brief Field rowDirectionID, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rowDirectionID, put=__cordl_internal_set_rowDirectionID)) int32_t  rowDirectionID;

/// @brief Field timeSlider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSlider, put=__cordl_internal_set_timeSlider)) ::UnityW<::UnityEngine::UI::Slider>  timeSlider;

/// @brief Method FormatTime, addr 0xa42613c, size 0x134, virtual false, abstract: false, final false
inline ::StringW FormatTime(float_t  seconds) ;

/// @brief Method LateUpdate, addr 0xa426270, size 0x2f4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::RoundedBoxVideoController* New_ctor() ;

/// @brief Method OnEnable, addr 0xa425a80, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSliderValueChange, addr 0xa4260b4, size 0x38, virtual false, abstract: false, final false
inline void OnSliderValueChange() ;

/// @brief Method SetPaused, addr 0xa426118, size 0x24, virtual false, abstract: false, final false
inline void SetPaused() ;

/// @brief Method SetPlay, addr 0xa42608c, size 0x28, virtual false, abstract: false, final false
inline void SetPlay() ;

/// @brief Method Start, addr 0xa425ccc, size 0x3c0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TogglePlayPause, addr 0xa4260ec, size 0x2c, virtual false, abstract: false, final false
inline void TogglePlayPause() ;

/// @brief Method UpdateBackgroundMaterialProperties, addr 0xa425a84, size 0x248, virtual false, abstract: false, final false
inline void UpdateBackgroundMaterialProperties() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__25_0, addr 0xa426760, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__25_0(float_t  _p0_) ;

constexpr float_t const& __cordl_internal_get_animationCycleDuration() const;

constexpr float_t& __cordl_internal_get_animationCycleDuration() ;

constexpr float_t const& __cordl_internal_get_animationDuration() const;

constexpr float_t& __cordl_internal_get_animationDuration() ;

constexpr float_t const& __cordl_internal_get_animationTime() const;

constexpr float_t& __cordl_internal_get_animationTime() ;

constexpr int32_t const& __cordl_internal_get_animationTimeID() const;

constexpr int32_t& __cordl_internal_get_animationTimeID() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>* const& __cordl_internal_get_animations() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>*& __cordl_internal_get_animations() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_backgroundImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_backgroundImage() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get_boxColors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get_boxColors() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* const& __cordl_internal_get_boxes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& __cordl_internal_get_boxes() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorA() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorA() ;

constexpr int32_t const& __cordl_internal_get_colorAID() const;

constexpr int32_t& __cordl_internal_get_colorAID() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorB() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorB() ;

constexpr int32_t const& __cordl_internal_get_colorBID() const;

constexpr int32_t& __cordl_internal_get_colorBID() ;

constexpr int32_t const& __cordl_internal_get_columnDirectionID() const;

constexpr int32_t& __cordl_internal_get_columnDirectionID() ;

constexpr int32_t const& __cordl_internal_get_cycleCount() const;

constexpr int32_t& __cordl_internal_get_cycleCount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_direction() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_direction() ;

constexpr bool const& __cordl_internal_get_isPlaying() const;

constexpr bool& __cordl_internal_get_isPlaying() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_leftLabel() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_leftLabel() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_pauseIcon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_pauseIcon() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_playIcon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_playIcon() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_playPauseImg() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_playPauseImg() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_rightLabel() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_rightLabel() ;

constexpr int32_t const& __cordl_internal_get_rowDirectionID() const;

constexpr int32_t& __cordl_internal_get_rowDirectionID() ;

constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get_timeSlider() const;

constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get_timeSlider() ;

constexpr void __cordl_internal_set_animationCycleDuration(float_t  value) ;

constexpr void __cordl_internal_set_animationDuration(float_t  value) ;

constexpr void __cordl_internal_set_animationTime(float_t  value) ;

constexpr void __cordl_internal_set_animationTimeID(int32_t  value) ;

constexpr void __cordl_internal_set_animations(::System::Collections::Generic::List_1<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>*  value) ;

constexpr void __cordl_internal_set_backgroundImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_boxColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_boxes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  value) ;

constexpr void __cordl_internal_set_colorA(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorAID(int32_t  value) ;

constexpr void __cordl_internal_set_colorB(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorBID(int32_t  value) ;

constexpr void __cordl_internal_set_columnDirectionID(int32_t  value) ;

constexpr void __cordl_internal_set_cycleCount(int32_t  value) ;

constexpr void __cordl_internal_set_direction(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_isPlaying(bool  value) ;

constexpr void __cordl_internal_set_leftLabel(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_pauseIcon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_playIcon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_playPauseImg(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_rightLabel(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_rowDirectionID(int32_t  value) ;

constexpr void __cordl_internal_set_timeSlider(::UnityW<::UnityEngine::UI::Slider>  value) ;

/// @brief Method .ctor, addr 0xa426654, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoundedBoxVideoController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxVideoController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoundedBoxVideoController(RoundedBoxVideoController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxVideoController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoundedBoxVideoController(RoundedBoxVideoController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28235};

/// @brief Field timeSlider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Slider>  ___timeSlider;

/// @brief Field animationDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___animationDuration;

/// @brief Field animationTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___animationTime;

/// @brief Field cycleCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___cycleCount;

/// @brief Field playIcon, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___playIcon;

/// @brief Field pauseIcon, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___pauseIcon;

/// @brief Field playPauseImg, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___playPauseImg;

/// @brief Field isPlaying, offset: 0x50, size: 0x1, def value: None
 bool  ___isPlaying;

/// @brief Field boxColors, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color>*  ___boxColors;

/// @brief Field boxes, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  ___boxes;

/// @brief Field animationCycleDuration, offset: 0x68, size: 0x4, def value: None
 float_t  ___animationCycleDuration;

/// [Header("Time Labels")]
/// @brief Field leftLabel, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___leftLabel;

/// @brief Field rightLabel, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___rightLabel;

/// [Header("Background Material Settings")]
/// @brief Field backgroundImage, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___backgroundImage;

/// @brief Field direction, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___direction;

/// @brief Field colorA, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorA;

/// @brief Field colorB, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorB;

/// @brief Field columnDirectionID, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___columnDirectionID;

/// @brief Field rowDirectionID, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___rowDirectionID;

/// @brief Field animationTimeID, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___animationTimeID;

/// @brief Field colorAID, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___colorAID;

/// @brief Field colorBID, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___colorBID;

/// @brief Field animations, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RoundedBoxVideoController_BoxAnimation>*  ___animations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___timeSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___animationDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___animationTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___cycleCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___playIcon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___pauseIcon) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___playPauseImg) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___isPlaying) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___boxColors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___boxes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___animationCycleDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___leftLabel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___rightLabel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___backgroundImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___direction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___colorA) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___colorB) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___columnDirectionID) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___rowDirectionID) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___animationTimeID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___colorAID) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___colorBID) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxVideoController, ___animations) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoundedBoxVideoController) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
