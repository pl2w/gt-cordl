#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset_WriteFileJsonNoName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionAsset_WriteFileJsonNoName)
namespace GlobalNamespace {
struct InputActionMap_WriteMapJson;
}
namespace GlobalNamespace {
struct InputControlScheme_SchemeJson;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionAsset_WriteFileJsonNoName;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionAsset_WriteFileJsonNoName);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionAsset_WriteFileJsonNoName, "UnityEngine.InputSystem", "InputActionAsset/WriteFileJsonNoName");
// Dependencies UnityEngine.InputSystem.InputActionMap::WriteMapJson, UnityEngine.InputSystem.InputControlScheme::SchemeJson
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionAsset/WriteFileJsonNoName
struct CORDL_TYPE InputActionAsset_WriteFileJsonNoName {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputActionAsset_WriteFileJsonNoName() ;

// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlSchemes", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionAsset_WriteFileJsonNoName(::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps, ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  controlSchemes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field maps, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputActionMap_WriteMapJson>  maps;

/// @brief Field controlSchemes, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlScheme_SchemeJson>  controlSchemes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionAsset_WriteFileJsonNoName, maps) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionAsset_WriteFileJsonNoName, controlSchemes) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionAsset_WriteFileJsonNoName) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
