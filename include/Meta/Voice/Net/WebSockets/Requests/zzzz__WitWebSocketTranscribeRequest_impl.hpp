#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketTranscribeRequest.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSpeechRequest_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketTranscribeRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest.get_MultipleSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::get_MultipleSegments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e69734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(),
                        {"get_MultipleSegments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, ::StringW, ::StringW, bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9e6973c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest.CloseAudioStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::CloseAudioStream)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e69888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(), 40}
                ));
    return ___internal_method;
  }
};
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::__cordl_internal_get__MultipleSegments_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultipleSegments_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::__cordl_internal_get__MultipleSegments_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MultipleSegments_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::__cordl_internal_set__MultipleSegments_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MultipleSegments_k__BackingField = value;
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::get_MultipleSegments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(),
                        {"get_MultipleSegments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  multipleSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoint, parameters, requestId, clientUserId, operationId, multipleSegments);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::CloseAudioStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::New_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  multipleSegments)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest*>(endpoint, parameters, requestId, clientUserId, operationId, multipleSegments));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTranscribeRequest::WitWebSocketTranscribeRequest()   {
}
