#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFriendColliderHelper_FriendColliderPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaFriendColliderHelper_FriendColliderPair)
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaFriendColliderHelper_FriendColliderPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair, "", "GorillaFriendColliderHelper/FriendColliderPair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaFriendColliderHelper/FriendColliderPair
struct CORDL_TYPE GorillaFriendColliderHelper_FriendColliderPair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFriendColliderHelper_FriendColliderPair() ;

// Ctor Parameters [CppParam { name: "ColliderName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Collider", ty: "::UnityW<::GlobalNamespace::GorillaFriendCollider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "JoinTrigger", ty: "::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>", modifiers: "", def_value: None, comment: None }]
constexpr GorillaFriendColliderHelper_FriendColliderPair(::StringW  ColliderName, ::UnityW<::GlobalNamespace::GorillaFriendCollider>  Collider, ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  JoinTrigger) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3276};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ColliderName, offset: 0x0, size: 0x8, def value: None
 ::StringW  ColliderName;

/// @brief Field Collider, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  Collider;

/// @brief Field JoinTrigger, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  JoinTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair, ColliderName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair, Collider) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair, JoinTrigger) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
