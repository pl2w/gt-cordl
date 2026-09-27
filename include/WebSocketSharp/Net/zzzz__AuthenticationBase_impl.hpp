#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/AuthenticationBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationSchemes_impl.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationBase_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationSchemes_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::AuthenticationBase::*)(::WebSocketSharp::Net::AuthenticationSchemes, ::System::Collections::Specialized::NameValueCollection*)>(&::WebSocketSharp::Net::AuthenticationBase::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb989534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationSchemes>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationBase.get_Scheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::AuthenticationSchemes (::WebSocketSharp::Net::AuthenticationBase::*)()>(&::WebSocketSharp::Net::AuthenticationBase::get_Scheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98a124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {"get_Scheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationBase.CreateNonceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::WebSocketSharp::Net::AuthenticationBase::CreateNonceValue)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb98a75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {"CreateNonceValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationBase.ParseParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameValueCollection* (*)(::StringW)>(&::WebSocketSharp::Net::AuthenticationBase::ParseParameters)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xb98970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {"ParseParameters", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationBase.ToBasicString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::AuthenticationBase::*)()>(&::WebSocketSharp::Net::AuthenticationBase::ToBasicString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationBase.ToDigestString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::AuthenticationBase::*)()>(&::WebSocketSharp::Net::AuthenticationBase::ToDigestString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::AuthenticationBase.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::AuthenticationBase::*)()>(&::WebSocketSharp::Net::AuthenticationBase::ToString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb98b378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::WebSocketSharp::Net::AuthenticationSchemes& WebSocketSharp::Net::AuthenticationBase::__cordl_internal_get__scheme()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheme;
}
constexpr ::WebSocketSharp::Net::AuthenticationSchemes const& WebSocketSharp::Net::AuthenticationBase::__cordl_internal_get__scheme() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheme;
}
constexpr void WebSocketSharp::Net::AuthenticationBase::__cordl_internal_set__scheme(::WebSocketSharp::Net::AuthenticationSchemes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheme = value;
}
constexpr ::System::Collections::Specialized::NameValueCollection*& WebSocketSharp::Net::AuthenticationBase::__cordl_internal_get_Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr ::System::Collections::Specialized::NameValueCollection* const& WebSocketSharp::Net::AuthenticationBase::__cordl_internal_get_Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr void WebSocketSharp::Net::AuthenticationBase::__cordl_internal_set_Parameters(::System::Collections::Specialized::NameValueCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parameters = value;
}
inline void WebSocketSharp::Net::AuthenticationBase::_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Net::AuthenticationSchemes>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scheme, parameters);
}
inline ::WebSocketSharp::Net::AuthenticationSchemes WebSocketSharp::Net::AuthenticationBase::get_Scheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {"get_Scheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::AuthenticationSchemes>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::AuthenticationBase::CreateNonceValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {"CreateNonceValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* WebSocketSharp::Net::AuthenticationBase::ParseParameters(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(),
                        {"ParseParameters", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*>(nullptr, ___internal_method, value);
}
inline ::StringW WebSocketSharp::Net::AuthenticationBase::ToBasicString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::AuthenticationBase::ToDigestString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::AuthenticationBase::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::AuthenticationBase*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::Net::AuthenticationBase* WebSocketSharp::Net::AuthenticationBase::New_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::AuthenticationBase*>(scheme, parameters));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::AuthenticationBase::AuthenticationBase()   {
}
