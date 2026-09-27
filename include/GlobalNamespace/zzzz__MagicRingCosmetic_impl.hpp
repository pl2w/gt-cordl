#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicRingCosmetic.hpp"
#include "GlobalNamespace/zzzz__MagicRingCosmetic_FadeState_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MagicRingCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__MagicRingCosmetic_FadeState_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ThermalReceiver_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MagicRingCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicRingCosmetic::*)()>(&::GlobalNamespace::MagicRingCosmetic::Awake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e06740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicRingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicRingCosmetic.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicRingCosmetic::*)()>(&::GlobalNamespace::MagicRingCosmetic::LateUpdate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5e0680c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicRingCosmetic*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicRingCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicRingCosmetic::*)()>(&::GlobalNamespace::MagicRingCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e06994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicRingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ThermalReceiver>& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_thermalReceiver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalReceiver;
}
constexpr ::UnityW<::GlobalNamespace::ThermalReceiver> const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_thermalReceiver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalReceiver;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_thermalReceiver(::UnityW<::GlobalNamespace::ThermalReceiver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thermalReceiver = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_ringRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_ringRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringRenderer;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_ringRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringRenderer = value;
}
constexpr float_t& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeInTemperatureThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInTemperatureThreshold;
}
constexpr float_t const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeInTemperatureThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInTemperatureThreshold;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_fadeInTemperatureThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeInTemperatureThreshold = value;
}
constexpr float_t& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeOutTemperatureThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutTemperatureThreshold;
}
constexpr float_t const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeOutTemperatureThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutTemperatureThreshold;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_fadeOutTemperatureThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOutTemperatureThreshold = value;
}
constexpr float_t& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTime;
}
constexpr float_t const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTime;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_fadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeTime = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeInSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInSounds;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeInSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInSounds;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_fadeInSounds(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeInSounds = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeOutSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutSounds;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeOutSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutSounds;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_fadeOutSounds(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOutSounds = value;
}
constexpr ::GlobalNamespace::MagicRingCosmetic_FadeState& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeState;
}
constexpr ::GlobalNamespace::MagicRingCosmetic_FadeState const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_fadeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeState;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_fadeState(::GlobalNamespace::MagicRingCosmetic_FadeState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeState = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_defaultEmissiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEmissiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_defaultEmissiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultEmissiveColor;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_defaultEmissiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultEmissiveColor = value;
}
constexpr float_t& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_emissiveAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveAmount;
}
constexpr float_t const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_emissiveAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveAmount;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_emissiveAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissiveAmount = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_materialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::MagicRingCosmetic::__cordl_internal_get_materialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr void GlobalNamespace::MagicRingCosmetic::__cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialPropertyBlock = value;
}
inline void GlobalNamespace::MagicRingCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicRingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicRingCosmetic::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicRingCosmetic*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicRingCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicRingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MagicRingCosmetic* GlobalNamespace::MagicRingCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MagicRingCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicRingCosmetic::MagicRingCosmetic()   {
}
