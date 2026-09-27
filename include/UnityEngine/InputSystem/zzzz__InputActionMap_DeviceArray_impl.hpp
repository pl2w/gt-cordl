#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_DeviceArray.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_DeviceArray_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_DeviceArray.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputActionMap_DeviceArray::*)(::UnityEngine::InputSystem::InputDevice*)>(&::GlobalNamespace::InputActionMap_DeviceArray::IndexOf)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaf155e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"IndexOf", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_DeviceArray.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputActionMap_DeviceArray::*)(::UnityEngine::InputSystem::InputDevice*)>(&::GlobalNamespace::InputActionMap_DeviceArray::Remove)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf15640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_DeviceArray.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::GlobalNamespace::InputActionMap_DeviceArray::*)()>(&::GlobalNamespace::InputActionMap_DeviceArray::Get)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaf0e92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActionMap_DeviceArray.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputActionMap_DeviceArray::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::GlobalNamespace::InputActionMap_DeviceArray::Set)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xaf0ea18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"Set", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::InputActionMap_DeviceArray::IndexOf(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"IndexOf", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, device);
}
inline bool GlobalNamespace::InputActionMap_DeviceArray::Remove(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, device);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> GlobalNamespace::InputActionMap_DeviceArray::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>(*this, ___internal_method);
}
inline bool GlobalNamespace::InputActionMap_DeviceArray::Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  devices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputActionMap_DeviceArray>(),
                        {"Set", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, devices);
}
// Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_DeviceArray::InputActionMap_DeviceArray(bool  m_HaveValue, int32_t  m_DeviceCount, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  m_DeviceArray) noexcept  {
this->m_HaveValue = m_HaveValue;
this->m_DeviceCount = m_DeviceCount;
this->m_DeviceArray = m_DeviceArray;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_DeviceArray::InputActionMap_DeviceArray()   {
}
