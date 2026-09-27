#pragma once
// IWYU pragma private; include "GlobalNamespace/Ballista.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Ballista_def.hpp"
#include "GlobalNamespace/zzzz__Ballista_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Ballista.TriggerLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::TriggerLoad)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d11da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"TriggerLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.TriggerFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::TriggerFire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d11dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"TriggerFire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.get_LaunchSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::get_LaunchSpeed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d11de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"get_LaunchSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::Awake)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d11e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::Update)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x5d1204c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.FireLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::FireLocal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d12878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"FireLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.GetPlayerBodyCenterPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Ballista::*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::Ballista::GetPlayerBodyCenterPosition)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d1273c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"GetPlayerBodyCenterPosition", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::Ballista::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d12938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::Ballista::OnTriggerExit)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d12a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.FireBallistaRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::Ballista::FireBallistaRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d12b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"FireBallistaRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.UpdatePredictionLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::UpdatePredictionLine)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5d12b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"UpdatePredictionLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.DebugDrawTrajectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::Ballista::*)(float_t)>(&::GlobalNamespace::Ballista::DebugDrawTrajectory)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d128bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"DebugDrawTrajectory", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d12dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.RefreshButtonColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::RefreshButtonColors)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d11fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"RefreshButtonColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista.SetSpeedIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)(int32_t)>(&::GlobalNamespace::Ballista::SetSpeedIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d12f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"SetSpeedIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista::*)()>(&::GlobalNamespace::Ballista::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5d12f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::Ballista::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::Ballista::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Ballista::__cordl_internal_get_launchStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchStart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Ballista::__cordl_internal_get_launchStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchStart;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_launchStart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchStart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Ballista::__cordl_internal_get_launchEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Ballista::__cordl_internal_get_launchEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchEnd;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_launchEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchEnd = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Ballista::__cordl_internal_get_launchBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchBone;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Ballista::__cordl_internal_get_launchBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchBone;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_launchBone(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchBone = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_reloadDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadDelay;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_reloadDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadDelay;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_reloadDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reloadDelay = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_loadTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTime;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_loadTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTime;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_loadTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadTime = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_playerMagnetismStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMagnetismStrength;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_playerMagnetismStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMagnetismStrength;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_playerMagnetismStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMagnetismStrength = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_launchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_launchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_launchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSpeed = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch = value;
}
constexpr bool& GlobalNamespace::Ballista::__cordl_internal_get_useSpeedOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSpeedOptions;
}
constexpr bool const& GlobalNamespace::Ballista::__cordl_internal_get_useSpeedOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSpeedOptions;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_useSpeedOptions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSpeedOptions = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::Ballista::__cordl_internal_get_speedOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedOptions;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::Ballista::__cordl_internal_get_speedOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedOptions;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_speedOptions(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedOptions = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_currentSpeedIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeedIndex;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_currentSpeedIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeedIndex;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_currentSpeedIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpeedIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::Ballista::__cordl_internal_get_speedZeroButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedZeroButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::Ballista::__cordl_internal_get_speedZeroButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedZeroButton;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_speedZeroButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedZeroButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::Ballista::__cordl_internal_get_speedOneButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedOneButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::Ballista::__cordl_internal_get_speedOneButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedOneButton;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_speedOneButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedOneButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::Ballista::__cordl_internal_get_speedTwoButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTwoButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::Ballista::__cordl_internal_get_speedTwoButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedTwoButton;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_speedTwoButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedTwoButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::Ballista::__cordl_internal_get_speedThreeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedThreeButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::Ballista::__cordl_internal_get_speedThreeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedThreeButton;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_speedThreeButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedThreeButton = value;
}
constexpr bool& GlobalNamespace::Ballista::__cordl_internal_get_debugDrawTrajectoryOnLaunch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawTrajectoryOnLaunch;
}
constexpr bool const& GlobalNamespace::Ballista::__cordl_internal_get_debugDrawTrajectoryOnLaunch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawTrajectoryOnLaunch;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_debugDrawTrajectoryOnLaunch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawTrajectoryOnLaunch = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_loadTriggerHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTriggerHash;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_loadTriggerHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadTriggerHash;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_loadTriggerHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadTriggerHash = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_fireTriggerHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireTriggerHash;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_fireTriggerHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireTriggerHash;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_fireTriggerHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireTriggerHash = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_pitchParamHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchParamHash;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_pitchParamHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchParamHash;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_pitchParamHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchParamHash = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_idleStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleStateHash;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_idleStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleStateHash;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_idleStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleStateHash = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_loadStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadStateHash;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_loadStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadStateHash;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_loadStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadStateHash = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_fireStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireStateHash;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_fireStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireStateHash;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_fireStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireStateHash = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_prevStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevStateHash;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_prevStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevStateHash;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_prevStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevStateHash = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_fireCompleteTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCompleteTime;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_fireCompleteTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCompleteTime;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_fireCompleteTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireCompleteTime = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_loadStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadStartTime;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_loadStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadStartTime;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_loadStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadStartTime = value;
}
constexpr bool& GlobalNamespace::Ballista::__cordl_internal_get_playerInTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInTrigger;
}
constexpr bool const& GlobalNamespace::Ballista::__cordl_internal_get_playerInTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInTrigger;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_playerInTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerInTrigger = value;
}
constexpr bool& GlobalNamespace::Ballista::__cordl_internal_get_playerReadyToFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReadyToFire;
}
constexpr bool const& GlobalNamespace::Ballista::__cordl_internal_get_playerReadyToFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReadyToFire;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_playerReadyToFire(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerReadyToFire = value;
}
constexpr bool& GlobalNamespace::Ballista::__cordl_internal_get_playerLaunched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLaunched;
}
constexpr bool const& GlobalNamespace::Ballista::__cordl_internal_get_playerLaunched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLaunched;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_playerLaunched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLaunched = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_playerReadyToFireDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReadyToFireDist;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_playerReadyToFireDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerReadyToFireDist;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_playerReadyToFireDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerReadyToFireDist = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Ballista::__cordl_internal_get_playerBodyOffsetFromHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerBodyOffsetFromHead;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Ballista::__cordl_internal_get_playerBodyOffsetFromHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerBodyOffsetFromHead;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_playerBodyOffsetFromHead(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerBodyOffsetFromHead = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Ballista::__cordl_internal_get_launchDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Ballista::__cordl_internal_get_launchDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchDirection;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_launchDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchDirection = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_launchRampDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchRampDistance;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_launchRampDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchRampDistance;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_launchRampDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchRampDistance = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_collidingLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidingLayer;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_collidingLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidingLayer;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_collidingLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidingLayer = value;
}
constexpr int32_t& GlobalNamespace::Ballista::__cordl_internal_get_notCollidingLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notCollidingLayer;
}
constexpr int32_t const& GlobalNamespace::Ballista::__cordl_internal_get_notCollidingLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notCollidingLayer;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_notCollidingLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notCollidingLayer = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_playerPullInRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPullInRate;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_playerPullInRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPullInRate;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_playerPullInRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPullInRate = value;
}
constexpr float_t& GlobalNamespace::Ballista::__cordl_internal_get_appliedAnimatorPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedAnimatorPitch;
}
constexpr float_t const& GlobalNamespace::Ballista::__cordl_internal_get_appliedAnimatorPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedAnimatorPitch;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_appliedAnimatorPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appliedAnimatorPitch = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::Ballista::__cordl_internal_get_predictionLinePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictionLinePoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::Ballista::__cordl_internal_get_predictionLinePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predictionLinePoints;
}
constexpr void GlobalNamespace::Ballista::__cordl_internal_set_predictionLinePoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predictionLinePoints = value;
}
inline void GlobalNamespace::Ballista::TriggerLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"TriggerLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Ballista::TriggerFire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"TriggerFire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::Ballista::get_LaunchSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"get_LaunchSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::Ballista::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Ballista::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Ballista::FireLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"FireLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Ballista::GetPlayerBodyCenterPosition(::GorillaLocomotion::GTPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"GetPlayerBodyCenterPosition", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, player);
}
inline void GlobalNamespace::Ballista::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::Ballista::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::Ballista::FireBallistaRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"FireBallistaRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::Ballista::UpdatePredictionLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"UpdatePredictionLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::Ballista::DebugDrawTrajectory(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"DebugDrawTrajectory", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, duration);
}
inline void GlobalNamespace::Ballista::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Ballista::RefreshButtonColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"RefreshButtonColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Ballista::SetSpeedIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {"SetSpeedIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::Ballista::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Ballista* GlobalNamespace::Ballista::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Ballista*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Ballista::Ballista()   {
}
//  Writing Method size for method: ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::*)(int32_t)>(&::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d12d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::*)()>(&::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d130dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::*)()>(&::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d130e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::*)()>(&::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d13274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::*)()>(&::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d1327c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::*)()>(&::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d132b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::Ballista>& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::Ballista> const& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Ballista>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
inline void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51* GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51::Ballista__DebugDrawTrajectory_d__51()   {
}
