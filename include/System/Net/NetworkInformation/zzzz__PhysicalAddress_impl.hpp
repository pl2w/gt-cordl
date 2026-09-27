#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/PhysicalAddress.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__PhysicalAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::PhysicalAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::PhysicalAddress::*)(::ArrayW<uint8_t>)>(&::System::Net::NetworkInformation::PhysicalAddress::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacc81e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::PhysicalAddress.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NetworkInformation::PhysicalAddress::*)()>(&::System::Net::NetworkInformation::PhysicalAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xacc8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(),
                    {::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::PhysicalAddress.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkInformation::PhysicalAddress::*)(::System::Object*)>(&::System::Net::NetworkInformation::PhysicalAddress::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xacc8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(),
                    {::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::PhysicalAddress.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::PhysicalAddress::*)()>(&::System::Net::NetworkInformation::PhysicalAddress::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xacc8420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(),
                    {::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_get_address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___address;
}
constexpr ::ArrayW<uint8_t> const& System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_get_address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___address;
}
constexpr void System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_set_address(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___address = value;
}
constexpr bool& System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_get_changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
constexpr bool const& System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_get_changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changed;
}
constexpr void System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_set_changed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changed = value;
}
constexpr int32_t& System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_get_hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr int32_t const& System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_get_hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr void System::Net::NetworkInformation::PhysicalAddress::__cordl_internal_set_hash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash = value;
}
inline void System::Net::NetworkInformation::PhysicalAddress::setStaticF_None(::System::Net::NetworkInformation::PhysicalAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::NetworkInformation::PhysicalAddress*, "None", ::System::Net::NetworkInformation::PhysicalAddress*>(std::forward<::System::Net::NetworkInformation::PhysicalAddress*>(value));
}
inline ::System::Net::NetworkInformation::PhysicalAddress* System::Net::NetworkInformation::PhysicalAddress::getStaticF_None()  {
return ::cordl_internals::getStaticField<::System::Net::NetworkInformation::PhysicalAddress*, "None", ::System::Net::NetworkInformation::PhysicalAddress*>();
}
inline void System::Net::NetworkInformation::PhysicalAddress::_ctor(::ArrayW<uint8_t>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline int32_t System::Net::NetworkInformation::PhysicalAddress::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::NetworkInformation::PhysicalAddress::Equals(::System::Object*  comparand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline ::StringW System::Net::NetworkInformation::PhysicalAddress::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::NetworkInformation::PhysicalAddress*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::PhysicalAddress* System::Net::NetworkInformation::PhysicalAddress::New_ctor(::ArrayW<uint8_t>  address)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::PhysicalAddress*>(address));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::PhysicalAddress::PhysicalAddress()   {
}
