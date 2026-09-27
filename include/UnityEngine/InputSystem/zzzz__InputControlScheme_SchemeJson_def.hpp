#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_SchemeJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_DeviceJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlScheme_SchemeJson)
namespace GlobalNamespace {
struct SchemeJson_InputControlScheme_DeviceJson;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlScheme_SchemeJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlScheme_SchemeJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlScheme_SchemeJson, "UnityEngine.InputSystem", "InputControlScheme/SchemeJson");
// Dependencies UnityEngine.InputSystem.InputControlScheme::SchemeJson::DeviceJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/SchemeJson
struct CORDL_TYPE InputControlScheme_SchemeJson {
public:
// Declarations
using DeviceJson = ::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson;

/// @brief Method ToJson, addr 0xaf4bda8, size 0xfc, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson> ToJson(::ArrayW<::UnityEngine::InputSystem::InputControlScheme>  schemes) ;

/// @brief Method ToJson, addr 0xaf4bc0c, size 0x160, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlScheme_SchemeJson ToJson(::UnityEngine::InputSystem::InputControlScheme  scheme) ;

/// @brief Method ToScheme, addr 0xaf4ba5c, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControlScheme ToScheme() ;

/// @brief Method ToSchemes, addr 0xaf4bea4, size 0xe8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> ToSchemes(::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  schemes) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlScheme_SchemeJson() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingGroup", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "devices", ty: "::ArrayW<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputControlScheme_SchemeJson(::StringW  name, ::StringW  bindingGroup, ::ArrayW<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>  devices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field bindingGroup, offset: 0x8, size: 0x8, def value: None
 ::StringW  bindingGroup;

/// @brief Field devices, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SchemeJson_InputControlScheme_DeviceJson>  devices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlScheme_SchemeJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlScheme_SchemeJson, bindingGroup) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlScheme_SchemeJson, devices) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlScheme_SchemeJson) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
