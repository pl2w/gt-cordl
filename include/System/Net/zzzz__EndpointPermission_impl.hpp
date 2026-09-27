#pragma once
// IWYU pragma private; include "System/Net/EndpointPermission.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/Net/zzzz__TransportType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__EndpointPermission_def.hpp"
#include "System/Net/zzzz__TransportType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::EndpointPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndpointPermission::*)(::StringW, int32_t, ::System::Net::TransportType)>(&::System::Net::EndpointPermission::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xac94e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::TransportType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.get_Hostname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::get_Hostname)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac94f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"get_Hostname", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::get_Port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac94f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"get_Port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.get_Transport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::TransportType (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::get_Transport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac94f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"get_Transport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::EndpointPermission::*)(::System::Object*)>(&::System::Net::EndpointPermission::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xac94f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::EndpointPermission*>(),
                    {::i2c::class_of<::System::Net::EndpointPermission*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac94fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::EndpointPermission*>(),
                    {::i2c::class_of<::System::Net::EndpointPermission*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::ToString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xac95000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::EndpointPermission*>(),
                    {::i2c::class_of<::System::Net::EndpointPermission*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.IsSubsetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::EndpointPermission::*)(::System::Net::EndpointPermission*)>(&::System::Net::EndpointPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xac95140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::System::Net::EndpointPermission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.IsSubsetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::EndpointPermission::*)(::StringW, ::StringW)>(&::System::Net::EndpointPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xac95540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndpointPermission* (::System::Net::EndpointPermission::*)(::System::Net::EndpointPermission*)>(&::System::Net::EndpointPermission::Intersect)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xac95794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Net::EndpointPermission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.IntersectHostname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::EndpointPermission::*)(::System::Net::EndpointPermission*)>(&::System::Net::EndpointPermission::IntersectHostname)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xac958b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"IntersectHostname", {}, {::i2c::type_of<::System::Net::EndpointPermission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::EndpointPermission::*)(::StringW, ::StringW)>(&::System::Net::EndpointPermission::Intersect)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xac95a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"Intersect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.ToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::EndpointPermission::*)(::StringW)>(&::System::Net::EndpointPermission::ToNumber)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xac95670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"ToNumber", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.Resolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::Resolve)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xac952b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"Resolve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission.UndoResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::UndoResolve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac95d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"UndoResolve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndpointPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::EndpointPermission::*)()>(&::System::Net::EndpointPermission::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac95dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::EndpointPermission::__cordl_internal_get_hostname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostname;
}
constexpr ::StringW const& System::Net::EndpointPermission::__cordl_internal_get_hostname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostname;
}
constexpr void System::Net::EndpointPermission::__cordl_internal_set_hostname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostname = value;
}
constexpr int32_t& System::Net::EndpointPermission::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr int32_t const& System::Net::EndpointPermission::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void System::Net::EndpointPermission::__cordl_internal_set_port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
constexpr ::System::Net::TransportType& System::Net::EndpointPermission::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::System::Net::TransportType const& System::Net::EndpointPermission::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void System::Net::EndpointPermission::__cordl_internal_set_transport(::System::Net::TransportType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
constexpr bool& System::Net::EndpointPermission::__cordl_internal_get_resolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolved;
}
constexpr bool const& System::Net::EndpointPermission::__cordl_internal_get_resolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolved;
}
constexpr void System::Net::EndpointPermission::__cordl_internal_set_resolved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolved = value;
}
constexpr bool& System::Net::EndpointPermission::__cordl_internal_get_hasWildcard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasWildcard;
}
constexpr bool const& System::Net::EndpointPermission::__cordl_internal_get_hasWildcard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasWildcard;
}
constexpr void System::Net::EndpointPermission::__cordl_internal_set_hasWildcard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasWildcard = value;
}
constexpr ::ArrayW<::System::Net::IPAddress*>& System::Net::EndpointPermission::__cordl_internal_get_addresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addresses;
}
constexpr ::ArrayW<::System::Net::IPAddress*> const& System::Net::EndpointPermission::__cordl_internal_get_addresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addresses;
}
constexpr void System::Net::EndpointPermission::__cordl_internal_set_addresses(::ArrayW<::System::Net::IPAddress*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addresses = value;
}
inline void System::Net::EndpointPermission::setStaticF_dot_char(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "dot_char", ::System::Net::EndpointPermission*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::EndpointPermission::getStaticF_dot_char()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "dot_char", ::System::Net::EndpointPermission*>();
}
inline void System::Net::EndpointPermission::_ctor(::StringW  hostname, int32_t  port, ::System::Net::TransportType  transport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::TransportType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostname, port, transport);
}
inline ::StringW System::Net::EndpointPermission::get_Hostname()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"get_Hostname", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Net::EndpointPermission::get_Port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"get_Port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::TransportType System::Net::EndpointPermission::get_Transport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"get_Transport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::TransportType>(this, ___internal_method);
}
inline bool System::Net::EndpointPermission::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::EndpointPermission*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::EndpointPermission::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::EndpointPermission*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::EndpointPermission::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::EndpointPermission*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::EndpointPermission::IsSubsetOf(::System::Net::EndpointPermission*  perm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::System::Net::EndpointPermission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, perm);
}
inline bool System::Net::EndpointPermission::IsSubsetOf(::StringW  addr1, ::StringW  addr2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, addr1, addr2);
}
inline ::System::Net::EndpointPermission* System::Net::EndpointPermission::Intersect(::System::Net::EndpointPermission*  perm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Net::EndpointPermission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::EndpointPermission*>(this, ___internal_method, perm);
}
inline ::StringW System::Net::EndpointPermission::IntersectHostname(::System::Net::EndpointPermission*  perm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"IntersectHostname", {}, {::i2c::type_of<::System::Net::EndpointPermission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, perm);
}
inline ::StringW System::Net::EndpointPermission::Intersect(::StringW  addr1, ::StringW  addr2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"Intersect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, addr1, addr2);
}
inline int32_t System::Net::EndpointPermission::ToNumber(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"ToNumber", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Net::EndpointPermission::Resolve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"Resolve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::EndpointPermission::UndoResolve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {"UndoResolve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::EndpointPermission::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::EndpointPermission*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::EndpointPermission* System::Net::EndpointPermission::New_ctor(::StringW  hostname, int32_t  port, ::System::Net::TransportType  transport)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::EndpointPermission*>(hostname, port, transport));
}
inline ::System::Net::EndpointPermission* System::Net::EndpointPermission::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::EndpointPermission*>());
}
// Ctor Parameters []
constexpr ::System::Net::EndpointPermission::EndpointPermission()   {
}
