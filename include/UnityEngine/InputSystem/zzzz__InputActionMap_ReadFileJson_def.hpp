#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_ReadFileJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadMapJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionMap_ReadFileJson)
namespace GlobalNamespace {
struct InputActionMap_ReadActionJson;
}
namespace GlobalNamespace {
struct InputActionMap_ReadMapJson;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionMap_ReadFileJson;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionMap_ReadFileJson);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionMap_ReadFileJson, "UnityEngine.InputSystem", "InputActionMap/ReadFileJson");
// Dependencies UnityEngine.InputSystem.InputActionMap::ReadActionJson, UnityEngine.InputSystem.InputActionMap::ReadMapJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/ReadFileJson
struct CORDL_TYPE InputActionMap_ReadFileJson {
public:
// Declarations
/// @brief Method ToMaps, addr 0xaf11a48, size 0xfc0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> ToMaps() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionMap_ReadFileJson() ;

// Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>", modifiers: "", def_value: None, comment: None }, CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_ReadMapJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionMap_ReadFileJson(::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>  actions, ::ArrayW<::GlobalNamespace::InputActionMap_ReadMapJson>  maps) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13361};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field actions, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_ReadActionJson>  actions;

/// @brief Field maps, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_ReadMapJson>  maps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadFileJson, actions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionMap_ReadFileJson, maps) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionMap_ReadFileJson) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
