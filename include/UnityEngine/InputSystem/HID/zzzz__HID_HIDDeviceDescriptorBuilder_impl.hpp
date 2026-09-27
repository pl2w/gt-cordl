#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptorBuilder.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptorBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_GenericDesktop_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)(::GlobalNamespace::HID_UsagePage, int32_t)>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafe2f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)(::GlobalNamespace::HID_GenericDesktop)>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xafe2fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_GenericDesktop>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder.StartReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)(::GlobalNamespace::HID_HIDReportType, int32_t)>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::StartReport)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xafe2fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"StartReport", {}, {::i2c::type_of<::GlobalNamespace::HID_HIDReportType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder.AddElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)(::GlobalNamespace::HID_UsagePage, int32_t, int32_t)>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::AddElement)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xafe2fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"AddElement", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder.AddElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)(::GlobalNamespace::HID_GenericDesktop, int32_t)>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::AddElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xafe334c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"AddElement", {}, {::i2c::type_of<::GlobalNamespace::HID_GenericDesktop>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder.WithPhysicalMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)(int32_t, int32_t)>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::WithPhysicalMinMax)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xafe3394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"WithPhysicalMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder.WithLogicalMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)(int32_t, int32_t)>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::WithLogicalMinMax)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xafe3508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"WithLogicalMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptor (::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::*)()>(&::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::Finish)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xafe366c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"Finish", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HID_HIDDeviceDescriptorBuilder::_ctor(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usagePage, usage);
}
inline void GlobalNamespace::HID_HIDDeviceDescriptorBuilder::_ctor(::GlobalNamespace::HID_GenericDesktop  usage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_GenericDesktop>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usage);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder GlobalNamespace::HID_HIDDeviceDescriptorBuilder::StartReport(::GlobalNamespace::HID_HIDReportType  reportType, int32_t  reportId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"StartReport", {}, {::i2c::type_of<::GlobalNamespace::HID_HIDReportType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(*this, ___internal_method, reportType, reportId);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder GlobalNamespace::HID_HIDDeviceDescriptorBuilder::AddElement(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage, int32_t  sizeInBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"AddElement", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(*this, ___internal_method, usagePage, usage, sizeInBits);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder GlobalNamespace::HID_HIDDeviceDescriptorBuilder::AddElement(::GlobalNamespace::HID_GenericDesktop  usage, int32_t  sizeInBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"AddElement", {}, {::i2c::type_of<::GlobalNamespace::HID_GenericDesktop>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(*this, ___internal_method, usage, sizeInBits);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder GlobalNamespace::HID_HIDDeviceDescriptorBuilder::WithPhysicalMinMax(int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"WithPhysicalMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(*this, ___internal_method, min, max);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder GlobalNamespace::HID_HIDDeviceDescriptorBuilder::WithLogicalMinMax(int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"WithLogicalMinMax", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(*this, ___internal_method, min, max);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptor GlobalNamespace::HID_HIDDeviceDescriptorBuilder::Finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HID_HIDDeviceDescriptorBuilder>(),
                        {"Finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptor>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "usagePage", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentReportId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentReportType", ty: "::GlobalNamespace::HID_HIDReportType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentReportOffsetInBits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Elements", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDElementDescriptor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Collections", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDCollectionDescriptor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InputReportSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_OutputReportSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FeatureReportSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::HID_HIDDeviceDescriptorBuilder(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage, int32_t  m_CurrentReportId, ::GlobalNamespace::HID_HIDReportType  m_CurrentReportType, int32_t  m_CurrentReportOffsetInBits, ::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDElementDescriptor>*  m_Elements, ::System::Collections::Generic::List_1<::GlobalNamespace::HID_HIDCollectionDescriptor>*  m_Collections, int32_t  m_InputReportSize, int32_t  m_OutputReportSize, int32_t  m_FeatureReportSize) noexcept  {
this->usagePage = usagePage;
this->usage = usage;
this->m_CurrentReportId = m_CurrentReportId;
this->m_CurrentReportType = m_CurrentReportType;
this->m_CurrentReportOffsetInBits = m_CurrentReportOffsetInBits;
this->m_Elements = m_Elements;
this->m_Collections = m_Collections;
this->m_InputReportSize = m_InputReportSize;
this->m_OutputReportSize = m_OutputReportSize;
this->m_FeatureReportSize = m_FeatureReportSize;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder::HID_HIDDeviceDescriptorBuilder()   {
}
