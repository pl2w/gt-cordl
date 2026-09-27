#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/Utility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utility)
namespace Pathfinding {
struct Int3;
}
// Forward declare root types
namespace Pathfinding::Voxels {
class Utility;
}
// Write type traits
MARK_REF_T(::Pathfinding::Voxels::Utility*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Voxels::Utility*, "Pathfinding.Voxels", "Utility");
// Dependencies System.Object
namespace Pathfinding::Voxels {
// Is value type: false
// CS Name: Pathfinding.Voxels.Utility
class CORDL_TYPE Utility : public ::System::Object {
public:
// Declarations
/// @brief Method Max, addr 0x5ec9580, size 0x14, virtual false, abstract: false, final false
static inline float_t Max(float_t  a, float_t  b, float_t  c) ;

/// @brief Method Min, addr 0x5ec956c, size 0x14, virtual false, abstract: false, final false
static inline float_t Min(float_t  a, float_t  b, float_t  c) ;

static inline ::Pathfinding::Voxels::Utility* New_ctor() ;

/// @brief Method RemoveDuplicateVertices, addr 0x5ec9594, size 0x330, virtual false, abstract: false, final false
static inline ::ArrayW<::Pathfinding::Int3> RemoveDuplicateVertices(::ArrayW<::Pathfinding::Int3>  vertices, ::ArrayW<int32_t>  triangles) ;

/// @brief Method .ctor, addr 0x5ec98c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utility(Utility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utility(Utility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Voxels::Utility) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Voxels
