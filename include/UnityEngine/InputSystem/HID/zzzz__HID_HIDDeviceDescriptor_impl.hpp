#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionDescriptor_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementDescriptor_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementDescriptor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptor.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::HID_HIDDeviceDescriptor::*)()>(&::GlobalNamespace::HID_HIDDeviceDescriptor::ToJson)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xafe0c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptor>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptor.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptor (*)(::StringW)>(&::GlobalNamespace::HID_HIDDeviceDescriptor::FromJson)> {
  constexpr static std::size_t size = 0xe80;
  constexpr static std::size_t addrs = 0xafdfdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptor>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::HID_HIDDeviceDescriptor::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptor>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptor GlobalNamespace::HID_HIDDeviceDescriptor::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptor>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptor>(nullptr, ___internal_method, json);
}
// Ctor Parameters [CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usagePage", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputReportSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outputReportSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "featureReportSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elements", ty: "::ArrayW<::GlobalNamespace::HID_HIDElementDescriptor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collections", ty: "::ArrayW<::GlobalNamespace::HID_HIDCollectionDescriptor>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor::HID_HIDDeviceDescriptor(int32_t  vendorId, int32_t  productId, int32_t  usage, ::GlobalNamespace::HID_UsagePage  usagePage, int32_t  inputReportSize, int32_t  outputReportSize, int32_t  featureReportSize, ::ArrayW<::GlobalNamespace::HID_HIDElementDescriptor>  elements, ::ArrayW<::GlobalNamespace::HID_HIDCollectionDescriptor>  collections) noexcept  {
this->vendorId = vendorId;
this->productId = productId;
this->usage = usage;
this->usagePage = usagePage;
this->inputReportSize = inputReportSize;
this->outputReportSize = outputReportSize;
this->featureReportSize = featureReportSize;
this->elements = elements;
this->collections = collections;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor::HID_HIDDeviceDescriptor()   {
}
