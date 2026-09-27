#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VenusFlyTrapHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityLayer_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__VenusFlyTrapHoldable_VenusState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VenusFlyTrapHoldable)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class TriggerEventNotifier;
}
namespace GlobalNamespace {
struct VenusFlyTrapHoldable_VenusState;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class VenusFlyTrapHoldable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::VenusFlyTrapHoldable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::VenusFlyTrapHoldable*, "GorillaTag.Cosmetics", "VenusFlyTrapHoldable");
// [RequireComponent(typeof(TransferrableObject))]
// Dependencies GorillaTag.Cosmetics.VenusFlyTrapHoldable::VenusState, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3, UnityLayer
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.VenusFlyTrapHoldable
class CORDL_TYPE VenusFlyTrapHoldable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VenusState = ::GlobalNamespace::VenusFlyTrapHoldable_VenusState;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _events, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field audioSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bug, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_bug, put=__cordl_internal_set_bug)) ::UnityW<::UnityEngine::GameObject>  bug;

/// @brief Field callLimiter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field closedDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_closedDuration, put=__cordl_internal_set_closedDuration)) float_t  closedDuration;

/// @brief Field closedStartedTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_closedStartedTime, put=__cordl_internal_set_closedStartedTime)) float_t  closedStartedTime;

/// @brief Field closingAudio, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_closingAudio, put=__cordl_internal_set_closingAudio)) ::UnityW<::UnityEngine::AudioClip>  closingAudio;

/// @brief Field flyLoopingAudio, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_flyLoopingAudio, put=__cordl_internal_set_flyLoopingAudio)) ::UnityW<::UnityEngine::AudioClip>  flyLoopingAudio;

/// @brief Field hapticDuration, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field layers, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_layers, put=__cordl_internal_set_layers)) ::GlobalNamespace::UnityLayer  layers;

/// @brief Field lipA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lipA, put=__cordl_internal_set_lipA)) ::UnityW<::UnityEngine::GameObject>  lipA;

/// @brief Field lipB, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lipB, put=__cordl_internal_set_lipB)) ::UnityW<::UnityEngine::GameObject>  lipB;

/// @brief Field localRotA, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_localRotA, put=__cordl_internal_set_localRotA)) ::UnityEngine::Quaternion  localRotA;

/// @brief Field localRotB, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_localRotB, put=__cordl_internal_set_localRotB)) ::UnityEngine::Quaternion  localRotB;

/// @brief Field openingAudio, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_openingAudio, put=__cordl_internal_set_openingAudio)) ::UnityW<::UnityEngine::AudioClip>  openingAudio;

/// @brief Field speed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field state, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::VenusFlyTrapHoldable_VenusState  state;

/// @brief Field targetRotationA, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetRotationA, put=__cordl_internal_set_targetRotationA)) ::UnityEngine::Vector3  targetRotationA;

/// @brief Field targetRotationB, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetRotationB, put=__cordl_internal_set_targetRotationB)) ::UnityEngine::Vector3  targetRotationB;

/// @brief Field transferrableObject, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Field triggerEventNotifier, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerEventNotifier, put=__cordl_internal_set_triggerEventNotifier)) ::UnityW<::GlobalNamespace::TriggerEventNotifier>  triggerEventNotifier;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5da47c4, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::VenusFlyTrapHoldable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5da4b98, size 0x1d8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5da481c, size 0x37c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEvent, addr 0x5da5898, size 0xec, virtual false, abstract: false, final false
inline void OnTriggerEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnTriggerLocal, addr 0x5da57e0, size 0xb8, virtual false, abstract: false, final false
inline void OnTriggerLocal() ;

/// @brief Method SmoothRotation, addr 0x5da4fa8, size 0x5b8, virtual false, abstract: false, final false
inline void SmoothRotation(bool  isClosing) ;

/// @brief Method Tick, addr 0x5da4d70, size 0x210, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TriggerEntered, addr 0x5da5560, size 0x280, virtual false, abstract: false, final false
inline void TriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method UpdateState, addr 0x5da4f80, size 0x28, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::VenusFlyTrapHoldable_VenusState  newState) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bug() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bug() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr float_t const& __cordl_internal_get_closedDuration() const;

constexpr float_t& __cordl_internal_get_closedDuration() ;

constexpr float_t const& __cordl_internal_get_closedStartedTime() const;

constexpr float_t& __cordl_internal_get_closedStartedTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_closingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_closingAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_flyLoopingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_flyLoopingAudio() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr ::GlobalNamespace::UnityLayer const& __cordl_internal_get_layers() const;

constexpr ::GlobalNamespace::UnityLayer& __cordl_internal_get_layers() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lipA() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lipA() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lipB() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lipB() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotA() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotA() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotB() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotB() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_openingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_openingAudio() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState& __cordl_internal_get_state() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetRotationA() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetRotationA() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetRotationB() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetRotationB() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& __cordl_internal_get_triggerEventNotifier() const;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& __cordl_internal_get_triggerEventNotifier() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bug(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_closedDuration(float_t  value) ;

constexpr void __cordl_internal_set_closedStartedTime(float_t  value) ;

constexpr void __cordl_internal_set_closingAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_flyLoopingAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_layers(::GlobalNamespace::UnityLayer  value) ;

constexpr void __cordl_internal_set_lipA(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lipB(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_localRotA(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_localRotB(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_openingAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::VenusFlyTrapHoldable_VenusState  value) ;

constexpr void __cordl_internal_set_targetRotationA(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRotationB(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_triggerEventNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value) ;

/// @brief Method .ctor, addr 0x5da5984, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5da47b4, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5da47bc, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VenusFlyTrapHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VenusFlyTrapHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VenusFlyTrapHoldable(VenusFlyTrapHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VenusFlyTrapHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VenusFlyTrapHoldable(VenusFlyTrapHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4983};

/// [SerializeField]
/// @brief Field lipA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lipA;

/// [SerializeField]
/// @brief Field lipB, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lipB;

/// [SerializeField]
/// @brief Field targetRotationA, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetRotationA;

/// [SerializeField]
/// @brief Field targetRotationB, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetRotationB;

/// [SerializeField]
/// @brief Field closedDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___closedDuration;

/// [SerializeField]
/// @brief Field speed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___speed;

/// [SerializeField]
/// @brief Field layers, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::UnityLayer  ___layers;

/// [SerializeField]
/// @brief Field triggerEventNotifier, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TriggerEventNotifier>  ___triggerEventNotifier;

/// [SerializeField]
/// @brief Field hapticStrength, offset: 0x60, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// [SerializeField]
/// @brief Field hapticDuration, offset: 0x64, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// [SerializeField]
/// @brief Field bug, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___bug;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field closingAudio, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___closingAudio;

/// [SerializeField]
/// @brief Field openingAudio, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___openingAudio;

/// [SerializeField]
/// @brief Field flyLoopingAudio, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___flyLoopingAudio;

/// @brief Field callLimiter, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// @brief Field closedStartedTime, offset: 0x98, size: 0x4, def value: None
 float_t  ___closedStartedTime;

/// @brief Field state, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::VenusFlyTrapHoldable_VenusState  ___state;

/// @brief Field localRotA, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___localRotA;

/// @brief Field localRotB, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___localRotB;

/// @brief Field _events, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field transferrableObject, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xd0, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___lipA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___lipB) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___targetRotationA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___targetRotationB) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___closedDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___speed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___layers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___triggerEventNotifier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___hapticStrength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___hapticDuration) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___bug) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___audioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___closingAudio) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___openingAudio) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___flyLoopingAudio) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___callLimiter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___closedStartedTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___state) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___localRotA) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___localRotB) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ____events) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ___transferrableObject) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable, ____TickRunning_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::VenusFlyTrapHoldable) == 0xd8, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
