#pragma once
// IWYU pragma private; include "Voxels/VoxelGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Voxels/zzzz__NativeCounter_def.hpp"
#include "Voxels/zzzz__VoxelGenerator_MeshingParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelGenerator)
namespace GlobalNamespace {
struct VoxelGenerator_MeshingParameters;
}
namespace System {
class Action;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace Voxels {
struct ChunkTask;
}
namespace Voxels {
class Chunk;
}
namespace Voxels {
class VoxelGenerator___c;
}
namespace Voxels {
class VoxelGenerator___c__DisplayClass10_0;
}
namespace Voxels {
class VoxelGenerator___c__DisplayClass11_0;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class VoxelGenerator;
}
namespace Voxels {
class VoxelGenerator___c;
}
namespace Voxels {
class VoxelGenerator___c__DisplayClass10_0;
}
namespace Voxels {
class VoxelGenerator___c__DisplayClass11_0;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelGenerator*);
MARK_REF_T(::Voxels::VoxelGenerator___c*);
MARK_REF_T(::Voxels::VoxelGenerator___c__DisplayClass10_0*);
MARK_REF_T(::Voxels::VoxelGenerator___c__DisplayClass11_0*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelGenerator*, "Voxels", "VoxelGenerator");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelGenerator___c*, "Voxels", "VoxelGenerator/<>c");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelGenerator___c__DisplayClass10_0*, "Voxels", "VoxelGenerator/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelGenerator___c__DisplayClass11_0*, "Voxels", "VoxelGenerator/<>c__DisplayClass11_0");
// Dependencies System.Object, Voxels.VoxelGenerator::MeshingParameters
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelGenerator
class CORDL_TYPE VoxelGenerator : public ::System::Object {
public:
// Declarations
using MeshingParameters = ::GlobalNamespace::VoxelGenerator_MeshingParameters;

using __c = ::Voxels::VoxelGenerator___c;

using __c__DisplayClass10_0 = ::Voxels::VoxelGenerator___c__DisplayClass10_0;

using __c__DisplayClass11_0 = ::Voxels::VoxelGenerator___c__DisplayClass11_0;

 __declspec(property(get=get_PostProcessMesh)) bool  PostProcessMesh;

/// @brief Field Seed, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Seed, put=__cordl_internal_set_Seed)) int32_t  Seed;

/// @brief Field meshParameters, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_meshParameters, put=__cordl_internal_set_meshParameters)) ::GlobalNamespace::VoxelGenerator_MeshingParameters  meshParameters;

/// @brief Method CreateMeshDataJob, addr 0x5db8050, size 0x14c, virtual false, abstract: false, final false
inline ::Voxels::ChunkTask CreateMeshDataJob(::Voxels::Chunk*  chunk) ;

/// @brief Method CreateMeshPostProcessJob, addr 0x5db85d0, size 0x544, virtual false, abstract: false, final false
inline ::Voxels::ChunkTask CreateMeshPostProcessJob(::Voxels::Chunk*  chunk) ;

/// @brief Method CreateVoxelDataJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Voxels::ChunkTask CreateVoxelDataJob(::Voxels::Chunk*  chunk) ;

/// @brief Method DrawGizmos, addr 0x5db8038, size 0x4, virtual true, abstract: false, final false
inline void DrawGizmos(::Voxels::VoxelWorld*  world) ;

/// @brief Method GetWorldBounds, addr 0x5db803c, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::BoundsInt GetWorldBounds() ;

/// @brief Method InitWorld, addr 0x5db804c, size 0x4, virtual true, abstract: false, final false
inline void InitWorld(::Voxels::VoxelWorld*  world) ;

static inline ::Voxels::VoxelGenerator* New_ctor() ;

/// @brief Method ShiftWorldBounds, addr 0x5db8048, size 0x4, virtual true, abstract: false, final false
inline void ShiftWorldBounds(::UnityEngine::Vector3Int  worldShift) ;

constexpr int32_t const& __cordl_internal_get_Seed() const;

constexpr int32_t& __cordl_internal_get_Seed() ;

constexpr ::GlobalNamespace::VoxelGenerator_MeshingParameters const& __cordl_internal_get_meshParameters() const;

constexpr ::GlobalNamespace::VoxelGenerator_MeshingParameters& __cordl_internal_get_meshParameters() ;

constexpr void __cordl_internal_set_Seed(int32_t  value) ;

constexpr void __cordl_internal_set_meshParameters(::GlobalNamespace::VoxelGenerator_MeshingParameters  value) ;

/// @brief Method .ctor, addr 0x5db0054, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PostProcessMesh, addr 0x5db8028, size 0x10, virtual false, abstract: false, final false
inline bool get_PostProcessMesh() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelGenerator(VoxelGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelGenerator(VoxelGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5051};

/// @brief Field Seed, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Seed;

/// @brief Field meshParameters, offset: 0x14, size: 0xc, def value: None
 ::GlobalNamespace::VoxelGenerator_MeshingParameters  ___meshParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelGenerator, ___Seed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelGenerator, ___meshParameters) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelGenerator) == 0x20, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object, Voxels.NativeCounter
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelGenerator/<>c__DisplayClass11_0
class CORDL_TYPE VoxelGenerator___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chunk, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunk, put=__cordl_internal_set_chunk)) ::Voxels::Chunk*  chunk;

/// @brief Field triangleCounter, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_triangleCounter, put=__cordl_internal_set_triangleCounter)) ::Voxels::NativeCounter  triangleCounter;

static inline ::Voxels::VoxelGenerator___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <CreateMeshPostProcessJob>b__0, addr 0x5db8bd0, size 0x40, virtual false, abstract: false, final false
inline void _CreateMeshPostProcessJob_b__0() ;

constexpr ::Voxels::Chunk* const& __cordl_internal_get_chunk() const;

constexpr ::Voxels::Chunk*& __cordl_internal_get_chunk() ;

constexpr ::Voxels::NativeCounter const& __cordl_internal_get_triangleCounter() const;

constexpr ::Voxels::NativeCounter& __cordl_internal_get_triangleCounter() ;

constexpr void __cordl_internal_set_chunk(::Voxels::Chunk*  value) ;

constexpr void __cordl_internal_set_triangleCounter(::Voxels::NativeCounter  value) ;

/// @brief Method .ctor, addr 0x5db8b14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelGenerator___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator___c__DisplayClass11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelGenerator___c__DisplayClass11_0(VoxelGenerator___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator___c__DisplayClass11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelGenerator___c__DisplayClass11_0(VoxelGenerator___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5050};

/// @brief Field chunk, offset: 0x10, size: 0x8, def value: None
 ::Voxels::Chunk*  ___chunk;

/// @brief Field triangleCounter, offset: 0x18, size: 0x10, def value: None
 ::Voxels::NativeCounter  ___triangleCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelGenerator___c__DisplayClass11_0, ___chunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelGenerator___c__DisplayClass11_0, ___triangleCounter) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelGenerator___c__DisplayClass11_0) == 0x28, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object, Voxels.NativeCounter
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelGenerator/<>c__DisplayClass10_0
class CORDL_TYPE VoxelGenerator___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chunk, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunk, put=__cordl_internal_set_chunk)) ::Voxels::Chunk*  chunk;

/// @brief Field onComplete, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action*  onComplete;

/// @brief Field triangleCounter, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_triangleCounter, put=__cordl_internal_set_triangleCounter)) ::Voxels::NativeCounter  triangleCounter;

static inline ::Voxels::VoxelGenerator___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <CreateMeshDataJob>b__2, addr 0x5db8b90, size 0x40, virtual false, abstract: false, final false
inline void _CreateMeshDataJob_b__2() ;

/// @brief Method <CreateMeshDataJob>g__CreateMarchingCubesMeshJob|0, addr 0x5db81a4, size 0x1a8, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle _CreateMeshDataJob_g__CreateMarchingCubesMeshJob_0() ;

/// @brief Method <CreateMeshDataJob>g__CreateSurfaceNetsMeshJob|1, addr 0x5db834c, size 0x284, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle _CreateMeshDataJob_g__CreateSurfaceNetsMeshJob_1() ;

constexpr ::Voxels::Chunk* const& __cordl_internal_get_chunk() const;

constexpr ::Voxels::Chunk*& __cordl_internal_get_chunk() ;

constexpr ::System::Action* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action*& __cordl_internal_get_onComplete() ;

constexpr ::Voxels::NativeCounter const& __cordl_internal_get_triangleCounter() const;

constexpr ::Voxels::NativeCounter& __cordl_internal_get_triangleCounter() ;

constexpr void __cordl_internal_set_chunk(::Voxels::Chunk*  value) ;

constexpr void __cordl_internal_set_onComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set_triangleCounter(::Voxels::NativeCounter  value) ;

/// @brief Method .ctor, addr 0x5db819c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelGenerator___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelGenerator___c__DisplayClass10_0(VoxelGenerator___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelGenerator___c__DisplayClass10_0(VoxelGenerator___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5049};

/// @brief Field chunk, offset: 0x10, size: 0x8, def value: None
 ::Voxels::Chunk*  ___chunk;

/// @brief Field onComplete, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onComplete;

/// @brief Field triangleCounter, offset: 0x20, size: 0x10, def value: None
 ::Voxels::NativeCounter  ___triangleCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelGenerator___c__DisplayClass10_0, ___chunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelGenerator___c__DisplayClass10_0, ___onComplete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelGenerator___c__DisplayClass10_0, ___triangleCounter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelGenerator___c__DisplayClass10_0) == 0x30, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelGenerator/<>c
class CORDL_TYPE VoxelGenerator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Voxels::VoxelGenerator___c*  __9;

/// @brief Field <>9__10_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_3, put=setStaticF___9__10_3)) ::System::Action*  __9__10_3;

static inline ::Voxels::VoxelGenerator___c* New_ctor() ;

/// @brief Method <CreateMeshDataJob>b__10_3, addr 0x5db8b8c, size 0x4, virtual false, abstract: false, final false
inline void _CreateMeshDataJob_b__10_3() ;

/// @brief Method .ctor, addr 0x5db8b84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Voxels::VoxelGenerator___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__10_3() ;

static inline void setStaticF___9(::Voxels::VoxelGenerator___c*  value) ;

static inline void setStaticF___9__10_3(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelGenerator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelGenerator___c(VoxelGenerator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelGenerator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelGenerator___c(VoxelGenerator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5048};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::VoxelGenerator___c) == 0x10, "Size mismatch!");

} // namespace end def Voxels
