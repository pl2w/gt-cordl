#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator_Context.hpp"
#include "System/Globalization/zzzz__CompareOptions_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__SimpleCollator_Context_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleCollator_Context._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleCollator_Context::*)(::System::Globalization::CompareOptions, uint8_t*, uint8_t*, uint8_t*, uint8_t*, uint8_t*)>(&::GlobalNamespace::SimpleCollator_Context::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa1151f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCollator_Context>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SimpleCollator_Context::_ctor(::System::Globalization::CompareOptions  opt, uint8_t*  alwaysMatchFlags, uint8_t*  neverMatchFlags, uint8_t*  buffer1, uint8_t*  buffer2, uint8_t*  prev1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleCollator_Context>(),
                        {".ctor", {}, {::i2c::type_of<::System::Globalization::CompareOptions>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, opt, alwaysMatchFlags, neverMatchFlags, buffer1, buffer2, prev1);
}
// Ctor Parameters [CppParam { name: "Option", ty: "::System::Globalization::CompareOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NeverMatchFlags", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AlwaysMatchFlags", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buffer1", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buffer2", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PrevCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PrevSortKey", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimpleCollator_Context::SimpleCollator_Context(::System::Globalization::CompareOptions  Option, uint8_t*  NeverMatchFlags, uint8_t*  AlwaysMatchFlags, uint8_t*  Buffer1, uint8_t*  Buffer2, int32_t  PrevCode, uint8_t*  PrevSortKey) noexcept  {
this->Option = Option;
this->NeverMatchFlags = NeverMatchFlags;
this->AlwaysMatchFlags = AlwaysMatchFlags;
this->Buffer1 = Buffer1;
this->Buffer2 = Buffer2;
this->PrevCode = PrevCode;
this->PrevSortKey = PrevSortKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleCollator_Context::SimpleCollator_Context()   {
}
