#pragma once
// IWYU pragma private; include "GorillaTagScripts/FriendshipGroupDetection_PlayerFist.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendshipGroupDetection_PlayerFist)
// Forward declare root types
namespace GlobalNamespace {
struct FriendshipGroupDetection_PlayerFist;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendshipGroupDetection_PlayerFist);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendshipGroupDetection_PlayerFist, "GorillaTagScripts", "FriendshipGroupDetection/PlayerFist");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.FriendshipGroupDetection/PlayerFist
struct CORDL_TYPE FriendshipGroupDetection_PlayerFist {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FriendshipGroupDetection_PlayerFist() ;

// Ctor Parameters [CppParam { name: "actorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr FriendshipGroupDetection_PlayerFist(int32_t  actorNumber, ::UnityEngine::Vector3  position, bool  isLeftHand) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3977};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field actorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  actorNumber;

/// @brief Field position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field isLeftHand, offset: 0x10, size: 0x1, def value: None
 bool  isLeftHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendshipGroupDetection_PlayerFist, actorNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipGroupDetection_PlayerFist, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipGroupDetection_PlayerFist, isLeftHand) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendshipGroupDetection_PlayerFist) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
