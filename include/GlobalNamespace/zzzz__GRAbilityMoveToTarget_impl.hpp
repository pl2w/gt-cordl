#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityMoveToTarget.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityMoveToTarget::Setup)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5868534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)()>(&::GlobalNamespace::GRAbilityMoveToTarget::OnStart)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x586858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)()>(&::GlobalNamespace::GRAbilityMoveToTarget::OnStop)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58686c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityMoveToTarget::*)()>(&::GlobalNamespace::GRAbilityMoveToTarget::IsDone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58686d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)(float_t)>(&::GlobalNamespace::GRAbilityMoveToTarget::OnUpdateShared)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x586873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GRAbilityMoveToTarget::SetTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5868820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.SetTargetPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRAbilityMoveToTarget::SetTargetPos)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5868828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"SetTargetPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.GetTargetPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GRAbilityMoveToTarget::*)()>(&::GlobalNamespace::GRAbilityMoveToTarget::GetTargetPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586884c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"GetTargetPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget.SetLookAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GRAbilityMoveToTarget::SetLookAtTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5868858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"SetLookAtTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityMoveToTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityMoveToTarget::*)()>(&::GlobalNamespace::GRAbilityMoveToTarget::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5868860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_moveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_moveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveSpeed;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_moveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveSpeed = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_animName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_animName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_animName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animName = value;
}
constexpr float_t& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_animSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_animSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_animSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animSpeed = value;
}
constexpr float_t& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_movementSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_movementSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementSound;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_movementSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementSound = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_targetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_targetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_targetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_lookAtTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_get_lookAtTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtTarget;
}
constexpr void GlobalNamespace::GRAbilityMoveToTarget::__cordl_internal_set_lookAtTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAtTarget = value;
}
inline void GlobalNamespace::GRAbilityMoveToTarget::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityMoveToTarget::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityMoveToTarget::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityMoveToTarget::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityMoveToTarget::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityMoveToTarget::SetTarget(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline void GlobalNamespace::GRAbilityMoveToTarget::SetTargetPos(::UnityEngine::Vector3  targetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"SetTargetPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPos);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRAbilityMoveToTarget::GetTargetPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"GetTargetPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityMoveToTarget::SetLookAtTarget(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {"SetLookAtTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline void GlobalNamespace::GRAbilityMoveToTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityMoveToTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityMoveToTarget* GlobalNamespace::GRAbilityMoveToTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityMoveToTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityMoveToTarget::GRAbilityMoveToTarget()   {
}
