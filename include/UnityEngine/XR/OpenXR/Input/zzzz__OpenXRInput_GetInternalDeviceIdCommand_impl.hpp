#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput_GetInternalDeviceIdCommand.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_GetInternalDeviceIdCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4efff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand.get_typeStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::*)()>(&::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4f0024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand>(),
                        {"get_typeStatic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand (*)()>(&::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4efa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_baseCommand()  {
return this->___baseCommand;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_baseCommand() const {
return this->___baseCommand;
}
constexpr void GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value)  {
this->___baseCommand = value;
}
constexpr uint32_t& GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_deviceId()  {
return this->___deviceId;
}
constexpr uint32_t const& GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_get_deviceId() const {
return this->___deviceId;
}
constexpr void GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::__cordl_internal_set_deviceId(uint32_t  value)  {
this->___deviceId = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand>(),
                        {"get_typeStatic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr  GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::OpenXRInput_GetInternalDeviceIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, uint32_t  deviceId) noexcept  {
this->baseCommand = baseCommand;
this->deviceId = deviceId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand::OpenXRInput_GetInternalDeviceIdCommand()   {
}
