#pragma once
// IWYU pragma private; include "GlobalNamespace/Bubbler.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Bubbler_def.hpp"
#include "GlobalNamespace/zzzz__Bubbler_BubblerState_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Bubbler.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::Bubbler::OnSpawn)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x57918bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::OnEnable)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5791aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.InitToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::InitToDefault)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5791c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                        {"InitToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5791cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::ResetToDefaultState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5791dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::LateUpdateLocal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5791de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::LateUpdateShared)> {
  constexpr static std::size_t size = 0x8b8;
  constexpr static std::size_t addrs = 0x5791e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::OnActivate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5792754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.OnDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::OnDeactivate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5792774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.CanActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::CanActivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5792794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler.CanDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::CanDeactivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57927a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                    {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Bubbler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Bubbler::*)()>(&::GlobalNamespace::Bubbler::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x57927b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get__worksInWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worksInWater;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get__worksInWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____worksInWater;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set__worksInWater(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____worksInWater = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::Bubbler::__cordl_internal_get_bubbleParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::Bubbler::__cordl_internal_get_bubbleParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleParticleSystem;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_bubbleParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubbleParticleSystem = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>& GlobalNamespace::Bubbler::__cordl_internal_get_bubbleParticleArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleParticleArray;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle> const& GlobalNamespace::Bubbler::__cordl_internal_get_bubbleParticleArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleParticleArray;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_bubbleParticleArray(::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubbleParticleArray = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::Bubbler::__cordl_internal_get_bubblerAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblerAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::Bubbler::__cordl_internal_get_bubblerAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubblerAudio;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_bubblerAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubblerAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::Bubbler::__cordl_internal_get_popBubbleAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popBubbleAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::Bubbler::__cordl_internal_get_popBubbleAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popBubbleAudio;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_popBubbleAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popBubbleAudio = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& GlobalNamespace::Bubbler::__cordl_internal_get_currentParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentParticles;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& GlobalNamespace::Bubbler::__cordl_internal_get_currentParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentParticles;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_currentParticles(::System::Collections::Generic::List_1<uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentParticles = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*& GlobalNamespace::Bubbler::__cordl_internal_get_particleInfoDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleInfoDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>* const& GlobalNamespace::Bubbler::__cordl_internal_get_particleInfoDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleInfoDict;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_particleInfoDict(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleInfoDict = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Bubbler::__cordl_internal_get_outPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Bubbler::__cordl_internal_get_outPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outPosition;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_outPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outPosition = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_allBubblesPopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allBubblesPopped;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_allBubblesPopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allBubblesPopped;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_allBubblesPopped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allBubblesPopped = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_disableActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_disableActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_disableActivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableActivation = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_disableDeactivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_disableDeactivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_disableDeactivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableDeactivation = value;
}
constexpr float_t& GlobalNamespace::Bubbler::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& GlobalNamespace::Bubbler::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Bubbler::__cordl_internal_get_fan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fan;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Bubbler::__cordl_internal_get_fan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fan;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_fan(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fan = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_fanYaxisinstead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fanYaxisinstead;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_fanYaxisinstead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fanYaxisinstead;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_fanYaxisinstead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fanYaxisinstead = value;
}
constexpr float_t& GlobalNamespace::Bubbler::__cordl_internal_get_ongoingStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ongoingStrength;
}
constexpr float_t const& GlobalNamespace::Bubbler::__cordl_internal_get_ongoingStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ongoingStrength;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_ongoingStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ongoingStrength = value;
}
constexpr float_t& GlobalNamespace::Bubbler::__cordl_internal_get_triggerStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerStrength;
}
constexpr float_t const& GlobalNamespace::Bubbler::__cordl_internal_get_triggerStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerStrength;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_triggerStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerStrength = value;
}
constexpr float_t& GlobalNamespace::Bubbler::__cordl_internal_get_initialTriggerPull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialTriggerPull;
}
constexpr float_t const& GlobalNamespace::Bubbler::__cordl_internal_get_initialTriggerPull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialTriggerPull;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_initialTriggerPull(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialTriggerPull = value;
}
constexpr float_t& GlobalNamespace::Bubbler::__cordl_internal_get_initialTriggerDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialTriggerDuration;
}
constexpr float_t const& GlobalNamespace::Bubbler::__cordl_internal_get_initialTriggerDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialTriggerDuration;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_initialTriggerDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialTriggerDuration = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_hasBubblerAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBubblerAudio;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_hasBubblerAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBubblerAudio;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_hasBubblerAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBubblerAudio = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_hasPopBubbleAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPopBubbleAudio;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_hasPopBubbleAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPopBubbleAudio;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_hasPopBubbleAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPopBubbleAudio = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Bubbler::__cordl_internal_get_gameObjectActiveOnlyWhileTriggerDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectActiveOnlyWhileTriggerDown;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Bubbler::__cordl_internal_get_gameObjectActiveOnlyWhileTriggerDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectActiveOnlyWhileTriggerDown;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_gameObjectActiveOnlyWhileTriggerDown(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjectActiveOnlyWhileTriggerDown = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& GlobalNamespace::Bubbler::__cordl_internal_get_behavioursToEnableWhenTriggerPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavioursToEnableWhenTriggerPressed;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& GlobalNamespace::Bubbler::__cordl_internal_get_behavioursToEnableWhenTriggerPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavioursToEnableWhenTriggerPressed;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_behavioursToEnableWhenTriggerPressed(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behavioursToEnableWhenTriggerPressed = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_hasParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParticleSystem;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_hasParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParticleSystem;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_hasParticleSystem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasParticleSystem = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_hasFan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFan;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_hasFan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFan;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_hasFan(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasFan = value;
}
constexpr bool& GlobalNamespace::Bubbler::__cordl_internal_get_hasActiveOnlyComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasActiveOnlyComponent;
}
constexpr bool const& GlobalNamespace::Bubbler::__cordl_internal_get_hasActiveOnlyComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasActiveOnlyComponent;
}
constexpr void GlobalNamespace::Bubbler::__cordl_internal_set_hasActiveOnlyComponent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasActiveOnlyComponent = value;
}
inline void GlobalNamespace::Bubbler::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::Bubbler::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::InitToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                        {"InitToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::ResetToDefaultState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::OnDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Bubbler::CanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::Bubbler::CanDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Bubbler*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Bubbler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Bubbler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Bubbler* GlobalNamespace::Bubbler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Bubbler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bubbler::Bubbler()   {
}
