#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBall.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBall_def.hpp"
#include "GlobalNamespace/zzzz__GameBall_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57a94a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::Tick)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x57a9508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBall*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::MonkeBall::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x57a9cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.TriggerDelayedResync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::TriggerDelayedResync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57a9f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"TriggerDelayedResync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.SetRigidbodyDiscrete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::SetRigidbodyDiscrete)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57aa004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"SetRigidbodyDiscrete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.SetRigidbodyContinuous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::SetRigidbodyContinuous)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"SetRigidbodyContinuous", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MonkeBall> (*)(::GlobalNamespace::GameBall*)>(&::GlobalNamespace::MonkeBall::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57aa03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameBall*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.AlreadyDropped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::AlreadyDropped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57aa0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"AlreadyDropped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::OnGrabbed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57aa0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.OnSwitchHeldByTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)(int32_t)>(&::GlobalNamespace::MonkeBall::OnSwitchHeldByTeam)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57aa0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"OnSwitchHeldByTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.ClearCannotGrabTeamId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::ClearCannotGrabTeamId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57aa1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"ClearCannotGrabTeamId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.RestrictBallToTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeBall::*)(int32_t, float_t)>(&::GlobalNamespace::MonkeBall::RestrictBallToTeam)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57aa1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"RestrictBallToTeam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::Refresh)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x57a94a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.IsGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MonkeBall::IsGamePlayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57a9ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"IsGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.SetVisualOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)(bool)>(&::GlobalNamespace::MonkeBall::SetVisualOffset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x57aa260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"SetVisualOffset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.ReattachVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::ReattachVisuals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x57aa2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"ReattachVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall.UpdateVisualOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::UpdateVisualOffset)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x57a9b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"UpdateVisualOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBall._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBall::*)()>(&::GlobalNamespace::MonkeBall::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57aa3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameBall>& GlobalNamespace::MonkeBall::__cordl_internal_get_gameBall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBall;
}
constexpr ::UnityW<::GlobalNamespace::GameBall> const& GlobalNamespace::MonkeBall::__cordl_internal_get_gameBall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBall;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_gameBall(::UnityW<::GlobalNamespace::GameBall>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameBall = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::MonkeBall::__cordl_internal_get_mainRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::MonkeBall::__cordl_internal_get_mainRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainRenderer;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_mainRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MonkeBall::__cordl_internal_get_defaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MonkeBall::__cordl_internal_get_defaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaterial = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MonkeBall::__cordl_internal_get_teamMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterial;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MonkeBall::__cordl_internal_get_teamMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterial;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_teamMaterial(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamMaterial = value;
}
constexpr double_t& GlobalNamespace::MonkeBall::__cordl_internal_get_restrictTeamGrabEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictTeamGrabEndTime;
}
constexpr double_t const& GlobalNamespace::MonkeBall::__cordl_internal_get_restrictTeamGrabEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictTeamGrabEndTime;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_restrictTeamGrabEndTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restrictTeamGrabEndTime = value;
}
constexpr bool& GlobalNamespace::MonkeBall::__cordl_internal_get_alreadyDropped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alreadyDropped;
}
constexpr bool const& GlobalNamespace::MonkeBall::__cordl_internal_get_alreadyDropped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alreadyDropped;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_alreadyDropped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alreadyDropped = value;
}
constexpr bool& GlobalNamespace::MonkeBall::__cordl_internal_get__justGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justGrabbed;
}
constexpr bool const& GlobalNamespace::MonkeBall::__cordl_internal_get__justGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justGrabbed;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__justGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____justGrabbed = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get__justGrabbedTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justGrabbedTimer;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get__justGrabbedTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justGrabbedTimer;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__justGrabbedTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____justGrabbedTimer = value;
}
constexpr bool& GlobalNamespace::MonkeBall::__cordl_internal_get__launchAfterScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchAfterScore;
}
constexpr bool const& GlobalNamespace::MonkeBall::__cordl_internal_get__launchAfterScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchAfterScore;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__launchAfterScore(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchAfterScore = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get__droppedTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedTimer;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get__droppedTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droppedTimer;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__droppedTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droppedTimer = value;
}
constexpr bool& GlobalNamespace::MonkeBall::__cordl_internal_get__resyncPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resyncPosition;
}
constexpr bool const& GlobalNamespace::MonkeBall::__cordl_internal_get__resyncPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resyncPosition;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__resyncPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resyncPosition = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get__resyncDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resyncDelay;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get__resyncDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resyncDelay;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__resyncDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resyncDelay = value;
}
constexpr bool& GlobalNamespace::MonkeBall::__cordl_internal_get__visualOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualOffset;
}
constexpr bool const& GlobalNamespace::MonkeBall::__cordl_internal_get__visualOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualOffset;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__visualOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visualOffset = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get__offsetThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetThreshold;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get__offsetThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetThreshold;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__offsetThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offsetThreshold = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get__timeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOffset;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get__timeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeOffset;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__timeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeOffset = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get_maxLerpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLerpTime;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get_maxLerpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLerpTime;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_maxLerpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLerpTime = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get_offsetLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetLerp;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get_offsetLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetLerp;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_offsetLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetLerp = value;
}
constexpr bool& GlobalNamespace::MonkeBall::__cordl_internal_get__positionFailsafe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFailsafe;
}
constexpr bool const& GlobalNamespace::MonkeBall::__cordl_internal_get__positionFailsafe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFailsafe;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__positionFailsafe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionFailsafe = value;
}
constexpr float_t& GlobalNamespace::MonkeBall::__cordl_internal_get__positionFailsafeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFailsafeTimer;
}
constexpr float_t const& GlobalNamespace::MonkeBall::__cordl_internal_get__positionFailsafeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFailsafeTimer;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__positionFailsafeTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionFailsafeTimer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeBall::__cordl_internal_get_lastVisiblePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVisiblePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeBall::__cordl_internal_get_lastVisiblePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVisiblePosition;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set_lastVisiblePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVisiblePosition = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::MonkeBall::__cordl_internal_get__rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::MonkeBall::__cordl_internal_get__rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidBody;
}
constexpr void GlobalNamespace::MonkeBall::__cordl_internal_set__rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidBody = value;
}
inline void GlobalNamespace::MonkeBall::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBall*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::MonkeBall::TriggerDelayedResync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"TriggerDelayedResync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::SetRigidbodyDiscrete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"SetRigidbodyDiscrete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::SetRigidbodyContinuous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"SetRigidbodyContinuous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MonkeBall> GlobalNamespace::MonkeBall::Get(::GlobalNamespace::GameBall*  ball)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameBall*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MonkeBall>>(nullptr, ___internal_method, ball);
}
inline bool GlobalNamespace::MonkeBall::AlreadyDropped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"AlreadyDropped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::OnSwitchHeldByTeam(int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"OnSwitchHeldByTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId);
}
inline void GlobalNamespace::MonkeBall::ClearCannotGrabTeamId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"ClearCannotGrabTeamId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeBall::RestrictBallToTeam(int32_t  teamId, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"RestrictBallToTeam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, teamId, duration);
}
inline void GlobalNamespace::MonkeBall::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeBall::IsGamePlayer(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"IsGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collider);
}
inline void GlobalNamespace::MonkeBall::SetVisualOffset(bool  detach)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"SetVisualOffset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, detach);
}
inline void GlobalNamespace::MonkeBall::ReattachVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"ReattachVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::UpdateVisualOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {"UpdateVisualOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBall*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBall* GlobalNamespace::MonkeBall::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBall*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBall::MonkeBall()   {
}
