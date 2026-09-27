#pragma once
// IWYU pragma private; include "Voxels/MarchingCubesLookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarchingCubesLookup)
// Forward declare root types
namespace Voxels {
class MarchingCubesLookup;
}
// Write type traits
MARK_REF_T(::Voxels::MarchingCubesLookup*);
DEFINE_IL2CPP_CLASS(::Voxels::MarchingCubesLookup*, "Voxels", "MarchingCubesLookup");
// [BurstCompile]
// Dependencies System.Object, Unity.Mathematics.float3, Unity.Mathematics.int2
namespace Voxels {
// Is value type: false
// CS Name: Voxels.MarchingCubesLookup
class CORDL_TYPE MarchingCubesLookup : public ::System::Object {
public:
// Declarations
/// @brief Field CornerOffsets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CornerOffsets, put=setStaticF_CornerOffsets)) ::ArrayW<::Unity::Mathematics::float3>  CornerOffsets;

/// @brief Field EdgeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EdgeTable, put=setStaticF_EdgeTable)) ::ArrayW<int32_t>  EdgeTable;

/// @brief Field EdgeVertices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EdgeVertices, put=setStaticF_EdgeVertices)) ::ArrayW<::Unity::Mathematics::int2>  EdgeVertices;

/// @brief Field TriTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TriTable, put=setStaticF_TriTable)) ::ArrayW<int32_t>  TriTable;

static inline ::ArrayW<::Unity::Mathematics::float3> getStaticF_CornerOffsets() ;

static inline ::ArrayW<int32_t> getStaticF_EdgeTable() ;

static inline ::ArrayW<::Unity::Mathematics::int2> getStaticF_EdgeVertices() ;

static inline ::ArrayW<int32_t> getStaticF_TriTable() ;

static inline void setStaticF_CornerOffsets(::ArrayW<::Unity::Mathematics::float3>  value) ;

static inline void setStaticF_EdgeTable(::ArrayW<int32_t>  value) ;

static inline void setStaticF_EdgeVertices(::ArrayW<::Unity::Mathematics::int2>  value) ;

static inline void setStaticF_TriTable(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarchingCubesLookup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarchingCubesLookup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MarchingCubesLookup(MarchingCubesLookup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarchingCubesLookup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarchingCubesLookup(MarchingCubesLookup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::MarchingCubesLookup) == 0x10, "Size mismatch!");

} // namespace end def Voxels
