#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDSupport_HIDPageUsage.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_HIDPageUsage_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_GenericDesktop_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HIDSupport_HIDPageUsage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HIDSupport_HIDPageUsage::*)(::GlobalNamespace::HID_UsagePage, int32_t)>(&::GlobalNamespace::HIDSupport_HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafe4c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDSupport_HIDPageUsage>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HIDSupport_HIDPageUsage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HIDSupport_HIDPageUsage::*)(::GlobalNamespace::HID_GenericDesktop)>(&::GlobalNamespace::HIDSupport_HIDPageUsage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafe4de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDSupport_HIDPageUsage>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_GenericDesktop>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HIDSupport_HIDPageUsage::_ctor(::GlobalNamespace::HID_UsagePage  page, int32_t  usage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDSupport_HIDPageUsage>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, page, usage);
}
inline void GlobalNamespace::HIDSupport_HIDPageUsage::_ctor(::GlobalNamespace::HID_GenericDesktop  usage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDSupport_HIDPageUsage>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HID_GenericDesktop>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, usage);
}
// Ctor Parameters [CppParam { name: "page", ty: "::GlobalNamespace::HID_UsagePage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HIDSupport_HIDPageUsage::HIDSupport_HIDPageUsage(::GlobalNamespace::HID_UsagePage  page, int32_t  usage) noexcept  {
this->page = page;
this->usage = usage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HIDSupport_HIDPageUsage::HIDSupport_HIDPageUsage()   {
}
