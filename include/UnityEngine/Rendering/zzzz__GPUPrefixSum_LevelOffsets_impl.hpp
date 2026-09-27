#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_LevelOffsets.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_LevelOffsets_def.hpp"
// Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUPrefixSum_LevelOffsets::GPUPrefixSum_LevelOffsets(uint32_t  count, uint32_t  offset, uint32_t  parentOffset) noexcept  {
this->count = count;
this->offset = offset;
this->parentOffset = parentOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUPrefixSum_LevelOffsets::GPUPrefixSum_LevelOffsets()   {
}
