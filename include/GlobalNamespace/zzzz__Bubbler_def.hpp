#pragma once
// IWYU pragma private; include "GlobalNamespace/Bubbler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Bubbler)
namespace GlobalNamespace {
struct Bubbler_BubblerState;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Bubbler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Bubbler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bubbler*, "", "Bubbler");
// Dependencies TransferrableObject, UnityEngine.Behaviour, UnityEngine.ParticleSystem::Particle, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Bubbler
class CORDL_TYPE Bubbler : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using BubblerState = ::GlobalNamespace::Bubbler_BubblerState;

/// @brief Field _worksInWater, offset 0x331, size 0x1 
 __declspec(property(get=__cordl_internal_get__worksInWater, put=__cordl_internal_set__worksInWater)) bool  _worksInWater;

/// @brief Field allBubblesPopped, offset 0x374, size 0x1 
 __declspec(property(get=__cordl_internal_get_allBubblesPopped, put=__cordl_internal_set_allBubblesPopped)) bool  allBubblesPopped;

/// @brief Field behavioursToEnableWhenTriggerPressed, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_behavioursToEnableWhenTriggerPressed, put=__cordl_internal_set_behavioursToEnableWhenTriggerPressed)) ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  behavioursToEnableWhenTriggerPressed;

/// @brief Field bubbleParticleArray, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubbleParticleArray, put=__cordl_internal_set_bubbleParticleArray)) ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  bubbleParticleArray;

/// @brief Field bubbleParticleSystem, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubbleParticleSystem, put=__cordl_internal_set_bubbleParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  bubbleParticleSystem;

/// @brief Field bubblerAudio, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubblerAudio, put=__cordl_internal_set_bubblerAudio)) ::UnityW<::UnityEngine::AudioSource>  bubblerAudio;

/// @brief Field currentParticles, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentParticles, put=__cordl_internal_set_currentParticles)) ::System::Collections::Generic::List_1<uint32_t>*  currentParticles;

/// @brief Field disableActivation, offset 0x375, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableActivation, put=__cordl_internal_set_disableActivation)) bool  disableActivation;

/// @brief Field disableDeactivation, offset 0x376, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableDeactivation, put=__cordl_internal_set_disableDeactivation)) bool  disableDeactivation;

/// @brief Field fan, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_fan, put=__cordl_internal_set_fan)) ::UnityW<::UnityEngine::GameObject>  fan;

/// @brief Field fanYaxisinstead, offset 0x388, size 0x1 
 __declspec(property(get=__cordl_internal_get_fanYaxisinstead, put=__cordl_internal_set_fanYaxisinstead)) bool  fanYaxisinstead;

/// @brief Field gameObjectActiveOnlyWhileTriggerDown, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectActiveOnlyWhileTriggerDown, put=__cordl_internal_set_gameObjectActiveOnlyWhileTriggerDown)) ::UnityW<::UnityEngine::GameObject>  gameObjectActiveOnlyWhileTriggerDown;

/// @brief Field hasActiveOnlyComponent, offset 0x3b2, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasActiveOnlyComponent, put=__cordl_internal_set_hasActiveOnlyComponent)) bool  hasActiveOnlyComponent;

/// @brief Field hasBubblerAudio, offset 0x39c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBubblerAudio, put=__cordl_internal_set_hasBubblerAudio)) bool  hasBubblerAudio;

/// @brief Field hasFan, offset 0x3b1, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFan, put=__cordl_internal_set_hasFan)) bool  hasFan;

/// @brief Field hasParticleSystem, offset 0x3b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasParticleSystem, put=__cordl_internal_set_hasParticleSystem)) bool  hasParticleSystem;

/// @brief Field hasPopBubbleAudio, offset 0x39d, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPopBubbleAudio, put=__cordl_internal_set_hasPopBubbleAudio)) bool  hasPopBubbleAudio;

/// @brief Field initialTriggerDuration, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialTriggerDuration, put=__cordl_internal_set_initialTriggerDuration)) float_t  initialTriggerDuration;

/// @brief Field initialTriggerPull, offset 0x394, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialTriggerPull, put=__cordl_internal_set_initialTriggerPull)) float_t  initialTriggerPull;

/// @brief Field ongoingStrength, offset 0x38c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ongoingStrength, put=__cordl_internal_set_ongoingStrength)) float_t  ongoingStrength;

/// @brief Field outPosition, offset 0x368, size 0xc 
 __declspec(property(get=__cordl_internal_get_outPosition, put=__cordl_internal_set_outPosition)) ::UnityEngine::Vector3  outPosition;

/// @brief Field particleInfoDict, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleInfoDict, put=__cordl_internal_set_particleInfoDict)) ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  particleInfoDict;

/// @brief Field popBubbleAudio, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_popBubbleAudio, put=__cordl_internal_set_popBubbleAudio)) ::UnityW<::UnityEngine::AudioSource>  popBubbleAudio;

/// @brief Field rotationSpeed, offset 0x378, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field triggerStrength, offset 0x390, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerStrength, put=__cordl_internal_set_triggerStrength)) float_t  triggerStrength;

/// @brief Method CanActivate, addr 0x5792794, size 0x10, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x57927a4, size 0x10, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

/// @brief Method InitToDefault, addr 0x5791c74, size 0x78, virtual false, abstract: false, final false
inline void InitToDefault() ;

/// @brief Method LateUpdateLocal, addr 0x5791de4, size 0xb8, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x5791e9c, size 0x8b8, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::Bubbler* New_ctor() ;

/// @brief Method OnActivate, addr 0x5792754, size 0x20, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDeactivate, addr 0x5792774, size 0x20, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnDisable, addr 0x5791cec, size 0xdc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5791aec, size 0x188, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x57918bc, size 0x230, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ResetToDefaultState, addr 0x5791dc8, size 0x1c, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

constexpr bool const& __cordl_internal_get__worksInWater() const;

constexpr bool& __cordl_internal_get__worksInWater() ;

constexpr bool const& __cordl_internal_get_allBubblesPopped() const;

constexpr bool& __cordl_internal_get_allBubblesPopped() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& __cordl_internal_get_behavioursToEnableWhenTriggerPressed() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& __cordl_internal_get_behavioursToEnableWhenTriggerPressed() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle> const& __cordl_internal_get_bubbleParticleArray() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>& __cordl_internal_get_bubbleParticleArray() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_bubbleParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_bubbleParticleSystem() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_bubblerAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_bubblerAudio() ;

constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_currentParticles() const;

constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_currentParticles() ;

constexpr bool const& __cordl_internal_get_disableActivation() const;

constexpr bool& __cordl_internal_get_disableActivation() ;

constexpr bool const& __cordl_internal_get_disableDeactivation() const;

constexpr bool& __cordl_internal_get_disableDeactivation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fan() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fan() ;

constexpr bool const& __cordl_internal_get_fanYaxisinstead() const;

constexpr bool& __cordl_internal_get_fanYaxisinstead() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObjectActiveOnlyWhileTriggerDown() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObjectActiveOnlyWhileTriggerDown() ;

constexpr bool const& __cordl_internal_get_hasActiveOnlyComponent() const;

constexpr bool& __cordl_internal_get_hasActiveOnlyComponent() ;

constexpr bool const& __cordl_internal_get_hasBubblerAudio() const;

constexpr bool& __cordl_internal_get_hasBubblerAudio() ;

constexpr bool const& __cordl_internal_get_hasFan() const;

constexpr bool& __cordl_internal_get_hasFan() ;

constexpr bool const& __cordl_internal_get_hasParticleSystem() const;

constexpr bool& __cordl_internal_get_hasParticleSystem() ;

constexpr bool const& __cordl_internal_get_hasPopBubbleAudio() const;

constexpr bool& __cordl_internal_get_hasPopBubbleAudio() ;

constexpr float_t const& __cordl_internal_get_initialTriggerDuration() const;

constexpr float_t& __cordl_internal_get_initialTriggerDuration() ;

constexpr float_t const& __cordl_internal_get_initialTriggerPull() const;

constexpr float_t& __cordl_internal_get_initialTriggerPull() ;

constexpr float_t const& __cordl_internal_get_ongoingStrength() const;

constexpr float_t& __cordl_internal_get_ongoingStrength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_outPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_outPosition() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>* const& __cordl_internal_get_particleInfoDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*& __cordl_internal_get_particleInfoDict() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_popBubbleAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_popBubbleAudio() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr float_t const& __cordl_internal_get_triggerStrength() const;

constexpr float_t& __cordl_internal_get_triggerStrength() ;

constexpr void __cordl_internal_set__worksInWater(bool  value) ;

constexpr void __cordl_internal_set_allBubblesPopped(bool  value) ;

constexpr void __cordl_internal_set_behavioursToEnableWhenTriggerPressed(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value) ;

constexpr void __cordl_internal_set_bubbleParticleArray(::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  value) ;

constexpr void __cordl_internal_set_bubbleParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_bubblerAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentParticles(::System::Collections::Generic::List_1<uint32_t>*  value) ;

constexpr void __cordl_internal_set_disableActivation(bool  value) ;

constexpr void __cordl_internal_set_disableDeactivation(bool  value) ;

constexpr void __cordl_internal_set_fan(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fanYaxisinstead(bool  value) ;

constexpr void __cordl_internal_set_gameObjectActiveOnlyWhileTriggerDown(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hasActiveOnlyComponent(bool  value) ;

constexpr void __cordl_internal_set_hasBubblerAudio(bool  value) ;

constexpr void __cordl_internal_set_hasFan(bool  value) ;

constexpr void __cordl_internal_set_hasParticleSystem(bool  value) ;

constexpr void __cordl_internal_set_hasPopBubbleAudio(bool  value) ;

constexpr void __cordl_internal_set_initialTriggerDuration(float_t  value) ;

constexpr void __cordl_internal_set_initialTriggerPull(float_t  value) ;

constexpr void __cordl_internal_set_ongoingStrength(float_t  value) ;

constexpr void __cordl_internal_set_outPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_particleInfoDict(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_popBubbleAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_triggerStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x57927b4, size 0x128, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bubbler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bubbler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bubbler(Bubbler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bubbler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bubbler(Bubbler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1449};

/// [SerializeField]
/// @brief Field _worksInWater, offset: 0x331, size: 0x1, def value: None
 bool  ____worksInWater;

/// @brief Field bubbleParticleSystem, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___bubbleParticleSystem;

/// @brief Field bubbleParticleArray, offset: 0x340, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  ___bubbleParticleArray;

/// @brief Field bubblerAudio, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___bubblerAudio;

/// @brief Field popBubbleAudio, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___popBubbleAudio;

/// @brief Field currentParticles, offset: 0x358, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint32_t>*  ___currentParticles;

/// @brief Field particleInfoDict, offset: 0x360, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  ___particleInfoDict;

/// @brief Field outPosition, offset: 0x368, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___outPosition;

/// @brief Field allBubblesPopped, offset: 0x374, size: 0x1, def value: None
 bool  ___allBubblesPopped;

/// @brief Field disableActivation, offset: 0x375, size: 0x1, def value: None
 bool  ___disableActivation;

/// @brief Field disableDeactivation, offset: 0x376, size: 0x1, def value: None
 bool  ___disableDeactivation;

/// @brief Field rotationSpeed, offset: 0x378, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// @brief Field fan, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fan;

/// @brief Field fanYaxisinstead, offset: 0x388, size: 0x1, def value: None
 bool  ___fanYaxisinstead;

/// @brief Field ongoingStrength, offset: 0x38c, size: 0x4, def value: None
 float_t  ___ongoingStrength;

/// @brief Field triggerStrength, offset: 0x390, size: 0x4, def value: None
 float_t  ___triggerStrength;

/// @brief Field initialTriggerPull, offset: 0x394, size: 0x4, def value: None
 float_t  ___initialTriggerPull;

/// @brief Field initialTriggerDuration, offset: 0x398, size: 0x4, def value: None
 float_t  ___initialTriggerDuration;

/// @brief Field hasBubblerAudio, offset: 0x39c, size: 0x1, def value: None
 bool  ___hasBubblerAudio;

/// @brief Field hasPopBubbleAudio, offset: 0x39d, size: 0x1, def value: None
 bool  ___hasPopBubbleAudio;

/// @brief Field gameObjectActiveOnlyWhileTriggerDown, offset: 0x3a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObjectActiveOnlyWhileTriggerDown;

/// @brief Field behavioursToEnableWhenTriggerPressed, offset: 0x3a8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  ___behavioursToEnableWhenTriggerPressed;

/// @brief Field hasParticleSystem, offset: 0x3b0, size: 0x1, def value: None
 bool  ___hasParticleSystem;

/// @brief Field hasFan, offset: 0x3b1, size: 0x1, def value: None
 bool  ___hasFan;

/// @brief Field hasActiveOnlyComponent, offset: 0x3b2, size: 0x1, def value: None
 bool  ___hasActiveOnlyComponent;

/// @brief Size padding 0x3e8 - 0x3b8 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bubbler, ____worksInWater) == 0x331, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___bubbleParticleSystem) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___bubbleParticleArray) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___bubblerAudio) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___popBubbleAudio) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___currentParticles) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___particleInfoDict) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___outPosition) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___allBubblesPopped) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___disableActivation) == 0x375, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___disableDeactivation) == 0x376, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___rotationSpeed) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___fan) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___fanYaxisinstead) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___ongoingStrength) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___triggerStrength) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___initialTriggerPull) == 0x394, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___initialTriggerDuration) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___hasBubblerAudio) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___hasPopBubbleAudio) == 0x39d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___gameObjectActiveOnlyWhileTriggerDown) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___behavioursToEnableWhenTriggerPressed) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___hasParticleSystem) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___hasFan) == 0x3b1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bubbler, ___hasActiveOnlyComponent) == 0x3b2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bubbler) == 0x3e8, "Size mismatch!");

} // namespace end def GlobalNamespace
