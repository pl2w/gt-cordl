#pragma once
// IWYU pragma private; include "System/Net/DnsEndPoint.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_impl.hpp"
#include "System/Net/zzzz__EndPoint_impl.hpp"
#include "System/Net/zzzz__DnsEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::DnsEndPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DnsEndPoint::*)(::StringW, int32_t)>(&::System::Net::DnsEndPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac56f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsEndPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DnsEndPoint::*)(::StringW, int32_t, ::System::Net::Sockets::AddressFamily)>(&::System::Net::DnsEndPoint::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xac56f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::AddressFamily>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsEndPoint.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DnsEndPoint::*)(::System::Object*)>(&::System::Net::DnsEndPoint::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac57180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                    {::i2c::class_of<::System::Net::DnsEndPoint*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsEndPoint.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::DnsEndPoint::*)()>(&::System::Net::DnsEndPoint::GetHashCode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xac57230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                    {::i2c::class_of<::System::Net::DnsEndPoint*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsEndPoint.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DnsEndPoint::*)()>(&::System::Net::DnsEndPoint::ToString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xac572e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                    {::i2c::class_of<::System::Net::DnsEndPoint*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsEndPoint.get_Host
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::DnsEndPoint::*)()>(&::System::Net::DnsEndPoint::get_Host)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {"get_Host", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsEndPoint.get_AddressFamily
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::DnsEndPoint::*)()>(&::System::Net::DnsEndPoint::get_AddressFamily)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac57464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                    {::i2c::class_of<::System::Net::DnsEndPoint*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsEndPoint.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::DnsEndPoint::*)()>(&::System::Net::DnsEndPoint::get_Port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5746c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {"get_Port", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::DnsEndPoint::__cordl_internal_get_m_Host()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Host;
}
constexpr ::StringW const& System::Net::DnsEndPoint::__cordl_internal_get_m_Host() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Host;
}
constexpr void System::Net::DnsEndPoint::__cordl_internal_set_m_Host(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Host = value;
}
constexpr int32_t& System::Net::DnsEndPoint::__cordl_internal_get_m_Port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Port;
}
constexpr int32_t const& System::Net::DnsEndPoint::__cordl_internal_get_m_Port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Port;
}
constexpr void System::Net::DnsEndPoint::__cordl_internal_set_m_Port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Port = value;
}
constexpr ::System::Net::Sockets::AddressFamily& System::Net::DnsEndPoint::__cordl_internal_get_m_Family()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Family;
}
constexpr ::System::Net::Sockets::AddressFamily const& System::Net::DnsEndPoint::__cordl_internal_get_m_Family() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Family;
}
constexpr void System::Net::DnsEndPoint::__cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Family = value;
}
inline void System::Net::DnsEndPoint::_ctor(::StringW  host, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, port);
}
inline void System::Net::DnsEndPoint::_ctor(::StringW  host, int32_t  port, ::System::Net::Sockets::AddressFamily  addressFamily)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::AddressFamily>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, port, addressFamily);
}
inline bool System::Net::DnsEndPoint::Equals(::System::Object*  comparand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsEndPoint*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline int32_t System::Net::DnsEndPoint::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsEndPoint*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::DnsEndPoint::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsEndPoint*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::DnsEndPoint::get_Host()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {"get_Host", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Sockets::AddressFamily System::Net::DnsEndPoint::get_AddressFamily()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsEndPoint*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily>(this, ___internal_method);
}
inline int32_t System::Net::DnsEndPoint::get_Port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsEndPoint*>(),
                        {"get_Port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::DnsEndPoint* System::Net::DnsEndPoint::New_ctor(::StringW  host, int32_t  port)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DnsEndPoint*>(host, port));
}
inline ::System::Net::DnsEndPoint* System::Net::DnsEndPoint::New_ctor(::StringW  host, int32_t  port, ::System::Net::Sockets::AddressFamily  addressFamily)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DnsEndPoint*>(host, port, addressFamily));
}
// Ctor Parameters []
constexpr ::System::Net::DnsEndPoint::DnsEndPoint()   {
}
