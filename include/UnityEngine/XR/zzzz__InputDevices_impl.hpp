#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevices_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/XR/zzzz__ConnectionChangeType_def.hpp"
#include "UnityEngine/XR/zzzz__HapticCapabilities_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceAtXRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDevice (*)(::UnityEngine::XR::XRNode)>(&::UnityEngine::XR::InputDevices::GetDeviceAtXRNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb935a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceAtXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDevicesAtXRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::XRNode, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::GetDevicesAtXRNode)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb935a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevicesAtXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::GetDevices)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb935d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.add_deviceConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::add_deviceConnected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb935f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"add_deviceConnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.remove_deviceConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::remove_deviceConnected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb936030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"remove_deviceConnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.add_deviceDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::add_deviceDisconnected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb9360fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"add_deviceDisconnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.remove_deviceDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::remove_deviceDisconnected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb9361cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"remove_deviceDisconnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.add_deviceConfigChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::add_deviceConfigChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb93629c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"add_deviceConfigChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.remove_deviceConfigChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::remove_deviceConfigChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb93636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"remove_deviceConfigChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.InvokeConnectionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::UnityEngine::XR::ConnectionChangeType)>(&::UnityEngine::XR::InputDevices::InvokeConnectionEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb93643c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"InvokeConnectionEvent", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::ConnectionChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDevices_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::GetDevices_Internal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb935d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevices_Internal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint32_t, float_t, float_t)>(&::UnityEngine::XR::InputDevices::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb93477c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetHapticCapabilities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::XR::HapticCapabilities>)>(&::UnityEngine::XR::InputDevices::TryGetHapticCapabilities)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb934878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetHapticCapabilities", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::HapticCapabilities>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::by_ref<bool>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_bool)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb93494c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_bool", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_UInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::by_ref<uint32_t>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_UInt32)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb934b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_UInt32", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::by_ref<float_t>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_float)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb934d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_float", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_Vector2f
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector2f)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb934fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector2f", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_Vector3f
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector3f)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb9351bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector3f", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_Quaternionf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::StringW, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_Quaternionf)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb9353d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Quaternionf", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.IsDeviceValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::IsDeviceValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb9344c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"IsDeviceValid", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::GetDeviceName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb934520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceCharacteristics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::GetDeviceCharacteristics)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb934648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceCharacteristics", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDevices_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(&::UnityEngine::XR::InputDevices::GetDevices_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb9364f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevices_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_bool_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<bool>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_bool_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb936534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_bool_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_UInt32_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<uint32_t>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_UInt32_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb936588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_UInt32_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_float_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<float_t>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_float_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb9365dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_float_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_Vector2f_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector2f_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb936630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector2f_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_Vector3f_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector3f_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb936684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector3f_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.TryGetFeatureValue_Quaternionf_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::InputDevices::TryGetFeatureValue_Quaternionf_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb9366d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Quaternionf_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceName_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::XR::InputDevices::GetDeviceName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb93672c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceName_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::UnityEngine::XR::InputDevices*>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConnected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::UnityEngine::XR::InputDevices*>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::UnityEngine::XR::InputDevices*>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceDisconnected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::UnityEngine::XR::InputDevices*>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::UnityEngine::XR::InputDevices*>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConfigChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::UnityEngine::XR::InputDevices*>();
}
inline ::UnityEngine::XR::InputDevice UnityEngine::XR::InputDevices::GetDeviceAtXRNode(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceAtXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDevice>(nullptr, ___internal_method, node);
}
inline void UnityEngine::XR::InputDevices::GetDevicesAtXRNode(::UnityEngine::XR::XRNode  node, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevicesAtXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, inputDevices);
}
inline void UnityEngine::XR::InputDevices::GetDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputDevices);
}
inline void UnityEngine::XR::InputDevices::add_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"add_deviceConnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputDevices::remove_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"remove_deviceConnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputDevices::add_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"add_deviceDisconnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputDevices::remove_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"remove_deviceDisconnected", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputDevices::add_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"add_deviceConfigChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputDevices::remove_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"remove_deviceConfigChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputDevices::InvokeConnectionEvent(uint64_t  deviceId, ::UnityEngine::XR::ConnectionChangeType  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"InvokeConnectionEvent", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::UnityEngine::XR::ConnectionChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, change);
}
inline void UnityEngine::XR::InputDevices::GetDevices_Internal(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevices_Internal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputDevices);
}
inline bool UnityEngine::XR::InputDevices::SendHapticImpulse(uint64_t  deviceId, uint32_t  channel, float_t  amplitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, channel, amplitude, duration);
}
inline bool UnityEngine::XR::InputDevices::TryGetHapticCapabilities(uint64_t  deviceId, ::by_ref<::UnityEngine::XR::HapticCapabilities>  capabilities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetHapticCapabilities", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::HapticCapabilities>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, capabilities);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_bool(uint64_t  deviceId, ::StringW  usage, ::by_ref<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_bool", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_UInt32(uint64_t  deviceId, ::StringW  usage, ::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_UInt32", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_float(uint64_t  deviceId, ::StringW  usage, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_float", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector2f(uint64_t  deviceId, ::StringW  usage, ::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector2f", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector3f(uint64_t  deviceId, ::StringW  usage, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector3f", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_Quaternionf(uint64_t  deviceId, ::StringW  usage, ::by_ref<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Quaternionf", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::IsDeviceValid(uint64_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"IsDeviceValid", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId);
}
inline ::StringW UnityEngine::XR::InputDevices::GetDeviceName(uint64_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceName", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, deviceId);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDevices::GetDeviceCharacteristics(uint64_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceCharacteristics", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method, deviceId);
}
inline void UnityEngine::XR::InputDevices::GetDevices_Internal_Injected(::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  inputDevices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDevices_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputDevices);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_bool_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_bool_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_UInt32_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_UInt32_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_float_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_float_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector2f_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector2f_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_Vector3f_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Vector3f_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline bool UnityEngine::XR::InputDevices::TryGetFeatureValue_Quaternionf_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  usage, ::by_ref<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"TryGetFeatureValue_Quaternionf_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId, usage, value);
}
inline void UnityEngine::XR::InputDevices::GetDeviceName_Injected(uint64_t  deviceId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevices*>(),
                        {"GetDeviceName_Injected", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceId, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDevices::InputDevices()   {
}
