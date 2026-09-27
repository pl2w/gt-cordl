#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput_GetInternalDeviceIdCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInput_GetInternalDeviceIdCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRInput_GetInternalDeviceIdCommand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/GetInternalDeviceIdCommand");
// Dependencies UnityEngine.InputSystem.LowLevel.InputDeviceCommand
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand
#pragma pack(push, 0)
struct CORDL_TYPE OpenXRInput_GetInternalDeviceIdCommand {
public:
// Declarations
/// @brief Field baseCommand, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseCommand, put=__cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field deviceId, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_deviceId, put=__cordl_internal_set_deviceId)) uint32_t  deviceId;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

/// @brief Method Create, addr 0xb4efa34, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand Create() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand() ;

constexpr uint32_t const& __cordl_internal_get_deviceId() const;

constexpr uint32_t& __cordl_internal_get_deviceId() ;

constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr void __cordl_internal_set_deviceId(uint32_t  value) ;

/// @brief Method get_Type, addr 0xb4efff4, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic, addr 0xb4f0024, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInput_GetInternalDeviceIdCommand() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRInput_GetInternalDeviceIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, uint32_t  deviceId) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___baseCommand_padding[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___baseCommand_padding_forAlignment[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___deviceId_padding[0x8];
/// @brief Field deviceId, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___deviceId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___deviceId_padding_forAlignment[0x8];
/// @brief Field deviceId, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___deviceId_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_BaseCommandSizeSize offset 0xffffffff size 0x4
static constexpr int32_t  k_BaseCommandSizeSize{static_cast<int32_t>(0x8)};

/// @brief Field k_Size offset 0xffffffff size 0x4
static constexpr int32_t  k_Size{static_cast<int32_t>(0xc)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OpenXRInput_GetInternalDeviceIdCommand) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
