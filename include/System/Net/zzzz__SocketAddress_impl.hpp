#pragma once
// IWYU pragma private; include "System/Net/SocketAddress.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::SocketAddress.get_Family
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::get_Family)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac5c130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"get_Family", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5c160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Net::SocketAddress::*)(int32_t)>(&::System::Net::SocketAddress::get_Item)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xac5c168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketAddress::*)(int32_t, uint8_t)>(&::System::Net::SocketAddress::set_Item)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xac5c1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketAddress::*)(::System::Net::Sockets::AddressFamily)>(&::System::Net::SocketAddress::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5c264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::AddressFamily>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketAddress::*)(::System::Net::Sockets::AddressFamily, int32_t)>(&::System::Net::SocketAddress::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xac5c26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketAddress::*)(::System::Net::IPAddress*)>(&::System::Net::SocketAddress::_ctor)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xac5c394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketAddress::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::SocketAddress::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xac5c614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.GetIPAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::GetIPAddress)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xac5c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"GetIPAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.GetIPEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::GetIPEndPoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xac5c84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"GetIPEndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.CopyAddressSizeIntoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::CopyAddressSizeIntoBuffer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xac5c8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"CopyAddressSizeIntoBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.GetAddressSizeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::GetAddressSizeOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac5c9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"GetAddressSizeOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.SetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketAddress::*)(::System::IntPtr)>(&::System::Net::SocketAddress::SetSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac5c9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"SetSize", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::SocketAddress::*)(::System::Object*)>(&::System::Net::SocketAddress::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xac5ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketAddress*>(),
                    {::i2c::class_of<::System::Net::SocketAddress*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xac5caf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketAddress*>(),
                    {::i2c::class_of<::System::Net::SocketAddress*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketAddress.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::SocketAddress::*)()>(&::System::Net::SocketAddress::ToString)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xac5cc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketAddress*>(),
                    {::i2c::class_of<::System::Net::SocketAddress*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::SocketAddress::__cordl_internal_get_m_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr int32_t const& System::Net::SocketAddress::__cordl_internal_get_m_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_Size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Size = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::SocketAddress::__cordl_internal_get_m_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::SocketAddress::__cordl_internal_get_m_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Buffer = value;
}
constexpr bool& System::Net::SocketAddress::__cordl_internal_get_m_changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_changed;
}
constexpr bool const& System::Net::SocketAddress::__cordl_internal_get_m_changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_changed;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_changed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_changed = value;
}
constexpr int32_t& System::Net::SocketAddress::__cordl_internal_get_m_hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash;
}
constexpr int32_t const& System::Net::SocketAddress::__cordl_internal_get_m_hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hash;
}
constexpr void System::Net::SocketAddress::__cordl_internal_set_m_hash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hash = value;
}
inline ::System::Net::Sockets::AddressFamily System::Net::SocketAddress::get_Family()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"get_Family", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily>(this, ___internal_method);
}
inline int32_t System::Net::SocketAddress::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t System::Net::SocketAddress::get_Item(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, offset);
}
inline void System::Net::SocketAddress::set_Item(int32_t  offset, uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, value);
}
inline void System::Net::SocketAddress::_ctor(::System::Net::Sockets::AddressFamily  family)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::AddressFamily>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, family);
}
inline void System::Net::SocketAddress::_ctor(::System::Net::Sockets::AddressFamily  family, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, family, size);
}
inline void System::Net::SocketAddress::_ctor(::System::Net::IPAddress*  ipAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ipAddress);
}
inline void System::Net::SocketAddress::_ctor(::System::Net::IPAddress*  ipaddress, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ipaddress, port);
}
inline ::System::Net::IPAddress* System::Net::SocketAddress::GetIPAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"GetIPAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::SocketAddress::GetIPEndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"GetIPEndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline void System::Net::SocketAddress::CopyAddressSizeIntoBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"CopyAddressSizeIntoBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::SocketAddress::GetAddressSizeOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"GetAddressSizeOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::SocketAddress::SetSize(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketAddress*>(),
                        {"SetSize", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline bool System::Net::SocketAddress::Equals(::System::Object*  comparand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketAddress*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline int32_t System::Net::SocketAddress::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketAddress*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::SocketAddress::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketAddress*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::SocketAddress::New_ctor(::System::Net::Sockets::AddressFamily  family)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SocketAddress*>(family));
}
inline ::System::Net::SocketAddress* System::Net::SocketAddress::New_ctor(::System::Net::Sockets::AddressFamily  family, int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SocketAddress*>(family, size));
}
inline ::System::Net::SocketAddress* System::Net::SocketAddress::New_ctor(::System::Net::IPAddress*  ipAddress)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SocketAddress*>(ipAddress));
}
inline ::System::Net::SocketAddress* System::Net::SocketAddress::New_ctor(::System::Net::IPAddress*  ipaddress, int32_t  port)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SocketAddress*>(ipaddress, port));
}
// Ctor Parameters []
constexpr ::System::Net::SocketAddress::SocketAddress()   {
}
