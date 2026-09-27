#pragma once
// IWYU pragma private; include "GorillaNetworking/JoinType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinType)
// Forward declare root types
namespace GorillaNetworking {
struct JoinType;
}
// Write type traits
MARK_VAL_T(::GorillaNetworking::JoinType);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::JoinType, "GorillaNetworking", "JoinType");
// Dependencies 
namespace GorillaNetworking {
// Is value type: true
// CS Name: GorillaNetworking.JoinType
struct CORDL_TYPE JoinType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JoinType_Unwrapped
enum struct __JoinType_Unwrapped : int32_t {
__E_Solo = static_cast<int32_t>(0x0),
__E_JoinWithNearby = static_cast<int32_t>(0x1),
__E_JoinWithParty = static_cast<int32_t>(0x2),
__E_JoinWithElevator = static_cast<int32_t>(0x3),
__E_ForceJoinWithParty = static_cast<int32_t>(0x4),
__E_FollowingNearby = static_cast<int32_t>(0x5),
__E_FollowingParty = static_cast<int32_t>(0x6),
__E_FriendStationPublic = static_cast<int32_t>(0x7),
__E_FriendStationPrivate = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinType_Unwrapped () const noexcept {
return static_cast<__JoinType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JoinType(int32_t  value__) noexcept;

/// @brief Field FollowingNearby value: I32(5)
static ::GorillaNetworking::JoinType const FollowingNearby;

/// @brief Field FollowingParty value: I32(6)
static ::GorillaNetworking::JoinType const FollowingParty;

/// @brief Field ForceJoinWithParty value: I32(4)
static ::GorillaNetworking::JoinType const ForceJoinWithParty;

/// @brief Field FriendStationPrivate value: I32(8)
static ::GorillaNetworking::JoinType const FriendStationPrivate;

/// @brief Field FriendStationPublic value: I32(7)
static ::GorillaNetworking::JoinType const FriendStationPublic;

/// @brief Field JoinWithElevator value: I32(3)
static ::GorillaNetworking::JoinType const JoinWithElevator;

/// @brief Field JoinWithNearby value: I32(1)
static ::GorillaNetworking::JoinType const JoinWithNearby;

/// @brief Field JoinWithParty value: I32(2)
static ::GorillaNetworking::JoinType const JoinWithParty;

/// @brief Field Solo value: I32(0)
static ::GorillaNetworking::JoinType const Solo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::JoinType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::JoinType) == 0x4, "Size mismatch!");

} // namespace end def GorillaNetworking
