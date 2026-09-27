#pragma once
// IWYU pragma private; include "GorillaNetworking/JoinType.hpp"
#include "GorillaNetworking/zzzz__JoinType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaNetworking::JoinType::JoinType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaNetworking::JoinType::JoinType()   {
}
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::Solo{static_cast<int32_t>(0x0)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::JoinWithNearby{static_cast<int32_t>(0x1)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::JoinWithParty{static_cast<int32_t>(0x2)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::JoinWithElevator{static_cast<int32_t>(0x3)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::ForceJoinWithParty{static_cast<int32_t>(0x4)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::FollowingNearby{static_cast<int32_t>(0x5)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::FollowingParty{static_cast<int32_t>(0x6)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::FriendStationPublic{static_cast<int32_t>(0x7)};
constexpr ::GorillaNetworking::JoinType  GorillaNetworking::JoinType::FriendStationPrivate{static_cast<int32_t>(0x8)};
