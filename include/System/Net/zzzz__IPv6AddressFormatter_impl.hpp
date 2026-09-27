#pragma once
// IWYU pragma private; include "System/Net/IPv6AddressFormatter.hpp"
#include "System/Net/zzzz__IPv6AddressFormatter_def.hpp"
//  Writing Method size for method: ::System::Net::IPv6AddressFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPv6AddressFormatter::*)(::ArrayW<uint16_t>, int64_t)>(&::System::Net::IPv6AddressFormatter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaca9e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPv6AddressFormatter.SwapUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint16_t)>(&::System::Net::IPv6AddressFormatter::SwapUShort)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaca9e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"SwapUShort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPv6AddressFormatter.AsIPv4Int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Net::IPv6AddressFormatter::*)()>(&::System::Net::IPv6AddressFormatter::AsIPv4Int)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaca9e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"AsIPv4Int", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPv6AddressFormatter.IsIPv4Compatible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPv6AddressFormatter::*)()>(&::System::Net::IPv6AddressFormatter::IsIPv4Compatible)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaca9e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"IsIPv4Compatible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPv6AddressFormatter.IsIPv4Mapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPv6AddressFormatter::*)()>(&::System::Net::IPv6AddressFormatter::IsIPv4Mapped)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaca9ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"IsIPv4Mapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPv6AddressFormatter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::IPv6AddressFormatter::*)()>(&::System::Net::IPv6AddressFormatter::ToString)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xaca9f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                    {::i2c::class_of<::System::Net::IPv6AddressFormatter>(), 3}
                ));
    return ___internal_method;
  }
};
inline void System::Net::IPv6AddressFormatter::_ctor(::ArrayW<uint16_t>  addr, int64_t  scopeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, addr, scopeId);
}
inline uint16_t System::Net::IPv6AddressFormatter::SwapUShort(uint16_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"SwapUShort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, number);
}
inline uint32_t System::Net::IPv6AddressFormatter::AsIPv4Int()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"AsIPv4Int", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool System::Net::IPv6AddressFormatter::IsIPv4Compatible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"IsIPv4Compatible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Net::IPv6AddressFormatter::IsIPv4Mapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPv6AddressFormatter>(),
                        {"IsIPv4Mapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW System::Net::IPv6AddressFormatter::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IPv6AddressFormatter>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "address", ty: "::ArrayW<uint16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scopeId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::IPv6AddressFormatter::IPv6AddressFormatter(::ArrayW<uint16_t>  address, int64_t  scopeId) noexcept  {
this->address = address;
this->scopeId = scopeId;
}
// Ctor Parameters []
constexpr ::System::Net::IPv6AddressFormatter::IPv6AddressFormatter()   {
}
