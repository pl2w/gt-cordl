#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayer_SlotData.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_SlotData_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
// Ctor Parameters [CppParam { name: "entityId", ty: "::GlobalNamespace::GameEntityId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entityManager", ty: "::UnityW<::GlobalNamespace::GameEntityManager>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GamePlayer_SlotData::GamePlayer_SlotData(::GlobalNamespace::GameEntityId  entityId, ::UnityW<::GlobalNamespace::GameEntityManager>  entityManager) noexcept  {
this->entityId = entityId;
this->entityManager = entityManager;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayer_SlotData::GamePlayer_SlotData()   {
}
