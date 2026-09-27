#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ReflectionProbeManager_CachedProbe.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_CachedProbe__dataIndices_e__FixedBuffer_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_CachedProbe__levels_e__FixedBuffer_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_CachedProbe_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_CachedProbe__dataIndices_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_CachedProbe__levels_e__FixedBuffer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "updateCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "imageContentsHash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataIndices", ty: "::GlobalNamespace::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levels", ty: "::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastUsed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hdrData", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReflectionProbeManager_CachedProbe::ReflectionProbeManager_CachedProbe(uint32_t  updateCount, ::UnityEngine::Hash128  imageContentsHash, int32_t  size, int32_t  mipCount, ::GlobalNamespace::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer  dataIndices, ::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer  levels, ::UnityW<::UnityEngine::Texture>  texture, int32_t  lastUsed, ::UnityEngine::Vector4  hdrData) noexcept  {
this->updateCount = updateCount;
this->imageContentsHash = imageContentsHash;
this->size = size;
this->mipCount = mipCount;
this->dataIndices = dataIndices;
this->levels = levels;
this->texture = texture;
this->lastUsed = lastUsed;
this->hdrData = hdrData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReflectionProbeManager_CachedProbe::ReflectionProbeManager_CachedProbe()   {
}
