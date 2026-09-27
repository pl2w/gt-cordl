#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/HttpUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__HttpUtility_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::HttpUtility.getNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::WebSocketSharp::Net::HttpUtility::getNumber)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb986ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"getNumber", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpUtility.getNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::WebSocketSharp::Net::HttpUtility::getNumber)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb986ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"getNumber", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpUtility.urlDecodeToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::WebSocketSharp::Net::HttpUtility::urlDecodeToBytes)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb986be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"urlDecodeToBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpUtility.GetEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(::StringW)>(&::WebSocketSharp::Net::HttpUtility::GetEncoding)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xb982918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"GetEncoding", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::HttpUtility.UrlDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::WebSocketSharp::Net::HttpUtility::UrlDecode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb9861ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"UrlDecode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WebSocketSharp::Net::HttpUtility::setStaticF__hexChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "_hexChars", ::WebSocketSharp::Net::HttpUtility*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> WebSocketSharp::Net::HttpUtility::getStaticF__hexChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_hexChars", ::WebSocketSharp::Net::HttpUtility*>();
}
inline void WebSocketSharp::Net::HttpUtility::setStaticF__sync(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_sync", ::WebSocketSharp::Net::HttpUtility*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* WebSocketSharp::Net::HttpUtility::getStaticF__sync()  {
return ::cordl_internals::getStaticField<::System::Object*, "_sync", ::WebSocketSharp::Net::HttpUtility*>();
}
inline int32_t WebSocketSharp::Net::HttpUtility::getNumber(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"getNumber", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
}
inline int32_t WebSocketSharp::Net::HttpUtility::getNumber(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"getNumber", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes, offset, count);
}
inline ::ArrayW<uint8_t> WebSocketSharp::Net::HttpUtility::urlDecodeToBytes(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"urlDecodeToBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bytes, offset, count);
}
inline ::System::Text::Encoding* WebSocketSharp::Net::HttpUtility::GetEncoding(::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"GetEncoding", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, contentType);
}
inline ::StringW WebSocketSharp::Net::HttpUtility::UrlDecode(::StringW  s, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::HttpUtility*>(),
                        {"UrlDecode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, encoding);
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::HttpUtility::HttpUtility()   {
}
