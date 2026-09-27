#pragma once
// IWYU pragma private; include "PlayFab/PlayFabSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayFabSharedSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabLogLevel_def.hpp"
#include "PlayFab/zzzz__PlayFabSettings_def.hpp"
#include "PlayFab/zzzz__WebRequestType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_PlayFabSharedPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayFabSharedSettings> (*)()>(&::PlayFab::PlayFabSettings::get_PlayFabSharedPrivate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa7ddaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_PlayFabSharedPrivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.GetSharedSettingsObjectPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayFabSharedSettings> (*)()>(&::PlayFab::PlayFabSettings::GetSharedSettingsObjectPrivate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa7ddbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"GetSharedSettingsObjectPrivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_DeviceUniqueIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayFab::PlayFabSettings::get_DeviceUniqueIdentifier)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa7dd5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DeviceUniqueIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_TitleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayFab::PlayFabSettings::get_TitleId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa7ddcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_TitleId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_TitleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::PlayFab::PlayFabSettings::set_TitleId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7ddd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_TitleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_VerticalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayFab::PlayFabSettings::get_VerticalName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa7dddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_VerticalName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_VerticalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::PlayFab::PlayFabSettings::set_VerticalName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7dde34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_VerticalName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_DisableAdvertising
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabSettings::get_DisableAdvertising)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7ddea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DisableAdvertising", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_DisableAdvertising
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::PlayFab::PlayFabSettings::set_DisableAdvertising)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7ddf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_DisableAdvertising", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_DisableDeviceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabSettings::get_DisableDeviceInfo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7ddf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DisableDeviceInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_DisableDeviceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::PlayFab::PlayFabSettings::set_DisableDeviceInfo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7ddff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_DisableDeviceInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_DisableFocusTimeCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabSettings::get_DisableFocusTimeCollection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa7de064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DisableFocusTimeCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_DisableFocusTimeCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::PlayFab::PlayFabSettings::set_DisableFocusTimeCollection)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7de0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_DisableFocusTimeCollection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::PlayFabLogLevel (*)()>(&::PlayFab::PlayFabSettings::get_LogLevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::PlayFabLogLevel)>(&::PlayFab::PlayFabSettings::set_LogLevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7de1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::PlayFab::PlayFabLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_RequestType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::WebRequestType (*)()>(&::PlayFab::PlayFabSettings::get_RequestType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_RequestType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_RequestType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::WebRequestType)>(&::PlayFab::PlayFabSettings::set_RequestType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7de25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_RequestType", {}, {::i2c::type_of<::PlayFab::WebRequestType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_RequestTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::PlayFab::PlayFabSettings::get_RequestTimeout)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_RequestTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_RequestTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::PlayFab::PlayFabSettings::set_RequestTimeout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7de318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_RequestTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_RequestKeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabSettings::get_RequestKeepAlive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_RequestKeepAlive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_RequestKeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::PlayFab::PlayFabSettings::set_RequestKeepAlive)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa7de3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_RequestKeepAlive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_CompressApiData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabSettings::get_CompressApiData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_CompressApiData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_CompressApiData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::PlayFab::PlayFabSettings::set_CompressApiData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa7de494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_CompressApiData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_LoggerHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayFab::PlayFabSettings::get_LoggerHost)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LoggerHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_LoggerHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::PlayFab::PlayFabSettings::set_LoggerHost)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa7de554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LoggerHost", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_LoggerPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::PlayFab::PlayFabSettings::get_LoggerPort)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LoggerPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_LoggerPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::PlayFab::PlayFabSettings::set_LoggerPort)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7de614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LoggerPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_EnableRealTimeLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabSettings::get_EnableRealTimeLogging)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_EnableRealTimeLogging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_EnableRealTimeLogging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::PlayFab::PlayFabSettings::set_EnableRealTimeLogging)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa7de6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_EnableRealTimeLogging", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_LogCapLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::PlayFab::PlayFabSettings::get_LogCapLimit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7de734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LogCapLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_LogCapLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::PlayFab::PlayFabSettings::set_LogCapLimit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7de790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LogCapLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.get_LocalApiServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayFab::PlayFabSettings::get_LocalApiServer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa7c1d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LocalApiServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.set_LocalApiServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::PlayFab::PlayFabSettings::set_LocalApiServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7de7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LocalApiServer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings.GetFullUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::PlayFab::PlayFabApiSettings*)>(&::PlayFab::PlayFabSettings::GetFullUrl)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xa7dc1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"GetFullUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::PlayFabSettings::setStaticF__playFabShared(::UnityW<::GlobalNamespace::PlayFabSharedSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PlayFabSharedSettings>, "_playFabShared", ::PlayFab::PlayFabSettings*>(std::forward<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> PlayFab::PlayFabSettings::getStaticF__playFabShared()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PlayFabSharedSettings>, "_playFabShared", ::PlayFab::PlayFabSettings*>();
}
inline void PlayFab::PlayFabSettings::setStaticF_staticSettings(::PlayFab::PlayFabApiSettings*  value)  {
::cordl_internals::setStaticField<::PlayFab::PlayFabApiSettings*, "staticSettings", ::PlayFab::PlayFabSettings*>(std::forward<::PlayFab::PlayFabApiSettings*>(value));
}
inline ::PlayFab::PlayFabApiSettings* PlayFab::PlayFabSettings::getStaticF_staticSettings()  {
return ::cordl_internals::getStaticField<::PlayFab::PlayFabApiSettings*, "staticSettings", ::PlayFab::PlayFabSettings*>();
}
inline void PlayFab::PlayFabSettings::setStaticF_staticPlayer(::PlayFab::PlayFabAuthenticationContext*  value)  {
::cordl_internals::setStaticField<::PlayFab::PlayFabAuthenticationContext*, "staticPlayer", ::PlayFab::PlayFabSettings*>(std::forward<::PlayFab::PlayFabAuthenticationContext*>(value));
}
inline ::PlayFab::PlayFabAuthenticationContext* PlayFab::PlayFabSettings::getStaticF_staticPlayer()  {
return ::cordl_internals::getStaticField<::PlayFab::PlayFabAuthenticationContext*, "staticPlayer", ::PlayFab::PlayFabSettings*>();
}
inline void PlayFab::PlayFabSettings::setStaticF__localApiServer(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_localApiServer", ::PlayFab::PlayFabSettings*>(std::forward<::StringW>(value));
}
inline ::StringW PlayFab::PlayFabSettings::getStaticF__localApiServer()  {
return ::cordl_internals::getStaticField<::StringW, "_localApiServer", ::PlayFab::PlayFabSettings*>();
}
inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> PlayFab::PlayFabSettings::get_PlayFabSharedPrivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_PlayFabSharedPrivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> PlayFab::PlayFabSettings::GetSharedSettingsObjectPrivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"GetSharedSettingsObjectPrivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>(nullptr, ___internal_method);
}
inline ::StringW PlayFab::PlayFabSettings::get_DeviceUniqueIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DeviceUniqueIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW PlayFab::PlayFabSettings::get_TitleId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_TitleId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_TitleId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_TitleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW PlayFab::PlayFabSettings::get_VerticalName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_VerticalName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_VerticalName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_VerticalName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayFab::PlayFabSettings::get_DisableAdvertising()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DisableAdvertising", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_DisableAdvertising(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_DisableAdvertising", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayFab::PlayFabSettings::get_DisableDeviceInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DisableDeviceInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_DisableDeviceInfo(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_DisableDeviceInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayFab::PlayFabSettings::get_DisableFocusTimeCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_DisableFocusTimeCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_DisableFocusTimeCollection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_DisableFocusTimeCollection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::PlayFab::PlayFabLogLevel PlayFab::PlayFabSettings::get_LogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::PlayFabLogLevel>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_LogLevel(::PlayFab::PlayFabLogLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::PlayFab::PlayFabLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::PlayFab::WebRequestType PlayFab::PlayFabSettings::get_RequestType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_RequestType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::WebRequestType>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_RequestType(::PlayFab::WebRequestType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_RequestType", {}, {::i2c::type_of<::PlayFab::WebRequestType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t PlayFab::PlayFabSettings::get_RequestTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_RequestTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_RequestTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_RequestTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayFab::PlayFabSettings::get_RequestKeepAlive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_RequestKeepAlive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_RequestKeepAlive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_RequestKeepAlive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayFab::PlayFabSettings::get_CompressApiData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_CompressApiData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_CompressApiData(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_CompressApiData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW PlayFab::PlayFabSettings::get_LoggerHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LoggerHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_LoggerHost(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LoggerHost", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t PlayFab::PlayFabSettings::get_LoggerPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LoggerPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_LoggerPort(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LoggerPort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool PlayFab::PlayFabSettings::get_EnableRealTimeLogging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_EnableRealTimeLogging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_EnableRealTimeLogging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_EnableRealTimeLogging", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t PlayFab::PlayFabSettings::get_LogCapLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LogCapLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_LogCapLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LogCapLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW PlayFab::PlayFabSettings::get_LocalApiServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"get_LocalApiServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabSettings::set_LocalApiServer(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"set_LocalApiServer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW PlayFab::PlayFabSettings::GetFullUrl(::StringW  apiCall, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  getParams, ::PlayFab::PlayFabApiSettings*  apiSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings*>(),
                        {"GetFullUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::PlayFab::PlayFabApiSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, apiCall, getParams, apiSettings);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabSettings::PlayFabSettings()   {
}
//  Writing Method size for method: ::PlayFab::PlayFabSettings___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabSettings___c::*)()>(&::PlayFab::PlayFabSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7de8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabSettings___c.__cctor_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayFabSharedSettings> (::PlayFab::PlayFabSettings___c::*)()>(&::PlayFab::PlayFabSettings___c::__cctor_b__0_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa7de8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings___c*>(),
                        {"<.cctor>b__0_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::PlayFabSettings___c::setStaticF___9(::PlayFab::PlayFabSettings___c*  value)  {
::cordl_internals::setStaticField<::PlayFab::PlayFabSettings___c*, "<>9", ::PlayFab::PlayFabSettings___c*>(std::forward<::PlayFab::PlayFabSettings___c*>(value));
}
inline ::PlayFab::PlayFabSettings___c* PlayFab::PlayFabSettings___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayFab::PlayFabSettings___c*, "<>9", ::PlayFab::PlayFabSettings___c*>();
}
inline void PlayFab::PlayFabSettings___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayFabSharedSettings> PlayFab::PlayFabSettings___c::__cctor_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabSettings___c*>(),
                        {"<.cctor>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayFabSharedSettings>>(this, ___internal_method);
}
inline ::PlayFab::PlayFabSettings___c* PlayFab::PlayFabSettings___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabSettings___c*>());
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabSettings___c::PlayFabSettings___c()   {
}
