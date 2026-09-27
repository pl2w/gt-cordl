#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_NewDeviceMsg_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting_NewDeviceMsg_Data)
// Forward declare root types
namespace GlobalNamespace {
struct NewDeviceMsg_InputRemoting_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/Data");
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceDescription
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg/Data
struct CORDL_TYPE NewDeviceMsg_InputRemoting_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NewDeviceMsg_InputRemoting_Data() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None, comment: None }]
constexpr NewDeviceMsg_InputRemoting_Data(::StringW  name, ::StringW  layout, int32_t  deviceId, ::ArrayW<::StringW>  usages, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field layout, offset: 0x8, size: 0x8, def value: None
 ::StringW  layout;

/// @brief Field deviceId, offset: 0x10, size: 0x4, def value: None
 int32_t  deviceId;

/// @brief Field usages, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  usages;

/// @brief Field description, offset: 0x20, size: 0x38, def value: None
 ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data, layout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data, deviceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data, usages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data, description) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NewDeviceMsg_InputRemoting_Data) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
