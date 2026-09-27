#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__WitRequest_def.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "Meta/Voice/zzzz__VoiceRequestState_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioUploadHandler_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDataUploadHandler_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/zzzz__AudioDurationTracker_def.hpp"
#include "Meta/WitAi/zzzz__WitRequest__StartThreadedRequest_d__91_def.hpp"
#include "Meta/WitAi/zzzz__WitRequest__WaitForTimeout_d__94_def.hpp"
#include "Meta/WitAi/zzzz__WitRequest___HandleSend_b__89_0_d_def.hpp"
#include "Meta/WitAi/zzzz__WitRequest_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*)>(&::Meta::WitAi::WitRequest::set_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_TimeoutMs)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e79538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::AudioEncoding* (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_AudioEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_AudioEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::Meta::WitAi::Data::AudioEncoding*)>(&::Meta::WitAi::WitRequest::set_AudioEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_AudioEncoding", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_Path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::StringW)>(&::Meta::WitAi::WitRequest::set_Path)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9e79598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_Command
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_Command)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e796fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_Command", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_Command
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::StringW)>(&::Meta::WitAi::WitRequest::set_Command)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_Command", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_IsPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_IsPost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_IsPost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_IsPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(bool)>(&::Meta::WitAi::WitRequest::set_IsPost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_IsPost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_DecodeRawResponses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_DecodeRawResponses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7971c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_HasResponseStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(bool)>(&::Meta::WitAi::WitRequest::set_HasResponseStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_HasResponseStarted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_IsInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_IsInputStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7972c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_IsInputStreamReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_IsInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(bool)>(&::Meta::WitAi::WitRequest::set_IsInputStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_IsInputStreamReady", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7973c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.get_OnInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::get_OnInputStreamReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e79744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_OnInputStreamReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.set_OnInputStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::System::Action*)>(&::Meta::WitAi::WitRequest::set_OnInputStreamReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e7974c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_OnInputStreamReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::WitRequest::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e7975c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::Meta::Voice::VoiceRequestState)>(&::Meta::WitAi::WitRequest::SetState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e798b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.OnInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::OnInit)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e79918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.HandleAudioActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::HandleAudioActivation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e79a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.HandleAudioDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::HandleAudioDeactivation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e79a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.GetSendError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::GetSendError)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9e79b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.GetUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::GetUri)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e79c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"GetUri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.GetHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::GetHeaders)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9e79d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"GetHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.HandleSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::HandleSend)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e79fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.SetupSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::by_ref<::System::Uri*>, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>, ::Meta::Voice::Logging::CorrelationID)>(&::Meta::WitAi::WitRequest::SetupSend)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x9e7a0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"SetupSend", {}, {::i2c::type_of<::by_ref<::System::Uri*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.StartThreadedRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::WitRequest::*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::WitAi::WitRequest::StartThreadedRequest)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e7a320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"StartThreadedRequest", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.GetLastUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::GetLastUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7a418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"GetLastUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.WaitForTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::WaitForTimeout)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e7a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"WaitForTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.HandleWriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::System::IAsyncResult*)>(&::Meta::WitAi::WitRequest::HandleWriteStream)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x9e7a4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"HandleWriteStream", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::WitRequest::Write)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9e7a824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.HandleResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::System::IAsyncResult*)>(&::Meta::WitAi::WitRequest::HandleResponse)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x9e7aa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.ProcessStreamResponses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::WitRequest::*)(::System::IO::Stream*)>(&::Meta::WitAi::WitRequest::ProcessStreamResponses)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x9e7b330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"ProcessStreamResponses", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.ProcessStringResponses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::StringW)>(&::Meta::WitAi::WitRequest::ProcessStringResponses)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e7b5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"ProcessStringResponses", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.ProcessStringResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::StringW)>(&::Meta::WitAi::WitRequest::ProcessStringResponse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e7b6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"ProcessStringResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.OnRawResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::StringW)>(&::Meta::WitAi::WitRequest::OnRawResponse)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9e7b758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.OnPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::OnPartialTranscription)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e7b854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.OnFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::OnFullTranscription)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e7b8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.OnPartialResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitRequest::OnPartialResponse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e7b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.WaitingForPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::WaitingForPost)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e7aa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"WaitingForPost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.HasSentAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::HasSentAudio)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e7b9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.CloseRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::CloseRequestStream)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e79ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"CloseRequestStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.CloseActiveStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::CloseActiveStream)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9e7ba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"CloseActiveStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.HandleCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::HandleCancel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e7bc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::OnComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e7bca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest._HandleSend_b__89_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::_HandleSend_b__89_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e7bd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<HandleSend>b__89_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest._StartThreadedRequest_b__91_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::_StartThreadedRequest_b__91_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e7be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<StartThreadedRequest>b__91_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest._HandleWriteStream_b__95_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::_HandleWriteStream_b__95_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e7be58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<HandleWriteStream>b__95_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest._Write_b__96_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)()>(&::Meta::WitAi::WitRequest::_Write_b__96_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e7be9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<Write>b__96_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest.__n__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest::*)(::StringW)>(&::Meta::WitAi::WitRequest::__n__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e7bef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<>n__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>& Meta::WitAi::WitRequest::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> const& Meta::WitAi::WitRequest::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__Configuration_k__BackingField(::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Configuration_k__BackingField = value;
}
constexpr ::Meta::WitAi::Data::AudioEncoding*& Meta::WitAi::WitRequest::__cordl_internal_get__AudioEncoding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioEncoding_k__BackingField;
}
constexpr ::Meta::WitAi::Data::AudioEncoding* const& Meta::WitAi::WitRequest::__cordl_internal_get__AudioEncoding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioEncoding_k__BackingField;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__AudioEncoding_k__BackingField(::Meta::WitAi::Data::AudioEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioEncoding_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::WitRequest::__cordl_internal_get__path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr ::StringW const& Meta::WitAi::WitRequest::__cordl_internal_get__path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____path = value;
}
constexpr bool& Meta::WitAi::WitRequest::__cordl_internal_get__canSetPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canSetPath;
}
constexpr bool const& Meta::WitAi::WitRequest::__cordl_internal_get__canSetPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canSetPath;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__canSetPath(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canSetPath = value;
}
constexpr ::StringW& Meta::WitAi::WitRequest::__cordl_internal_get__Command_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Command_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::WitRequest::__cordl_internal_get__Command_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Command_k__BackingField;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__Command_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Command_k__BackingField = value;
}
constexpr bool& Meta::WitAi::WitRequest::__cordl_internal_get__IsPost_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPost_k__BackingField;
}
constexpr bool const& Meta::WitAi::WitRequest::__cordl_internal_get__IsPost_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPost_k__BackingField;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__IsPost_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPost_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Meta::WitAi::WitRequest::__cordl_internal_get_postData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postData;
}
constexpr ::ArrayW<uint8_t> const& Meta::WitAi::WitRequest::__cordl_internal_get_postData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postData;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_postData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postData = value;
}
constexpr ::StringW& Meta::WitAi::WitRequest::__cordl_internal_get_postContentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postContentType;
}
constexpr ::StringW const& Meta::WitAi::WitRequest::__cordl_internal_get_postContentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postContentType;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_postContentType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postContentType = value;
}
constexpr ::StringW& Meta::WitAi::WitRequest::__cordl_internal_get_forcedHttpMethodType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedHttpMethodType;
}
constexpr ::StringW const& Meta::WitAi::WitRequest::__cordl_internal_get_forcedHttpMethodType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedHttpMethodType;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_forcedHttpMethodType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedHttpMethodType = value;
}
constexpr bool& Meta::WitAi::WitRequest::__cordl_internal_get__HasResponseStarted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasResponseStarted_k__BackingField;
}
constexpr bool const& Meta::WitAi::WitRequest::__cordl_internal_get__HasResponseStarted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasResponseStarted_k__BackingField;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__HasResponseStarted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasResponseStarted_k__BackingField = value;
}
constexpr bool& Meta::WitAi::WitRequest::__cordl_internal_get__IsInputStreamReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInputStreamReady_k__BackingField;
}
constexpr bool const& Meta::WitAi::WitRequest::__cordl_internal_get__IsInputStreamReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInputStreamReady_k__BackingField;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__IsInputStreamReady_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInputStreamReady_k__BackingField = value;
}
constexpr ::Meta::WitAi::AudioDurationTracker*& Meta::WitAi::WitRequest::__cordl_internal_get_audioDurationTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioDurationTracker;
}
constexpr ::Meta::WitAi::AudioDurationTracker* const& Meta::WitAi::WitRequest::__cordl_internal_get_audioDurationTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioDurationTracker;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_audioDurationTracker(::Meta::WitAi::AudioDurationTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioDurationTracker = value;
}
constexpr ::System::Net::HttpWebRequest*& Meta::WitAi::WitRequest::__cordl_internal_get__request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr ::System::Net::HttpWebRequest* const& Meta::WitAi::WitRequest::__cordl_internal_get__request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__request(::System::Net::HttpWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request = value;
}
constexpr ::System::IO::Stream*& Meta::WitAi::WitRequest::__cordl_internal_get__writeStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeStream;
}
constexpr ::System::IO::Stream* const& Meta::WitAi::WitRequest::__cordl_internal_get__writeStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeStream;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__writeStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeStream = value;
}
constexpr ::System::Object*& Meta::WitAi::WitRequest::__cordl_internal_get__streamLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamLock;
}
constexpr ::System::Object* const& Meta::WitAi::WitRequest::__cordl_internal_get__streamLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamLock;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__streamLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamLock = value;
}
constexpr int32_t& Meta::WitAi::WitRequest::__cordl_internal_get__bytesWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesWritten;
}
constexpr int32_t const& Meta::WitAi::WitRequest::__cordl_internal_get__bytesWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesWritten;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__bytesWritten(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesWritten = value;
}
constexpr ::System::DateTime& Meta::WitAi::WitRequest::__cordl_internal_get__requestStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestStartTime;
}
constexpr ::System::DateTime const& Meta::WitAi::WitRequest::__cordl_internal_get__requestStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestStartTime;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__requestStartTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestStartTime = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>*& Meta::WitAi::WitRequest::__cordl_internal_get__writeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeBuffer;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>* const& Meta::WitAi::WitRequest::__cordl_internal_get__writeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeBuffer;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__writeBuffer(::System::Collections::Concurrent::ConcurrentQueue_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeBuffer = value;
}
constexpr ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*& Meta::WitAi::WitRequest::__cordl_internal_get_onProvideCustomHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProvideCustomHeaders;
}
constexpr ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent* const& Meta::WitAi::WitRequest::__cordl_internal_get_onProvideCustomHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProvideCustomHeaders;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onProvideCustomHeaders(::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onProvideCustomHeaders = value;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& Meta::WitAi::WitRequest::__cordl_internal_get_onInputStreamReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInputStreamReady;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& Meta::WitAi::WitRequest::__cordl_internal_get_onInputStreamReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onInputStreamReady;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onInputStreamReady(::System::Action_1<::Meta::WitAi::WitRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onInputStreamReady = value;
}
constexpr ::System::Action*& Meta::WitAi::WitRequest::__cordl_internal_get__OnInputStreamReady_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnInputStreamReady_k__BackingField;
}
constexpr ::System::Action* const& Meta::WitAi::WitRequest::__cordl_internal_get__OnInputStreamReady_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnInputStreamReady_k__BackingField;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__OnInputStreamReady_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnInputStreamReady_k__BackingField = value;
}
constexpr ::System::Action_1<::StringW>*& Meta::WitAi::WitRequest::__cordl_internal_get_onRawResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRawResponse;
}
constexpr ::System::Action_1<::StringW>* const& Meta::WitAi::WitRequest::__cordl_internal_get_onRawResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRawResponse;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onRawResponse(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRawResponse = value;
}
constexpr ::Meta::WitAi::WitRequest_OnCustomizeUriEvent*& Meta::WitAi::WitRequest::__cordl_internal_get_onCustomizeUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCustomizeUri;
}
constexpr ::Meta::WitAi::WitRequest_OnCustomizeUriEvent* const& Meta::WitAi::WitRequest::__cordl_internal_get_onCustomizeUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCustomizeUri;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onCustomizeUri(::Meta::WitAi::WitRequest_OnCustomizeUriEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCustomizeUri = value;
}
constexpr ::System::Action_1<::StringW>*& Meta::WitAi::WitRequest::__cordl_internal_get_onPartialTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialTranscription;
}
constexpr ::System::Action_1<::StringW>* const& Meta::WitAi::WitRequest::__cordl_internal_get_onPartialTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialTranscription;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onPartialTranscription(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPartialTranscription = value;
}
constexpr ::System::Action_1<::StringW>*& Meta::WitAi::WitRequest::__cordl_internal_get_onFullTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullTranscription;
}
constexpr ::System::Action_1<::StringW>* const& Meta::WitAi::WitRequest::__cordl_internal_get_onFullTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullTranscription;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onFullTranscription(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFullTranscription = value;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& Meta::WitAi::WitRequest::__cordl_internal_get_onPartialResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialResponse;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& Meta::WitAi::WitRequest::__cordl_internal_get_onPartialResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialResponse;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onPartialResponse(::System::Action_1<::Meta::WitAi::WitRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPartialResponse = value;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& Meta::WitAi::WitRequest::__cordl_internal_get_onResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResponse;
}
constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& Meta::WitAi::WitRequest::__cordl_internal_get_onResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResponse;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set_onResponse(::System::Action_1<::Meta::WitAi::WitRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onResponse = value;
}
constexpr bool& Meta::WitAi::WitRequest::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Meta::WitAi::WitRequest::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::System::Threading::Thread*& Meta::WitAi::WitRequest::__cordl_internal_get__requestThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestThread;
}
constexpr ::System::Threading::Thread* const& Meta::WitAi::WitRequest::__cordl_internal_get__requestThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestThread;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__requestThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestThread = value;
}
constexpr ::System::DateTime& Meta::WitAi::WitRequest::__cordl_internal_get__timeoutLastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutLastUpdate;
}
constexpr ::System::DateTime const& Meta::WitAi::WitRequest::__cordl_internal_get__timeoutLastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutLastUpdate;
}
constexpr void Meta::WitAi::WitRequest::__cordl_internal_set__timeoutLastUpdate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeoutLastUpdate = value;
}
inline void Meta::WitAi::WitRequest::setStaticF_onPreSendRequest(::Meta::WitAi::WitRequest_PreSendRequestDelegate*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::WitRequest_PreSendRequestDelegate*, "onPreSendRequest", ::Meta::WitAi::WitRequest*>(std::forward<::Meta::WitAi::WitRequest_PreSendRequestDelegate*>(value));
}
inline ::Meta::WitAi::WitRequest_PreSendRequestDelegate* Meta::WitAi::WitRequest::getStaticF_onPreSendRequest()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::WitRequest_PreSendRequestDelegate*, "onPreSendRequest", ::Meta::WitAi::WitRequest*>();
}
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Meta::WitAi::WitRequest::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_Configuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_Configuration(::Meta::WitAi::Data::Configuration::WitConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_Configuration", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::WitAi::WitRequest::get_TimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioEncoding* Meta::WitAi::WitRequest::get_AudioEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_AudioEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::AudioEncoding*>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_AudioEncoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_AudioEncoding", {}, {::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::WitRequest::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_Path(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::WitRequest::get_Command()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_Command", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_Command(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_Command", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::WitRequest::get_IsPost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_IsPost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_IsPost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_IsPost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::WitRequest::get_DecodeRawResponses()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_HasResponseStarted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_HasResponseStarted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::WitRequest::get_IsInputStreamReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_IsInputStreamReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_IsInputStreamReady(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_IsInputStreamReady", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::WitRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Action* Meta::WitAi::WitRequest::get_OnInputStreamReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"get_OnInputStreamReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::set_OnInputStreamReady(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"set_OnInputStreamReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::WitRequest::_ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::StringW  newPath, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newConfiguration, newPath, newOptions, newEvents);
}
inline void Meta::WitAi::WitRequest::SetState(::Meta::Voice::VoiceRequestState  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void Meta::WitAi::WitRequest::OnInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::HandleAudioActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::HandleAudioDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::WitRequest::GetSendError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Uri* Meta::WitAi::WitRequest::GetUri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"GetUri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::WitRequest::GetHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"GetHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::HandleSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::SetupSend(::by_ref<::System::Uri*>  uri, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>  headers, ::Meta::Voice::Logging::CorrelationID  correlationID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"SetupSend", {}, {::i2c::type_of<::by_ref<::System::Uri*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, headers, correlationID);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::WitRequest::StartThreadedRequest(::Meta::Voice::Logging::CorrelationID  correlationID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"StartThreadedRequest", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, correlationID);
}
inline ::System::DateTime Meta::WitAi::WitRequest::GetLastUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"GetLastUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::WitRequest::WaitForTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"WaitForTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::HandleWriteStream(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"HandleWriteStream", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline void Meta::WitAi::WitRequest::Write(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
inline void Meta::WitAi::WitRequest::HandleResponse(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::StringW Meta::WitAi::WitRequest::ProcessStreamResponses(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"ProcessStreamResponses", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, stream);
}
inline void Meta::WitAi::WitRequest::ProcessStringResponses(::StringW  stringResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"ProcessStringResponses", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stringResponse);
}
inline void Meta::WitAi::WitRequest::ProcessStringResponse(::StringW  stringResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"ProcessStringResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stringResponse);
}
inline void Meta::WitAi::WitRequest::OnRawResponse(::StringW  rawResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse);
}
inline void Meta::WitAi::WitRequest::OnPartialTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::OnFullTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::OnPartialResponse(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseNode);
}
inline bool Meta::WitAi::WitRequest::WaitingForPost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"WaitingForPost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::WitRequest::HasSentAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::CloseRequestStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"CloseRequestStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::CloseActiveStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"CloseActiveStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::HandleCancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::OnComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::_HandleSend_b__89_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<HandleSend>b__89_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::_StartThreadedRequest_b__91_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<StartThreadedRequest>b__91_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::_HandleWriteStream_b__95_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<HandleWriteStream>b__95_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::_Write_b__96_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<Write>b__96_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest::__n__0(::StringW  rawResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest*>(),
                        {"<>n__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawResponse);
}
inline ::Meta::WitAi::WitRequest* Meta::WitAi::WitRequest::New_ctor(::Meta::WitAi::Data::Configuration::WitConfiguration*  newConfiguration, ::StringW  newPath, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  newEvents)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest*>(newConfiguration, newPath, newOptions, newEvents));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr  Meta::WitAi::WitRequest::operator ::Meta::WitAi::Interfaces::IAudioUploadHandler*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IAudioUploadHandler* Meta::WitAi::WitRequest::i___Meta__WitAi__Interfaces__IAudioUploadHandler() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioUploadHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr  Meta::WitAi::WitRequest::operator ::Meta::WitAi::Interfaces::IDataUploadHandler*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDataUploadHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDataUploadHandler"
constexpr ::Meta::WitAi::Interfaces::IDataUploadHandler* Meta::WitAi::WitRequest::i___Meta__WitAi__Interfaces__IDataUploadHandler() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDataUploadHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest::WitRequest()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass97_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass97_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass97_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7b328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass97_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass97_0._HandleResponse_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass97_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass97_0::_HandleResponse_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e7c54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass97_0*>(),
                        {"<HandleResponse>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_get_statusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCode;
}
constexpr int32_t const& Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_get_statusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusCode;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_set_statusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusCode = value;
}
constexpr ::Meta::WitAi::WitRequest*& Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::WitRequest* const& Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::StringW const& Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass97_0::__cordl_internal_set_error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void Meta::WitAi::WitRequest___c__DisplayClass97_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass97_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest___c__DisplayClass97_0::_HandleResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass97_0*>(),
                        {"<HandleResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequest___c__DisplayClass97_0* Meta::WitAi::WitRequest___c__DisplayClass97_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest___c__DisplayClass97_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest___c__DisplayClass97_0::WitRequest___c__DisplayClass97_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass95_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass95_1::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass95_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7a81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass95_1._HandleWriteStream_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass95_1::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass95_1::_HandleWriteStream_b__2)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e7c504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_1*>(),
                        {"<HandleWriteStream>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& Meta::WitAi::WitRequest___c__DisplayClass95_1::__cordl_internal_get_e()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr ::System::Exception* const& Meta::WitAi::WitRequest___c__DisplayClass95_1::__cordl_internal_get_e() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass95_1::__cordl_internal_set_e(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___e = value;
}
constexpr ::Meta::WitAi::WitRequest*& Meta::WitAi::WitRequest___c__DisplayClass95_1::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::WitRequest* const& Meta::WitAi::WitRequest___c__DisplayClass95_1::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass95_1::__cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::WitRequest___c__DisplayClass95_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest___c__DisplayClass95_1::_HandleWriteStream_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_1*>(),
                        {"<HandleWriteStream>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequest___c__DisplayClass95_1* Meta::WitAi::WitRequest___c__DisplayClass95_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest___c__DisplayClass95_1*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest___c__DisplayClass95_1::WitRequest___c__DisplayClass95_1()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass95_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass95_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass95_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7a814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass95_0._HandleWriteStream_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass95_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass95_0::_HandleWriteStream_b__1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e7c4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_0*>(),
                        {"<HandleWriteStream>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebException*& Meta::WitAi::WitRequest___c__DisplayClass95_0::__cordl_internal_get_e()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr ::System::Net::WebException* const& Meta::WitAi::WitRequest___c__DisplayClass95_0::__cordl_internal_get_e() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___e;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass95_0::__cordl_internal_set_e(::System::Net::WebException*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___e = value;
}
constexpr ::Meta::WitAi::WitRequest*& Meta::WitAi::WitRequest___c__DisplayClass95_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::WitRequest* const& Meta::WitAi::WitRequest___c__DisplayClass95_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass95_0::__cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::WitRequest___c__DisplayClass95_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest___c__DisplayClass95_0::_HandleWriteStream_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass95_0*>(),
                        {"<HandleWriteStream>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequest___c__DisplayClass95_0* Meta::WitAi::WitRequest___c__DisplayClass95_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest___c__DisplayClass95_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest___c__DisplayClass95_0::WitRequest___c__DisplayClass95_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass94_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass94_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass94_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7c47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass94_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass94_0._WaitForTimeout_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass94_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass94_0::_WaitForTimeout_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e7c484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass94_0*>(),
                        {"<WaitForTimeout>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::WitRequest*& Meta::WitAi::WitRequest___c__DisplayClass94_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::WitRequest* const& Meta::WitAi::WitRequest___c__DisplayClass94_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass94_0::__cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::WitRequest___c__DisplayClass94_0::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr ::StringW const& Meta::WitAi::WitRequest___c__DisplayClass94_0::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass94_0::__cordl_internal_set_error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
inline void Meta::WitAi::WitRequest___c__DisplayClass94_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass94_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest___c__DisplayClass94_0::_WaitForTimeout_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass94_0*>(),
                        {"<WaitForTimeout>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequest___c__DisplayClass94_0* Meta::WitAi::WitRequest___c__DisplayClass94_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest___c__DisplayClass94_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest___c__DisplayClass94_0::WitRequest___c__DisplayClass94_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass101_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass101_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass101_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7b84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass101_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest___c__DisplayClass101_0._OnRawResponse_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest___c__DisplayClass101_0::*)()>(&::Meta::WitAi::WitRequest___c__DisplayClass101_0::_OnRawResponse_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e7c430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass101_0*>(),
                        {"<OnRawResponse>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::WitRequest*& Meta::WitAi::WitRequest___c__DisplayClass101_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::WitRequest* const& Meta::WitAi::WitRequest___c__DisplayClass101_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass101_0::__cordl_internal_set___4__this(::Meta::WitAi::WitRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::WitRequest___c__DisplayClass101_0::__cordl_internal_get_rawResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponse;
}
constexpr ::StringW const& Meta::WitAi::WitRequest___c__DisplayClass101_0::__cordl_internal_get_rawResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawResponse;
}
constexpr void Meta::WitAi::WitRequest___c__DisplayClass101_0::__cordl_internal_set_rawResponse(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawResponse = value;
}
inline void Meta::WitAi::WitRequest___c__DisplayClass101_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass101_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::WitRequest___c__DisplayClass101_0::_OnRawResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest___c__DisplayClass101_0*>(),
                        {"<OnRawResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequest___c__DisplayClass101_0* Meta::WitAi::WitRequest___c__DisplayClass101_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest___c__DisplayClass101_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest___c__DisplayClass101_0::WitRequest___c__DisplayClass101_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest_PreSendRequestDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest_PreSendRequestDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::WitRequest_PreSendRequestDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e7c114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest_PreSendRequestDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest_PreSendRequestDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest_PreSendRequestDelegate::*)(::by_ref<::System::Uri*>, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>)>(&::Meta::WitAi::WitRequest_PreSendRequestDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e7c1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest_PreSendRequestDelegate*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest_PreSendRequestDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::WitRequest_PreSendRequestDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest_PreSendRequestDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::WitAi::WitRequest_PreSendRequestDelegate::Invoke(::by_ref<::System::Uri*>  src_uri, ::by_ref<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>  headers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest_PreSendRequestDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src_uri, headers);
}
inline ::Meta::WitAi::WitRequest_PreSendRequestDelegate* Meta::WitAi::WitRequest_PreSendRequestDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest_PreSendRequestDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest_PreSendRequestDelegate::WitRequest_PreSendRequestDelegate()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest_OnCustomizeUriEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest_OnCustomizeUriEvent::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::WitRequest_OnCustomizeUriEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e7bff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest_OnCustomizeUriEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest_OnCustomizeUriEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Meta::WitAi::WitRequest_OnCustomizeUriEvent::*)(::System::UriBuilder*)>(&::Meta::WitAi::WitRequest_OnCustomizeUriEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e7c100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest_OnCustomizeUriEvent*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest_OnCustomizeUriEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::WitRequest_OnCustomizeUriEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest_OnCustomizeUriEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Uri* Meta::WitAi::WitRequest_OnCustomizeUriEvent::Invoke(::System::UriBuilder*  uriBuilder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest_OnCustomizeUriEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, uriBuilder);
}
inline ::Meta::WitAi::WitRequest_OnCustomizeUriEvent* Meta::WitAi::WitRequest_OnCustomizeUriEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest_OnCustomizeUriEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest_OnCustomizeUriEvent::WitRequest_OnCustomizeUriEvent()   {
}
//  Writing Method size for method: ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e7bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::*)()>(&::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e7bfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*>(),
                    {::i2c::class_of<::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent* Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequest_OnProvideCustomHeadersEvent::WitRequest_OnProvideCustomHeadersEvent()   {
}
