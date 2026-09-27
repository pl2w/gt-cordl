#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityFlashed.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GRAbilityFlashed_def.hpp"
#include "GlobalNamespace/zzzz__AnimationData_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRAbilityFlashed.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityFlashed::*)(::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GRAbilityFlashed::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586c648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityFlashed.SetStunTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityFlashed::*)(float_t)>(&::GlobalNamespace::GRAbilityFlashed::SetStunTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586c64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                        {"SetStunTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityFlashed.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityFlashed::*)()>(&::GlobalNamespace::GRAbilityFlashed::OnStart)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x586c654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityFlashed.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityFlashed::*)()>(&::GlobalNamespace::GRAbilityFlashed::OnStop)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x586c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityFlashed.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRAbilityFlashed::*)()>(&::GlobalNamespace::GRAbilityFlashed::IsDone)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x586c868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                    {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRAbilityFlashed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRAbilityFlashed::*)()>(&::GlobalNamespace::GRAbilityFlashed::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586c88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_flashAnimations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashAnimations;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_flashAnimations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashAnimations;
}
constexpr void GlobalNamespace::GRAbilityFlashed::__cordl_internal_set_flashAnimations(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashAnimations = value;
}
constexpr int32_t& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_flashAnimationIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashAnimationIndex;
}
constexpr int32_t const& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_flashAnimationIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashAnimationIndex;
}
constexpr void GlobalNamespace::GRAbilityFlashed::__cordl_internal_set_flashAnimationIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashAnimationIndex = value;
}
constexpr double_t& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_behaviorEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr double_t const& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_behaviorEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr void GlobalNamespace::GRAbilityFlashed::__cordl_internal_set_behaviorEndTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorEndTime = value;
}
constexpr float_t& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_stunTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunTime;
}
constexpr float_t const& GlobalNamespace::GRAbilityFlashed::__cordl_internal_get_stunTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunTime;
}
constexpr void GlobalNamespace::GRAbilityFlashed::__cordl_internal_set_stunTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stunTime = value;
}
inline void GlobalNamespace::GRAbilityFlashed::Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GRAbilityFlashed::SetStunTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                        {"SetStunTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::GRAbilityFlashed::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityFlashed::OnStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRAbilityFlashed::IsDone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRAbilityFlashed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRAbilityFlashed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRAbilityFlashed* GlobalNamespace::GRAbilityFlashed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRAbilityFlashed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRAbilityFlashed::GRAbilityFlashed()   {
}
