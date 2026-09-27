#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_BehaviourInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GameStateFx_BehaviourInfo)
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameStateFx_BehaviourInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameStateFx_BehaviourInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStateFx_BehaviourInfo, "", "GameStateFx/BehaviourInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/BehaviourInfo
struct CORDL_TYPE GameStateFx_BehaviourInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameStateFx_BehaviourInfo() ;

// Ctor Parameters [CppParam { name: "enable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "behaviour", ty: "::UnityW<::UnityEngine::Behaviour>", modifiers: "", def_value: None, comment: None }]
constexpr GameStateFx_BehaviourInfo(bool  enable, ::UnityW<::UnityEngine::Behaviour>  behaviour) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{665};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field enable, offset: 0x0, size: 0x1, def value: None
 bool  enable;

/// @brief Field behaviour, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Behaviour>  behaviour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateFx_BehaviourInfo, enable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_BehaviourInfo, behaviour) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStateFx_BehaviourInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
