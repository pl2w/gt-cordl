#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketResponseProcessor.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketResponseProcessor_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e27474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::*)(::StringW, ::StringW, ::StringW, ::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::Invoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e27528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::Invoke(::StringW  topicId, ::StringW  requestId, ::StringW  clientUserId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  responseChunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, topicId, requestId, clientUserId, responseChunk);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor* Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor::WitWebSocketResponseProcessor()   {
}
