#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketSpeechRequest.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketMessageRequest_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSpeechRequest_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.get_IsReadyForInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::get_IsReadyForInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"get_IsReadyForInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.set_IsReadyForInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)(bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::set_IsReadyForInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"set_IsReadyForInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.get_HasSentAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::get_HasSentAudio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"get_HasSentAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.set_HasSentAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)(bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::set_HasSentAudio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"set_HasSentAudio", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, ::StringW, ::StringW, bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e35880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.HandleDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::HandleDownload)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e35884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.SendAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::SendAudioData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e35990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"SendAudioData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.CloseAudioStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::CloseAudioStream)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e35ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest.GetAdditionalPostJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::GetAdditionalPostJson)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e35a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"GetAdditionalPostJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_get__IsReadyForInput_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReadyForInput_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_get__IsReadyForInput_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReadyForInput_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_set__IsReadyForInput_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsReadyForInput_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_get__HasSentAudio_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasSentAudio_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_get__HasSentAudio_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasSentAudio_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_set__HasSentAudio_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasSentAudio_k__BackingField = value;
}
constexpr ::System::Action*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_get_OnReadyForInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReadyForInput;
}
constexpr ::System::Action* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_get_OnReadyForInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReadyForInput;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::__cordl_internal_set_OnReadyForInput(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReadyForInput = value;
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::get_IsReadyForInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"get_IsReadyForInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::set_IsReadyForInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"set_IsReadyForInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::get_HasSentAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"get_HasSentAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::set_HasSentAudio(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"set_HasSentAudio", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoint, parameters, requestId, clientUserId, operationId, endWithFullTranscription);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString, jsonData, binaryData);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::SendAudioData(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"SendAudioData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::CloseAudioStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::GetAdditionalPostJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(),
                        {"GetAdditionalPostJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::New_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest*>(endpoint, parameters, requestId, clientUserId, operationId, endWithFullTranscription));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSpeechRequest::WitWebSocketSpeechRequest()   {
}
