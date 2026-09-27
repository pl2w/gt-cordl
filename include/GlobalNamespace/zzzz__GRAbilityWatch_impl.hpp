#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityWatch.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityWatch_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWatch.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWatch::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityWatch::Setup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5868308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWatch.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWatch::*)()>(&::GlobalNamespace::GRAbilityWatch::OnStart)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5868328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWatch.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWatch::*)()>(&::GlobalNamespace::GRAbilityWatch::OnStop)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5868398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWatch.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityWatch::*)()>(&::GlobalNamespace::GRAbilityWatch::IsDone)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58683b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWatch.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWatch::*)(float_t)>(&::GlobalNamespace::GRAbilityWatch::OnUpdateShared)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58683ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWatch.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWatch::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRAbilityWatch::SetTargetPlayer)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5868418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWatch::*)()>(&::GlobalNamespace::GRAbilityWatch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5868524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilityWatch::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_animName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_animName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animName;
}
constexpr void GlobalNamespace::GRAbilityWatch::__cordl_internal_set_animName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animName = value;
}
constexpr float_t& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_animSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_animSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animSpeed;
}
constexpr void GlobalNamespace::GRAbilityWatch::__cordl_internal_set_animSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animSpeed = value;
}
constexpr float_t& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void GlobalNamespace::GRAbilityWatch::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GRAbilityWatch::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr double_t& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_endTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr double_t const& GlobalNamespace::GRAbilityWatch::__cordl_internal_get_endTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr void GlobalNamespace::GRAbilityWatch::__cordl_internal_set_endTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTime = value;
}
inline void GlobalNamespace::GRAbilityWatch::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityWatch::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityWatch::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityWatch::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityWatch::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityWatch::SetTargetPlayer(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline void GlobalNamespace::GRAbilityWatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityWatch* GlobalNamespace::GRAbilityWatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityWatch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityWatch::GRAbilityWatch()   {
}
