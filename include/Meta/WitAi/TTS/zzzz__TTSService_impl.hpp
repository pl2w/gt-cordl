#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/TTSService.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioSystem_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipLoadState_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
#include "Meta/WitAi/TTS/Events/zzzz__TTSServiceEvents_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSDiskCacheHandler_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSRuntimeCacheHandler_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSVoiceProvider_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSWebHandler_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__DownloadAsync_d__68_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__DownloadAsync_d__69_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__LoadAsync_d__54_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__PerformDownloadAndStream_d__55_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__PerformStreamFromDisk_d__57_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__PerformStreamFromWeb_d__56_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__ShouldDownload_d__70_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e47d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::TTS::TTSService> (*)()>(&::Meta::WitAi::TTS::TTSService::get_Instance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e47d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_AudioSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioSystem* (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_AudioSystem)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e47e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_AudioSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.set_AudioSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::Voice::Audio::IAudioSystem*)>(&::Meta::WitAi::TTS::TTSService::set_AudioSystem)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e47e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_AudioSystem", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_RuntimeCacheHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler* (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_RuntimeCacheHandler)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e47edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_RuntimeCacheHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.set_RuntimeCacheHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*)>(&::Meta::WitAi::TTS::TTSService::set_RuntimeCacheHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e47f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_RuntimeCacheHandler", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_DiskCacheHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler* (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_DiskCacheHandler)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e47f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_DiskCacheHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.set_DiskCacheHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*)>(&::Meta::WitAi::TTS::TTSService::set_DiskCacheHandler)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e47fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_DiskCacheHandler", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_WebHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_WebHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_VoiceProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_VoiceProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.add_OnServiceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*)>(&::Meta::WitAi::TTS::TTSService::add_OnServiceStart)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e4803c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"add_OnServiceStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.remove_OnServiceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*)>(&::Meta::WitAi::TTS::TTSService::remove_OnServiceStart)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e4810c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"remove_OnServiceStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.add_OnServiceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*)>(&::Meta::WitAi::TTS::TTSService::add_OnServiceDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e481dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"add_OnServiceDestroy", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.remove_OnServiceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*)>(&::Meta::WitAi::TTS::TTSService::remove_OnServiceDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e482ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"remove_OnServiceDestroy", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Events::TTSServiceEvents* (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_Events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4837c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetInvalidError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::GetInvalidError)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e48384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e4841c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e48474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e484e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e48754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.SetListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(bool)>(&::Meta::WitAi::TTS::TTSService::SetListeners)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x9e48768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e48be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSClipData*, ::Meta::Voice::Logging::VLoggerVerbosity)>(&::Meta::WitAi::TTS::TTSService::Log)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x9e4854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.LogState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW, bool, ::StringW)>(&::Meta::WitAi::TTS::TTSService::LogState)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x9e48ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"LogState", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetFinalText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*)>(&::Meta::WitAi::TTS::TTSService::GetFinalText)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e494bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetClipID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*)>(&::Meta::WitAi::TTS::TTSService::GetClipID)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e495dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetClipID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetClipIDWithFinalText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*)>(&::Meta::WitAi::TTS::TTSService::GetClipIDWithFinalText)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x9e49620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetClipData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::TTSService::GetClipData)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9e49940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetClipData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.SetClipLoadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::Meta::WitAi::TTS::Data::TTSClipLoadState)>(&::Meta::WitAi::TTS::TTSService::SetClipLoadState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e49c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.DecodeTts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::Json::WitResponseNode*, ::by_ref<::StringW>, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>)>(&::Meta::WitAi::TTS::TTSService::DecodeTts)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e49db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DecodeTts", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*)>(&::Meta::WitAi::TTS::TTSService::Load)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e49e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>(), ::i2c::type_of<::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*)>(&::Meta::WitAi::TTS::TTSService::Load)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e4a0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>(), ::i2c::type_of<::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.LoadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*)>(&::Meta::WitAi::TTS::TTSService::LoadAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e4a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>(), ::i2c::type_of<::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.PerformDownloadAndStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::PerformDownloadAndStream)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e4a288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"PerformDownloadAndStream", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.PerformStreamFromWeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::PerformStreamFromWeb)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e4a3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"PerformStreamFromWeb", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.PerformStreamFromDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::PerformStreamFromDisk)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e4a4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"PerformStreamFromDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.UnloadAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::UnloadAll)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x9e48cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"UnloadAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.Unload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::Unload)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e4a5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Unload", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetRuntimeCachedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::TTSService::*)(::StringW)>(&::Meta::WitAi::TTS::TTSService::GetRuntimeCachedClip)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e49bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetRuntimeCachedClip", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetAllRuntimeCachedClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::GetAllRuntimeCachedClips)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e4a930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetAllRuntimeCachedClips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.OnRuntimeClipAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::OnRuntimeClipAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4a9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.OnRuntimeClipRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::OnRuntimeClipRemoved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4aae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.ShouldCacheToDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::ShouldCacheToDisk)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e4aaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"ShouldCacheToDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetDiskCachePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::TTSService::GetDiskCachePath)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9e4abd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetDiskCachePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.DownloadToDiskCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::StringW, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*)>(&::Meta::WitAi::TTS::TTSService::DownloadToDiskCache)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e4acc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadToDiskCache", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.DownloadToDiskCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSClipData* (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*)>(&::Meta::WitAi::TTS::TTSService::DownloadToDiskCache)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e4ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadToDiskCache", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.DownloadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::TTSService::*)(::StringW, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*)>(&::Meta::WitAi::TTS::TTSService::DownloadAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e4ae8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.DownloadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*)>(&::Meta::WitAi::TTS::TTSService::DownloadAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e4ad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadAsync", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.ShouldDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Tuple_2<bool,::StringW>*>* (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::TTSService::ShouldDownload)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e4afdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"ShouldDownload", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetAllPresetVoiceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::GetAllPresetVoiceSettings)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e4b114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetAllPresetVoiceSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.GetPresetVoiceSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSVoiceSettings* (::Meta::WitAi::TTS::TTSService::*)(::StringW)>(&::Meta::WitAi::TTS::TTSService::GetPresetVoiceSettings)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9e49edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetPresetVoiceSettings", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseLoadBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, bool)>(&::Meta::WitAi::TTS::TTSService::RaiseLoadBegin)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e4a9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseLoadBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseUnloadComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, bool)>(&::Meta::WitAi::TTS::TTSService::RaiseUnloadComplete)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9e4a6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseUnloadComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDiskStreamBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseDiskStreamBegin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseWebStreamBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseWebStreamBegin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseStreamBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, bool)>(&::Meta::WitAi::TTS::TTSService::RaiseStreamBegin)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e4b1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDiskStreamError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, int32_t, ::StringW)>(&::Meta::WitAi::TTS::TTSService::RaiseDiskStreamError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseWebStreamError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, int32_t, ::StringW)>(&::Meta::WitAi::TTS::TTSService::RaiseWebStreamError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseStreamError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, int32_t, ::StringW, bool)>(&::Meta::WitAi::TTS::TTSService::RaiseStreamError)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e4b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDiskStreamCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseDiskStreamCancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseWebStreamCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseWebStreamCancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseStreamCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, bool)>(&::Meta::WitAi::TTS::TTSService::RaiseStreamCancel)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e4b484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDiskStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseDiskStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseWebStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseWebStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, bool)>(&::Meta::WitAi::TTS::TTSService::RaiseStreamReady)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x9e4b5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDiskStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseDiskStreamComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseWebStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::TTSService::RaiseWebStreamComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, bool)>(&::Meta::WitAi::TTS::TTSService::RaiseStreamComplete)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e4b914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDownloadBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::TTSService::RaiseDownloadBegin)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e4ba08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDownloadSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::TTSService::RaiseDownloadSuccess)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e4bafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadSuccess", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDownloadCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Meta::WitAi::TTS::TTSService::RaiseDownloadCancel)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e4bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseDownloadError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW, ::StringW)>(&::Meta::WitAi::TTS::TTSService::RaiseDownloadError)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e4bce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.RaiseEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::System::Action*)>(&::Meta::WitAi::TTS::TTSService::RaiseEvents)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e49d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseEvents", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.get_SimulatedErrorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceErrorSimulationType (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::get_SimulatedErrorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4be44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_SimulatedErrorType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService.set_SimulatedErrorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)(::Meta::WitAi::Requests::VoiceErrorSimulationType)>(&::Meta::WitAi::TTS::TTSService::set_SimulatedErrorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4be4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_SimulatedErrorType", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceErrorSimulationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService::*)()>(&::Meta::WitAi::TTS::TTSService::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9e4be54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::WitAi::TTS::TTSService::__cordl_internal_get_verboseLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verboseLogging;
}
constexpr bool const& Meta::WitAi::TTS::TTSService::__cordl_internal_get_verboseLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verboseLogging;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set_verboseLogging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verboseLogging = value;
}
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::TTS::TTSService::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Meta::WitAi::TTS::TTSService::__cordl_internal_get__audioSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSystem;
}
constexpr ::UnityW<::UnityEngine::Object> const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__audioSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSystem;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__audioSystem(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSystem = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Meta::WitAi::TTS::TTSService::__cordl_internal_get__runtimeCacheHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeCacheHandler;
}
constexpr ::UnityW<::UnityEngine::Object> const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__runtimeCacheHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeCacheHandler;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__runtimeCacheHandler(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runtimeCacheHandler = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Meta::WitAi::TTS::TTSService::__cordl_internal_get__diskCacheHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskCacheHandler;
}
constexpr ::UnityW<::UnityEngine::Object> const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__diskCacheHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskCacheHandler;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__diskCacheHandler(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diskCacheHandler = value;
}
constexpr ::Meta::WitAi::TTS::Events::TTSServiceEvents*& Meta::WitAi::TTS::TTSService::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::Meta::WitAi::TTS::Events::TTSServiceEvents* const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__events(::Meta::WitAi::TTS::Events::TTSServiceEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr bool& Meta::WitAi::TTS::TTSService::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr bool& Meta::WitAi::TTS::TTSService::__cordl_internal_get__hasListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasListeners;
}
constexpr bool const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__hasListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasListeners;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__hasListeners(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasListeners = value;
}
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType& Meta::WitAi::TTS::TTSService::__cordl_internal_get__SimulatedErrorType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulatedErrorType_k__BackingField;
}
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType const& Meta::WitAi::TTS::TTSService::__cordl_internal_get__SimulatedErrorType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulatedErrorType_k__BackingField;
}
constexpr void Meta::WitAi::TTS::TTSService::__cordl_internal_set__SimulatedErrorType_k__BackingField(::Meta::WitAi::Requests::VoiceErrorSimulationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SimulatedErrorType_k__BackingField = value;
}
inline void Meta::WitAi::TTS::TTSService::setStaticF__instance(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
::cordl_internals::setStaticField<::UnityW<::Meta::WitAi::TTS::TTSService>, "_instance", ::Meta::WitAi::TTS::TTSService*>(std::forward<::UnityW<::Meta::WitAi::TTS::TTSService>>(value));
}
inline ::UnityW<::Meta::WitAi::TTS::TTSService> Meta::WitAi::TTS::TTSService::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Meta::WitAi::TTS::TTSService>, "_instance", ::Meta::WitAi::TTS::TTSService*>();
}
inline void Meta::WitAi::TTS::TTSService::setStaticF_OnServiceStart(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*, "OnServiceStart", ::Meta::WitAi::TTS::TTSService*>(std::forward<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>(value));
}
inline ::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>* Meta::WitAi::TTS::TTSService::getStaticF_OnServiceStart()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*, "OnServiceStart", ::Meta::WitAi::TTS::TTSService*>();
}
inline void Meta::WitAi::TTS::TTSService::setStaticF_OnServiceDestroy(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*, "OnServiceDestroy", ::Meta::WitAi::TTS::TTSService*>(std::forward<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>(value));
}
inline ::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>* Meta::WitAi::TTS::TTSService::getStaticF_OnServiceDestroy()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*, "OnServiceDestroy", ::Meta::WitAi::TTS::TTSService*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::TTS::TTSService::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::UnityW<::Meta::WitAi::TTS::TTSService> Meta::WitAi::TTS::TTSService::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::TTS::TTSService>>(nullptr, ___internal_method);
}
inline ::Meta::Voice::Audio::IAudioSystem* Meta::WitAi::TTS::TTSService::get_AudioSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_AudioSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioSystem*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::set_AudioSystem(::Meta::Voice::Audio::IAudioSystem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_AudioSystem", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler* Meta::WitAi::TTS::TTSService::get_RuntimeCacheHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_RuntimeCacheHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::set_RuntimeCacheHandler(::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_RuntimeCacheHandler", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::ITTSRuntimeCacheHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler* Meta::WitAi::TTS::TTSService::get_DiskCacheHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_DiskCacheHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::set_DiskCacheHandler(::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_DiskCacheHandler", {}, {::i2c::type_of<::Meta::WitAi::TTS::Interfaces::ITTSDiskCacheHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::TTS::Interfaces::ITTSWebHandler* Meta::WitAi::TTS::TTSService::get_WebHandler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSWebHandler*>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider* Meta::WitAi::TTS::TTSService::get_VoiceProvider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Interfaces::ITTSVoiceProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::add_OnServiceStart(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"add_OnServiceStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::WitAi::TTS::TTSService::remove_OnServiceStart(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"remove_OnServiceStart", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::WitAi::TTS::TTSService::add_OnServiceDestroy(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"add_OnServiceDestroy", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::WitAi::TTS::TTSService::remove_OnServiceDestroy(::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"remove_OnServiceDestroy", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Meta::WitAi::TTS::TTSService>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Meta::WitAi::TTS::Events::TTSServiceEvents* Meta::WitAi::TTS::TTSService::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Events::TTSServiceEvents*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::TTS::TTSService::GetInvalidError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::SetListeners(bool  add)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, add);
}
template<typename TInterface>
inline TInterface Meta::WitAi::TTS::TTSService::GetInterface(TInterface  current)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {"GetInterface", {::i2c::class_of<TInterface>()}, {::i2c::type_of<TInterface>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInterface>()}
                )));
return ::cordl_internals::RunMethodRethrow<TInterface>(this, ___internal_method, current);
}
template<typename TInterface,typename TDefault>
requires(::cordl_internals::type_constraint<TDefault, ::UnityEngine::MonoBehaviour*> && ::cordl_internals::type_constraint<TDefault, TInterface>)
inline TInterface Meta::WitAi::TTS::TTSService::GetOrCreateInterface(TInterface  current)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {"GetOrCreateInterface", {::i2c::class_of<TInterface>(), ::i2c::class_of<TDefault>()}, {::i2c::type_of<TInterface>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInterface>(), ::i2c::class_of<TDefault>()}
                )));
return ::cordl_internals::RunMethodRethrow<TInterface>(this, ___internal_method, current);
}
template<typename TInterface>
inline ::UnityW<::UnityEngine::Object> Meta::WitAi::TTS::TTSService::SetInterface(TInterface  newValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                    {"SetInterface", {::i2c::class_of<TInterface>()}, {::i2c::type_of<TInterface>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TInterface>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, newValue);
}
inline void Meta::WitAi::TTS::TTSService::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::Log(::StringW  logMessage, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logMessage, clipData, logLevel);
}
inline void Meta::WitAi::TTS::TTSService::LogState(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  message, bool  fromDisk, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"LogState", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, message, fromDisk, error);
}
inline ::StringW Meta::WitAi::TTS::TTSService::GetFinalText(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, textToSpeak, voiceSettings);
}
inline ::StringW Meta::WitAi::TTS::TTSService::GetClipID(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetClipID", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, textToSpeak, voiceSettings);
}
inline ::StringW Meta::WitAi::TTS::TTSService::GetClipIDWithFinalText(::StringW  formattedText, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, formattedText, voiceSettings);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::TTSService::GetClipData(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetClipData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, textToSpeak, voiceSettings, diskCacheSettings);
}
inline void Meta::WitAi::TTS::TTSService::SetClipLoadState(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::Meta::WitAi::TTS::Data::TTSClipLoadState  loadState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, loadState);
}
inline bool Meta::WitAi::TTS::TTSService::DecodeTts(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DecodeTts", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseNode, textToSpeak, voiceSettings);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::TTSService::Load(::StringW  textToSpeak, ::StringW  presetVoiceId, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>(), ::i2c::type_of<::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, textToSpeak, presetVoiceId, diskCacheSettings, onStreamReady, onStreamComplete);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::TTSService::Load(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>(), ::i2c::type_of<::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, textToSpeak, voiceSettings, diskCacheSettings, onStreamReady, onStreamComplete);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::TTSService::LoadAsync(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"LoadAsync", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*>(), ::i2c::type_of<::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, onStreamReady, onStreamComplete);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::TTSService::PerformDownloadAndStream(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"PerformDownloadAndStream", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::TTSService::PerformStreamFromWeb(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"PerformStreamFromWeb", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::TTSService::PerformStreamFromDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"PerformStreamFromDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::UnloadAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"UnloadAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::Unload(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"Unload", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::TTSService::GetRuntimeCachedClip(::StringW  clipID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetRuntimeCachedClip", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, clipID);
}
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*> Meta::WitAi::TTS::TTSService::GetAllRuntimeCachedClips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetAllRuntimeCachedClips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Data::TTSClipData*>>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::OnRuntimeClipAdded(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::OnRuntimeClipRemoved(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline bool Meta::WitAi::TTS::TTSService::ShouldCacheToDisk(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"ShouldCacheToDisk", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipData);
}
inline ::StringW Meta::WitAi::TTS::TTSService::GetDiskCachePath(::StringW  textToSpeak, ::StringW  clipID, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetDiskCachePath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, textToSpeak, clipID, voiceSettings, diskCacheSettings);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::TTSService::DownloadToDiskCache(::StringW  textToSpeak, ::StringW  presetVoiceId, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*  onDownloadComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadToDiskCache", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, textToSpeak, presetVoiceId, diskCacheSettings, onDownloadComplete);
}
inline ::Meta::WitAi::TTS::Data::TTSClipData* Meta::WitAi::TTS::TTSService::DownloadToDiskCache(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*  onDownloadComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadToDiskCache", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(), ::i2c::type_of<::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSClipData*>(this, ___internal_method, textToSpeak, voiceSettings, diskCacheSettings, onDownloadComplete);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::TTSService::DownloadAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(), ::i2c::type_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, textToSpeak, voiceSettings, diskCacheSettings);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::TTS::TTSService::DownloadAsync(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*  onDownloadComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"DownloadAsync", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::System::Action_3<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, clipData, onDownloadComplete);
}
inline ::System::Threading::Tasks::Task_1<::System::Tuple_2<bool,::StringW>*>* Meta::WitAi::TTS::TTSService::ShouldDownload(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"ShouldDownload", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Tuple_2<bool,::StringW>*>*>(this, ___internal_method, clipData, downloadPath);
}
inline ::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*> Meta::WitAi::TTS::TTSService::GetAllPresetVoiceSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetAllPresetVoiceSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* Meta::WitAi::TTS::TTSService::GetPresetVoiceSettings(::StringW  presetVoiceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"GetPresetVoiceSettings", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>(this, ___internal_method, presetVoiceId);
}
inline void Meta::WitAi::TTS::TTSService::RaiseLoadBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  download)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseLoadBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, download);
}
inline void Meta::WitAi::TTS::TTSService::RaiseUnloadComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  download)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseUnloadComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, download);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDiskStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseWebStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, fromDisk);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDiskStreamError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, int32_t  errorCode, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, errorCode, error);
}
inline void Meta::WitAi::TTS::TTSService::RaiseWebStreamError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, int32_t  errorCode, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, errorCode, error);
}
inline void Meta::WitAi::TTS::TTSService::RaiseStreamError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, int32_t  errorCode, ::StringW  error, bool  fromDisk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, errorCode, error, fromDisk);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDiskStreamCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseWebStreamCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseStreamCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, fromDisk);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDiskStreamReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseWebStreamReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseStreamReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, fromDisk);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDiskStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDiskStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseWebStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseWebStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::TTSService::RaiseStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  fromDisk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, fromDisk);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDownloadBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, downloadPath);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDownloadSuccess(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadSuccess", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, downloadPath);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDownloadCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, downloadPath);
}
inline void Meta::WitAi::TTS::TTSService::RaiseDownloadError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  downloadPath, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseDownloadError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, downloadPath, error);
}
inline void Meta::WitAi::TTS::TTSService::RaiseEvents(::System::Action*  events)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"RaiseEvents", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events);
}
inline ::Meta::WitAi::Requests::VoiceErrorSimulationType Meta::WitAi::TTS::TTSService::get_SimulatedErrorType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"get_SimulatedErrorType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceErrorSimulationType>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService::set_SimulatedErrorType(::Meta::WitAi::Requests::VoiceErrorSimulationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {"set_SimulatedErrorType", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceErrorSimulationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::TTS::TTSService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService* Meta::WitAi::TTS::TTSService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService::TTSService()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4be3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0._RaiseDownloadError_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::_RaiseDownloadError_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e4cb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0*>(),
                        {"<RaiseDownloadError>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::StringW& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::StringW const& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_set_error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
constexpr ::StringW& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get_downloadPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_get_downloadPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::__cordl_internal_set_downloadPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadPath = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::_RaiseDownloadError_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0*>(),
                        {"<RaiseDownloadError>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0* Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass93_0::TTSService___c__DisplayClass93_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4bcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0._RaiseDownloadCancel_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::_RaiseDownloadCancel_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9e4ca44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0*>(),
                        {"<RaiseDownloadCancel>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::StringW& Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_get_downloadPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_get_downloadPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::__cordl_internal_set_downloadPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadPath = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::_RaiseDownloadCancel_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0*>(),
                        {"<RaiseDownloadCancel>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0* Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass92_0::TTSService___c__DisplayClass92_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4bbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0._RaiseDownloadSuccess_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::_RaiseDownloadSuccess_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e4c954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0*>(),
                        {"<RaiseDownloadSuccess>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::StringW& Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_get_downloadPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_get_downloadPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::__cordl_internal_set_downloadPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadPath = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::_RaiseDownloadSuccess_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0*>(),
                        {"<RaiseDownloadSuccess>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0* Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass91_0::TTSService___c__DisplayClass91_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4baf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0._RaiseDownloadBegin_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::_RaiseDownloadBegin_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e4c8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0*>(),
                        {"<RaiseDownloadBegin>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr ::StringW& Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_get_downloadPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr ::StringW const& Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_get_downloadPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadPath;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::__cordl_internal_set_downloadPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadPath = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::_RaiseDownloadBegin_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0*>(),
                        {"<RaiseDownloadBegin>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0* Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass90_0::TTSService___c__DisplayClass90_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4ba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0._RaiseStreamComplete_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::_RaiseStreamComplete_b__0)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9e4c744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0*>(),
                        {"<RaiseStreamComplete>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr bool& Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_get_fromDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr bool const& Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_get_fromDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::__cordl_internal_set_fromDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromDisk = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::_RaiseStreamComplete_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0*>(),
                        {"<RaiseStreamComplete>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0* Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass89_0::TTSService___c__DisplayClass89_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0._RaiseStreamReady_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::_RaiseStreamReady_b__0)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9e4c604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0*>(),
                        {"<RaiseStreamReady>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr bool& Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_get_fromDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr bool const& Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_get_fromDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::__cordl_internal_set_fromDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromDisk = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::_RaiseStreamReady_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0*>(),
                        {"<RaiseStreamReady>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0* Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass86_0::TTSService___c__DisplayClass86_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0._RaiseStreamCancel_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::_RaiseStreamCancel_b__0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9e4c4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0*>(),
                        {"<RaiseStreamCancel>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr bool& Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_get_fromDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr bool const& Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_get_fromDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::__cordl_internal_set_fromDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromDisk = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::_RaiseStreamCancel_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0*>(),
                        {"<RaiseStreamCancel>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0* Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass83_0::TTSService___c__DisplayClass83_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0._RaiseStreamError_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::_RaiseStreamError_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e4c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0*>(),
                        {"<RaiseStreamError>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr bool& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get_fromDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr bool const& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get_fromDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_set_fromDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromDisk = value;
}
constexpr ::StringW& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::StringW const& Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::__cordl_internal_set_error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::_RaiseStreamError_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0*>(),
                        {"<RaiseStreamError>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0* Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass80_0::TTSService___c__DisplayClass80_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0._RaiseStreamBegin_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::_RaiseStreamBegin_b__0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e4c338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0*>(),
                        {"<RaiseStreamBegin>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
constexpr bool& Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_get_fromDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr bool const& Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_get_fromDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromDisk;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::__cordl_internal_set_fromDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromDisk = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::_RaiseStreamBegin_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0*>(),
                        {"<RaiseStreamBegin>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0* Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass77_0::TTSService___c__DisplayClass77_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0._RaiseUnloadComplete_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::_RaiseUnloadComplete_b__0)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9e4c1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0*>(),
                        {"<RaiseUnloadComplete>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::_RaiseUnloadComplete_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0*>(),
                        {"<RaiseUnloadComplete>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0* Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass74_0::TTSService___c__DisplayClass74_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0._RaiseLoadBegin_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::_RaiseLoadBegin_b__0)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9e4c008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0*>(),
                        {"<RaiseLoadBegin>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::__cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::_RaiseLoadBegin_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0*>(),
                        {"<RaiseLoadBegin>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0* Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass73_0::TTSService___c__DisplayClass73_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4b1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0._GetPresetVoiceSettings_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::*)(::Meta::WitAi::TTS::Data::TTSVoiceSettings*)>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::_GetPresetVoiceSettings_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9e4bfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0*>(),
                        {"<GetPresetVoiceSettings>b__0", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::__cordl_internal_get_presetVoiceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetVoiceId;
}
constexpr ::StringW const& Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::__cordl_internal_get_presetVoiceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___presetVoiceId;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::__cordl_internal_set_presetVoiceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___presetVoiceId = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::_GetPresetVoiceSettings_b__0(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0*>(),
                        {"<GetPresetVoiceSettings>b__0", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, v);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0* Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass72_0::TTSService___c__DisplayClass72_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e49d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0._SetClipLoadState_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::*)()>(&::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::_SetClipLoadState_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e4bfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0*>(),
                        {"<SetClipLoadState>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::__cordl_internal_get_clipData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::__cordl_internal_get_clipData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipData;
}
constexpr void Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::__cordl_internal_set_clipData(::Meta::WitAi::TTS::Data::TTSClipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipData = value;
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::_SetClipLoadState_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0*>(),
                        {"<SetClipLoadState>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0* Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::TTSService___c__DisplayClass50_0::TTSService___c__DisplayClass50_0()   {
}
