#pragma once
// IWYU pragma private; include "Oculus/Interaction/AudioPhysics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__ImpactAudio_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioPhysics)
namespace Oculus::Interaction {
class AudioPhysics_CollisionEvents;
}
namespace Oculus::Interaction {
class AudioTrigger;
}
namespace Oculus::Interaction {
class CollisionEvents_AudioPhysics___c;
}
namespace Oculus::Interaction {
struct ImpactAudio;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction {
class AudioPhysics;
}
namespace Oculus::Interaction {
class AudioPhysics_CollisionEvents;
}
namespace Oculus::Interaction {
class CollisionEvents_AudioPhysics___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::AudioPhysics*);
MARK_REF_T(::Oculus::Interaction::AudioPhysics_CollisionEvents*);
MARK_REF_T(::Oculus::Interaction::CollisionEvents_AudioPhysics___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AudioPhysics*, "Oculus.Interaction", "AudioPhysics");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AudioPhysics_CollisionEvents*, "Oculus.Interaction", "AudioPhysics/CollisionEvents");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::CollisionEvents_AudioPhysics___c*, "Oculus.Interaction", "AudioPhysics/CollisionEvents/<>c");
// Dependencies Oculus.Interaction.ImpactAudio, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AudioPhysics
class CORDL_TYPE AudioPhysics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CollisionEvents = ::Oculus::Interaction::AudioPhysics_CollisionEvents;

/// @brief Field _allowMultipleCollisions, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowMultipleCollisions, put=__cordl_internal_set__allowMultipleCollisions)) bool  _allowMultipleCollisions;

/// @brief Field _collisionEvents, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__collisionEvents, put=__cordl_internal_set__collisionEvents)) ::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents>  _collisionEvents;

/// @brief Field _impactAudioEvents, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__impactAudioEvents, put=__cordl_internal_set__impactAudioEvents)) ::Oculus::Interaction::ImpactAudio  _impactAudioEvents;

/// @brief Field _minimumVelocity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minimumVelocity, put=__cordl_internal_set__minimumVelocity)) float_t  _minimumVelocity;

/// @brief Field _rigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _started, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _timeAtLastCollision, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeAtLastCollision, put=__cordl_internal_set__timeAtLastCollision)) float_t  _timeAtLastCollision;

/// @brief Field _timeBetweenCollisions, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeBetweenCollisions, put=__cordl_internal_set__timeBetweenCollisions)) float_t  _timeBetweenCollisions;

/// @brief Field _velocitySplit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__velocitySplit, put=__cordl_internal_set__velocitySplit)) float_t  _velocitySplit;

/// @brief Method GetObjectVelocity, addr 0xa42ba60, size 0x38, virtual false, abstract: false, final false
static inline float_t GetObjectVelocity(::Oculus::Interaction::AudioPhysics*  target) ;

/// @brief Method HandleCollisionEnter, addr 0xa42b8e8, size 0x4, virtual false, abstract: false, final false
inline void HandleCollisionEnter(::UnityEngine::Collision*  collision) ;

static inline ::Oculus::Interaction::AudioPhysics* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa42b858, size 0x90, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa42b710, size 0x98, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42b5c8, size 0x98, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayCollisionAudio, addr 0xa42ba98, size 0xfc, virtual false, abstract: false, final false
inline void PlayCollisionAudio(::Oculus::Interaction::ImpactAudio  impactAudio, float_t  magnitude) ;

/// @brief Method PlaySoundOnAudioTrigger, addr 0xa42bb94, size 0x7c, virtual false, abstract: false, final false
inline void PlaySoundOnAudioTrigger(::Oculus::Interaction::AudioTrigger*  audioTrigger) ;

/// @brief Method Start, addr 0xa42b538, size 0x90, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryPlayCollisionAudio, addr 0xa42b8ec, size 0x174, virtual false, abstract: false, final false
inline void TryPlayCollisionAudio(::UnityEngine::Collision*  collision, ::UnityEngine::Rigidbody*  rigidbody) ;

constexpr bool const& __cordl_internal_get__allowMultipleCollisions() const;

constexpr bool& __cordl_internal_get__allowMultipleCollisions() ;

constexpr ::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents> const& __cordl_internal_get__collisionEvents() const;

constexpr ::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents>& __cordl_internal_get__collisionEvents() ;

constexpr ::Oculus::Interaction::ImpactAudio const& __cordl_internal_get__impactAudioEvents() const;

constexpr ::Oculus::Interaction::ImpactAudio& __cordl_internal_get__impactAudioEvents() ;

constexpr float_t const& __cordl_internal_get__minimumVelocity() const;

constexpr float_t& __cordl_internal_get__minimumVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__timeAtLastCollision() const;

constexpr float_t& __cordl_internal_get__timeAtLastCollision() ;

constexpr float_t const& __cordl_internal_get__timeBetweenCollisions() const;

constexpr float_t& __cordl_internal_get__timeBetweenCollisions() ;

constexpr float_t const& __cordl_internal_get__velocitySplit() const;

constexpr float_t& __cordl_internal_get__velocitySplit() ;

constexpr void __cordl_internal_set__allowMultipleCollisions(bool  value) ;

constexpr void __cordl_internal_set__collisionEvents(::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents>  value) ;

constexpr void __cordl_internal_set__impactAudioEvents(::Oculus::Interaction::ImpactAudio  value) ;

constexpr void __cordl_internal_set__minimumVelocity(float_t  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__timeAtLastCollision(float_t  value) ;

constexpr void __cordl_internal_set__timeBetweenCollisions(float_t  value) ;

constexpr void __cordl_internal_set__velocitySplit(float_t  value) ;

/// @brief Method .ctor, addr 0xa42bd28, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPhysics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPhysics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPhysics(AudioPhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPhysics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPhysics(AudioPhysics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28256};

/// [Tooltip("Add a reference to the rigidbody on this gameobject.")]
/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [Tooltip("Reference an audio trigger instance for soft and hard collisions.")]
/// [SerializeField]
/// @brief Field _impactAudioEvents, offset: 0x28, size: 0x10, def value: None
 ::Oculus::Interaction::ImpactAudio  ____impactAudioEvents;

/// [Tooltip("Collisions below this value will play a soft audio event, and collisions above will play a hard audio event.")]
/// [Range(0, 8)]
/// [SerializeField]
/// @brief Field _velocitySplit, offset: 0x38, size: 0x4, def value: None
 float_t  ____velocitySplit;

/// [Tooltip("Collisions below this value will be ignored and will not play audio.")]
/// [Range(0, 2)]
/// [SerializeField]
/// @brief Field _minimumVelocity, offset: 0x3c, size: 0x4, def value: None
 float_t  ____minimumVelocity;

/// [Tooltip("The shortest amount of time in seconds between collisions. Used to cull multiple fast collision events.")]
/// [Range(0, 2)]
/// [SerializeField]
/// @brief Field _timeBetweenCollisions, offset: 0x40, size: 0x4, def value: None
 float_t  ____timeBetweenCollisions;

/// [Tooltip("By default (false), when two physics objects collide with physics audio components, we only play the one with the higher velocity.Setting this to true will allow both impacts to play.")]
/// [SerializeField]
/// @brief Field _allowMultipleCollisions, offset: 0x44, size: 0x1, def value: None
 bool  ____allowMultipleCollisions;

/// @brief Field _timeAtLastCollision, offset: 0x48, size: 0x4, def value: None
 float_t  ____timeAtLastCollision;

/// @brief Field _started, offset: 0x4c, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _collisionEvents, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::AudioPhysics_CollisionEvents>  ____collisionEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____rigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____impactAudioEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____velocitySplit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____minimumVelocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____timeBetweenCollisions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____allowMultipleCollisions) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____timeAtLastCollision) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____started) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioPhysics, ____collisionEvents) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::AudioPhysics) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AudioPhysics/CollisionEvents
class CORDL_TYPE AudioPhysics_CollisionEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::CollisionEvents_AudioPhysics___c;

/// @brief Field WhenCollisionEnter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenCollisionEnter, put=__cordl_internal_set_WhenCollisionEnter)) ::System::Action_1<::UnityEngine::Collision*>*  WhenCollisionEnter;

static inline ::Oculus::Interaction::AudioPhysics_CollisionEvents* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0xa42bd44, size 0x20, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

constexpr ::System::Action_1<::UnityEngine::Collision*>* const& __cordl_internal_get_WhenCollisionEnter() const;

constexpr ::System::Action_1<::UnityEngine::Collision*>*& __cordl_internal_get_WhenCollisionEnter() ;

constexpr void __cordl_internal_set_WhenCollisionEnter(::System::Action_1<::UnityEngine::Collision*>*  value) ;

/// @brief Method .ctor, addr 0xa42bd64, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenCollisionEnter, addr 0xa42b660, size 0xb0, virtual false, abstract: false, final false
inline void add_WhenCollisionEnter(::System::Action_1<::UnityEngine::Collision*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenCollisionEnter, addr 0xa42b7a8, size 0xb0, virtual false, abstract: false, final false
inline void remove_WhenCollisionEnter(::System::Action_1<::UnityEngine::Collision*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPhysics_CollisionEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPhysics_CollisionEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPhysics_CollisionEvents(AudioPhysics_CollisionEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPhysics_CollisionEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPhysics_CollisionEvents(AudioPhysics_CollisionEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28255};

/// [CompilerGenerated]
/// @brief Field WhenCollisionEnter, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Collision*>*  ___WhenCollisionEnter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::AudioPhysics_CollisionEvents, ___WhenCollisionEnter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::AudioPhysics_CollisionEvents) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AudioPhysics/CollisionEvents/<>c
class CORDL_TYPE CollisionEvents_AudioPhysics___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::CollisionEvents_AudioPhysics___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Action_1<::UnityEngine::Collision*>*  __9__4_0;

static inline ::Oculus::Interaction::CollisionEvents_AudioPhysics___c* New_ctor() ;

/// @brief Method <.ctor>b__4_0, addr 0xa42becc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__4_0(::UnityEngine::Collision*  _p0_) ;

/// @brief Method .ctor, addr 0xa42bec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::CollisionEvents_AudioPhysics___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityEngine::Collision*>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Oculus::Interaction::CollisionEvents_AudioPhysics___c*  value) ;

static inline void setStaticF___9__4_0(::System::Action_1<::UnityEngine::Collision*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionEvents_AudioPhysics___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionEvents_AudioPhysics___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionEvents_AudioPhysics___c(CollisionEvents_AudioPhysics___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionEvents_AudioPhysics___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionEvents_AudioPhysics___c(CollisionEvents_AudioPhysics___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28254};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::CollisionEvents_AudioPhysics___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
