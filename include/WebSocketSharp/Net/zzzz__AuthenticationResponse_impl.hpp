#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/AuthenticationResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationBase_impl.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationResponse_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationChallenge_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationResponse_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "WebSocketSharp/Net/zzzz__NetworkCredential_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::AuthenticationResponse::*)(::WebSocketSharp::Net::NetworkCredential*)>(&::WebSocketSharp::Net::AuthenticationResponse::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb989f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::NetworkCredential*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::AuthenticationResponse::*)(::WebSocketSharp::Net::AuthenticationChallenge*, ::WebSocketSharp::Net::NetworkCredential*, uint32_t)>(&::WebSocketSharp::Net::AuthenticationResponse::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb98a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationChallenge*>(), ::i2c::type_of<::WebSocketSharp::Net::NetworkCredential*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::AuthenticationResponse::*)(::WebSocketSharp::Net::AuthenticationSchemes, ::System::Collections::Specialized::NameValueCollection*, ::WebSocketSharp::Net::NetworkCredential*, uint32_t)>(&::WebSocketSharp::Net::AuthenticationResponse::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb989fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationSchemes>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::WebSocketSharp::Net::NetworkCredential*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.get_NonceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::WebSocketSharp::Net::AuthenticationResponse::*)()>(&::WebSocketSharp::Net::AuthenticationResponse::get_NonceCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb98a450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"get_NonceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.createA1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::WebSocketSharp::Net::AuthenticationResponse::createA1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb98a460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.createA1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::WebSocketSharp::Net::AuthenticationResponse::createA1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb98a4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.createA2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::WebSocketSharp::Net::AuthenticationResponse::createA2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb98a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.createA2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::WebSocketSharp::Net::AuthenticationResponse::createA2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb98a6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::WebSocketSharp::Net::AuthenticationResponse::hash)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb98a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"hash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.initAsDigest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::AuthenticationResponse::*)()>(&::WebSocketSharp::Net::AuthenticationResponse::initAsDigest)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xb98a12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"initAsDigest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.CreateRequestDigest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Specialized::NameValueCollection*)>(&::WebSocketSharp::Net::AuthenticationResponse::CreateRequestDigest)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0xb98a8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"CreateRequestDigest", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.ToBasicString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::AuthenticationResponse::*)()>(&::WebSocketSharp::Net::AuthenticationResponse::ToBasicString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb98ad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse.ToDigestString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::AuthenticationResponse::*)()>(&::WebSocketSharp::Net::AuthenticationResponse::ToDigestString)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xb98ae8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr uint32_t& WebSocketSharp::Net::AuthenticationResponse::__cordl_internal_get__nonceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonceCount;
}
constexpr uint32_t const& WebSocketSharp::Net::AuthenticationResponse::__cordl_internal_get__nonceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonceCount;
}
constexpr void WebSocketSharp::Net::AuthenticationResponse::__cordl_internal_set__nonceCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonceCount = value;
}
inline void WebSocketSharp::Net::AuthenticationResponse::_ctor(::WebSocketSharp::Net::NetworkCredential*  credentials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::NetworkCredential*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credentials);
}
inline void WebSocketSharp::Net::AuthenticationResponse::_ctor(::WebSocketSharp::Net::AuthenticationChallenge*  challenge, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationChallenge*>(), ::i2c::type_of<::WebSocketSharp::Net::NetworkCredential*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, challenge, credentials, nonceCount);
}
inline void WebSocketSharp::Net::AuthenticationResponse::_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationSchemes>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::WebSocketSharp::Net::NetworkCredential*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scheme, parameters, credentials, nonceCount);
}
inline uint32_t WebSocketSharp::Net::AuthenticationResponse::get_NonceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"get_NonceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::createA1(::StringW  username, ::StringW  password, ::StringW  realm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, username, password, realm);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::createA1(::StringW  username, ::StringW  password, ::StringW  realm, ::StringW  nonce, ::StringW  cnonce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, username, password, realm, nonce, cnonce);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::createA2(::StringW  method, ::StringW  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, method, uri);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::createA2(::StringW  method, ::StringW  uri, ::StringW  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"createA2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, method, uri, entity);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::hash(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"hash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void WebSocketSharp::Net::AuthenticationResponse::initAsDigest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"initAsDigest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::CreateRequestDigest(::System::Collections::Specialized::NameValueCollection*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(),
                        {"CreateRequestDigest", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, parameters);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::ToBasicString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::AuthenticationResponse::ToDigestString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::Net::AuthenticationResponse* WebSocketSharp::Net::AuthenticationResponse::New_ctor(::WebSocketSharp::Net::NetworkCredential*  credentials)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::AuthenticationResponse*>(credentials));
}
inline ::WebSocketSharp::Net::AuthenticationResponse* WebSocketSharp::Net::AuthenticationResponse::New_ctor(::WebSocketSharp::Net::AuthenticationChallenge*  challenge, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::AuthenticationResponse*>(challenge, credentials, nonceCount));
}
inline ::WebSocketSharp::Net::AuthenticationResponse* WebSocketSharp::Net::AuthenticationResponse::New_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::AuthenticationResponse*>(scheme, parameters, credentials, nonceCount));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::AuthenticationResponse::AuthenticationResponse()   {
}
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::AuthenticationResponse___c::*)()>(&::WebSocketSharp::Net::AuthenticationResponse___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationResponse___c._initAsDigest_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::AuthenticationResponse___c::*)(::StringW)>(&::WebSocketSharp::Net::AuthenticationResponse___c::_initAsDigest_b__24_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb98b310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse___c*>(),
                        {"<initAsDigest>b__24_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WebSocketSharp::Net::AuthenticationResponse___c::setStaticF___9(::WebSocketSharp::Net::AuthenticationResponse___c*  value)  {
::cordl_internals::setStaticField<::WebSocketSharp::Net::AuthenticationResponse___c*, "<>9", ::WebSocketSharp::Net::AuthenticationResponse___c*>(std::forward<::WebSocketSharp::Net::AuthenticationResponse___c*>(value));
}
inline ::WebSocketSharp::Net::AuthenticationResponse___c* WebSocketSharp::Net::AuthenticationResponse___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WebSocketSharp::Net::AuthenticationResponse___c*, "<>9", ::WebSocketSharp::Net::AuthenticationResponse___c*>();
}
inline void WebSocketSharp::Net::AuthenticationResponse___c::setStaticF___9__24_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__24_0", ::WebSocketSharp::Net::AuthenticationResponse___c*>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* WebSocketSharp::Net::AuthenticationResponse___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__24_0", ::WebSocketSharp::Net::AuthenticationResponse___c*>();
}
inline void WebSocketSharp::Net::AuthenticationResponse___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::Net::AuthenticationResponse___c::_initAsDigest_b__24_0(::StringW  qop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationResponse___c*>(),
                        {"<initAsDigest>b__24_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qop);
}
inline ::WebSocketSharp::Net::AuthenticationResponse___c* WebSocketSharp::Net::AuthenticationResponse___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::AuthenticationResponse___c*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::AuthenticationResponse___c::AuthenticationResponse___c()   {
}
