#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TZifHead.hpp"
#include "System/zzzz__TimeZoneInfo_TZVersion_impl.hpp"
#include "System/zzzz__TimeZoneInfo_TZifHead_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TZifHead._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeZoneInfo_TZifHead::*)(::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::TimeZoneInfo_TZifHead::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa21dcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TZifHead>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimeZoneInfo_TZifHead::_ctor(::ArrayW<uint8_t>  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TZifHead>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index);
}
// Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Version", ty: "::GlobalNamespace::TimeZoneInfo_TZVersion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LeapCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TypeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeZoneInfo_TZifHead::TimeZoneInfo_TZifHead(uint32_t  Magic, ::GlobalNamespace::TimeZoneInfo_TZVersion  Version, uint32_t  IsGmtCount, uint32_t  IsStdCount, uint32_t  LeapCount, uint32_t  TimeCount, uint32_t  TypeCount, uint32_t  CharCount) noexcept  {
this->Magic = Magic;
this->Version = Version;
this->IsGmtCount = IsGmtCount;
this->IsStdCount = IsStdCount;
this->LeapCount = LeapCount;
this->TimeCount = TimeCount;
this->TypeCount = TypeCount;
this->CharCount = CharCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeZoneInfo_TZifHead::TimeZoneInfo_TZifHead()   {
}
