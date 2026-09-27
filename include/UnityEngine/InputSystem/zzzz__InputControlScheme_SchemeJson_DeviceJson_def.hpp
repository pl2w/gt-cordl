#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_SchemeJson_DeviceJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlScheme_SchemeJson_DeviceJson)
namespace GlobalNamespace {
struct InputControlScheme_DeviceRequirement;
}
// Forward declare root types
namespace GlobalNamespace {
struct SchemeJson_InputControlScheme_DeviceJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson/DeviceJson");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/SchemeJson/DeviceJson
struct CORDL_TYPE SchemeJson_InputControlScheme_DeviceJson {
public:
// Declarations
/// @brief Method From, addr 0xaf4bd6c, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson From(::GlobalNamespace::InputControlScheme_DeviceRequirement  requirement) ;

/// @brief Method ToDeviceEntry, addr 0xaf4bbc4, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlScheme_DeviceRequirement ToDeviceEntry() ;

// Ctor Parameters []
// @brief default ctor
constexpr SchemeJson_InputControlScheme_DeviceJson() ;

// Ctor Parameters [CppParam { name: "devicePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOR", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr SchemeJson_InputControlScheme_DeviceJson(::StringW  devicePath, bool  isOptional, bool  isOR) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13412};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field devicePath, offset: 0x0, size: 0x8, def value: None
 ::StringW  devicePath;

/// @brief Field isOptional, offset: 0x8, size: 0x1, def value: None
 bool  isOptional;

/// @brief Field isOR, offset: 0x9, size: 0x1, def value: None
 bool  isOR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson, devicePath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson, isOptional) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson, isOR) == 0x9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
