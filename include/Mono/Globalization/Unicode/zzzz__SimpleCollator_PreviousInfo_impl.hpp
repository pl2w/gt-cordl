#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator_PreviousInfo.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_PreviousInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleCollator_PreviousInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCollator_PreviousInfo::*)(bool)>(&::GlobalNamespace::SimpleCollator_PreviousInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa116d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCollator_PreviousInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SimpleCollator_PreviousInfo::_ctor(bool  dummy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCollator_PreviousInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dummy);
}
// Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SortKey", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimpleCollator_PreviousInfo::SimpleCollator_PreviousInfo(int32_t  Code, uint8_t*  SortKey) noexcept  {
this->Code = Code;
this->SortKey = SortKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleCollator_PreviousInfo::SimpleCollator_PreviousInfo()   {
}
