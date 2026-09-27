#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_tFloatUnion32.hpp"
#include "Unity/Burst/zzzz__BurstString_tFloatUnion32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstString_tFloatUnion32.IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BurstString_tFloatUnion32::*)()>(&::GlobalNamespace::BurstString_tFloatUnion32::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae84dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tFloatUnion32>(),
                        {"IsNegative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_tFloatUnion32.GetExponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::BurstString_tFloatUnion32::*)()>(&::GlobalNamespace::BurstString_tFloatUnion32::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae84db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tFloatUnion32>(),
                        {"GetExponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstString_tFloatUnion32.GetMantissa
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::BurstString_tFloatUnion32::*)()>(&::GlobalNamespace::BurstString_tFloatUnion32::GetMantissa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae84dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tFloatUnion32>(),
                        {"GetMantissa", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BurstString_tFloatUnion32::__cordl_internal_get_m_floatingPoint()  {
return this->___m_floatingPoint;
}
constexpr float_t const& GlobalNamespace::BurstString_tFloatUnion32::__cordl_internal_get_m_floatingPoint() const {
return this->___m_floatingPoint;
}
constexpr void GlobalNamespace::BurstString_tFloatUnion32::__cordl_internal_set_m_floatingPoint(float_t  value)  {
this->___m_floatingPoint = value;
}
constexpr uint32_t& GlobalNamespace::BurstString_tFloatUnion32::__cordl_internal_get_m_integer()  {
return this->___m_integer;
}
constexpr uint32_t const& GlobalNamespace::BurstString_tFloatUnion32::__cordl_internal_get_m_integer() const {
return this->___m_integer;
}
constexpr void GlobalNamespace::BurstString_tFloatUnion32::__cordl_internal_set_m_integer(uint32_t  value)  {
this->___m_integer = value;
}
inline bool GlobalNamespace::BurstString_tFloatUnion32::IsNegative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tFloatUnion32>(),
                        {"IsNegative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::BurstString_tFloatUnion32::GetExponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tFloatUnion32>(),
                        {"GetExponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::BurstString_tFloatUnion32::GetMantissa()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstString_tFloatUnion32>(),
                        {"GetMantissa", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_integer", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BurstString_tFloatUnion32::BurstString_tFloatUnion32(float_t  m_floatingPoint, uint32_t  m_integer) noexcept  {
this->m_floatingPoint = m_floatingPoint;
this->m_integer = m_integer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstString_tFloatUnion32::BurstString_tFloatUnion32()   {
}
