#pragma once
// IWYU pragma private; include "System/Globalization/UmAlQuraCalendar_DateMapping.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Globalization/zzzz__UmAlQuraCalendar_DateMapping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UmAlQuraCalendar_DateMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UmAlQuraCalendar_DateMapping::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::UmAlQuraCalendar_DateMapping::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa24aa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UmAlQuraCalendar_DateMapping>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UmAlQuraCalendar_DateMapping::_ctor(int32_t  MonthsLengthFlags, int32_t  GYear, int32_t  GMonth, int32_t  GDay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UmAlQuraCalendar_DateMapping>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, MonthsLengthFlags, GYear, GMonth, GDay);
}
// Ctor Parameters [CppParam { name: "HijriMonthsLengthFlags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GregorianDate", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UmAlQuraCalendar_DateMapping::UmAlQuraCalendar_DateMapping(int32_t  HijriMonthsLengthFlags, ::System::DateTime  GregorianDate) noexcept  {
this->HijriMonthsLengthFlags = HijriMonthsLengthFlags;
this->GregorianDate = GregorianDate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UmAlQuraCalendar_DateMapping::UmAlQuraCalendar_DateMapping()   {
}
