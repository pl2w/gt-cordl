#pragma once
// IWYU pragma private; include "Voxels/SDFVoxelGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_SDFPrimitive_def.hpp"
#include "Voxels/zzzz__VoxelGenerator_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SDFVoxelGenerator)
namespace GlobalNamespace {
struct SDFVoxelGenerator_Operation;
}
namespace GlobalNamespace {
struct SDFVoxelGenerator_SDFPrimitive;
}
namespace GlobalNamespace {
struct SDFVoxelGenerator_Shape;
}
namespace GlobalNamespace {
struct SDFVoxelGenerator_VoxelDataJob;
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
class SDFVoxelGenerator___c__DisplayClass10_0;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class SDFVoxelGenerator;
}
namespace Voxels {
class SDFVoxelGenerator___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_T(::Voxels::SDFVoxelGenerator*);
MARK_REF_T(::Voxels::SDFVoxelGenerator___c__DisplayClass10_0*);
DEFINE_IL2CPP_CLASS(::Voxels::SDFVoxelGenerator*, "Voxels", "SDFVoxelGenerator");
DEFINE_IL2CPP_CLASS(::Voxels::SDFVoxelGenerator___c__DisplayClass10_0*, "Voxels", "SDFVoxelGenerator/<>c__DisplayClass10_0");
// Dependencies Voxels.SDFVoxelGenerator::SDFPrimitive, Voxels.VoxelGenerator
namespace Voxels {
// Is value type: false
// CS Name: Voxels.SDFVoxelGenerator
class CORDL_TYPE SDFVoxelGenerator : public ::Voxels::VoxelGenerator {
public:
// Declarations
using Operation = ::GlobalNamespace::SDFVoxelGenerator_Operation;

using SDFPrimitive = ::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive;

using Shape = ::GlobalNamespace::SDFVoxelGenerator_Shape;

using VoxelDataJob = ::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob;

using __c__DisplayClass10_0 = ::Voxels::SDFVoxelGenerator___c__DisplayClass10_0;

/// @brief Field Blocky, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_Blocky, put=__cordl_internal_set_Blocky)) bool  Blocky;

/// @brief Field Frequency, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Frequency, put=__cordl_internal_set_Frequency)) float_t  Frequency;

/// @brief Field NoiseScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_NoiseScale, put=__cordl_internal_set_NoiseScale)) float_t  NoiseScale;

/// @brief Field Octaves, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Octaves, put=__cordl_internal_set_Octaves)) int32_t  Octaves;

/// @brief Field Persistence, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Persistence, put=__cordl_internal_set_Persistence)) float_t  Persistence;

/// @brief Field Primitives, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Primitives, put=__cordl_internal_set_Primitives)) ::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  Primitives;

/// @brief Field fill, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_fill, put=__cordl_internal_set_fill)) uint8_t  fill;

/// @brief Method CreateVoxelDataJob, addr 0x5db02b4, size 0x2e8, virtual true, abstract: false, final false
inline ::Voxels::ChunkTask CreateVoxelDataJob(::Voxels::Chunk*  chunk) ;

/// @brief Method DrawGizmos, addr 0x5db05a4, size 0x2cc, virtual true, abstract: false, final false
inline void DrawGizmos(::Voxels::VoxelWorld*  world) ;

/// @brief Method GetWorldBounds, addr 0x5db08ec, size 0x26c, virtual true, abstract: false, final false
inline ::UnityEngine::BoundsInt GetWorldBounds() ;

/// @brief Method InitWorld, addr 0x5db0cb4, size 0x54, virtual true, abstract: false, final false
inline void InitWorld(::Voxels::VoxelWorld*  world) ;

static inline ::Voxels::SDFVoxelGenerator* New_ctor() ;

/// @brief Method SetPrimitive, addr 0x5db0d24, size 0x154, virtual false, abstract: false, final false
inline void SetPrimitive(::UnityEngine::BoundsInt  worldBounds, uint8_t  material) ;

/// @brief Method ShiftWorldBounds, addr 0x5db0c3c, size 0x78, virtual true, abstract: false, final false
inline void ShiftWorldBounds(::UnityEngine::Vector3Int  worldShift) ;

constexpr bool const& __cordl_internal_get_Blocky() const;

constexpr bool& __cordl_internal_get_Blocky() ;

constexpr float_t const& __cordl_internal_get_Frequency() const;

constexpr float_t& __cordl_internal_get_Frequency() ;

constexpr float_t const& __cordl_internal_get_NoiseScale() const;

constexpr float_t& __cordl_internal_get_NoiseScale() ;

constexpr int32_t const& __cordl_internal_get_Octaves() const;

constexpr int32_t& __cordl_internal_get_Octaves() ;

constexpr float_t const& __cordl_internal_get_Persistence() const;

constexpr float_t& __cordl_internal_get_Persistence() ;

constexpr ::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive> const& __cordl_internal_get_Primitives() const;

constexpr ::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>& __cordl_internal_get_Primitives() ;

constexpr uint8_t const& __cordl_internal_get_fill() const;

constexpr uint8_t& __cordl_internal_get_fill() ;

constexpr void __cordl_internal_set_Blocky(bool  value) ;

constexpr void __cordl_internal_set_Frequency(float_t  value) ;

constexpr void __cordl_internal_set_NoiseScale(float_t  value) ;

constexpr void __cordl_internal_set_Octaves(int32_t  value) ;

constexpr void __cordl_internal_set_Persistence(float_t  value) ;

constexpr void __cordl_internal_set_Primitives(::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  value) ;

constexpr void __cordl_internal_set_fill(uint8_t  value) ;

/// @brief Method .ctor, addr 0x5db0e78, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SDFVoxelGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SDFVoxelGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SDFVoxelGenerator(SDFVoxelGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SDFVoxelGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SDFVoxelGenerator(SDFVoxelGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5024};

/// @brief Field fill, offset: 0x20, size: 0x1, def value: None
 uint8_t  ___fill;

/// @brief Field Blocky, offset: 0x21, size: 0x1, def value: None
 bool  ___Blocky;

/// [Header("Noise")]
/// @brief Field NoiseScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___NoiseScale;

/// @brief Field Frequency, offset: 0x28, size: 0x4, def value: None
 float_t  ___Frequency;

/// @brief Field Octaves, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___Octaves;

/// @brief Field Persistence, offset: 0x30, size: 0x4, def value: None
 float_t  ___Persistence;

/// @brief Field Primitives, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  ___Primitives;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::SDFVoxelGenerator, ___fill) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::SDFVoxelGenerator, ___Blocky) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Voxels::SDFVoxelGenerator, ___NoiseScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Voxels::SDFVoxelGenerator, ___Frequency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::SDFVoxelGenerator, ___Octaves) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Voxels::SDFVoxelGenerator, ___Persistence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::SDFVoxelGenerator, ___Primitives) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Voxels::SDFVoxelGenerator) == 0x40, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Voxels.SDFVoxelGenerator::SDFPrimitive
namespace Voxels {
// Is value type: false
// CS Name: Voxels.SDFVoxelGenerator/<>c__DisplayClass10_0
class CORDL_TYPE SDFVoxelGenerator___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chunk, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunk, put=__cordl_internal_set_chunk)) ::Voxels::Chunk*  chunk;

/// @brief Field opBuffer, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_opBuffer, put=__cordl_internal_set_opBuffer)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  opBuffer;

static inline ::Voxels::SDFVoxelGenerator___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <CreateVoxelDataJob>b__0, addr 0x5db1534, size 0x64, virtual false, abstract: false, final false
inline void _CreateVoxelDataJob_b__0() ;

constexpr ::Voxels::Chunk* const& __cordl_internal_get_chunk() const;

constexpr ::Voxels::Chunk*& __cordl_internal_get_chunk() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive> const& __cordl_internal_get_opBuffer() const;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>& __cordl_internal_get_opBuffer() ;

constexpr void __cordl_internal_set_chunk(::Voxels::Chunk*  value) ;

constexpr void __cordl_internal_set_opBuffer(::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  value) ;

/// @brief Method .ctor, addr 0x5db059c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SDFVoxelGenerator___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SDFVoxelGenerator___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SDFVoxelGenerator___c__DisplayClass10_0(SDFVoxelGenerator___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SDFVoxelGenerator___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SDFVoxelGenerator___c__DisplayClass10_0(SDFVoxelGenerator___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5023};

/// @brief Field chunk, offset: 0x10, size: 0x8, def value: None
 ::Voxels::Chunk*  ___chunk;

/// @brief Field opBuffer, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  ___opBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::SDFVoxelGenerator___c__DisplayClass10_0, ___chunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::SDFVoxelGenerator___c__DisplayClass10_0, ___opBuffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Voxels::SDFVoxelGenerator___c__DisplayClass10_0) == 0x28, "Size mismatch!");

} // namespace end def Voxels
