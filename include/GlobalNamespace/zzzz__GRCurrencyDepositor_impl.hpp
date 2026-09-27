#pragma once
// IWYU pragma private; include "GlobalNamespace/GRCurrencyDepositor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRCurrencyDepositor_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRCurrencyDepositor.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCurrencyDepositor::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRCurrencyDepositor::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5875398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCurrencyDepositor*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCurrencyDepositor.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCurrencyDepositor::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRCurrencyDepositor::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x58753a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCurrencyDepositor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCurrencyDepositor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCurrencyDepositor::*)()>(&::GlobalNamespace::GRCurrencyDepositor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58756ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCurrencyDepositor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_depositingChargePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositingChargePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_depositingChargePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositingChargePoint;
}
constexpr void GlobalNamespace::GRCurrencyDepositor::__cordl_internal_set_depositingChargePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositingChargePoint = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectibleDepositedEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDepositedEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectibleDepositedEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDepositedEffect;
}
constexpr void GlobalNamespace::GRCurrencyDepositor::__cordl_internal_set_collectibleDepositedEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleDepositedEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectibleDepositedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDepositedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectibleDepositedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDepositedClip;
}
constexpr void GlobalNamespace::GRCurrencyDepositor::__cordl_internal_set_collectibleDepositedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleDepositedClip = value;
}
constexpr float_t& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectibleDepositedClipVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDepositedClipVolume;
}
constexpr float_t const& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectibleDepositedClipVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDepositedClipVolume;
}
constexpr void GlobalNamespace::GRCurrencyDepositor::__cordl_internal_set_collectibleDepositedClipVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleDepositedClipVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRCurrencyDepositor::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr bool& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectSentientCores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectSentientCores;
}
constexpr bool const& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_collectSentientCores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectSentientCores;
}
constexpr void GlobalNamespace::GRCurrencyDepositor::__cordl_internal_set_collectSentientCores(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectSentientCores = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRCurrencyDepositor::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRCurrencyDepositor::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
inline void GlobalNamespace::GRCurrencyDepositor::Init(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCurrencyDepositor*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline void GlobalNamespace::GRCurrencyDepositor::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCurrencyDepositor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GRCurrencyDepositor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCurrencyDepositor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRCurrencyDepositor* GlobalNamespace::GRCurrencyDepositor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRCurrencyDepositor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRCurrencyDepositor::GRCurrencyDepositor()   {
}
