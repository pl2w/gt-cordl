#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ScaleAudioEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Samples/zzzz__ScaleAudioEvents_Direction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleAudioEvents)
namespace GlobalNamespace {
struct ScaleAudioEvents_Direction;
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
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ScaleAudioEvents;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ScaleAudioEvents*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ScaleAudioEvents*, "Oculus.Interaction.Samples", "ScaleAudioEvents");
// Dependencies Oculus.Interaction.Samples.ScaleAudioEvents::Direction, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ScaleAudioEvents
class CORDL_TYPE ScaleAudioEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Direction = ::GlobalNamespace::ScaleAudioEvents_Direction;

/// @brief Field InteractableView, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractableView, put=__cordl_internal_set_InteractableView)) ::Oculus::Interaction::IInteractableView*  InteractableView;

 __declspec(property(get=get_TrackedTransform)) ::UnityW<::UnityEngine::Transform>  TrackedTransform;

 __declspec(property(get=get_WhenScaledDown)) ::UnityEngine::Events::UnityEvent*  WhenScaledDown;

 __declspec(property(get=get_WhenScaledUp)) ::UnityEngine::Events::UnityEvent*  WhenScaledUp;

 __declspec(property(get=get_WhenScalingEnded)) ::UnityEngine::Events::UnityEvent*  WhenScalingEnded;

 __declspec(property(get=get_WhenScalingStarted)) ::UnityEngine::Events::UnityEvent*  WhenScalingStarted;

/// @brief Field _direction, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__direction, put=__cordl_internal_set__direction)) ::GlobalNamespace::ScaleAudioEvents_Direction  _direction;

/// @brief Field _interactableView, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableView, put=__cordl_internal_set__interactableView)) ::UnityW<::UnityEngine::Object>  _interactableView;

/// @brief Field _isScaling, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isScaling, put=__cordl_internal_set__isScaling)) bool  _isScaling;

/// @brief Field _lastEventTime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastEventTime, put=__cordl_internal_set__lastEventTime)) float_t  _lastEventTime;

/// @brief Field _lastStep, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastStep, put=__cordl_internal_set__lastStep)) ::UnityEngine::Vector3  _lastStep;

/// @brief Field _maxEventFreq, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxEventFreq, put=__cordl_internal_set__maxEventFreq)) int32_t  _maxEventFreq;

/// @brief Field _started, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _stepSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__stepSize, put=__cordl_internal_set__stepSize)) float_t  _stepSize;

/// @brief Field _trackedTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackedTransform, put=__cordl_internal_set__trackedTransform)) ::UnityW<::UnityEngine::Transform>  _trackedTransform;

/// @brief Field _whenScaledDown, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenScaledDown, put=__cordl_internal_set__whenScaledDown)) ::UnityEngine::Events::UnityEvent*  _whenScaledDown;

/// @brief Field _whenScaledUp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenScaledUp, put=__cordl_internal_set__whenScaledUp)) ::UnityEngine::Events::UnityEvent*  _whenScaledUp;

/// @brief Field _whenScalingEnded, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenScalingEnded, put=__cordl_internal_set__whenScalingEnded)) ::UnityEngine::Events::UnityEvent*  _whenScalingEnded;

/// @brief Field _whenScalingStarted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenScalingStarted, put=__cordl_internal_set__whenScalingStarted)) ::UnityEngine::Events::UnityEvent*  _whenScalingStarted;

/// @brief Method Awake, addr 0xa43ee04, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetTotalDelta, addr 0xa43ec20, size 0x120, virtual false, abstract: false, final false
inline float_t GetTotalDelta(::by_ref<::GlobalNamespace::ScaleAudioEvents_Direction>  direction) ;

static inline ::Oculus::Interaction::Samples::ScaleAudioEvents* New_ctor() ;

/// @brief Method ScalingEnded, addr 0xa43ec08, size 0x18, virtual false, abstract: false, final false
inline void ScalingEnded() ;

/// @brief Method ScalingStarted, addr 0xa43ebd0, size 0x38, virtual false, abstract: false, final false
inline void ScalingStarted() ;

/// @brief Method Start, addr 0xa43ee6c, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa43ee98, size 0xf4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateScaling, addr 0xa43ed40, size 0xc4, virtual false, abstract: false, final false
inline void UpdateScaling() ;

constexpr ::Oculus::Interaction::IInteractableView* const& __cordl_internal_get_InteractableView() const;

constexpr ::Oculus::Interaction::IInteractableView*& __cordl_internal_get_InteractableView() ;

constexpr ::GlobalNamespace::ScaleAudioEvents_Direction const& __cordl_internal_get__direction() const;

constexpr ::GlobalNamespace::ScaleAudioEvents_Direction& __cordl_internal_get__direction() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactableView() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactableView() ;

constexpr bool const& __cordl_internal_get__isScaling() const;

constexpr bool& __cordl_internal_get__isScaling() ;

constexpr float_t const& __cordl_internal_get__lastEventTime() const;

constexpr float_t& __cordl_internal_get__lastEventTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastStep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastStep() ;

constexpr int32_t const& __cordl_internal_get__maxEventFreq() const;

constexpr int32_t& __cordl_internal_get__maxEventFreq() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__stepSize() const;

constexpr float_t& __cordl_internal_get__stepSize() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__trackedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__trackedTransform() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenScaledDown() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenScaledDown() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenScaledUp() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenScaledUp() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenScalingEnded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenScalingEnded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenScalingStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenScalingStarted() ;

constexpr void __cordl_internal_set_InteractableView(::Oculus::Interaction::IInteractableView*  value) ;

constexpr void __cordl_internal_set__direction(::GlobalNamespace::ScaleAudioEvents_Direction  value) ;

constexpr void __cordl_internal_set__interactableView(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__isScaling(bool  value) ;

constexpr void __cordl_internal_set__lastEventTime(float_t  value) ;

constexpr void __cordl_internal_set__lastStep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__maxEventFreq(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__stepSize(float_t  value) ;

constexpr void __cordl_internal_set__trackedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__whenScaledDown(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenScaledUp(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenScalingEnded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenScalingStarted(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa43ef8c, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TrackedTransform, addr 0xa43eb50, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TrackedTransform() ;

/// @brief Method get_WhenScaledDown, addr 0xa43eb48, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenScaledDown() ;

/// @brief Method get_WhenScaledUp, addr 0xa43eb40, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenScaledUp() ;

/// @brief Method get_WhenScalingEnded, addr 0xa43eb38, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenScalingEnded() ;

/// @brief Method get_WhenScalingStarted, addr 0xa43eb30, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenScalingStarted() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleAudioEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleAudioEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleAudioEvents(ScaleAudioEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleAudioEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleAudioEvents(ScaleAudioEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28337};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractableView), new[] {  })]
/// @brief Field _interactableView, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactableView;

/// [Tooltip("Transform to track scale of. If not provided, transform of this component is used.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _trackedTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____trackedTransform;

/// [Tooltip("The increase in scale magnitude that will fire the step event")]
/// [SerializeField]
/// @brief Field _stepSize, offset: 0x30, size: 0x4, def value: None
 float_t  ____stepSize;

/// [Tooltip("Events will not be fired more frequently than this many times per second")]
/// [SerializeField]
/// @brief Field _maxEventFreq, offset: 0x34, size: 0x4, def value: None
 int32_t  ____maxEventFreq;

/// [SerializeField]
/// @brief Field _whenScalingStarted, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenScalingStarted;

/// [SerializeField]
/// @brief Field _whenScalingEnded, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenScalingEnded;

/// [SerializeField]
/// @brief Field _whenScaledUp, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenScaledUp;

/// [SerializeField]
/// @brief Field _whenScaledDown, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenScaledDown;

/// @brief Field InteractableView, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractableView*  ___InteractableView;

/// @brief Field _isScaling, offset: 0x60, size: 0x1, def value: None
 bool  ____isScaling;

/// @brief Field _lastStep, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastStep;

/// @brief Field _lastEventTime, offset: 0x70, size: 0x4, def value: None
 float_t  ____lastEventTime;

/// @brief Field _direction, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::ScaleAudioEvents_Direction  ____direction;

/// @brief Field _started, offset: 0x78, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____interactableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____trackedTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____stepSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____maxEventFreq) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____whenScalingStarted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____whenScalingEnded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____whenScaledUp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____whenScaledDown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ___InteractableView) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____isScaling) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____lastStep) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____lastEventTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____direction) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ScaleAudioEvents, ____started) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::ScaleAudioEvents) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
