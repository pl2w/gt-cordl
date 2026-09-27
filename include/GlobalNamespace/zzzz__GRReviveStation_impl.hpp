#pragma once
// IWYU pragma private; include "GlobalNamespace/GRReviveStation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__GRReviveStation_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.get_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRReviveStation::*)()>(&::GlobalNamespace::GRReviveStation::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a9b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"get_Index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.set_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveStation::*)(int32_t)>(&::GlobalNamespace::GRReviveStation::set_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a9b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"set_Index", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveStation::*)(::GlobalNamespace::GhostReactor*, int32_t)>(&::GlobalNamespace::GRReviveStation::Init)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a9b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.SetReviveCooldownSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveStation::*)(double_t)>(&::GlobalNamespace::GRReviveStation::SetReviveCooldownSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a9b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"SetReviveCooldownSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.GetReviveCooldownSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::GRReviveStation::*)()>(&::GlobalNamespace::GRReviveStation::GetReviveCooldownSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a9b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"GetReviveCooldownSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.CalculateRemainingReviveCooldownSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::GRReviveStation::*)(int32_t)>(&::GlobalNamespace::GRReviveStation::CalculateRemainingReviveCooldownSeconds)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58a99c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"CalculateRemainingReviveCooldownSeconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.RevivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveStation::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GRReviveStation::RevivePlayer)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58a9b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"RevivePlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveStation::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRReviveStation::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x58a9d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveStation::*)()>(&::GlobalNamespace::GRReviveStation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRReviveStation::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRReviveStation::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRReviveStation::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::GRReviveStation::__cordl_internal_get_particleEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEffects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::GRReviveStation::__cordl_internal_get_particleEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEffects;
}
constexpr void GlobalNamespace::GRReviveStation::__cordl_internal_set_particleEffects(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleEffects = value;
}
constexpr double_t& GlobalNamespace::GRReviveStation::__cordl_internal_get_reviveCooldownSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveCooldownSeconds;
}
constexpr double_t const& GlobalNamespace::GRReviveStation::__cordl_internal_get_reviveCooldownSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveCooldownSeconds;
}
constexpr void GlobalNamespace::GRReviveStation::__cordl_internal_set_reviveCooldownSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveCooldownSeconds = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>*& GlobalNamespace::GRReviveStation::__cordl_internal_get_cooldownStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownStartTime;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>* const& GlobalNamespace::GRReviveStation::__cordl_internal_get_cooldownStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownStartTime;
}
constexpr void GlobalNamespace::GRReviveStation::__cordl_internal_set_cooldownStartTime(::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownStartTime = value;
}
constexpr int32_t& GlobalNamespace::GRReviveStation::__cordl_internal_get__Index_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GRReviveStation::__cordl_internal_get__Index_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index_k__BackingField;
}
constexpr void GlobalNamespace::GRReviveStation::__cordl_internal_set__Index_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Index_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRReviveStation::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRReviveStation::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRReviveStation::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
inline int32_t GlobalNamespace::GRReviveStation::get_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"get_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRReviveStation::set_Index(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"set_Index", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRReviveStation::Init(::GlobalNamespace::GhostReactor*  reactor, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor, index);
}
inline void GlobalNamespace::GRReviveStation::SetReviveCooldownSeconds(double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"SetReviveCooldownSeconds", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline double_t GlobalNamespace::GRReviveStation::GetReviveCooldownSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"GetReviveCooldownSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::GRReviveStation::CalculateRemainingReviveCooldownSeconds(int32_t  ActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"CalculateRemainingReviveCooldownSeconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, ActorNumber);
}
inline void GlobalNamespace::GRReviveStation::RevivePlayer(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"RevivePlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GRReviveStation::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GRReviveStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRReviveStation* GlobalNamespace::GRReviveStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRReviveStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRReviveStation::GRReviveStation()   {
}
