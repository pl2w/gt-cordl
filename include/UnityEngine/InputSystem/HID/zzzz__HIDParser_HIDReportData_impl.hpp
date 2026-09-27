#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser_HIDReportData.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDReportData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HIDParser_HIDReportData.FindOrAddReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Nullable_1<int32_t>, ::GlobalNamespace::HID_HIDReportType, ::System::Collections::Generic::List_1<::GlobalNamespace::HIDParser_HIDReportData>*)>(&::GlobalNamespace::HIDParser_HIDReportData::FindOrAddReport)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xafe46e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDReportData>(),
                        {"FindOrAddReport", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::GlobalNamespace::HID_HIDReportType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::HIDParser_HIDReportData>*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::HIDParser_HIDReportData::FindOrAddReport(::System::Nullable_1<int32_t>  reportId, ::GlobalNamespace::HID_HIDReportType  reportType, ::System::Collections::Generic::List_1<::GlobalNamespace::HIDParser_HIDReportData>*  reports)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDReportData>(),
                        {"FindOrAddReport", {}, {::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::GlobalNamespace::HID_HIDReportType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::HIDParser_HIDReportData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, reportId, reportType, reports);
}
// Ctor Parameters [CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reportType", ty: "::GlobalNamespace::HID_HIDReportType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentBitOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HIDParser_HIDReportData::HIDParser_HIDReportData(int32_t  reportId, ::GlobalNamespace::HID_HIDReportType  reportType, int32_t  currentBitOffset) noexcept  {
this->reportId = reportId;
this->reportType = reportType;
this->currentBitOffset = currentBitOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HIDParser_HIDReportData::HIDParser_HIDReportData()   {
}
