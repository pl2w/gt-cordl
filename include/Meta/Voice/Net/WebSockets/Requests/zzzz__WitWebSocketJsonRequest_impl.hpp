#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketJsonRequest.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest__WaitForTimeout_d__75_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__UploadChunkDelegate_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_RequestId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_RequestId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_ClientUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_ClientUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_ClientUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_OperationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OperationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OperationId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_TopicId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_TopicId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_TopicId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_TopicId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_TopicId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_TopicId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_PublishOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::PubSub::PubSubResponseOptions (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_PublishOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_PublishOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_PublishOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::Meta::Voice::Net::PubSub::PubSubResponseOptions)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_PublishOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_PublishOptions", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_TimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(int32_t)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_TimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_TimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_IsUploading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_IsUploading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_IsUploading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_IsUploading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_IsUploading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_IsUploading", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_IsDownloading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_IsDownloading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_IsDownloading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_IsDownloading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_IsDownloading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_IsDownloading", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_Completion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Completion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Completion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(int32_t)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_Code", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_SimulatedErrorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceErrorSimulationType (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_SimulatedErrorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_SimulatedErrorType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_SimulatedErrorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::Meta::WitAi::Requests::VoiceErrorSimulationType)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_SimulatedErrorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_SimulatedErrorType", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceErrorSimulationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_PostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_PostData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_PostData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_ResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_ResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_ResponseData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_ResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_ResponseData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_ResponseData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_OnRawResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::StringW>* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OnRawResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OnRawResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_OnRawResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::System::Action_1<::StringW>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_OnRawResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_OnRawResponse", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_OnFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OnFirstResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OnFirstResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_OnFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_OnFirstResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_OnFirstResponse", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.get_OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OnComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OnComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.set_OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_OnComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e33e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_OnComplete", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW, ::StringW, ::StringW)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::_ctor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x9e336cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.HandleUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleUpload)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x9e33e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.UploadChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::UploadChunk)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e341b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"UploadChunk", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.WaitForTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::WaitForTimeout)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e341d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"WaitForTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.GetTimeoutStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::GetTimeoutStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e342b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"GetTimeoutStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.UpdateTimeoutStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::UpdateTimeoutStart)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e342b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"UpdateTimeoutStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::Cancel)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e34314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.SendAbort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::SendAbort)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9e3439c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"SendAbort", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.HandleDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleDownload)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e34528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.ReturnRawResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::ReturnRawResponse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9e345b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.SetResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::SetResponseData)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x9e33a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.HandleDownloadBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleDownloadBegin)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e346d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.RaiseFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::RaiseFirstResponse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e34778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.HandleComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleComplete)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e34798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.RaiseComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::RaiseComplete)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e348bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::ToString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9e348dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__RequestId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestId_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__RequestId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestId_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__RequestId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequestId_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__ClientUserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientUserId_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__ClientUserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClientUserId_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__ClientUserId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClientUserId_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OperationId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OperationId_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OperationId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OperationId_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__OperationId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OperationId_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__TopicId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TopicId_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__TopicId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TopicId_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__TopicId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TopicId_k__BackingField = value;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubResponseOptions& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__PublishOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishOptions_k__BackingField;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubResponseOptions const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__PublishOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishOptions_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__PublishOptions_k__BackingField(::Meta::Voice::Net::PubSub::PubSubResponseOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PublishOptions_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__TimeoutMs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeoutMs_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__TimeoutMs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeoutMs_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__TimeoutMs_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeoutMs_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__IsUploading_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUploading_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__IsUploading_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUploading_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__IsUploading_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsUploading_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__IsDownloading_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDownloading_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__IsDownloading_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDownloading_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__IsDownloading_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDownloading_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__IsComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__IsComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__IsComplete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsComplete_k__BackingField = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Completion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Completion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Completion_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Code_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Code_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Code_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Code_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__Code_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Code_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__SimulatedErrorType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulatedErrorType_k__BackingField;
}
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__SimulatedErrorType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulatedErrorType_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__SimulatedErrorType_k__BackingField(::Meta::WitAi::Requests::VoiceErrorSimulationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SimulatedErrorType_k__BackingField = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__PostData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostData_k__BackingField;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__PostData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostData_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__PostData_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PostData_k__BackingField = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__ResponseData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseData_k__BackingField;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__ResponseData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseData_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__ResponseData_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResponseData_k__BackingField = value;
}
constexpr ::System::Action_1<::StringW>*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OnRawResponse_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnRawResponse_k__BackingField;
}
constexpr ::System::Action_1<::StringW>* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OnRawResponse_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnRawResponse_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__OnRawResponse_k__BackingField(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnRawResponse_k__BackingField = value;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OnFirstResponse_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnFirstResponse_k__BackingField;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OnFirstResponse_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnFirstResponse_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__OnFirstResponse_k__BackingField(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnFirstResponse_k__BackingField = value;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OnComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnComplete_k__BackingField;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__OnComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnComplete_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__OnComplete_k__BackingField(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnComplete_k__BackingField = value;
}
constexpr ::Meta::Voice::Net::WebSockets::UploadChunkDelegate*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__uploader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploader;
}
constexpr ::Meta::Voice::Net::WebSockets::UploadChunkDelegate* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__uploader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploader;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__uploader(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploader = value;
}
constexpr ::System::DateTime& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__timeoutStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutStart;
}
constexpr ::System::DateTime const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_get__timeoutStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutStart;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::__cordl_internal_set__timeoutStart(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeoutStart = value;
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_RequestId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_RequestId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_ClientUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_ClientUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OperationId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OperationId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_TopicId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_TopicId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_TopicId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_TopicId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Net::PubSub::PubSubResponseOptions Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_PublishOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_PublishOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::PubSub::PubSubResponseOptions>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_PublishOptions(::Meta::Voice::Net::PubSub::PubSubResponseOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_PublishOptions", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubResponseOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_TimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_TimeoutMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_TimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_IsUploading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_IsUploading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_IsUploading(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_IsUploading", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_IsDownloading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_IsDownloading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_IsDownloading(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_IsDownloading", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_IsComplete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Completion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Completion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline int32_t Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_Code(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_Code", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Requests::VoiceErrorSimulationType Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_SimulatedErrorType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_SimulatedErrorType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceErrorSimulationType>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_SimulatedErrorType(::Meta::WitAi::Requests::VoiceErrorSimulationType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_SimulatedErrorType", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceErrorSimulationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_PostData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_PostData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_ResponseData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_ResponseData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_ResponseData(::Meta::WitAi::Json::WitResponseNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_ResponseData", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::StringW>* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OnRawResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OnRawResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::StringW>*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_OnRawResponse(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_OnRawResponse", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OnFirstResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OnFirstResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_OnFirstResponse(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_OnFirstResponse", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::get_OnComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"get_OnComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::set_OnComplete(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"set_OnComplete", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::_ctor(::Meta::WitAi::Json::WitResponseNode*  postData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, postData, requestId, clientUserId, operationId);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleUpload(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  uploadChunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uploadChunk);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::UploadChunk(::Meta::WitAi::Json::WitResponseNode*  uploadJson, ::ArrayW<uint8_t>  uploadBinary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"UploadChunk", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uploadJson, uploadBinary);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::WaitForTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"WaitForTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::DateTime Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::GetTimeoutStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"GetTimeoutStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::UpdateTimeoutStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"UpdateTimeoutStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::Cancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::SendAbort(::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(),
                        {"SendAbort", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString, jsonData, binaryData);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::ReturnRawResponse(::StringW  jsonString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::SetResponseData(::Meta::WitAi::Json::WitResponseNode*  newResponseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newResponseData);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleDownloadBegin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::RaiseFirstResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::HandleComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::RaiseComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::New_ctor(::Meta::WitAi::Json::WitResponseNode*  postData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*>(postData, requestId, clientUserId, operationId));
}
/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWitWebSocketRequest"
constexpr  Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::operator ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWitWebSocketRequest"
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::i___Meta__Voice__Net__WebSockets__IWitWebSocketRequest() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest::WitWebSocketJsonRequest()   {
}
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e346c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0._ReturnRawResponse_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::_ReturnRawResponse_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e34adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0*>(),
                        {"<ReturnRawResponse>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::__cordl_internal_set___4__this(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::__cordl_internal_get_jsonString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonString;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::__cordl_internal_get_jsonString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonString;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::__cordl_internal_set_jsonString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jsonString = value;
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::_ReturnRawResponse_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0*>(),
                        {"<ReturnRawResponse>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0* Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketJsonRequest___c__DisplayClass81_0::WitWebSocketJsonRequest___c__DisplayClass81_0()   {
}
