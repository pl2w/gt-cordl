#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityWander.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityWander_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWander::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityWander::Setup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x586a394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWander::*)()>(&::GlobalNamespace::GRAbilityWander::OnStart)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x586a404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWander::*)()>(&::GlobalNamespace::GRAbilityWander::OnStop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586a6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityWander::*)()>(&::GlobalNamespace::GRAbilityWander::IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586a718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWander::*)(float_t)>(&::GlobalNamespace::GRAbilityWander::OnThink)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x586a720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.PickRandomDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GRAbilityWander::*)()>(&::GlobalNamespace::GRAbilityWander::PickRandomDestination)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x586a454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                        {"PickRandomDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWander::*)(float_t)>(&::GlobalNamespace::GRAbilityWander::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x586a764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWander::*)(float_t)>(&::GlobalNamespace::GRAbilityWander::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x586a7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityWander._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityWander::*)()>(&::GlobalNamespace::GRAbilityWander::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586a7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GRAbilityWander::__cordl_internal_get_moveAbility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveAbility;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GRAbilityWander::__cordl_internal_get_moveAbility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveAbility;
}
constexpr void GlobalNamespace::GRAbilityWander::__cordl_internal_set_moveAbility(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveAbility = value;
}
inline void GlobalNamespace::GRAbilityWander::setStaticF_rotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Quaternion>, "rotations", ::GlobalNamespace::GRAbilityWander*>(std::forward<::ArrayW<::UnityEngine::Quaternion>>(value));
}
inline ::ArrayW<::UnityEngine::Quaternion> GlobalNamespace::GRAbilityWander::getStaticF_rotations()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Quaternion>, "rotations", ::GlobalNamespace::GRAbilityWander*>();
}
inline void GlobalNamespace::GRAbilityWander::setStaticF_rotationWeight(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "rotationWeight", ::GlobalNamespace::GRAbilityWander*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GlobalNamespace::GRAbilityWander::getStaticF_rotationWeight()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "rotationWeight", ::GlobalNamespace::GRAbilityWander*>();
}
inline void GlobalNamespace::GRAbilityWander::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityWander::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityWander::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityWander::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityWander::OnThink(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRAbilityWander::PickRandomDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                        {"PickRandomDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityWander::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityWander::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityWander::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityWander*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityWander* GlobalNamespace::GRAbilityWander::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityWander*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityWander::GRAbilityWander()   {
}
