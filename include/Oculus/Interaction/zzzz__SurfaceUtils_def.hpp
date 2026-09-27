#pragma once
// IWYU pragma private; include "Oculus/Interaction/SurfaceUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SurfaceUtils)
namespace Oculus::Interaction::Surfaces {
class ISurfacePatch;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class SurfaceUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SurfaceUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SurfaceUtils*, "Oculus.Interaction", "SurfaceUtils");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SurfaceUtils
class CORDL_TYPE SurfaceUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ComputeDepth, addr 0xa48d6c8, size 0x24, virtual false, abstract: false, final false
static inline float_t ComputeDepth(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius) ;

/// @brief Method ComputeDistanceAbove, addr 0xa48d2dc, size 0x184, virtual false, abstract: false, final false
static inline float_t ComputeDistanceAbove(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius) ;

/// @brief Method ComputeDistanceFrom, addr 0xa48d6ec, size 0x150, virtual false, abstract: false, final false
static inline float_t ComputeDistanceFrom(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius) ;

/// @brief Method ComputeTangentDistance, addr 0xa48d460, size 0x268, virtual false, abstract: false, final false
static inline float_t ComputeTangentDistance(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch, ::UnityEngine::Vector3  point, float_t  radius) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceUtils(SurfaceUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceUtils(SurfaceUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::SurfaceUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
