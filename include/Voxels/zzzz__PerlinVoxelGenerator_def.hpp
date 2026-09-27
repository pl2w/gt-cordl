#pragma once
// IWYU pragma private; include "Voxels/PerlinVoxelGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_NoiseParameters_def.hpp"
#include "Voxels/zzzz__VoxelGenerator_def.hpp"
CORDL_MODULE_EXPORT(PerlinVoxelGenerator)
namespace GlobalNamespace {
struct PerlinVoxelGenerator_NoiseParameters;
}
namespace GlobalNamespace {
struct PerlinVoxelGenerator_VoxelDataJob;
}
namespace Voxels {
struct ChunkTask;
}
namespace Voxels {
class Chunk;
}
namespace Voxels {
class PerlinVoxelGenerator___c__DisplayClass2_0;
}
// Forward declare root types
namespace Voxels {
class PerlinVoxelGenerator;
}
namespace Voxels {
class PerlinVoxelGenerator___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::Voxels::PerlinVoxelGenerator*);
MARK_REF_T(::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::Voxels::PerlinVoxelGenerator*, "Voxels", "PerlinVoxelGenerator");
DEFINE_IL2CPP_CLASS(::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0*, "Voxels", "PerlinVoxelGenerator/<>c__DisplayClass2_0");
// Dependencies Voxels.PerlinVoxelGenerator::NoiseParameters, Voxels.VoxelGenerator
namespace Voxels {
// Is value type: false
// CS Name: Voxels.PerlinVoxelGenerator
class CORDL_TYPE PerlinVoxelGenerator : public ::Voxels::VoxelGenerator {
public:
// Declarations
using NoiseParameters = ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters;

using VoxelDataJob = ::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob;

using __c__DisplayClass2_0 = ::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0;

/// @brief Field noiseParameters, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_noiseParameters, put=__cordl_internal_set_noiseParameters)) ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters  noiseParameters;

/// @brief Method CreateVoxelDataJob, addr 0x5dafdf4, size 0x214, virtual true, abstract: false, final false
inline ::Voxels::ChunkTask CreateVoxelDataJob(::Voxels::Chunk*  chunk) ;

static inline ::Voxels::PerlinVoxelGenerator* New_ctor() ;

constexpr ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters const& __cordl_internal_get_noiseParameters() const;

constexpr ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters& __cordl_internal_get_noiseParameters() ;

constexpr void __cordl_internal_set_noiseParameters(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters  value) ;

/// @brief Method .ctor, addr 0x5db0010, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerlinVoxelGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerlinVoxelGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerlinVoxelGenerator(PerlinVoxelGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerlinVoxelGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerlinVoxelGenerator(PerlinVoxelGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5018};

/// @brief Field noiseParameters, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters  ___noiseParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::PerlinVoxelGenerator, ___noiseParameters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Voxels::PerlinVoxelGenerator) == 0x38, "Size mismatch!");

} // namespace end def Voxels
// [CompilerGenerated]
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.PerlinVoxelGenerator/<>c__DisplayClass2_0
class CORDL_TYPE PerlinVoxelGenerator___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field chunk, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_chunk, put=__cordl_internal_set_chunk)) ::Voxels::Chunk*  chunk;

static inline ::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <CreateVoxelDataJob>b__0, addr 0x5db0290, size 0x24, virtual false, abstract: false, final false
inline void _CreateVoxelDataJob_b__0() ;

constexpr ::Voxels::Chunk* const& __cordl_internal_get_chunk() const;

constexpr ::Voxels::Chunk*& __cordl_internal_get_chunk() ;

constexpr void __cordl_internal_set_chunk(::Voxels::Chunk*  value) ;

/// @brief Method .ctor, addr 0x5db0008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerlinVoxelGenerator___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerlinVoxelGenerator___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerlinVoxelGenerator___c__DisplayClass2_0(PerlinVoxelGenerator___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerlinVoxelGenerator___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerlinVoxelGenerator___c__DisplayClass2_0(PerlinVoxelGenerator___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5017};

/// @brief Field chunk, offset: 0x10, size: 0x8, def value: None
 ::Voxels::Chunk*  ___chunk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0, ___chunk) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def Voxels
