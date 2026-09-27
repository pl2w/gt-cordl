#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset_WriteFileJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionAsset_WriteFileJson)
namespace GlobalNamespace {
struct InputActionMap_WriteMapJson;
}
namespace GlobalNamespace {
struct InputControlScheme_SchemeJson;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionAsset_WriteFileJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionAsset_WriteFileJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionAsset_WriteFileJson, "UnityEngine.InputSystem", "InputActionAsset/WriteFileJson");
// Dependencies UnityEngine.InputSystem.InputActionMap::WriteMapJson, UnityEngine.InputSystem.InputControlScheme::SchemeJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionAsset/WriteFileJson
struct CORDL_TYPE InputActionAsset_WriteFileJson {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputActionAsset_WriteFileJson() ;

// Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlSchemes", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionAsset_WriteFileJson(int32_t  version, ::StringW  name, ::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps, ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  controlSchemes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field version, offset: 0x0, size: 0x4, def value: None
 int32_t  version;

/// @brief Field name, offset: 0x8, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field maps, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps;

/// @brief Field controlSchemes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  controlSchemes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionAsset_WriteFileJson, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionAsset_WriteFileJson, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionAsset_WriteFileJson, maps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionAsset_WriteFileJson, controlSchemes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionAsset_WriteFileJson) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
