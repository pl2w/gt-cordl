#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ReflectionProbeManager_CachedProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_CachedProbe__dataIndices_e__FixedBuffer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_CachedProbe__levels_e__FixedBuffer_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeManager_CachedProbe)
namespace GlobalNamespace {
struct CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer;
}
namespace GlobalNamespace {
struct CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct ReflectionProbeManager_CachedProbe;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReflectionProbeManager_CachedProbe);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReflectionProbeManager_CachedProbe, "UnityEngine.Rendering.Universal", "ReflectionProbeManager/CachedProbe");
// Dependencies UnityEngine.Hash128, UnityEngine.Rendering.Universal.ReflectionProbeManager::CachedProbe::<dataIndices>e__FixedBuffer, UnityEngine.Rendering.Universal.ReflectionProbeManager::CachedProbe::<levels>e__FixedBuffer, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeManager/CachedProbe
struct CORDL_TYPE ReflectionProbeManager_CachedProbe {
public:
// Declarations
using _dataIndices_e__FixedBuffer = ::GlobalNamespace::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer;

using _levels_e__FixedBuffer = ::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr ReflectionProbeManager_CachedProbe() ;

// Ctor Parameters [CppParam { name: "updateCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "imageContentsHash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataIndices", ty: "::GlobalNamespace::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "levels", ty: "::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastUsed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hdrData", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr ReflectionProbeManager_CachedProbe(uint32_t  updateCount, ::UnityEngine::Hash128  imageContentsHash, int32_t  size, int32_t  mipCount, ::GlobalNamespace::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer  dataIndices, ::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer  levels, ::UnityW<::UnityEngine::Texture>  texture, int32_t  lastUsed, ::UnityEngine::Vector4  hdrData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18546};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field updateCount, offset: 0x0, size: 0x4, def value: None
 uint32_t  updateCount;

/// @brief Field imageContentsHash, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Hash128  imageContentsHash;

/// @brief Field size, offset: 0x18, size: 0x4, def value: None
 int32_t  size;

/// @brief Field mipCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  mipCount;

/// [FixedBuffer(typeof(System.Int32), 7)]
/// @brief Field dataIndices, offset: 0x20, size: 0x1c, def value: None
 ::GlobalNamespace::CachedProbe_ReflectionProbeManager__dataIndices_e__FixedBuffer  dataIndices;

/// [FixedBuffer(typeof(System.Int32), 7)]
/// @brief Field levels, offset: 0x3c, size: 0x1c, def value: None
 ::GlobalNamespace::CachedProbe_ReflectionProbeManager__levels_e__FixedBuffer  levels;

/// @brief Field texture, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  texture;

/// @brief Field lastUsed, offset: 0x60, size: 0x4, def value: None
 int32_t  lastUsed;

/// @brief Field hdrData, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Vector4  hdrData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, updateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, imageContentsHash) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, mipCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, dataIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, levels) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, texture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, lastUsed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeManager_CachedProbe, hdrData) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReflectionProbeManager_CachedProbe) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
