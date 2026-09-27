#pragma once
// IWYU pragma private; include "Photon/Voice/Platform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__Platform_def.hpp"
#include "Photon/Voice/zzzz__DeviceInfo_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioInChangeNotifier_def.hpp"
#include "Photon/Voice/zzzz__IDeviceEnumerator_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Platform.CreateAudioInEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IDeviceEnumerator* (*)(::Photon::Voice::ILogger*)>(&::Photon::Voice::Platform::CreateAudioInEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa746c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Platform*>(),
                        {"CreateAudioInEnumerator", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Platform.CreateAudioInChangeNotifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioInChangeNotifier* (*)(::System::Action*, ::Photon::Voice::ILogger*)>(&::Photon::Voice::Platform::CreateAudioInChangeNotifier)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa746c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Platform*>(),
                        {"CreateAudioInChangeNotifier", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Platform.CreateDefaultAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioDesc* (*)(::Photon::Voice::ILogger*, ::Photon::Voice::DeviceInfo, int32_t, int32_t, ::System::Object*)>(&::Photon::Voice::Platform::CreateDefaultAudioSource)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa746cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Platform*>(),
                        {"CreateDefaultAudioSource", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::Photon::Voice::DeviceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Photon::Voice::IDeviceEnumerator* Photon::Voice::Platform::CreateAudioInEnumerator(::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Platform*>(),
                        {"CreateAudioInEnumerator", {}, {::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IDeviceEnumerator*>(nullptr, ___internal_method, logger);
}
inline ::Photon::Voice::IAudioInChangeNotifier* Photon::Voice::Platform::CreateAudioInChangeNotifier(::System::Action*  callback, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Platform*>(),
                        {"CreateAudioInChangeNotifier", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioInChangeNotifier*>(nullptr, ___internal_method, callback, logger);
}
template<typename T>
inline ::Photon::Voice::IEncoder* Photon::Voice::Platform::CreateDefaultAudioEncoder(::Photon::Voice::ILogger*  logger, ::Photon::Voice::VoiceInfo  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Platform*>(),
                    {"CreateDefaultAudioEncoder", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IEncoder*>(nullptr, ___internal_method, logger, info);
}
inline ::Photon::Voice::IAudioDesc* Photon::Voice::Platform::CreateDefaultAudioSource(::Photon::Voice::ILogger*  logger, ::Photon::Voice::DeviceInfo  dev, int32_t  samplingRate, int32_t  channels, ::System::Object*  otherParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Platform*>(),
                        {"CreateDefaultAudioSource", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::Photon::Voice::DeviceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioDesc*>(nullptr, ___internal_method, logger, dev, samplingRate, channels, otherParams);
}
// Ctor Parameters []
constexpr ::Photon::Voice::Platform::Platform()   {
}
