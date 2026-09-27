#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TZifType.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/zzzz__TimeZoneInfo_TZifType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TZifType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeZoneInfo_TZifType::*)(::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::TimeZoneInfo_TZifType::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa21de6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TZifType>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimeZoneInfo_TZifType::_ctor(::ArrayW<uint8_t>  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TZifType>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index);
}
// Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeZoneInfo_TZifType::TimeZoneInfo_TZifType(::System::TimeSpan  UtcOffset, bool  IsDst, uint8_t  AbbreviationIndex) noexcept  {
this->UtcOffset = UtcOffset;
this->IsDst = IsDst;
this->AbbreviationIndex = AbbreviationIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeZoneInfo_TZifType::TimeZoneInfo_TZifType()   {
}
