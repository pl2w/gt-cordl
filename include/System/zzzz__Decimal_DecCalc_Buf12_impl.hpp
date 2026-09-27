#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc_Buf12.hpp"
#include "System/zzzz__Decimal_DecCalc_Buf12_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DecCalc_Decimal_Buf12.get_Low64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::DecCalc_Decimal_Buf12::*)()>(&::GlobalNamespace::DecCalc_Decimal_Buf12::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa34109c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"get_Low64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DecCalc_Decimal_Buf12.set_Low64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DecCalc_Decimal_Buf12::*)(uint64_t)>(&::GlobalNamespace::DecCalc_Decimal_Buf12::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3410a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"set_Low64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DecCalc_Decimal_Buf12.get_High64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::DecCalc_Decimal_Buf12::*)()>(&::GlobalNamespace::DecCalc_Decimal_Buf12::get_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa34108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"get_High64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DecCalc_Decimal_Buf12.set_High64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DecCalc_Decimal_Buf12::*)(uint64_t)>(&::GlobalNamespace::DecCalc_Decimal_Buf12::set_High64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa341094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"set_High64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_U0()  {
return this->___U0;
}
constexpr uint32_t const& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_U0() const {
return this->___U0;
}
constexpr void GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_set_U0(uint32_t  value)  {
this->___U0 = value;
}
constexpr uint32_t& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_U1()  {
return this->___U1;
}
constexpr uint32_t const& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_U1() const {
return this->___U1;
}
constexpr void GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_set_U1(uint32_t  value)  {
this->___U1 = value;
}
constexpr uint32_t& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_U2()  {
return this->___U2;
}
constexpr uint32_t const& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_U2() const {
return this->___U2;
}
constexpr void GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_set_U2(uint32_t  value)  {
this->___U2 = value;
}
constexpr uint64_t& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_ulo64LE()  {
return this->___ulo64LE;
}
constexpr uint64_t const& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_ulo64LE() const {
return this->___ulo64LE;
}
constexpr void GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_set_ulo64LE(uint64_t  value)  {
this->___ulo64LE = value;
}
constexpr uint64_t& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_uhigh64LE()  {
return this->___uhigh64LE;
}
constexpr uint64_t const& GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_get_uhigh64LE() const {
return this->___uhigh64LE;
}
constexpr void GlobalNamespace::DecCalc_Decimal_Buf12::__cordl_internal_set_uhigh64LE(uint64_t  value)  {
this->___uhigh64LE = value;
}
inline uint64_t GlobalNamespace::DecCalc_Decimal_Buf12::get_Low64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"get_Low64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::DecCalc_Decimal_Buf12::set_Low64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"set_Low64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t GlobalNamespace::DecCalc_Decimal_Buf12::get_High64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"get_High64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::DecCalc_Decimal_Buf12::set_High64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_Buf12>(),
                        {"set_High64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "U2", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecCalc_Decimal_Buf12::DecCalc_Decimal_Buf12(uint32_t  U0, uint32_t  U1, uint32_t  U2, uint64_t  ulo64LE, uint64_t  uhigh64LE) noexcept  {
this->U0 = U0;
this->U1 = U1;
this->U2 = U2;
this->ulo64LE = ulo64LE;
this->uhigh64LE = uhigh64LE;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecCalc_Decimal_Buf12::DecCalc_Decimal_Buf12()   {
}
