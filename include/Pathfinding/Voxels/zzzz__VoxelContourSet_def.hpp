#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelContourSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
CORDL_MODULE_EXPORT(VoxelContourSet)
namespace Pathfinding::Voxels {
struct VoxelContour;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::Voxels {
class VoxelContourSet;
}
// Write type traits
MARK_REF_T(::Pathfinding::Voxels::VoxelContourSet*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::VoxelContourSet*, "Pathfinding.Voxels", "VoxelContourSet");
// Dependencies System.Object, UnityEngine.Bounds
namespace Pathfinding::Voxels {
// Is value type: false
// CS Name: Pathfinding.Voxels.VoxelContourSet
class CORDL_TYPE VoxelContourSet : public ::System::Object {
public:
// Declarations
/// @brief Field bounds, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field conts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_conts, put=__cordl_internal_set_conts)) ::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>*  conts;

static inline ::Pathfinding::Voxels::VoxelContourSet* New_ctor() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>* const& __cordl_internal_get_conts() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>*& __cordl_internal_get_conts() ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_conts(::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>*  value) ;

/// @brief Method .ctor, addr 0x5ebf82c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelContourSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelContourSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelContourSet(VoxelContourSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelContourSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelContourSet(VoxelContourSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21430};

/// @brief Field conts, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>*  ___conts;

/// @brief Field bounds, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::VoxelContourSet, ___conts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelContourSet, ___bounds) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::VoxelContourSet) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
