#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/UploadChunkDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__UploadChunkDelegate_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::UploadChunkDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::UploadChunkDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Voice::Net::WebSockets::UploadChunkDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e27568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::UploadChunkDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::UploadChunkDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::UploadChunkDelegate::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::UploadChunkDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e2761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::UploadChunkDelegate*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::UploadChunkDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Net::WebSockets::UploadChunkDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::UploadChunkDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Voice::Net::WebSockets::UploadChunkDelegate::Invoke(::StringW  requestId, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::UploadChunkDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, jsonData, binaryData);
}
inline ::Meta::Voice::Net::WebSockets::UploadChunkDelegate* Meta::Voice::Net::WebSockets::UploadChunkDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::UploadChunkDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::UploadChunkDelegate::UploadChunkDelegate()   {
}
