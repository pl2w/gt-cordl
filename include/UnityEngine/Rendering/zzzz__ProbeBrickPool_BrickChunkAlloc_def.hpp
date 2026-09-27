#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickPool_BrickChunkAlloc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickPool_BrickChunkAlloc)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeBrickPool_BrickChunkAlloc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc, "UnityEngine.Rendering", "ProbeBrickPool/BrickChunkAlloc");
// [DebuggerDisplay("Chunk ({x}, {y}, {z})")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickPool/BrickChunkAlloc
struct CORDL_TYPE ProbeBrickPool_BrickChunkAlloc {
public:
// Declarations
/// @brief Method flattenIndex, addr 0xb159354, size 0x14, virtual false, abstract: false, final false
inline int32_t flattenIndex(int32_t  sx, int32_t  sy) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeBrickPool_BrickChunkAlloc() ;

// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeBrickPool_BrickChunkAlloc(int32_t  x, int32_t  y, int32_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 int32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 int32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 int32_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeBrickPool_BrickChunkAlloc) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
