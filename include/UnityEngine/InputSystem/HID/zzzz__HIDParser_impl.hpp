#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDItemStateGlobal_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDItemStateLocal_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDItemTypeAndTag_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDReportData_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDParser.ParseReportDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>)>(&::UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xafe3768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDParser*>(),
                        {"ParseReportDescriptor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDParser.ParseReportDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t, ::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>)>(&::UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0xafe37d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDParser*>(),
                        {"ParseReportDescriptor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDParser.ReadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, uint8_t*, uint8_t*)>(&::UnityEngine::InputSystem::HID::HIDParser::ReadData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xafe42f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDParser*>(),
                        {"ReadData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor(::ArrayW<uint8_t>  buffer, ::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>  deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDParser*>(),
                        {"ParseReportDescriptor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, deviceDescriptor);
}
inline bool UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor(uint8_t*  bufferPtr, int32_t  bufferLength, ::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>  deviceDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDParser*>(),
                        {"ParseReportDescriptor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bufferPtr, bufferLength, deviceDescriptor);
}
inline int32_t UnityEngine::InputSystem::HID::HIDParser::ReadData(int32_t  itemSize, uint8_t*  currentPtr, uint8_t*  endPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDParser*>(),
                        {"ReadData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, itemSize, currentPtr, endPtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDParser::HIDParser()   {
}
