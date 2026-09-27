#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VenusFlyTrapHoldable.hpp"
#include "GlobalNamespace/zzzz__UnityLayer_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__VenusFlyTrapHoldable_VenusState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__VenusFlyTrapHoldable_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__TriggerEventNotifier_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__VenusFlyTrapHoldable_VenusState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)()>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da47b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)(bool)>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da47bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)()>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5da47c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)()>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5da481c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)()>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5da4b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)()>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::Tick)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5da4d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.SmoothRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)(bool)>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::SmoothRotation)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x5da4fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"SmoothRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)(::GlobalNamespace::VenusFlyTrapHoldable_VenusState)>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::UpdateState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5da4f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::VenusFlyTrapHoldable_VenusState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.TriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::TriggerEntered)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5da5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"TriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.OnTriggerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnTriggerEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5da5898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnTriggerEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable.OnTriggerLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)()>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnTriggerLocal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5da57e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnTriggerLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::VenusFlyTrapHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::VenusFlyTrapHoldable::*)()>(&::GorillaTag::Cosmetics::VenusFlyTrapHoldable::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5da5984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_lipA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipA;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_lipA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipA;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_lipA(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lipA = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_lipB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipB;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_lipB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipB;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_lipB(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lipB = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_targetRotationA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotationA;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_targetRotationA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotationA;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_targetRotationA(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRotationA = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_targetRotationB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotationB;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_targetRotationB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotationB;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_targetRotationB(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRotationB = value;
}
constexpr float_t& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_closedDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedDuration;
}
constexpr float_t const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_closedDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedDuration;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_closedDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedDuration = value;
}
constexpr float_t& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::GlobalNamespace::UnityLayer& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layers;
}
constexpr ::GlobalNamespace::UnityLayer const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layers;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_layers(::GlobalNamespace::UnityLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layers = value;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_triggerEventNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEventNotifier;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_triggerEventNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEventNotifier;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_triggerEventNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerEventNotifier = value;
}
constexpr float_t& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_bug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bug;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_bug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bug;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_bug(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bug = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_closingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_closingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closingAudio;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_closingAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closingAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_openingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_openingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openingAudio;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_openingAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openingAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_flyLoopingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyLoopingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_flyLoopingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flyLoopingAudio;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_flyLoopingAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flyLoopingAudio = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
constexpr float_t& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_closedStartedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedStartedTime;
}
constexpr float_t const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_closedStartedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedStartedTime;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_closedStartedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedStartedTime = value;
}
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::VenusFlyTrapHoldable_VenusState const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_state(::GlobalNamespace::VenusFlyTrapHoldable_VenusState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_localRotA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotA;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_localRotA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotA;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_localRotA(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRotA = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_localRotB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotB;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_localRotB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRotB;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_localRotB(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRotB = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr bool& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::VenusFlyTrapHoldable::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::VenusFlyTrapHoldable::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::SmoothRotation(bool  isClosing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"SmoothRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isClosing);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::UpdateState(::GlobalNamespace::VenusFlyTrapHoldable_VenusState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::VenusFlyTrapHoldable_VenusState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::TriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"TriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnTriggerEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnTriggerEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::OnTriggerLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {"OnTriggerLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::VenusFlyTrapHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::VenusFlyTrapHoldable* GorillaTag::Cosmetics::VenusFlyTrapHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::VenusFlyTrapHoldable*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::VenusFlyTrapHoldable::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::VenusFlyTrapHoldable::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::VenusFlyTrapHoldable::VenusFlyTrapHoldable()   {
}
