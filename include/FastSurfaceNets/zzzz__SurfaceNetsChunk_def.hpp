#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceNetsChunk)
namespace FastSurfaceNets {
class GenerationParameters;
}
namespace GlobalNamespace {
struct SurfaceNetsChunk__BuildChunk_d__13;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace FastSurfaceNets {
class SurfaceNetsChunk;
}
// Write type traits
MARK_REF_T(::FastSurfaceNets::SurfaceNetsChunk*);
DEFINE_IL2CPP_CLASS(::FastSurfaceNets::SurfaceNetsChunk*, "FastSurfaceNets", "SurfaceNetsChunk");
// [RequireComponent(typeof(UnityEngine.MeshFilter), typeof(UnityEngine.MeshRenderer))]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int3, UnityEngine.MonoBehaviour
namespace FastSurfaceNets {
// Is value type: false
// CS Name: FastSurfaceNets.SurfaceNetsChunk
class CORDL_TYPE SurfaceNetsChunk : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _BuildChunk_d__13 = ::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13;

/// @brief Field Id, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::Unity::Mathematics::int3  Id;

/// @brief Field autoGenerate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoGenerate, put=__cordl_internal_set_autoGenerate)) bool  autoGenerate;

/// @brief Field chunkPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_chunkPosition, put=__cordl_internal_set_chunkPosition)) ::Unity::Mathematics::int3  chunkPosition;

/// @brief Field max, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) ::Unity::Mathematics::int3  max;

/// @brief Field mesh, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field min, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) ::Unity::Mathematics::int3  min;

/// @brief Field parameters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::FastSurfaceNets::GenerationParameters*  parameters;

/// @brief Field sdf, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_sdf, put=__cordl_internal_set_sdf)) ::Unity::Collections::NativeArray_1<uint8_t>  sdf;

/// @brief Field shape, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::Unity::Mathematics::int3  shape;

/// @brief Method Awake, addr 0x5da9b0c, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(FastSurfaceNets.SurfaceNetsChunk::<BuildChunk>d__13))]
/// @brief Method BuildChunk, addr 0x5da9b1c, size 0xa8, virtual false, abstract: false, final false
inline void BuildChunk() ;

/// @brief Method FillChunk, addr 0x5da9c28, size 0x358, virtual false, abstract: false, final false
inline void FillChunk() ;

static inline ::FastSurfaceNets::SurfaceNetsChunk* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5da9bc4, size 0x64, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5da9f80, size 0x1f0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_Id() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_autoGenerate() const;

constexpr bool& __cordl_internal_get_autoGenerate() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_chunkPosition() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_chunkPosition() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_max() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_max() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_min() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_min() ;

constexpr ::FastSurfaceNets::GenerationParameters* const& __cordl_internal_get_parameters() const;

constexpr ::FastSurfaceNets::GenerationParameters*& __cordl_internal_get_parameters() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_sdf() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_sdf() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_shape() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_shape() ;

constexpr void __cordl_internal_set_Id(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_autoGenerate(bool  value) ;

constexpr void __cordl_internal_set_chunkPosition(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_max(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_min(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_parameters(::FastSurfaceNets::GenerationParameters*  value) ;

constexpr void __cordl_internal_set_sdf(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_shape(::Unity::Mathematics::int3  value) ;

/// @brief Method .ctor, addr 0x5daa170, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNetsChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNetsChunk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceNetsChunk(SurfaceNetsChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNetsChunk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceNetsChunk(SurfaceNetsChunk const& ) = delete;

/// @brief Field ChunkSize offset 0xffffffff size 0x4
static constexpr int32_t  ChunkSize{static_cast<int32_t>(0x20)};

/// @brief Field Pad offset 0xffffffff size 0x4
static constexpr int32_t  Pad{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4997};

/// @brief Field Id, offset: 0x20, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___Id;

/// @brief Field parameters, offset: 0x30, size: 0x8, def value: None
 ::FastSurfaceNets::GenerationParameters*  ___parameters;

/// @brief Field autoGenerate, offset: 0x38, size: 0x1, def value: None
 bool  ___autoGenerate;

/// @brief Field chunkPosition, offset: 0x3c, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___chunkPosition;

/// @brief Field sdf, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___sdf;

/// @brief Field min, offset: 0x58, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___min;

/// @brief Field max, offset: 0x64, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___max;

/// @brief Field shape, offset: 0x70, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___shape;

/// @brief Field mesh, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___Id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___parameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___autoGenerate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___chunkPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___sdf) == 0x48, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___min) == 0x58, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___max) == 0x64, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___shape) == 0x70, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsChunk, ___mesh) == 0x80, "Offset mismatch!");

static_assert(sizeof(::FastSurfaceNets::SurfaceNetsChunk) == 0x88, "Size mismatch!");

} // namespace end def FastSurfaceNets
