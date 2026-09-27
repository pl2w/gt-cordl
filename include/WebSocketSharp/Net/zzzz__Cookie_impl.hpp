#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/Cookie.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/Net/zzzz__Cookie_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb9840b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW, ::StringW)>(&::WebSocketSharp::Net::Cookie::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb9841c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::WebSocketSharp::Net::Cookie::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb9841dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_MaxAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(int32_t)>(&::WebSocketSharp::Net::Cookie::set_MaxAge)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb984494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_MaxAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_SameSite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW)>(&::WebSocketSharp::Net::Cookie::set_SameSite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_SameSite", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW)>(&::WebSocketSharp::Net::Cookie::set_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_CommentUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::System::Uri*)>(&::WebSocketSharp::Net::Cookie::set_CommentUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_CommentUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Discard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(bool)>(&::WebSocketSharp::Net::Cookie::set_Discard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Discard", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Domain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW)>(&::WebSocketSharp::Net::Cookie::set_Domain)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb984558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Domain", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.get_Expired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::get_Expired)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb9835d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Expired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.get_Expires
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::get_Expires)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Expires", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Expires
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::System::DateTime)>(&::WebSocketSharp::Net::Cookie::set_Expires)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98458c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Expires", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_HttpOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(bool)>(&::WebSocketSharp::Net::Cookie::set_HttpOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_HttpOnly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98459c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::get_Path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9845a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW)>(&::WebSocketSharp::Net::Cookie::set_Path)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb9845ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW)>(&::WebSocketSharp::Net::Cookie::set_Port)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb9845d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Port", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Secure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(bool)>(&::WebSocketSharp::Net::Cookie::set_Secure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Secure", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(int32_t)>(&::WebSocketSharp::Net::Cookie::set_Version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb984850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::WebSocketSharp::Net::Cookie::hash)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb984860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"hash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Net::Cookie::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::WebSocketSharp::Net::Cookie::init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb9840f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.tryCreatePorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<int32_t>>)>(&::WebSocketSharp::Net::Cookie::tryCreatePorts)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb984668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"tryCreatePorts", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.EqualsWithoutValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::Cookie::*)(::WebSocketSharp::Net::Cookie*)>(&::WebSocketSharp::Net::Cookie::EqualsWithoutValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb984894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"EqualsWithoutValue", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.ToRequestString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::Cookie::*)(::System::Uri*)>(&::WebSocketSharp::Net::Cookie::ToRequestString)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xb984924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"ToRequestString", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.TryCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<::WebSocketSharp::Net::Cookie*>)>(&::WebSocketSharp::Net::Cookie::TryCreate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb984c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"TryCreate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::WebSocketSharp::Net::Cookie*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::Net::Cookie::*)(::System::Object*)>(&::WebSocketSharp::Net::Cookie::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb984d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::Cookie*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::GetHashCode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb984e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::Cookie*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Net::Cookie.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::Net::Cookie::*)()>(&::WebSocketSharp::Net::Cookie::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb984ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                    {::i2c::class_of<::WebSocketSharp::Net::Cookie*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::Net::Cookie::__cordl_internal_get__comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comment;
}
constexpr ::StringW const& WebSocketSharp::Net::Cookie::__cordl_internal_get__comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comment;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comment = value;
}
constexpr ::System::Uri*& WebSocketSharp::Net::Cookie::__cordl_internal_get__commentUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commentUri;
}
constexpr ::System::Uri* const& WebSocketSharp::Net::Cookie::__cordl_internal_get__commentUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commentUri;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__commentUri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____commentUri = value;
}
constexpr bool& WebSocketSharp::Net::Cookie::__cordl_internal_get__discard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____discard;
}
constexpr bool const& WebSocketSharp::Net::Cookie::__cordl_internal_get__discard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____discard;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__discard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____discard = value;
}
constexpr ::StringW& WebSocketSharp::Net::Cookie::__cordl_internal_get__domain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____domain;
}
constexpr ::StringW const& WebSocketSharp::Net::Cookie::__cordl_internal_get__domain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____domain;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__domain(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____domain = value;
}
constexpr ::System::DateTime& WebSocketSharp::Net::Cookie::__cordl_internal_get__expires()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expires;
}
constexpr ::System::DateTime const& WebSocketSharp::Net::Cookie::__cordl_internal_get__expires() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expires;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__expires(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____expires = value;
}
constexpr bool& WebSocketSharp::Net::Cookie::__cordl_internal_get__httpOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____httpOnly;
}
constexpr bool const& WebSocketSharp::Net::Cookie::__cordl_internal_get__httpOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____httpOnly;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__httpOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____httpOnly = value;
}
constexpr ::StringW& WebSocketSharp::Net::Cookie::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& WebSocketSharp::Net::Cookie::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::StringW& WebSocketSharp::Net::Cookie::__cordl_internal_get__path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr ::StringW const& WebSocketSharp::Net::Cookie::__cordl_internal_get__path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____path = value;
}
constexpr ::StringW& WebSocketSharp::Net::Cookie::__cordl_internal_get__port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr ::StringW const& WebSocketSharp::Net::Cookie::__cordl_internal_get__port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__port(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____port = value;
}
constexpr ::ArrayW<int32_t>& WebSocketSharp::Net::Cookie::__cordl_internal_get__ports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ports;
}
constexpr ::ArrayW<int32_t> const& WebSocketSharp::Net::Cookie::__cordl_internal_get__ports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ports;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__ports(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ports = value;
}
constexpr ::StringW& WebSocketSharp::Net::Cookie::__cordl_internal_get__sameSite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sameSite;
}
constexpr ::StringW const& WebSocketSharp::Net::Cookie::__cordl_internal_get__sameSite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sameSite;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__sameSite(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sameSite = value;
}
constexpr bool& WebSocketSharp::Net::Cookie::__cordl_internal_get__secure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secure;
}
constexpr bool const& WebSocketSharp::Net::Cookie::__cordl_internal_get__secure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secure;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__secure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secure = value;
}
constexpr ::System::DateTime& WebSocketSharp::Net::Cookie::__cordl_internal_get__timeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeStamp;
}
constexpr ::System::DateTime const& WebSocketSharp::Net::Cookie::__cordl_internal_get__timeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeStamp;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__timeStamp(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeStamp = value;
}
constexpr ::StringW& WebSocketSharp::Net::Cookie::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr ::StringW const& WebSocketSharp::Net::Cookie::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr int32_t& WebSocketSharp::Net::Cookie::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr int32_t const& WebSocketSharp::Net::Cookie::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr void WebSocketSharp::Net::Cookie::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
inline void WebSocketSharp::Net::Cookie::setStaticF__emptyPorts(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_emptyPorts", ::WebSocketSharp::Net::Cookie*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> WebSocketSharp::Net::Cookie::getStaticF__emptyPorts()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_emptyPorts", ::WebSocketSharp::Net::Cookie*>();
}
inline void WebSocketSharp::Net::Cookie::setStaticF__reservedCharsForValue(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "_reservedCharsForValue", ::WebSocketSharp::Net::Cookie*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> WebSocketSharp::Net::Cookie::getStaticF__reservedCharsForValue()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_reservedCharsForValue", ::WebSocketSharp::Net::Cookie*>();
}
inline void WebSocketSharp::Net::Cookie::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::Net::Cookie::_ctor(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void WebSocketSharp::Net::Cookie::_ctor(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, path, domain);
}
inline void WebSocketSharp::Net::Cookie::set_MaxAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_MaxAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_SameSite(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_SameSite", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_Comment(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_CommentUri(::System::Uri*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_CommentUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_Discard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Discard", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_Domain(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Domain", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WebSocketSharp::Net::Cookie::get_Expired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Expired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime WebSocketSharp::Net::Cookie::get_Expires()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Expires", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void WebSocketSharp::Net::Cookie::set_Expires(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Expires", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_HttpOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_HttpOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW WebSocketSharp::Net::Cookie::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::Cookie::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void WebSocketSharp::Net::Cookie::set_Path(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_Port(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Port", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::Net::Cookie::set_Secure(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Secure", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WebSocketSharp::Net::Cookie::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WebSocketSharp::Net::Cookie::set_Version(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"set_Version", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WebSocketSharp::Net::Cookie::hash(int32_t  i, int32_t  j, int32_t  k, int32_t  l, int32_t  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"hash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i, j, k, l, m);
}
inline void WebSocketSharp::Net::Cookie::init(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"init", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, path, domain);
}
inline bool WebSocketSharp::Net::Cookie::tryCreatePorts(::StringW  value, ::by_ref<::ArrayW<int32_t>>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"tryCreatePorts", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, result);
}
inline bool WebSocketSharp::Net::Cookie::EqualsWithoutValue(::WebSocketSharp::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"EqualsWithoutValue", {}, {::i2c::type_of<::WebSocketSharp::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cookie);
}
inline ::StringW WebSocketSharp::Net::Cookie::ToRequestString(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"ToRequestString", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri);
}
inline bool WebSocketSharp::Net::Cookie::TryCreate(::StringW  name, ::StringW  value, ::by_ref<::WebSocketSharp::Net::Cookie*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Net::Cookie*>(),
                        {"TryCreate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::WebSocketSharp::Net::Cookie*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, value, result);
}
inline bool WebSocketSharp::Net::Cookie::Equals(::System::Object*  comparand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::Cookie*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline int32_t WebSocketSharp::Net::Cookie::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::Cookie*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::Net::Cookie::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::Net::Cookie*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::Net::Cookie* WebSocketSharp::Net::Cookie::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::Cookie*>());
}
inline ::WebSocketSharp::Net::Cookie* WebSocketSharp::Net::Cookie::New_ctor(::StringW  name, ::StringW  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::Cookie*>(name, value));
}
inline ::WebSocketSharp::Net::Cookie* WebSocketSharp::Net::Cookie::New_ctor(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Net::Cookie*>(name, value, path, domain));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Net::Cookie::Cookie()   {
}
