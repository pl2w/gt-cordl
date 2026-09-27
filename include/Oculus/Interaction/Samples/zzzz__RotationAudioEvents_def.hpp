#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/RotationAudioEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Samples/zzzz__RotationAudioEvents_Direction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationAudioEvents)
namespace GlobalNamespace {
struct RotationAudioEvents_Direction;
}
namespace Oculus::Interaction {
class IInteractableView;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class RotationAudioEvents;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::RotationAudioEvents*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::RotationAudioEvents*, "Oculus.Interaction.Samples", "RotationAudioEvents");
// Dependencies Oculus.Interaction.Samples.RotationAudioEvents::Direction, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.RotationAudioEvents
class CORDL_TYPE RotationAudioEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Direction = ::GlobalNamespace::RotationAudioEvents_Direction;

/// @brief Field InteractableView, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractableView, put=__cordl_internal_set_InteractableView)) ::Oculus::Interaction::IInteractableView*  InteractableView;

 __declspec(property(get=get_TrackedTransform)) ::UnityW<::UnityEngine::Transform>  TrackedTransform;

 __declspec(property(get=get_WhenRotatedClosed)) ::UnityEngine::Events::UnityEvent*  WhenRotatedClosed;

 __declspec(property(get=get_WhenRotatedOpen)) ::UnityEngine::Events::UnityEvent*  WhenRotatedOpen;

 __declspec(property(get=get_WhenRotationEnded)) ::UnityEngine::Events::UnityEvent*  WhenRotationEnded;

 __declspec(property(get=get_WhenRotationStarted)) ::UnityEngine::Events::UnityEvent*  WhenRotationStarted;

/// @brief Field _baseDelta, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseDelta, put=__cordl_internal_set__baseDelta)) float_t  _baseDelta;

/// @brief Field _interactableView, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableView, put=__cordl_internal_set__interactableView)) ::UnityW<::UnityEngine::Object>  _interactableView;

/// @brief Field _isRotating, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRotating, put=__cordl_internal_set__isRotating)) bool  _isRotating;

/// @brief Field _lastCrossedDirection, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastCrossedDirection, put=__cordl_internal_set__lastCrossedDirection)) ::GlobalNamespace::RotationAudioEvents_Direction  _lastCrossedDirection;

/// @brief Field _maxRangeDeg, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRangeDeg, put=__cordl_internal_set__maxRangeDeg)) float_t  _maxRangeDeg;

/// @brief Field _relativeTo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Field _started, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _thresholdDeg, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdDeg, put=__cordl_internal_set__thresholdDeg)) float_t  _thresholdDeg;

/// @brief Field _trackedTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackedTransform, put=__cordl_internal_set__trackedTransform)) ::UnityW<::UnityEngine::Transform>  _trackedTransform;

/// @brief Field _whenRotatedClosed, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenRotatedClosed, put=__cordl_internal_set__whenRotatedClosed)) ::UnityEngine::Events::UnityEvent*  _whenRotatedClosed;

/// @brief Field _whenRotatedOpen, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenRotatedOpen, put=__cordl_internal_set__whenRotatedOpen)) ::UnityEngine::Events::UnityEvent*  _whenRotatedOpen;

/// @brief Field _whenRotationEnded, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenRotationEnded, put=__cordl_internal_set__whenRotationEnded)) ::UnityEngine::Events::UnityEvent*  _whenRotationEnded;

/// @brief Field _whenRotationStarted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenRotationStarted, put=__cordl_internal_set__whenRotationStarted)) ::UnityEngine::Events::UnityEvent*  _whenRotationStarted;

/// @brief Method Awake, addr 0xa43e594, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentRotation, addr 0xa43e40c, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetCurrentRotation() ;

/// @brief Method GetTotalDelta, addr 0xa43e354, size 0xa0, virtual false, abstract: false, final false
inline float_t GetTotalDelta() ;

static inline ::Oculus::Interaction::Samples::RotationAudioEvents* New_ctor() ;

/// @brief Method RotationEnded, addr 0xa43e3f4, size 0x18, virtual false, abstract: false, final false
inline void RotationEnded() ;

/// @brief Method RotationStarted, addr 0xa43e328, size 0x2c, virtual false, abstract: false, final false
inline void RotationStarted() ;

/// @brief Method Start, addr 0xa43e5fc, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa43e628, size 0xf4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRotation, addr 0xa43e4dc, size 0xb8, virtual false, abstract: false, final false
inline void UpdateRotation() ;

constexpr ::Oculus::Interaction::IInteractableView* const& __cordl_internal_get_InteractableView() const;

constexpr ::Oculus::Interaction::IInteractableView*& __cordl_internal_get_InteractableView() ;

constexpr float_t const& __cordl_internal_get__baseDelta() const;

constexpr float_t& __cordl_internal_get__baseDelta() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactableView() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactableView() ;

constexpr bool const& __cordl_internal_get__isRotating() const;

constexpr bool& __cordl_internal_get__isRotating() ;

constexpr ::GlobalNamespace::RotationAudioEvents_Direction const& __cordl_internal_get__lastCrossedDirection() const;

constexpr ::GlobalNamespace::RotationAudioEvents_Direction& __cordl_internal_get__lastCrossedDirection() ;

constexpr float_t const& __cordl_internal_get__maxRangeDeg() const;

constexpr float_t& __cordl_internal_get__maxRangeDeg() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__thresholdDeg() const;

constexpr float_t& __cordl_internal_get__thresholdDeg() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trackedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trackedTransform() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenRotatedClosed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenRotatedClosed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenRotatedOpen() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenRotatedOpen() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenRotationEnded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenRotationEnded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenRotationStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenRotationStarted() ;

constexpr void __cordl_internal_set_InteractableView(::Oculus::Interaction::IInteractableView*  value) ;

constexpr void __cordl_internal_set__baseDelta(float_t  value) ;

constexpr void __cordl_internal_set__interactableView(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__isRotating(bool  value) ;

constexpr void __cordl_internal_set__lastCrossedDirection(::GlobalNamespace::RotationAudioEvents_Direction  value) ;

constexpr void __cordl_internal_set__maxRangeDeg(float_t  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__thresholdDeg(float_t  value) ;

constexpr void __cordl_internal_set__trackedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__whenRotatedClosed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenRotatedOpen(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenRotationEnded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenRotationStarted(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa43e71c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TrackedTransform, addr 0xa43e2a8, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TrackedTransform() ;

/// @brief Method get_WhenRotatedClosed, addr 0xa43e2a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenRotatedClosed() ;

/// @brief Method get_WhenRotatedOpen, addr 0xa43e298, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenRotatedOpen() ;

/// @brief Method get_WhenRotationEnded, addr 0xa43e290, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenRotationEnded() ;

/// @brief Method get_WhenRotationStarted, addr 0xa43e288, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenRotationStarted() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationAudioEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationAudioEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationAudioEvents(RotationAudioEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationAudioEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationAudioEvents(RotationAudioEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28330};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractableView), new[] {  })]
/// @brief Field _interactableView, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactableView;

/// [Tooltip("Transform to track rotation of. If not provided, transform of this component is used.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _trackedTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____trackedTransform;

/// [SerializeField]
/// @brief Field _relativeTo, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

/// [Tooltip("The angle delta at which the threshold crossed event will be fired.")]
/// [SerializeField]
/// @brief Field _thresholdDeg, offset: 0x38, size: 0x4, def value: None
 float_t  ____thresholdDeg;

/// [Tooltip("Maximum rotation arc within which the crossed event will be triggered.")]
/// [SerializeField]
/// [Range(1, 150)]
/// @brief Field _maxRangeDeg, offset: 0x3c, size: 0x4, def value: None
 float_t  ____maxRangeDeg;

/// [SerializeField]
/// @brief Field _whenRotationStarted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenRotationStarted;

/// [SerializeField]
/// @brief Field _whenRotationEnded, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenRotationEnded;

/// [SerializeField]
/// @brief Field _whenRotatedOpen, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenRotatedOpen;

/// [SerializeField]
/// @brief Field _whenRotatedClosed, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenRotatedClosed;

/// @brief Field InteractableView, offset: 0x60, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractableView*  ___InteractableView;

/// @brief Field _baseDelta, offset: 0x68, size: 0x4, def value: None
 float_t  ____baseDelta;

/// @brief Field _isRotating, offset: 0x6c, size: 0x1, def value: None
 bool  ____isRotating;

/// @brief Field _lastCrossedDirection, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::RotationAudioEvents_Direction  ____lastCrossedDirection;

/// @brief Field _started, offset: 0x74, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____interactableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____trackedTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____relativeTo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____thresholdDeg) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____maxRangeDeg) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____whenRotationStarted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____whenRotationEnded) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____whenRotatedOpen) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____whenRotatedClosed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ___InteractableView) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____baseDelta) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____isRotating) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____lastCrossedDirection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RotationAudioEvents, ____started) == 0x74, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::RotationAudioEvents) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
