#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityStagger.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityStagger_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityInterpolatedMovement_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.SetStunTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityStagger::*)(float_t)>(&::GlobalNamespace::GRAbilityStagger::SetStunTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5868f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {"SetStunTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.SetStaggerVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityStagger::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRAbilityStagger::SetStaggerVelocity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5868f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {"SetStaggerVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityStagger::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityStagger::Setup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5869034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityStagger::*)()>(&::GlobalNamespace::GRAbilityStagger::OnStart)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5869078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityStagger::*)()>(&::GlobalNamespace::GRAbilityStagger::OnStop)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5869244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityStagger::*)()>(&::GlobalNamespace::GRAbilityStagger::IsDone)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x586927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityStagger::*)(float_t)>(&::GlobalNamespace::GRAbilityStagger::OnUpdateShared)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58692a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger.GetAnimName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GRAbilityStagger::*)()>(&::GlobalNamespace::GRAbilityStagger::GetAnimName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58692bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {"GetAnimName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityStagger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityStagger::*)()>(&::GlobalNamespace::GRAbilityStagger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58692c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::GRAbilityStagger::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_animData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_animData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animData;
}
constexpr void GlobalNamespace::GRAbilityStagger::__cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animData = value;
}
constexpr int32_t& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_lastAnimIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr int32_t const& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_lastAnimIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAnimIndex;
}
constexpr void GlobalNamespace::GRAbilityStagger::__cordl_internal_set_lastAnimIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAnimIndex = value;
}
constexpr ::StringW& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_animNameString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr ::StringW const& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_animNameString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animNameString;
}
constexpr void GlobalNamespace::GRAbilityStagger::__cordl_internal_set_animNameString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animNameString = value;
}
constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement*& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_staggerMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerMovement;
}
constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement* const& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_staggerMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerMovement;
}
constexpr void GlobalNamespace::GRAbilityStagger::__cordl_internal_set_staggerMovement(::GlobalNamespace::GRAbilityInterpolatedMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staggerMovement = value;
}
constexpr float_t& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_stunTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunTime;
}
constexpr float_t const& GlobalNamespace::GRAbilityStagger::__cordl_internal_get_stunTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunTime;
}
constexpr void GlobalNamespace::GRAbilityStagger::__cordl_internal_set_stunTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stunTime = value;
}
inline void GlobalNamespace::GRAbilityStagger::SetStunTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {"SetStunTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::GRAbilityStagger::SetStaggerVelocity(::UnityEngine::Vector3  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {"SetStaggerVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vel);
}
inline void GlobalNamespace::GRAbilityStagger::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityStagger::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityStagger::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityStagger::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityStagger::OnUpdateShared(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::StringW GlobalNamespace::GRAbilityStagger::GetAnimName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {"GetAnimName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityStagger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityStagger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityStagger* GlobalNamespace::GRAbilityStagger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityStagger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityStagger::GRAbilityStagger()   {
}
