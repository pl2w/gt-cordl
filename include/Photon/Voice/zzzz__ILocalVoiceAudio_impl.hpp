#pragma once
// IWYU pragma private; include "Photon/Voice/ILocalVoiceAudio.hpp"
#include "Photon/Voice/zzzz__ILocalVoiceAudio_def.hpp"
#include "Photon/Voice/zzzz__AudioUtil_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::ILocalVoiceAudio.get_VoiceDetector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::AudioUtil_IVoiceDetector* (::Photon::Voice::ILocalVoiceAudio::*)()>(&::Photon::Voice::ILocalVoiceAudio::get_VoiceDetector)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(),
                    {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ILocalVoiceAudio.get_LevelMeter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::AudioUtil_ILevelMeter* (::Photon::Voice::ILocalVoiceAudio::*)()>(&::Photon::Voice::ILocalVoiceAudio::get_LevelMeter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(),
                    {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ILocalVoiceAudio.get_VoiceDetectorCalibrating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::ILocalVoiceAudio::*)()>(&::Photon::Voice::ILocalVoiceAudio::get_VoiceDetectorCalibrating)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(),
                    {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ILocalVoiceAudio.VoiceDetectorCalibrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ILocalVoiceAudio::*)(int32_t, ::System::Action_1<float_t>*)>(&::Photon::Voice::ILocalVoiceAudio::VoiceDetectorCalibrate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(),
                    {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::Photon::Voice::AudioUtil_IVoiceDetector* Photon::Voice::ILocalVoiceAudio::get_VoiceDetector()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_IVoiceDetector*>(this, ___internal_method);
}
inline ::Photon::Voice::AudioUtil_ILevelMeter* Photon::Voice::ILocalVoiceAudio::get_LevelMeter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_ILevelMeter*>(this, ___internal_method);
}
inline bool Photon::Voice::ILocalVoiceAudio::get_VoiceDetectorCalibrating()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::ILocalVoiceAudio::VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ILocalVoiceAudio*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMs, onCalibrated);
}
