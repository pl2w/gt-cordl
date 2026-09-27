#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequestSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__WitRequestSettings_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioJsonDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_def.hpp"
#include "Meta/WitAi/zzzz__WitRequestSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::WitAi::WitRequestSettings::Init)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9e73080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.get_LocalClientUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Meta::WitAi::WitRequestSettings::get_LocalClientUserId)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e73388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"get_LocalClientUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.set_LocalClientUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::WitAi::WitRequestSettings::set_LocalClientUserId)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e73200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"set_LocalClientUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetByteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::WitRequestSettings::GetByteString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6bad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetByteString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::Meta::WitAi::IWitRequestConfiguration*, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::WitAi::WitRequestSettings::GetUri)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x9e733d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetUri", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (*)(::Meta::WitAi::IWitRequestConfiguration*, ::Meta::WitAi::Configuration::WitRequestOptions*, bool)>(&::Meta::WitAi::WitRequestSettings::GetHeaders)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x9e73aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetHeaders", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetAuthorizationHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::IWitRequestConfiguration*, bool)>(&::Meta::WitAi::WitRequestSettings::GetAuthorizationHeader)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e73dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetAuthorizationHeader", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetUserAgentHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::IWitRequestConfiguration*)>(&::Meta::WitAi::WitRequestSettings::GetUserAgentHeader)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x9e73ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetUserAgentHeader", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetTtsErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::Meta::WitAi::IWitRequestConfiguration*)>(&::Meta::WitAi::WitRequestSettings::GetTtsErrors)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e74210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetTtsErrors", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.CanStreamAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::WitAi::TTSWitAudioType)>(&::Meta::WitAi::WitRequestSettings::CanStreamAudio)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e7432c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"CanStreamAudio", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetAudioMimeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::TTSWitAudioType)>(&::Meta::WitAi::WitRequestSettings::GetAudioMimeType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e69ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetAudioMimeType", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetAudioExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::WitAi::TTSWitAudioType, bool)>(&::Meta::WitAi::WitRequestSettings::GetAudioExtension)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e6a9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetAudioExtension", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetTtsAudioDecoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder* (*)(::Meta::WitAi::TTSWitAudioType)>(&::Meta::WitAi::WitRequestSettings::GetTtsAudioDecoder)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9e69d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetTtsAudioDecoder", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings.GetTtsAudioDecoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder* (*)(::Meta::WitAi::TTSWitAudioType, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*)>(&::Meta::WitAi::WitRequestSettings::GetTtsAudioDecoder)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e74338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetTtsAudioDecoder", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::WitRequestSettings::setStaticF__operatingSystem(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_operatingSystem", ::Meta::WitAi::WitRequestSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitRequestSettings::getStaticF__operatingSystem()  {
return ::cordl_internals::getStaticField<::StringW, "_operatingSystem", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::setStaticF__deviceModel(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_deviceModel", ::Meta::WitAi::WitRequestSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitRequestSettings::getStaticF__deviceModel()  {
return ::cordl_internals::getStaticField<::StringW, "_deviceModel", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::setStaticF__appIdentifier(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_appIdentifier", ::Meta::WitAi::WitRequestSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitRequestSettings::getStaticF__appIdentifier()  {
return ::cordl_internals::getStaticField<::StringW, "_appIdentifier", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::setStaticF__unityVersion(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_unityVersion", ::Meta::WitAi::WitRequestSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitRequestSettings::getStaticF__unityVersion()  {
return ::cordl_internals::getStaticField<::StringW, "_unityVersion", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::setStaticF_OnProvideCustomUri(::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>*, "OnProvideCustomUri", ::Meta::WitAi::WitRequestSettings*>(std::forward<::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>*>(value));
}
inline ::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>* Meta::WitAi::WitRequestSettings::getStaticF_OnProvideCustomUri()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::UriBuilder*,::System::UriBuilder*>*, "OnProvideCustomUri", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::setStaticF_OnProvideCustomHeaders(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*, "OnProvideCustomHeaders", ::Meta::WitAi::WitRequestSettings*>(std::forward<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(value));
}
inline ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* Meta::WitAi::WitRequestSettings::getStaticF_OnProvideCustomHeaders()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*, "OnProvideCustomHeaders", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::setStaticF_OnProvideCustomUserAgent(::System::Action_1<::System::Text::StringBuilder*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Text::StringBuilder*>*, "OnProvideCustomUserAgent", ::Meta::WitAi::WitRequestSettings*>(std::forward<::System::Action_1<::System::Text::StringBuilder*>*>(value));
}
inline ::System::Action_1<::System::Text::StringBuilder*>* Meta::WitAi::WitRequestSettings::getStaticF_OnProvideCustomUserAgent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Text::StringBuilder*>*, "OnProvideCustomUserAgent", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::setStaticF__localClientUserId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_localClientUserId", ::Meta::WitAi::WitRequestSettings*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitRequestSettings::getStaticF__localClientUserId()  {
return ::cordl_internals::getStaticField<::StringW, "_localClientUserId", ::Meta::WitAi::WitRequestSettings*>();
}
inline void Meta::WitAi::WitRequestSettings::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Meta::WitAi::WitRequestSettings::get_LocalClientUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"get_LocalClientUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Meta::WitAi::WitRequestSettings::set_LocalClientUserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"set_LocalClientUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Meta::WitAi::WitRequestSettings::GetByteString(::ArrayW<uint8_t>  bytes, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetByteString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes, start, length);
}
inline ::System::Uri* Meta::WitAi::WitRequestSettings::GetUri(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::StringW  path, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  queryParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetUri", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, configuration, path, queryParams);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::WitRequestSettings::GetHeaders(::Meta::WitAi::IWitRequestConfiguration*  configuration, ::Meta::WitAi::Configuration::WitRequestOptions*  options, bool  useServerToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetHeaders", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(nullptr, ___internal_method, configuration, options, useServerToken);
}
inline ::StringW Meta::WitAi::WitRequestSettings::GetAuthorizationHeader(::Meta::WitAi::IWitRequestConfiguration*  configuration, bool  useServerToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetAuthorizationHeader", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, configuration, useServerToken);
}
inline ::StringW Meta::WitAi::WitRequestSettings::GetUserAgentHeader(::Meta::WitAi::IWitRequestConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetUserAgentHeader", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, configuration);
}
inline ::StringW Meta::WitAi::WitRequestSettings::GetTtsErrors(::StringW  textToSpeak, ::Meta::WitAi::IWitRequestConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetTtsErrors", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, textToSpeak, configuration);
}
inline bool Meta::WitAi::WitRequestSettings::CanStreamAudio(::Meta::WitAi::TTSWitAudioType  witAudioType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"CanStreamAudio", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, witAudioType);
}
inline ::StringW Meta::WitAi::WitRequestSettings::GetAudioMimeType(::Meta::WitAi::TTSWitAudioType  witAudioType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetAudioMimeType", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, witAudioType);
}
inline ::StringW Meta::WitAi::WitRequestSettings::GetAudioExtension(::Meta::WitAi::TTSWitAudioType  witAudioType, bool  includeEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetAudioExtension", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, witAudioType, includeEvents);
}
inline ::Meta::Voice::Audio::Decoding::IAudioDecoder* Meta::WitAi::WitRequestSettings::GetTtsAudioDecoder(::Meta::WitAi::TTSWitAudioType  witAudioType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetTtsAudioDecoder", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(nullptr, ___internal_method, witAudioType);
}
inline ::Meta::Voice::Audio::Decoding::IAudioDecoder* Meta::WitAi::WitRequestSettings::GetTtsAudioDecoder(::Meta::WitAi::TTSWitAudioType  witAudioType, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onEventsDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings*>(),
                        {"GetTtsAudioDecoder", {}, {::i2c::type_of<::Meta::WitAi::TTSWitAudioType>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(nullptr, ___internal_method, witAudioType, onEventsDecoded);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequestSettings::WitRequestSettings()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequestSettings___c::*)()>(&::Meta::WitAi::WitRequestSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e74418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestSettings___c._set_LocalClientUserId_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequestSettings___c::*)()>(&::Meta::WitAi::WitRequestSettings___c::_set_LocalClientUserId_b__10_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e74420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings___c*>(),
                        {"<set_LocalClientUserId>b__10_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::WitRequestSettings___c::setStaticF___9(::Meta::WitAi::WitRequestSettings___c*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::WitRequestSettings___c*, "<>9", ::Meta::WitAi::WitRequestSettings___c*>(std::forward<::Meta::WitAi::WitRequestSettings___c*>(value));
}
inline ::Meta::WitAi::WitRequestSettings___c* Meta::WitAi::WitRequestSettings___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::WitRequestSettings___c*, "<>9", ::Meta::WitAi::WitRequestSettings___c*>();
}
inline void Meta::WitAi::WitRequestSettings___c::setStaticF___9__10_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__10_0", ::Meta::WitAi::WitRequestSettings___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Meta::WitAi::WitRequestSettings___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__10_0", ::Meta::WitAi::WitRequestSettings___c*>();
}
inline void Meta::WitAi::WitRequestSettings___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequestSettings___c::_set_LocalClientUserId_b__10_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestSettings___c*>(),
                        {"<set_LocalClientUserId>b__10_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequestSettings___c* Meta::WitAi::WitRequestSettings___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequestSettings___c*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequestSettings___c::WitRequestSettings___c()   {
}
