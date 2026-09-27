#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWitWebSocketRequest.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubResponseOptions_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__UploadChunkDelegate_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_RequestId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_RequestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_OperationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_OperationId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_ClientUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_ClientUserId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_TopicId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_TopicId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.set_TopicId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_TopicId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.set_PublishOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)(::Meta::Voice::Net::PubSub::PubSubResponseOptions)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_PublishOptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_TimeoutMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.set_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)(int32_t)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_TimeoutMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.HandleUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::HandleUpload)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.HandleDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::HandleDownload)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_IsComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_Completion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_Completion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_Code)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_SimulatedErrorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceErrorSimulationType (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_SimulatedErrorType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::Cancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.get_OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_OnComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest.set_OnComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_OnComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 17}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_RequestId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_OperationId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_ClientUserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_TopicId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_TopicId(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_PublishOptions(::Meta::Voice::Net::PubSub::PubSubResponseOptions  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_TimeoutMs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_TimeoutMs(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketRequest::HandleUpload(::Meta::Voice::Net::WebSockets::UploadChunkDelegate*  uploadChunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uploadChunk);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketRequest::HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString, jsonData, binaryData);
}
inline bool Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_IsComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_Completion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline int32_t Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_Code()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_Error()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VoiceErrorSimulationType Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_SimulatedErrorType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceErrorSimulationType>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketRequest::Cancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* Meta::Voice::Net::WebSockets::IWitWebSocketRequest::get_OnComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketRequest::set_OnComplete(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
