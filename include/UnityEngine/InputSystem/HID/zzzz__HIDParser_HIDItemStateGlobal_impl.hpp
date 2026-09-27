#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser_HIDItemStateGlobal.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDItemStateGlobal_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDItemStateLocal_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HIDParser_HIDItemStateGlobal.GetUsagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_UsagePage (::GlobalNamespace::HIDParser_HIDItemStateGlobal::*)(int32_t, ::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>)>(&::GlobalNamespace::HIDParser_HIDItemStateGlobal::GetUsagePage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xafe44d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateGlobal>(),
                        {"GetUsagePage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HIDParser_HIDItemStateGlobal.GetPhysicalMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HIDParser_HIDItemStateGlobal::*)()>(&::GlobalNamespace::HIDParser_HIDItemStateGlobal::GetPhysicalMin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafe486c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateGlobal>(),
                        {"GetPhysicalMin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HIDParser_HIDItemStateGlobal.GetPhysicalMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HIDParser_HIDItemStateGlobal::*)()>(&::GlobalNamespace::HIDParser_HIDItemStateGlobal::GetPhysicalMax)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xafe4930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateGlobal>(),
                        {"GetPhysicalMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HID_UsagePage GlobalNamespace::HIDParser_HIDItemStateGlobal::GetUsagePage(int32_t  index, ::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>  localItemState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateGlobal>(),
                        {"GetUsagePage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_UsagePage>(*this, ___internal_method, index, localItemState);
}
inline int32_t GlobalNamespace::HIDParser_HIDItemStateGlobal::GetPhysicalMin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateGlobal>(),
                        {"GetPhysicalMin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::HIDParser_HIDItemStateGlobal::GetPhysicalMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateGlobal>(),
                        {"GetPhysicalMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "usagePage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "logicalMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "logicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "physicalMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "physicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unitExponent", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unit", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reportSize", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reportCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reportId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HIDParser_HIDItemStateGlobal::HIDParser_HIDItemStateGlobal(::System::Nullable_1<int32_t>  usagePage, ::System::Nullable_1<int32_t>  logicalMinimum, ::System::Nullable_1<int32_t>  logicalMaximum, ::System::Nullable_1<int32_t>  physicalMinimum, ::System::Nullable_1<int32_t>  physicalMaximum, ::System::Nullable_1<int32_t>  unitExponent, ::System::Nullable_1<int32_t>  unit, ::System::Nullable_1<int32_t>  reportSize, ::System::Nullable_1<int32_t>  reportCount, ::System::Nullable_1<int32_t>  reportId) noexcept  {
this->usagePage = usagePage;
this->logicalMinimum = logicalMinimum;
this->logicalMaximum = logicalMaximum;
this->physicalMinimum = physicalMinimum;
this->physicalMaximum = physicalMaximum;
this->unitExponent = unitExponent;
this->unit = unit;
this->reportSize = reportSize;
this->reportCount = reportCount;
this->reportId = reportId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HIDParser_HIDItemStateGlobal::HIDParser_HIDItemStateGlobal()   {
}
