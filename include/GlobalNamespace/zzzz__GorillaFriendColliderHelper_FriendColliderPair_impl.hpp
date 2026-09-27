#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFriendColliderHelper_FriendColliderPair.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendColliderHelper_FriendColliderPair_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
// Ctor Parameters [CppParam { name: "ColliderName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Collider", ty: "::UnityW<::GlobalNamespace::GorillaFriendCollider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "JoinTrigger", ty: "::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair::GorillaFriendColliderHelper_FriendColliderPair(::StringW  ColliderName, ::UnityW<::GlobalNamespace::GorillaFriendCollider>  Collider, ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  JoinTrigger) noexcept  {
this->ColliderName = ColliderName;
this->Collider = Collider;
this->JoinTrigger = JoinTrigger;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair::GorillaFriendColliderHelper_FriendColliderPair()   {
}
