#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectPools_DelayedSpawnData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectPools_DelayedSpawnData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "prefabHash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ObjectPools_DelayedSpawnData::ObjectPools_DelayedSpawnData(int32_t  prefabHash, ::UnityW<::UnityEngine::Transform>  xform, ::UnityEngine::Vector3  pos) noexcept  {
this->prefabHash = prefabHash;
this->xform = xform;
this->pos = pos;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectPools_DelayedSpawnData::ObjectPools_DelayedSpawnData()   {
}
