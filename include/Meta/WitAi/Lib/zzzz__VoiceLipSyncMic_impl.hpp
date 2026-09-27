#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/VoiceLipSyncMic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Lib/zzzz__VoiceLipSyncMic_def.hpp"
#include "Meta/WitAi/Data/zzzz__RingBuffer_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Lib::VoiceLipSyncMic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::VoiceLipSyncMic::*)()>(&::Meta::WitAi::Lib::VoiceLipSyncMic::Awake)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9e83904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::VoiceLipSyncMic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::VoiceLipSyncMic::*)()>(&::Meta::WitAi::Lib::VoiceLipSyncMic::OnEnable)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9e84098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::VoiceLipSyncMic.OnMicSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::VoiceLipSyncMic::*)(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*, float_t)>(&::Meta::WitAi::Lib::VoiceLipSyncMic::OnMicSampleReady)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e84564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"OnMicSampleReady", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::VoiceLipSyncMic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::VoiceLipSyncMic::*)()>(&::Meta::WitAi::Lib::VoiceLipSyncMic::OnDisable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9e84610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::VoiceLipSyncMic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::VoiceLipSyncMic::*)()>(&::Meta::WitAi::Lib::VoiceLipSyncMic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e84960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Lib::VoiceLipSyncMic::__cordl_internal_get_AudioSampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSampleRate;
}
constexpr int32_t const& Meta::WitAi::Lib::VoiceLipSyncMic::__cordl_internal_get_AudioSampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSampleRate;
}
constexpr void Meta::WitAi::Lib::VoiceLipSyncMic::__cordl_internal_set_AudioSampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioSampleRate = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Meta::WitAi::Lib::VoiceLipSyncMic::__cordl_internal_get_AudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Meta::WitAi::Lib::VoiceLipSyncMic::__cordl_internal_get_AudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioSource;
}
constexpr void Meta::WitAi::Lib::VoiceLipSyncMic::__cordl_internal_set_AudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioSource = value;
}
inline void Meta::WitAi::Lib::VoiceLipSyncMic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::VoiceLipSyncMic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::VoiceLipSyncMic::OnMicSampleReady(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker, float_t  levelMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"OnMicSampleReady", {}, {::i2c::type_of<::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker, levelMax);
}
inline void Meta::WitAi::Lib::VoiceLipSyncMic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::VoiceLipSyncMic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::VoiceLipSyncMic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Lib::VoiceLipSyncMic* Meta::WitAi::Lib::VoiceLipSyncMic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::VoiceLipSyncMic*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::VoiceLipSyncMic::VoiceLipSyncMic()   {
}
