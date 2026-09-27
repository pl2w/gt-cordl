#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Samples/PoseCaptureCountdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PoseCaptureCountdown)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Samples {
class PoseCaptureCountdown;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*, "Oculus.Interaction.Body.Samples", "PoseCaptureCountdown");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Body::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Samples.PoseCaptureCountdown
class CORDL_TYPE PoseCaptureCountdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _countdownText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__countdownText, put=__cordl_internal_set__countdownText)) ::UnityW<::TMPro::TextMeshProUGUI>  _countdownText;

/// @brief Field _poseText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseText, put=__cordl_internal_set__poseText)) ::StringW  _poseText;

/// @brief Field _renderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _resetColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__resetColor, put=__cordl_internal_set__resetColor)) ::UnityEngine::Color  _resetColor;

/// @brief Field _timeUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeUp, put=__cordl_internal_set__timeUp)) ::UnityEngine::Events::UnityEvent*  _timeUp;

/// @brief Field _timer, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__timer, put=__cordl_internal_set__timer)) float_t  _timer;

/// @brief Field _timerSecondTick, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__timerSecondTick, put=__cordl_internal_set__timerSecondTick)) ::UnityEngine::Events::UnityEvent*  _timerSecondTick;

/// @brief Field _timerStart, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timerStart, put=__cordl_internal_set__timerStart)) ::UnityEngine::Events::UnityEvent*  _timerStart;

/// @brief Field duration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

static inline ::Oculus::Interaction::Body::Samples::PoseCaptureCountdown* New_ctor() ;

/// @brief Method Restart, addr 0xa435520, size 0xb0, virtual false, abstract: false, final false
inline void Restart() ;

/// @brief Method Update, addr 0xa4355d0, size 0x11c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__countdownText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__countdownText() ;

constexpr ::StringW const& __cordl_internal_get__poseText() const;

constexpr ::StringW& __cordl_internal_get__poseText() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__resetColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__resetColor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__timeUp() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__timeUp() ;

constexpr float_t const& __cordl_internal_get__timer() const;

constexpr float_t& __cordl_internal_get__timer() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__timerSecondTick() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__timerSecondTick() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__timerStart() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__timerStart() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr void __cordl_internal_set__countdownText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__poseText(::StringW  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__resetColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__timeUp(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__timer(float_t  value) ;

constexpr void __cordl_internal_set__timerSecondTick(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__timerStart(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

/// @brief Method .ctor, addr 0xa4356ec, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseCaptureCountdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseCaptureCountdown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseCaptureCountdown(PoseCaptureCountdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseCaptureCountdown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseCaptureCountdown(PoseCaptureCountdown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28291};

/// [SerializeField]
/// @brief Field _timerStart, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____timerStart;

/// [SerializeField]
/// @brief Field _timerSecondTick, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____timerSecondTick;

/// [SerializeField]
/// @brief Field _timeUp, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____timeUp;

/// [SerializeField]
/// @brief Field _countdownText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____countdownText;

/// [SerializeField]
/// @brief Field _poseText, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____poseText;

/// [SerializeField]
/// @brief Field duration, offset: 0x48, size: 0x4, def value: None
 float_t  ___duration;

/// [SerializeField]
/// [Optional]
/// @brief Field _renderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// [Optional]
/// @brief Field _resetColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____resetColor;

/// @brief Field _timer, offset: 0x68, size: 0x4, def value: None
 float_t  ____timer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____timerStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____timerSecondTick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____timeUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____countdownText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____poseText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ___duration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____renderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____resetColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown, ____timer) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Samples::PoseCaptureCountdown) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Samples
