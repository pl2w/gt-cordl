#pragma once
// IWYU pragma private; include "NanoSockets/Address.hpp"
#include "NanoSockets/zzzz__Address_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::NanoSockets::Address.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NanoSockets::Address::*)(::NanoSockets::Address)>(&::NanoSockets::Address::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa367984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Address>(),
                        {"Equals", {}, {::i2c::type_of<::NanoSockets::Address>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::Address.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NanoSockets::Address::*)(::System::Object*)>(&::NanoSockets::Address::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa3679c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NanoSockets::Address>(),
                    {::i2c::class_of<::NanoSockets::Address>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::Address.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::NanoSockets::Address::*)()>(&::NanoSockets::Address::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa367a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NanoSockets::Address>(),
                    {::i2c::class_of<::NanoSockets::Address>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NanoSockets::Address.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::NanoSockets::Address::*)()>(&::NanoSockets::Address::ToString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa367ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NanoSockets::Address>(),
                    {::i2c::class_of<::NanoSockets::Address>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr uint64_t& NanoSockets::Address::__cordl_internal_get__address0()  {
return this->____address0;
}
constexpr uint64_t const& NanoSockets::Address::__cordl_internal_get__address0() const {
return this->____address0;
}
constexpr void NanoSockets::Address::__cordl_internal_set__address0(uint64_t  value)  {
this->____address0 = value;
}
constexpr uint64_t& NanoSockets::Address::__cordl_internal_get__address1()  {
return this->____address1;
}
constexpr uint64_t const& NanoSockets::Address::__cordl_internal_get__address1() const {
return this->____address1;
}
constexpr void NanoSockets::Address::__cordl_internal_set__address1(uint64_t  value)  {
this->____address1 = value;
}
constexpr uint16_t& NanoSockets::Address::__cordl_internal_get_Port()  {
return this->___Port;
}
constexpr uint16_t const& NanoSockets::Address::__cordl_internal_get_Port() const {
return this->___Port;
}
constexpr void NanoSockets::Address::__cordl_internal_set_Port(uint16_t  value)  {
this->___Port = value;
}
inline bool NanoSockets::Address::Equals(::NanoSockets::Address  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NanoSockets::Address>(),
                        {"Equals", {}, {::i2c::type_of<::NanoSockets::Address>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool NanoSockets::Address::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NanoSockets::Address>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t NanoSockets::Address::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NanoSockets::Address>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW NanoSockets::Address::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NanoSockets::Address>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::NanoSockets::Address>"
constexpr  NanoSockets::Address::operator ::System::IEquatable_1<::NanoSockets::Address>*()  {
return static_cast<::System::IEquatable_1<::NanoSockets::Address>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::NanoSockets::Address>"
constexpr ::System::IEquatable_1<::NanoSockets::Address>* NanoSockets::Address::i___System__IEquatable_1___NanoSockets__Address_()  {
return static_cast<::System::IEquatable_1<::NanoSockets::Address>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_address0", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_address1", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::NanoSockets::Address::Address(uint64_t  _address0, uint64_t  _address1, uint16_t  Port) noexcept  {
this->_address0 = _address0;
this->_address1 = _address1;
this->Port = Port;
}
// Ctor Parameters []
constexpr ::NanoSockets::Address::Address()   {
}
