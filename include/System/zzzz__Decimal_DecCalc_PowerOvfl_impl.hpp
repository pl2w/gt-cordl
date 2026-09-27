#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc_PowerOvfl.hpp"
#include "System/zzzz__Decimal_DecCalc_PowerOvfl_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DecCalc_Decimal_PowerOvfl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DecCalc_Decimal_PowerOvfl::*)(uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::DecCalc_Decimal_PowerOvfl::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa342f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DecCalc_Decimal_PowerOvfl::_ctor(uint32_t  hi, uint32_t  mid, uint32_t  lo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hi, mid, lo);
}
// Ctor Parameters [CppParam { name: "Hi", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MidLo", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecCalc_Decimal_PowerOvfl::DecCalc_Decimal_PowerOvfl(uint32_t  Hi, uint64_t  MidLo) noexcept  {
this->Hi = Hi;
this->MidLo = MidLo;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecCalc_Decimal_PowerOvfl::DecCalc_Decimal_PowerOvfl()   {
}
