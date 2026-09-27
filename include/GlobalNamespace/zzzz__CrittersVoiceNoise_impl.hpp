#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersVoiceNoise.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersVoiceNoise_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSpeakerLoudness_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersVoiceNoise.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersVoiceNoise::*)()>(&::GlobalNamespace::CrittersVoiceNoise::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56f5858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersVoiceNoise.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersVoiceNoise::*)()>(&::GlobalNamespace::CrittersVoiceNoise::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56f58b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersVoiceNoise.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersVoiceNoise::*)()>(&::GlobalNamespace::CrittersVoiceNoise::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56f58bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersVoiceNoise.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersVoiceNoise::*)()>(&::GlobalNamespace::CrittersVoiceNoise::SliceUpdate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x56f58c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersVoiceNoise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersVoiceNoise::*)()>(&::GlobalNamespace::CrittersVoiceNoise::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56f5b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr void GlobalNamespace::CrittersVoiceNoise::__cordl_internal_set_speaker(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speaker = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::CrittersVoiceNoise::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr float_t& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_minTriggerThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTriggerThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_minTriggerThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTriggerThreshold;
}
constexpr void GlobalNamespace::CrittersVoiceNoise::__cordl_internal_set_minTriggerThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTriggerThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_maxTriggerThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTriggerThreshold;
}
constexpr float_t const& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_maxTriggerThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTriggerThreshold;
}
constexpr void GlobalNamespace::CrittersVoiceNoise::__cordl_internal_set_maxTriggerThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTriggerThreshold = value;
}
constexpr float_t& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_noiseVolumeMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseVolumeMin;
}
constexpr float_t const& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_noiseVolumeMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseVolumeMin;
}
constexpr void GlobalNamespace::CrittersVoiceNoise::__cordl_internal_set_noiseVolumeMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseVolumeMin = value;
}
constexpr float_t& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_noisVolumeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisVolumeMax;
}
constexpr float_t const& GlobalNamespace::CrittersVoiceNoise::__cordl_internal_get_noisVolumeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisVolumeMax;
}
constexpr void GlobalNamespace::CrittersVoiceNoise::__cordl_internal_set_noisVolumeMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noisVolumeMax = value;
}
inline void GlobalNamespace::CrittersVoiceNoise::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersVoiceNoise::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersVoiceNoise::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersVoiceNoise::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersVoiceNoise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersVoiceNoise*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersVoiceNoise* GlobalNamespace::CrittersVoiceNoise::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersVoiceNoise*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::CrittersVoiceNoise::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::CrittersVoiceNoise::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersVoiceNoise::CrittersVoiceNoise()   {
}
