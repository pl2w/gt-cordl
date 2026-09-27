#pragma once
// IWYU pragma private; include "System/DecimalEx_DecCalc.hpp"
#include "System/zzzz__DecimalEx_DecCalc_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DecimalEx_DecCalc.DecDivMod1E9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::DecimalEx_DecCalc>)>(&::GlobalNamespace::DecimalEx_DecCalc::DecDivMod1E9)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb993d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecimalEx_DecCalc>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecimalEx_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_uflags()  {
return this->___uflags;
}
constexpr uint32_t const& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_uflags() const {
return this->___uflags;
}
constexpr void GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_set_uflags(uint32_t  value)  {
this->___uflags = value;
}
constexpr uint32_t& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_uhi()  {
return this->___uhi;
}
constexpr uint32_t const& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_uhi() const {
return this->___uhi;
}
constexpr void GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_set_uhi(uint32_t  value)  {
this->___uhi = value;
}
constexpr uint32_t& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_ulo()  {
return this->___ulo;
}
constexpr uint32_t const& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_ulo() const {
return this->___ulo;
}
constexpr void GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_set_ulo(uint32_t  value)  {
this->___ulo = value;
}
constexpr uint32_t& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_umid()  {
return this->___umid;
}
constexpr uint32_t const& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_umid() const {
return this->___umid;
}
constexpr void GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_set_umid(uint32_t  value)  {
this->___umid = value;
}
constexpr uint64_t& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_ulomidLE()  {
return this->___ulomidLE;
}
constexpr uint64_t const& GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_get_ulomidLE() const {
return this->___ulomidLE;
}
constexpr void GlobalNamespace::DecimalEx_DecCalc::__cordl_internal_set_ulomidLE(uint64_t  value)  {
this->___ulomidLE = value;
}
inline uint32_t GlobalNamespace::DecimalEx_DecCalc::DecDivMod1E9(::by_ref<::GlobalNamespace::DecimalEx_DecCalc>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DecimalEx_DecCalc>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecimalEx_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ulo", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecimalEx_DecCalc::DecimalEx_DecCalc(uint32_t  uflags, uint32_t  uhi, uint32_t  ulo, uint32_t  umid, uint64_t  ulomidLE) noexcept  {
this->uflags = uflags;
this->uhi = uhi;
this->ulo = ulo;
this->umid = umid;
this->ulomidLE = ulomidLE;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecimalEx_DecCalc::DecimalEx_DecCalc()   {
}
