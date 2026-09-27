#pragma once
// IWYU pragma private; include "Voxels/VectorUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorUtilities)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct half3;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Voxels {
class VectorUtilities;
}
// Write type traits
MARK_REF_T(::Voxels::VectorUtilities*);
DEFINE_IL2CPP_CLASS(::Voxels::VectorUtilities*, "Voxels", "VectorUtilities");
// [Extension]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VectorUtilities
class CORDL_TYPE VectorUtilities : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Ceil, addr 0x5db75bc, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Ceil(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method CeilToInt, addr 0x5db74b4, size 0x108, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 CeilToInt(::Unity::Mathematics::float3  v) ;

/// [Extension]
/// @brief Method CeilToVectorInt, addr 0x5db735c, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int CeilToVectorInt(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method Floor, addr 0x5db76f4, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 Floor(::Unity::Mathematics::float3  v) ;

/// [Extension]
/// @brief Method Floor, addr 0x5db7688, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Floor(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method FloorToMultipleOfX, addr 0x5db7a6c, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 FloorToMultipleOfX(::Unity::Mathematics::int3  v, ::Unity::Mathematics::int3  x) ;

/// [Extension]
/// @brief Method FloorToMultipleOfX, addr 0x5db77e8, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 FloorToMultipleOfX(::UnityEngine::Vector3  v, ::Unity::Mathematics::int3  x) ;

/// [Extension]
/// @brief Method FloorToMultipleOfX, addr 0x5db7928, size 0x144, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 FloorToMultipleOfX(::UnityEngine::Vector3Int  v, ::Unity::Mathematics::int3  x) ;

/// [Extension]
/// @brief Method FloorToVectorInt, addr 0x5db7254, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int FloorToVectorInt(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method GetCardinalNeighbours, addr 0x5db7cf8, size 0xfc, virtual false, abstract: false, final false
static inline ::ArrayW<::Unity::Mathematics::int3> GetCardinalNeighbours(::Unity::Mathematics::int3  center) ;

/// [Extension]
/// @brief Method GetClosestCardinalNeighbour, addr 0x5db7df4, size 0x1e4, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 GetClosestCardinalNeighbour(::Unity::Mathematics::int3  center, ::UnityEngine::Vector3  target) ;

/// [Extension]
/// @brief Method IsSolid, addr 0x5db7cf0, size 0x8, virtual false, abstract: false, final false
static inline bool IsSolid(uint8_t  density) ;

/// [Extension]
/// @brief Method LocalPositionToChunkId, addr 0x5db7c34, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 LocalPositionToChunkId(::Unity::Mathematics::int3  localWorldPosition, ::Unity::Mathematics::int3  chunkSize) ;

/// [Extension]
/// @brief Method LocalPositionToChunkId, addr 0x5db7bb0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 LocalPositionToChunkId(::UnityEngine::Vector3  localWorldPosition, ::Unity::Mathematics::int3  chunkSize) ;

/// [Extension]
/// @brief Method LocalPositionToChunkId, addr 0x5db7bf0, size 0x44, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 LocalPositionToChunkId(::UnityEngine::Vector3Int  localWorldPosition, ::Unity::Mathematics::int3  chunkSize) ;

/// @brief Method Max, addr 0x5db8000, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int Max(::UnityEngine::Vector3Int  v1, ::UnityEngine::Vector3Int  v2) ;

/// @brief Method Min, addr 0x5db7fd8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int Min(::UnityEngine::Vector3Int  v1, ::UnityEngine::Vector3Int  v2) ;

/// [Extension]
/// @brief Method RoundToInt, addr 0x5db7464, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 RoundToInt(::Unity::Mathematics::float3  v) ;

/// [Extension]
/// @brief Method RoundToInt, addr 0x5db6fb0, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 RoundToInt(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method RoundToVectorInt, addr 0x5db7008, size 0x24c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int RoundToVectorInt(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToByte, addr 0x5db7c78, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(float_t  value) ;

/// [Extension]
/// @brief Method ToFloat, addr 0x5db7cd4, size 0x1c, virtual false, abstract: false, final false
static inline float_t ToFloat(uint8_t  value) ;

/// [Extension]
/// @brief Method ToFloat3, addr 0x5db77d4, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 ToFloat3(::Unity::Mathematics::int3  v) ;

/// [Extension]
/// @brief Method ToHalf3, addr 0x5db6dc0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::half3 ToHalf3(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToInt3, addr 0x5db6f70, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ToInt3(::Unity::Mathematics::float3  v) ;

/// [Extension]
/// @brief Method ToInt3, addr 0x5db6d80, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ToInt3(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method ToInt3, addr 0x5db6d78, size 0x8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 ToInt3(::UnityEngine::Vector3Int  v) ;

/// [Extension]
/// @brief Method ToVector3, addr 0x5db6ea0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToVector3(::Unity::Mathematics::half3  h) ;

/// [Extension]
/// @brief Method ToVector3, addr 0x5db77c0, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToVector3(::Unity::Mathematics::int3  v) ;

/// [Extension]
/// @brief Method ToVectorInt, addr 0x5db6d70, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int ToVectorInt(::Unity::Mathematics::int3  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorUtilities(VectorUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorUtilities(VectorUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5046};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::VectorUtilities) == 0x10, "Size mismatch!");

} // namespace end def Voxels
