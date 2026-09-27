#pragma once
// IWYU pragma private; include "Voxels/SurfaceNets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceNets)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Voxels {
struct SurfaceNetsBuffer;
}
// Forward declare root types
namespace Voxels {
class SurfaceNets;
}
// Write type traits
MARK_REF_T(::Voxels::SurfaceNets*);
DEFINE_IL2CPP_CLASS(::Voxels::SurfaceNets*, "Voxels", "SurfaceNets");
// Dependencies System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.SurfaceNets
class CORDL_TYPE SurfaceNets : public ::System::Object {
public:
// Declarations
/// @brief Method Generate, addr 0x5db6868, size 0x1b4, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle Generate(::Unity::Collections::NativeArray_1<uint8_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, ::Voxels::SurfaceNetsBuffer  buffer, ::Unity::Jobs::JobHandle  dependency) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceNets(SurfaceNets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceNets(SurfaceNets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Voxels::SurfaceNets) == 0x10, "Size mismatch!");

} // namespace end def Voxels
