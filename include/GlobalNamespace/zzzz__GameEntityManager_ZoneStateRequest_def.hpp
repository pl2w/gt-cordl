#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_ZoneStateRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameEntityManager_ZoneStateRequest)
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityManager_ZoneStateRequest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityManager_ZoneStateRequest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_ZoneStateRequest, "", "GameEntityManager/ZoneStateRequest");
// Dependencies GTZone
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityManager/ZoneStateRequest
struct CORDL_TYPE GameEntityManager_ZoneStateRequest {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_ZoneStateRequest() ;

// Ctor Parameters [CppParam { name: "player", ty: "::Photon::Realtime::Player*", modifiers: "", def_value: None, comment: None }, CppParam { name: "zone", ty: "::GlobalNamespace::GTZone", modifiers: "", def_value: None, comment: None }, CppParam { name: "completed", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityManager_ZoneStateRequest(::Photon::Realtime::Player*  player, ::GlobalNamespace::GTZone  zone, bool  completed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field player, offset: 0x0, size: 0x8, def value: None
 ::Photon::Realtime::Player*  player;

/// @brief Field zone, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  zone;

/// @brief Field completed, offset: 0xc, size: 0x1, def value: None
 bool  completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateRequest, player) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateRequest, zone) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateRequest, completed) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager_ZoneStateRequest) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
