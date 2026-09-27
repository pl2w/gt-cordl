#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceDescription_DeviceDescriptionJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputDeviceDescription_DeviceDescriptionJson)
// Forward declare root types
namespace GlobalNamespace {
struct InputDeviceDescription_DeviceDescriptionJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, "UnityEngine.InputSystem.Layouts", "InputDeviceDescription/DeviceDescriptionJson");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceDescription/DeviceDescriptionJson
struct CORDL_TYPE InputDeviceDescription_DeviceDescriptionJson {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputDeviceDescription_DeviceDescriptionJson() ;

// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "serial", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "capabilities", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr InputDeviceDescription_DeviceDescriptionJson(::StringW  interface, ::StringW  type, ::StringW  product, ::StringW  serial, ::StringW  version, ::StringW  manufacturer, ::StringW  capabilities) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field interface, offset: 0x0, size: 0x8, def value: None
 ::StringW  interface;

/// @brief Field type, offset: 0x8, size: 0x8, def value: None
 ::StringW  type;

/// @brief Field product, offset: 0x10, size: 0x8, def value: None
 ::StringW  product;

/// @brief Field serial, offset: 0x18, size: 0x8, def value: None
 ::StringW  serial;

/// @brief Field version, offset: 0x20, size: 0x8, def value: None
 ::StringW  version;

/// @brief Field manufacturer, offset: 0x28, size: 0x8, def value: None
 ::StringW  manufacturer;

/// @brief Field capabilities, offset: 0x30, size: 0x8, def value: None
 ::StringW  capabilities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, interface) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, product) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, serial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, manufacturer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson, capabilities) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputDeviceDescription_DeviceDescriptionJson) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
