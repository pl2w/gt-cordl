#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityManager_CombinedChunks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntityManager_CombinedChunks)
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawCallChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
// Forward declare root types
namespace GlobalNamespace {
struct DecalEntityManager_CombinedChunks;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecalEntityManager_CombinedChunks);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecalEntityManager_CombinedChunks, "UnityEngine.Rendering.Universal", "DecalEntityManager/CombinedChunks");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalEntityManager/CombinedChunks
struct CORDL_TYPE DecalEntityManager_CombinedChunks {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DecalEntityManager_CombinedChunks() ;

// Ctor Parameters [CppParam { name: "entityChunk", ty: "::UnityEngine::Rendering::Universal::DecalEntityChunk*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cachedChunk", ty: "::UnityEngine::Rendering::Universal::DecalCachedChunk*", modifiers: "", def_value: None, comment: None }, CppParam { name: "culledChunk", ty: "::UnityEngine::Rendering::Universal::DecalCulledChunk*", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawCallChunk", ty: "::UnityEngine::Rendering::Universal::DecalDrawCallChunk*", modifiers: "", def_value: None, comment: None }, CppParam { name: "previousChunkIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr DecalEntityManager_CombinedChunks(::UnityEngine::Rendering::Universal::DecalEntityChunk*  entityChunk, ::UnityEngine::Rendering::Universal::DecalCachedChunk*  cachedChunk, ::UnityEngine::Rendering::Universal::DecalCulledChunk*  culledChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*  drawCallChunk, int32_t  previousChunkIndex, bool  valid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field entityChunk, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DecalEntityChunk*  entityChunk;

/// @brief Field cachedChunk, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DecalCachedChunk*  cachedChunk;

/// @brief Field culledChunk, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DecalCulledChunk*  culledChunk;

/// @brief Field drawCallChunk, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*  drawCallChunk;

/// @brief Field previousChunkIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  previousChunkIndex;

/// @brief Field valid, offset: 0x24, size: 0x1, def value: None
 bool  valid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecalEntityManager_CombinedChunks, entityChunk) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalEntityManager_CombinedChunks, cachedChunk) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalEntityManager_CombinedChunks, culledChunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalEntityManager_CombinedChunks, drawCallChunk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalEntityManager_CombinedChunks, previousChunkIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalEntityManager_CombinedChunks, valid) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecalEntityManager_CombinedChunks) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
