#pragma once
// IWYU pragma private; include "GlobalNamespace/SeedPacketTriggerHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SeedPacketTriggerHandler_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SeedPacketTriggerHandler.OnTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeedPacketTriggerHandler::*)()>(&::GlobalNamespace::SeedPacketTriggerHandler::OnTriggerEntered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x578f778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {"OnTriggerEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeedPacketTriggerHandler.ToggleEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeedPacketTriggerHandler::*)()>(&::GlobalNamespace::SeedPacketTriggerHandler::ToggleEffects)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x578f7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {"ToggleEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeedPacketTriggerHandler.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeedPacketTriggerHandler::*)()>(&::GlobalNamespace::SeedPacketTriggerHandler::Destroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x578f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeedPacketTriggerHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeedPacketTriggerHandler::*)()>(&::GlobalNamespace::SeedPacketTriggerHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x578f9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_particleToPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleToPlay;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_particleToPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleToPlay;
}
constexpr void GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_set_particleToPlay(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleToPlay = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_soundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_soundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr void GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBankPlayer = value;
}
constexpr bool& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_destroyOnTriggerEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnTriggerEnter;
}
constexpr bool const& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_destroyOnTriggerEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnTriggerEnter;
}
constexpr void GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_set_destroyOnTriggerEnter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyOnTriggerEnter = value;
}
constexpr float_t& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_destroyDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr float_t const& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_destroyDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyDelay;
}
constexpr void GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_set_destroyDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyDelay = value;
}
constexpr bool& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_toggleOnceOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnceOnly;
}
constexpr bool const& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_toggleOnceOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnceOnly;
}
constexpr void GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_set_toggleOnceOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleOnceOnly = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_onTriggerEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTriggerEntered;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>* const& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_onTriggerEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTriggerEntered;
}
constexpr void GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_set_onTriggerEntered(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTriggerEntered = value;
}
constexpr bool& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_triggerEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEntered;
}
constexpr bool const& GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_get_triggerEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEntered;
}
constexpr void GlobalNamespace::SeedPacketTriggerHandler::__cordl_internal_set_triggerEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerEntered = value;
}
inline void GlobalNamespace::SeedPacketTriggerHandler::OnTriggerEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {"OnTriggerEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SeedPacketTriggerHandler::ToggleEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {"ToggleEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SeedPacketTriggerHandler::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SeedPacketTriggerHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeedPacketTriggerHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SeedPacketTriggerHandler* GlobalNamespace::SeedPacketTriggerHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SeedPacketTriggerHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeedPacketTriggerHandler::SeedPacketTriggerHandler()   {
}
