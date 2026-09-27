#pragma once
// IWYU pragma private; include "System/UriBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::UriBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)()>(&::System::UriBuilder::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xad0018c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::StringW)>(&::System::UriBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xad002f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::System::Uri*)>(&::System::UriBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xad006c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::System::Uri*)>(&::System::UriBuilder::Init)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xad004e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"Init", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.get_Host
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriBuilder::*)()>(&::System::UriBuilder::get_Host)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad00a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Host", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.set_Host
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::StringW)>(&::System::UriBuilder::set_Host)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xad00a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Host", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.set_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::StringW)>(&::System::UriBuilder::set_Path)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xad00b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.set_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(int32_t)>(&::System::UriBuilder::set_Port)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad00c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Port", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.get_Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriBuilder::*)()>(&::System::UriBuilder::get_Query)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad00c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Query", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.set_Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::StringW)>(&::System::UriBuilder::set_Query)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad00c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Query", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.get_Scheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriBuilder::*)()>(&::System::UriBuilder::get_Scheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad00d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Scheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.set_Scheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::StringW)>(&::System::UriBuilder::set_Scheme)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xad00d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Scheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.get_Uri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::UriBuilder::*)()>(&::System::UriBuilder::get_Uri)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xad00e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Uri", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriBuilder::*)(::System::Object*)>(&::System::UriBuilder::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xad00f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::UriBuilder*>(),
                    {::i2c::class_of<::System::UriBuilder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::UriBuilder::*)()>(&::System::UriBuilder::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad00f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::UriBuilder*>(),
                    {::i2c::class_of<::System::UriBuilder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.SetFieldsFromUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriBuilder::*)(::System::Uri*)>(&::System::UriBuilder::SetFieldsFromUri)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xad00880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"SetFieldsFromUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriBuilder.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriBuilder::*)()>(&::System::UriBuilder::ToString)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0xad00f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::UriBuilder*>(),
                    {::i2c::class_of<::System::UriBuilder*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::UriBuilder::__cordl_internal_get__changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changed;
}
constexpr bool const& System::UriBuilder::__cordl_internal_get__changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changed;
}
constexpr void System::UriBuilder::__cordl_internal_set__changed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changed = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__fragment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragment;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__fragment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragment;
}
constexpr void System::UriBuilder::__cordl_internal_set__fragment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fragment = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__host()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____host;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__host() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____host;
}
constexpr void System::UriBuilder::__cordl_internal_set__host(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____host = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr void System::UriBuilder::__cordl_internal_set__password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____password = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr void System::UriBuilder::__cordl_internal_set__path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____path = value;
}
constexpr int32_t& System::UriBuilder::__cordl_internal_get__port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr int32_t const& System::UriBuilder::__cordl_internal_get__port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr void System::UriBuilder::__cordl_internal_set__port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____port = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__query()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____query;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__query() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____query;
}
constexpr void System::UriBuilder::__cordl_internal_set__query(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____query = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__scheme()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheme;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__scheme() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheme;
}
constexpr void System::UriBuilder::__cordl_internal_set__scheme(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheme = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__schemeDelimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemeDelimiter;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__schemeDelimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemeDelimiter;
}
constexpr void System::UriBuilder::__cordl_internal_set__schemeDelimiter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____schemeDelimiter = value;
}
constexpr ::System::Uri*& System::UriBuilder::__cordl_internal_get__uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uri;
}
constexpr ::System::Uri* const& System::UriBuilder::__cordl_internal_get__uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uri;
}
constexpr void System::UriBuilder::__cordl_internal_set__uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uri = value;
}
constexpr ::StringW& System::UriBuilder::__cordl_internal_get__username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____username;
}
constexpr ::StringW const& System::UriBuilder::__cordl_internal_get__username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____username;
}
constexpr void System::UriBuilder::__cordl_internal_set__username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____username = value;
}
inline void System::UriBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::UriBuilder::_ctor(::StringW  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void System::UriBuilder::_ctor(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void System::UriBuilder::Init(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"Init", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline ::StringW System::UriBuilder::get_Host()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Host", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::UriBuilder::set_Host(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Host", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::UriBuilder::set_Path(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Path", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::UriBuilder::set_Port(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Port", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::UriBuilder::get_Query()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Query", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::UriBuilder::set_Query(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Query", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::UriBuilder::get_Scheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Scheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::UriBuilder::set_Scheme(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"set_Scheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::UriBuilder::get_Uri()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"get_Uri", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool System::UriBuilder::Equals(::System::Object*  rparam)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::UriBuilder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rparam);
}
inline int32_t System::UriBuilder::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::UriBuilder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::UriBuilder::SetFieldsFromUri(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriBuilder*>(),
                        {"SetFieldsFromUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline ::StringW System::UriBuilder::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::UriBuilder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::UriBuilder* System::UriBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UriBuilder*>());
}
inline ::System::UriBuilder* System::UriBuilder::New_ctor(::StringW  uri)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UriBuilder*>(uri));
}
inline ::System::UriBuilder* System::UriBuilder::New_ctor(::System::Uri*  uri)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UriBuilder*>(uri));
}
// Ctor Parameters []
constexpr ::System::UriBuilder::UriBuilder()   {
}
