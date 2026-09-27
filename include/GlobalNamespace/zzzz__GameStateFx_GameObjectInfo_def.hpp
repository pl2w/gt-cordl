#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_GameObjectInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GameStateFx_GameObjectInfo)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameStateFx_GameObjectInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameStateFx_GameObjectInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStateFx_GameObjectInfo, "", "GameStateFx/GameObjectInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/GameObjectInfo
struct CORDL_TYPE GameStateFx_GameObjectInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameStateFx_GameObjectInfo() ;

// Ctor Parameters [CppParam { name: "activate", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }]
constexpr GameStateFx_GameObjectInfo(bool  activate, ::UnityW<::UnityEngine::GameObject>  gameObject) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{664};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field activate, offset: 0x0, size: 0x1, def value: None
 bool  activate;

/// @brief Field gameObject, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  gameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateFx_GameObjectInfo, activate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_GameObjectInfo, gameObject) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStateFx_GameObjectInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
