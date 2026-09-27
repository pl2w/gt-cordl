#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Recorder/TimerUIControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimerUIControl)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Recorder {
class TimerUIControl;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl*, "Oculus.Interaction.HandGrab.Recorder", "TimerUIControl");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::HandGrab::Recorder {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Recorder.TimerUIControl
class CORDL_TYPE TimerUIControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_DelaySeconds, put=set_DelaySeconds)) int32_t  DelaySeconds;

/// @brief Field _delaySeconds, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__delaySeconds, put=__cordl_internal_set__delaySeconds)) int32_t  _delaySeconds;

/// @brief Field _lessButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lessButton, put=__cordl_internal_set__lessButton)) ::UnityW<::UnityEngine::UI::Button>  _lessButton;

/// @brief Field _maxSeconds, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSeconds, put=__cordl_internal_set__maxSeconds)) int32_t  _maxSeconds;

/// @brief Field _moreButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__moreButton, put=__cordl_internal_set__moreButton)) ::UnityW<::UnityEngine::UI::Button>  _moreButton;

/// @brief Field _timerLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timerLabel, put=__cordl_internal_set__timerLabel)) ::UnityW<::TMPro::TextMeshProUGUI>  _timerLabel;

/// @brief Method DecreaseTime, addr 0xa43404c, size 0x20, virtual false, abstract: false, final false
inline void DecreaseTime() ;

/// @brief Method IncreaseTime, addr 0xa43402c, size 0x20, virtual false, abstract: false, final false
inline void IncreaseTime() ;

static inline ::Oculus::Interaction::HandGrab::Recorder::TimerUIControl* New_ctor() ;

/// @brief Method OnDisable, addr 0xa433f3c, size 0xe8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa433e54, size 0xe8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa434024, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateDisplay, addr 0xa433d84, size 0xd0, virtual false, abstract: false, final false
inline void UpdateDisplay(int32_t  seconds) ;

constexpr int32_t const& __cordl_internal_get__delaySeconds() const;

constexpr int32_t& __cordl_internal_get__delaySeconds() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__lessButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__lessButton() ;

constexpr int32_t const& __cordl_internal_get__maxSeconds() const;

constexpr int32_t& __cordl_internal_get__maxSeconds() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__moreButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__moreButton() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__timerLabel() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__timerLabel() ;

constexpr void __cordl_internal_set__delaySeconds(int32_t  value) ;

constexpr void __cordl_internal_set__lessButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__maxSeconds(int32_t  value) ;

constexpr void __cordl_internal_set__moreButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__timerLabel(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0xa43406c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DelaySeconds, addr 0xa433d60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DelaySeconds() ;

/// @brief Method set_DelaySeconds, addr 0xa433d68, size 0x1c, virtual false, abstract: false, final false
inline void set_DelaySeconds(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerUIControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerUIControl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerUIControl(TimerUIControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerUIControl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerUIControl(TimerUIControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28285};

/// [SerializeField]
/// @brief Field _timerLabel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____timerLabel;

/// [SerializeField]
/// @brief Field _delaySeconds, offset: 0x28, size: 0x4, def value: None
 int32_t  ____delaySeconds;

/// [SerializeField]
/// @brief Field _maxSeconds, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____maxSeconds;

/// [SerializeField]
/// @brief Field _moreButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____moreButton;

/// [SerializeField]
/// @brief Field _lessButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____lessButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl, ____timerLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl, ____delaySeconds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl, ____maxSeconds) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl, ____moreButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl, ____lessButton) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Recorder::TimerUIControl) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Recorder
