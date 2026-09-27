#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSentientCore.hpp"
#include "GlobalNamespace/zzzz__GRSentientCore_SentientCoreState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRSentientCore_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRSentientCore_SentientCoreState_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGRSleepableEntity_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58b10e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.get_WakeUpRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::get_WakeUpRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b1104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"get_WakeUpRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::Start)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x58b110c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::OnDestroy)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x58b14c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.IsSleeping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::IsSleeping)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58b187c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"IsSleeping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.WakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::WakeUp)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58b189c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"WakeUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.Sleep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::Sleep)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58b14bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"Sleep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)(int64_t, int64_t)>(&::GlobalNamespace::GRSentientCore::OnStateChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58b1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::OnGrabbed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58b19c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::OnReleased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b19fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.OnSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::OnSnapped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b1a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnSnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.OnDetached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::OnDetached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b1a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnDetached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::Update)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58b1a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x58b1b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::SharedUpdate)> {
  constexpr static std::size_t size = 0xf7c;
  constexpr static std::size_t addrs = 0x58b1d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"SharedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)(::GlobalNamespace::GRSentientCore_SentientCoreState)>(&::GlobalNamespace::GRSentientCore::SetState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58b1958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRSentientCore_SentientCoreState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.PerformJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, double_t)>(&::GlobalNamespace::GRSentientCore::PerformJump)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58b340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"PerformJump", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.DrawJumpPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)(::UnityEngine::Color)>(&::GlobalNamespace::GRSentientCore::DrawJumpPath)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x58b2ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"DrawJumpPath", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore.AuthorityInitiateJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::AuthorityInitiateJump)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x58b2cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"AuthorityInitiateJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSentientCore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSentientCore::*)()>(&::GlobalNamespace::GRSentientCore::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58b3654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRSentientCore::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRSentientCore::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpAngleMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpAngleMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpAngleMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpAngleMinMax;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpAngleMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpAngleMinMax = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpSpeed = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpGravityAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpGravityAccel;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpGravityAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpGravityAccel;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpGravityAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpGravityAccel = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpAnticipationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpAnticipationTime;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpAnticipationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpAnticipationTime;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpAnticipationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpAnticipationTime = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpCooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCooldownTime;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpCooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCooldownTime;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpCooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpCooldownTime = value;
}
constexpr bool& GlobalNamespace::GRSentientCore::__cordl_internal_get_useSurfaceNormalForGravityDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSurfaceNormalForGravityDirection;
}
constexpr bool const& GlobalNamespace::GRSentientCore::__cordl_internal_get_useSurfaceNormalForGravityDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSurfaceNormalForGravityDirection;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_useSurfaceNormalForGravityDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSurfaceNormalForGravityDirection = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GRSentientCore::__cordl_internal_get_timeRangeBetweenAlerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRangeBetweenAlerts;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GRSentientCore::__cordl_internal_get_timeRangeBetweenAlerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRangeBetweenAlerts;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_timeRangeBetweenAlerts(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeRangeBetweenAlerts = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_timeUntilFirstAlert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilFirstAlert;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_timeUntilFirstAlert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilFirstAlert;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_timeUntilFirstAlert(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUntilFirstAlert = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_alertNoiseEventMagnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alertNoiseEventMagnitude;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_alertNoiseEventMagnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alertNoiseEventMagnitude;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_alertNoiseEventMagnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alertNoiseEventMagnitude = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSound;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpSound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRSentientCore::__cordl_internal_get_landSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRSentientCore::__cordl_internal_get_landSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landSound;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_landSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landSound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRSentientCore::__cordl_internal_get_alertEnemiesSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alertEnemiesSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRSentientCore::__cordl_internal_get_alertEnemiesSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alertEnemiesSound;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_alertEnemiesSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alertEnemiesSound = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_wakeupRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wakeupRadius;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_wakeupRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wakeupRadius;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_wakeupRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wakeupRadius = value;
}
constexpr bool& GlobalNamespace::GRSentientCore::__cordl_internal_get_debugDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr bool const& GlobalNamespace::GRSentientCore::__cordl_internal_get_debugDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_debugDraw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDraw = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSentientCore::__cordl_internal_get_visualCore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualCore;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSentientCore::__cordl_internal_get_visualCore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualCore;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_visualCore(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualCore = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRSentientCore::__cordl_internal_get_trailFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRSentientCore::__cordl_internal_get_trailFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailFX;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_trailFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailFX = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRSentientCore::__cordl_internal_get_surfaceNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceNormal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRSentientCore::__cordl_internal_get_surfaceNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceNormal;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_surfaceNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceNormal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpDirection;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpDirection = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpStartPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpStartPosition;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpStartPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpStartPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpVelocity;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpVelocity = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpStartTime;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_jumpStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpStartTime;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_jumpStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpStartTime = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GRSentientCore::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GRSentientCore::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_timeUntilNextAlert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilNextAlert;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_timeUntilNextAlert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUntilNextAlert;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_timeUntilNextAlert(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUntilNextAlert = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_enemyAlertDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyAlertDuration;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_enemyAlertDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyAlertDuration;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_enemyAlertDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyAlertDuration = value;
}
constexpr bool& GlobalNamespace::GRSentientCore::__cordl_internal_get_isPlayingAlert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayingAlert;
}
constexpr bool const& GlobalNamespace::GRSentientCore::__cordl_internal_get_isPlayingAlert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayingAlert;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_isPlayingAlert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlayingAlert = value;
}
constexpr bool& GlobalNamespace::GRSentientCore::__cordl_internal_get_sleepRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepRequested;
}
constexpr bool const& GlobalNamespace::GRSentientCore::__cordl_internal_get_sleepRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepRequested;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_sleepRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepRequested = value;
}
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState& GlobalNamespace::GRSentientCore::__cordl_internal_get_localState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localState;
}
constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState const& GlobalNamespace::GRSentientCore::__cordl_internal_get_localState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localState;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_localState(::GlobalNamespace::GRSentientCore_SentientCoreState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localState = value;
}
constexpr float_t& GlobalNamespace::GRSentientCore::__cordl_internal_get_localStateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localStateStartTime;
}
constexpr float_t const& GlobalNamespace::GRSentientCore::__cordl_internal_get_localStateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localStateStartTime;
}
constexpr void GlobalNamespace::GRSentientCore::__cordl_internal_set_localStateStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localStateStartTime = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRSentientCore::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::GRSentientCore::get_WakeUpRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"get_WakeUpRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSentientCore::IsSleeping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"IsSleeping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::WakeUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"WakeUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::Sleep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"Sleep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::OnStateChanged(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRSentientCore::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::OnSnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnSnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::OnDetached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"OnDetached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::AuthorityUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::SharedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"SharedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::SetState(::GlobalNamespace::GRSentientCore_SentientCoreState  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRSentientCore_SentientCoreState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextState);
}
inline void GlobalNamespace::GRSentientCore::PerformJump(::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  direction, double_t  jumpNetworkTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"PerformJump", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPos, normal, direction, jumpNetworkTime);
}
inline void GlobalNamespace::GRSentientCore::DrawJumpPath(::UnityEngine::Color  pathColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"DrawJumpPath", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathColor);
}
inline void GlobalNamespace::GRSentientCore::AuthorityInitiateJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {"AuthorityInitiateJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSentientCore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSentientCore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSentientCore* GlobalNamespace::GRSentientCore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSentientCore*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGRSleepableEntity"
constexpr  GlobalNamespace::GRSentientCore::operator ::GlobalNamespace::IGRSleepableEntity*() noexcept {
return static_cast<::GlobalNamespace::IGRSleepableEntity*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGRSleepableEntity"
constexpr ::GlobalNamespace::IGRSleepableEntity* GlobalNamespace::GRSentientCore::i___GlobalNamespace__IGRSleepableEntity() noexcept {
return static_cast<::GlobalNamespace::IGRSleepableEntity*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSentientCore::GRSentientCore()   {
}
