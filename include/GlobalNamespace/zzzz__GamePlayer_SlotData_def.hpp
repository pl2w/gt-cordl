#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayer_SlotData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GamePlayer_SlotData)
namespace GlobalNamespace {
class GameEntityManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct GamePlayer_SlotData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GamePlayer_SlotData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayer_SlotData, "", "GamePlayer/SlotData");
// Dependencies GameEntityId
namespace GlobalNamespace {
// Is value type: true
// CS Name: GamePlayer/SlotData
struct CORDL_TYPE GamePlayer_SlotData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayer_SlotData() ;

// Ctor Parameters [CppParam { name: "entityId", ty: "::GlobalNamespace::GameEntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "entityManager", ty: "::UnityW<::GlobalNamespace::GameEntityManager>", modifiers: "", def_value: None, comment: None }]
constexpr GamePlayer_SlotData(::GlobalNamespace::GameEntityId  entityId, ::UnityW<::GlobalNamespace::GameEntityManager>  entityManager) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1780};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field entityId, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  entityId;

/// @brief Field entityManager, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  entityManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayer_SlotData, entityId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer_SlotData, entityManager) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayer_SlotData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
