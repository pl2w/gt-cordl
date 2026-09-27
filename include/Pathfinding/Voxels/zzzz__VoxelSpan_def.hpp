#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelSpan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelSpan)
// Forward declare root types
namespace Pathfinding::Voxels {
class VoxelSpan;
}
// Write type traits
MARK_REF_T(::Pathfinding::Voxels::VoxelSpan*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::VoxelSpan*, "Pathfinding.Voxels", "VoxelSpan");
// Dependencies System.Object
namespace Pathfinding::Voxels {
// Is value type: false
// CS Name: Pathfinding.Voxels.VoxelSpan
class CORDL_TYPE VoxelSpan : public ::System::Object {
public:
// Declarations
/// @brief Field area, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) int32_t  area;

/// @brief Field bottom, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_bottom, put=__cordl_internal_set_bottom)) uint32_t  bottom;

/// @brief Field next, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Pathfinding::Voxels::VoxelSpan*  next;

/// @brief Field top, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) uint32_t  top;

static inline ::Pathfinding::Voxels::VoxelSpan* New_ctor(uint32_t  b, uint32_t  t, int32_t  area) ;

constexpr int32_t const& __cordl_internal_get_area() const;

constexpr int32_t& __cordl_internal_get_area() ;

constexpr uint32_t const& __cordl_internal_get_bottom() const;

constexpr uint32_t& __cordl_internal_get_bottom() ;

constexpr ::Pathfinding::Voxels::VoxelSpan* const& __cordl_internal_get_next() const;

constexpr ::Pathfinding::Voxels::VoxelSpan*& __cordl_internal_get_next() ;

constexpr uint32_t const& __cordl_internal_get_top() const;

constexpr uint32_t& __cordl_internal_get_top() ;

constexpr void __cordl_internal_set_area(int32_t  value) ;

constexpr void __cordl_internal_set_bottom(uint32_t  value) ;

constexpr void __cordl_internal_set_next(::Pathfinding::Voxels::VoxelSpan*  value) ;

constexpr void __cordl_internal_set_top(uint32_t  value) ;

/// @brief Method .ctor, addr 0x5ebf9ec, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(uint32_t  b, uint32_t  t, int32_t  area) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelSpan() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpan", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelSpan(VoxelSpan && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpan", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelSpan(VoxelSpan const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21436};

/// @brief Field bottom, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___bottom;

/// @brief Field top, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___top;

/// @brief Field next, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Voxels::VoxelSpan*  ___next;

/// @brief Field area, offset: 0x20, size: 0x4, def value: None
 int32_t  ___area;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Voxels::VoxelSpan, ___bottom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelSpan, ___top) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelSpan, ___next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Voxels::VoxelSpan, ___area) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Voxels::VoxelSpan) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
