#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityManager_CombinedChunks.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_CombinedChunks_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawCallChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
// Ctor Parameters [CppParam { name: "entityChunk", ty: "::UnityEngine::Rendering::Universal::DecalEntityChunk*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cachedChunk", ty: "::UnityEngine::Rendering::Universal::DecalCachedChunk*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "culledChunk", ty: "::UnityEngine::Rendering::Universal::DecalCulledChunk*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawCallChunk", ty: "::UnityEngine::Rendering::Universal::DecalDrawCallChunk*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "previousChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecalEntityManager_CombinedChunks::DecalEntityManager_CombinedChunks(::UnityEngine::Rendering::Universal::DecalEntityChunk*  entityChunk, ::UnityEngine::Rendering::Universal::DecalCachedChunk*  cachedChunk, ::UnityEngine::Rendering::Universal::DecalCulledChunk*  culledChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*  drawCallChunk, int32_t  previousChunkIndex, bool  valid) noexcept  {
this->entityChunk = entityChunk;
this->cachedChunk = cachedChunk;
this->culledChunk = culledChunk;
this->drawCallChunk = drawCallChunk;
this->previousChunkIndex = previousChunkIndex;
this->valid = valid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecalEntityManager_CombinedChunks::DecalEntityManager_CombinedChunks()   {
}
