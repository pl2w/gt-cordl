#pragma once
// IWYU pragma private; include "Photon/Voice/RemoteVoiceOptions.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_impl.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceOptions_def.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
#include "Photon/Voice/zzzz__IDecoder_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceOptions::*)(::Photon::Voice::ILogger*, ::StringW, ::Photon::Voice::VoiceInfo)>(&::Photon::Voice::RemoteVoiceOptions::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa74a600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions.SetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceOptions::*)(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*)>(&::Photon::Voice::RemoteVoiceOptions::SetOutput)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa74a674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"SetOutput", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions.SetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceOptions::*)(::System::Action_1<::Photon::Voice::FrameOut_1<int16_t>*>*)>(&::Photon::Voice::RemoteVoiceOptions::SetOutput)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa74a7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"SetOutput", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<int16_t>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions.get_OnRemoteVoiceRemoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Photon::Voice::RemoteVoiceOptions::*)()>(&::Photon::Voice::RemoteVoiceOptions::get_OnRemoteVoiceRemoveAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"get_OnRemoteVoiceRemoveAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions.set_OnRemoteVoiceRemoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceOptions::*)(::System::Action*)>(&::Photon::Voice::RemoteVoiceOptions::set_OnRemoteVoiceRemoveAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74a868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"set_OnRemoteVoiceRemoveAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions.get_Decoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IDecoder* (::Photon::Voice::RemoteVoiceOptions::*)()>(&::Photon::Voice::RemoteVoiceOptions::get_Decoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"get_Decoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions.set_Decoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceOptions::*)(::Photon::Voice::IDecoder*)>(&::Photon::Voice::RemoteVoiceOptions::set_Decoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74a878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"set_Decoder", {}, {::i2c::type_of<::Photon::Voice::IDecoder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceOptions.get_logPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::RemoteVoiceOptions::*)()>(&::Photon::Voice::RemoteVoiceOptions::get_logPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"get_logPrefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::RemoteVoiceOptions::_ctor(::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, ::Photon::Voice::VoiceInfo  voiceInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, logger, logPrefix, voiceInfo);
}
inline void Photon::Voice::RemoteVoiceOptions::SetOutput(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"SetOutput", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output);
}
inline void Photon::Voice::RemoteVoiceOptions::SetOutput(::System::Action_1<::Photon::Voice::FrameOut_1<int16_t>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"SetOutput", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<int16_t>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output);
}
template<typename T>
inline void Photon::Voice::RemoteVoiceOptions::setOutput(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                    {"setOutput", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output);
}
inline ::System::Action* Photon::Voice::RemoteVoiceOptions::get_OnRemoteVoiceRemoveAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"get_OnRemoteVoiceRemoveAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(*this, ___internal_method);
}
inline void Photon::Voice::RemoteVoiceOptions::set_OnRemoteVoiceRemoveAction(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"set_OnRemoteVoiceRemoveAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Photon::Voice::IDecoder* Photon::Voice::RemoteVoiceOptions::get_Decoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"get_Decoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IDecoder*>(*this, ___internal_method);
}
inline void Photon::Voice::RemoteVoiceOptions::set_Decoder(::Photon::Voice::IDecoder*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"set_Decoder", {}, {::i2c::type_of<::Photon::Voice::IDecoder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Photon::Voice::RemoteVoiceOptions::get_logPrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceOptions>(),
                        {"get_logPrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_OnRemoteVoiceRemoveAction_k__BackingField", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Decoder_k__BackingField", ty: "::Photon::Voice::IDecoder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "logger", ty: "::Photon::Voice::ILogger*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "voiceInfo", ty: "::Photon::Voice::VoiceInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_logPrefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::RemoteVoiceOptions::RemoteVoiceOptions(::System::Action*  _OnRemoteVoiceRemoveAction_k__BackingField, ::Photon::Voice::IDecoder*  _Decoder_k__BackingField, ::Photon::Voice::ILogger*  logger, ::Photon::Voice::VoiceInfo  voiceInfo, ::StringW  _logPrefix_k__BackingField) noexcept  {
this->_OnRemoteVoiceRemoveAction_k__BackingField = _OnRemoteVoiceRemoveAction_k__BackingField;
this->_Decoder_k__BackingField = _Decoder_k__BackingField;
this->logger = logger;
this->voiceInfo = voiceInfo;
this->_logPrefix_k__BackingField = _logPrefix_k__BackingField;
}
// Ctor Parameters []
constexpr ::Photon::Voice::RemoteVoiceOptions::RemoteVoiceOptions()   {
}
