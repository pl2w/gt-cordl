#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAttackSimpleWander.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimpleWander_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityWander_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimpleWander::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityAttackSimpleWander::Setup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x586fc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimpleWander::*)()>(&::GlobalNamespace::GRAbilityAttackSimpleWander::OnStart)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x586fca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimpleWander::*)()>(&::GlobalNamespace::GRAbilityAttackSimpleWander::OnStop)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x586fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimpleWander::*)(float_t)>(&::GlobalNamespace::GRAbilityAttackSimpleWander::OnThink)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x586fd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimpleWander::*)(float_t)>(&::GlobalNamespace::GRAbilityAttackSimpleWander::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x586fda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimpleWander::*)(float_t)>(&::GlobalNamespace::GRAbilityAttackSimpleWander::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x586fe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackSimpleWander::*)()>(&::GlobalNamespace::GRAbilityAttackSimpleWander::IsDone)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586fea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.IsCoolDownOver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityAttackSimpleWander::*)()>(&::GlobalNamespace::GRAbilityAttackSimpleWander::IsCoolDownOver)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586fec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander.GetRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRAbilityAttackSimpleWander::*)()>(&::GlobalNamespace::GRAbilityAttackSimpleWander::GetRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x586fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityAttackSimpleWander._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityAttackSimpleWander::*)()>(&::GlobalNamespace::GRAbilityAttackSimpleWander::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRAbilityWander*& GlobalNamespace::GRAbilityAttackSimpleWander::__cordl_internal_get_wander()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wander;
}
constexpr ::GlobalNamespace::GRAbilityWander* const& GlobalNamespace::GRAbilityAttackSimpleWander::__cordl_internal_get_wander() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wander;
}
constexpr void GlobalNamespace::GRAbilityAttackSimpleWander::__cordl_internal_set_wander(::GlobalNamespace::GRAbilityWander*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wander = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimple*& GlobalNamespace::GRAbilityAttackSimpleWander::__cordl_internal_get_attack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attack;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimple* const& GlobalNamespace::GRAbilityAttackSimpleWander::__cordl_internal_get_attack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attack;
}
constexpr void GlobalNamespace::GRAbilityAttackSimpleWander::__cordl_internal_set_attack(::GlobalNamespace::GRAbilityAttackSimple*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attack = value;
}
inline void GlobalNamespace::GRAbilityAttackSimpleWander::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityAttackSimpleWander::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimpleWander::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimpleWander::OnThink(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityAttackSimpleWander::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GRAbilityAttackSimpleWander::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool GlobalNamespace::GRAbilityAttackSimpleWander::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityAttackSimpleWander::IsCoolDownOver()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GRAbilityAttackSimpleWander::GetRange()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityAttackSimpleWander::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityAttackSimpleWander*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityAttackSimpleWander* GlobalNamespace::GRAbilityAttackSimpleWander::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityAttackSimpleWander*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityAttackSimpleWander::GRAbilityAttackSimpleWander()   {
}
