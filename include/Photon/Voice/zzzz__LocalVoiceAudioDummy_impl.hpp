#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceAudioDummy.hpp"
#include "Photon/Voice/zzzz__LocalVoice_impl.hpp"
#include "Photon/Voice/zzzz__LocalVoiceAudioDummy_def.hpp"
#include "Photon/Voice/zzzz__AudioUtil_def.hpp"
#include "Photon/Voice/zzzz__ILocalVoiceAudio_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::LocalVoiceAudioDummy.get_VoiceDetector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::AudioUtil_IVoiceDetector* (::Photon::Voice::LocalVoiceAudioDummy::*)()>(&::Photon::Voice::LocalVoiceAudioDummy::get_VoiceDetector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"get_VoiceDetector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoiceAudioDummy.get_LevelMeter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::AudioUtil_ILevelMeter* (::Photon::Voice::LocalVoiceAudioDummy::*)()>(&::Photon::Voice::LocalVoiceAudioDummy::get_LevelMeter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"get_LevelMeter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoiceAudioDummy.get_VoiceDetectorCalibrating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LocalVoiceAudioDummy::*)()>(&::Photon::Voice::LocalVoiceAudioDummy::get_VoiceDetectorCalibrating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"get_VoiceDetectorCalibrating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoiceAudioDummy.VoiceDetectorCalibrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoiceAudioDummy::*)(int32_t, ::System::Action_1<float_t>*)>(&::Photon::Voice::LocalVoiceAudioDummy::VoiceDetectorCalibrate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa74c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"VoiceDetectorCalibrate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoiceAudioDummy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoiceAudioDummy::*)()>(&::Photon::Voice::LocalVoiceAudioDummy::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa74c1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorDummy*& Photon::Voice::LocalVoiceAudioDummy::__cordl_internal_get_voiceDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetector;
}
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorDummy* const& Photon::Voice::LocalVoiceAudioDummy::__cordl_internal_get_voiceDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetector;
}
constexpr void Photon::Voice::LocalVoiceAudioDummy::__cordl_internal_set_voiceDetector(::Photon::Voice::AudioUtil_VoiceDetectorDummy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceDetector = value;
}
constexpr ::Photon::Voice::AudioUtil_LevelMeterDummy*& Photon::Voice::LocalVoiceAudioDummy::__cordl_internal_get_levelMeter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelMeter;
}
constexpr ::Photon::Voice::AudioUtil_LevelMeterDummy* const& Photon::Voice::LocalVoiceAudioDummy::__cordl_internal_get_levelMeter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelMeter;
}
constexpr void Photon::Voice::LocalVoiceAudioDummy::__cordl_internal_set_levelMeter(::Photon::Voice::AudioUtil_LevelMeterDummy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelMeter = value;
}
inline void Photon::Voice::LocalVoiceAudioDummy::setStaticF_Dummy(::Photon::Voice::LocalVoiceAudioDummy*  value)  {
::cordl_internals::setStaticField<::Photon::Voice::LocalVoiceAudioDummy*, "Dummy", ::Photon::Voice::LocalVoiceAudioDummy*>(std::forward<::Photon::Voice::LocalVoiceAudioDummy*>(value));
}
inline ::Photon::Voice::LocalVoiceAudioDummy* Photon::Voice::LocalVoiceAudioDummy::getStaticF_Dummy()  {
return ::cordl_internals::getStaticField<::Photon::Voice::LocalVoiceAudioDummy*, "Dummy", ::Photon::Voice::LocalVoiceAudioDummy*>();
}
inline ::Photon::Voice::AudioUtil_IVoiceDetector* Photon::Voice::LocalVoiceAudioDummy::get_VoiceDetector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"get_VoiceDetector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_IVoiceDetector*>(this, ___internal_method);
}
inline ::Photon::Voice::AudioUtil_ILevelMeter* Photon::Voice::LocalVoiceAudioDummy::get_LevelMeter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"get_LevelMeter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_ILevelMeter*>(this, ___internal_method);
}
inline bool Photon::Voice::LocalVoiceAudioDummy::get_VoiceDetectorCalibrating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"get_VoiceDetectorCalibrating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoiceAudioDummy::VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {"VoiceDetectorCalibrate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMs, onCalibrated);
}
inline void Photon::Voice::LocalVoiceAudioDummy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceAudioDummy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::LocalVoiceAudioDummy* Photon::Voice::LocalVoiceAudioDummy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LocalVoiceAudioDummy*>());
}
/// @brief Convert operator to "::Photon::Voice::ILocalVoiceAudio"
constexpr  Photon::Voice::LocalVoiceAudioDummy::operator ::Photon::Voice::ILocalVoiceAudio*() noexcept {
return static_cast<::Photon::Voice::ILocalVoiceAudio*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::ILocalVoiceAudio"
constexpr ::Photon::Voice::ILocalVoiceAudio* Photon::Voice::LocalVoiceAudioDummy::i___Photon__Voice__ILocalVoiceAudio() noexcept {
return static_cast<::Photon::Voice::ILocalVoiceAudio*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::LocalVoiceAudioDummy::LocalVoiceAudioDummy()   {
}
