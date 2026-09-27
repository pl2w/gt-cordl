#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/VhacdParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VhacdParameters)
// Forward declare root types
namespace Technie::PhysicsCreator {
class VhacdParameters;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::VhacdParameters*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::VhacdParameters*, "Technie.PhysicsCreator", "VhacdParameters");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.VhacdParameters
class CORDL_TYPE VhacdParameters : public ::System::Object {
public:
// Declarations
/// @brief Field alpha, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_alpha, put=__cordl_internal_set_alpha)) float_t  alpha;

/// @brief Field beta, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_beta, put=__cordl_internal_set_beta)) float_t  beta;

/// @brief Field concavity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_concavity, put=__cordl_internal_set_concavity)) float_t  concavity;

/// @brief Field convexhullApproximation, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_convexhullApproximation, put=__cordl_internal_set_convexhullApproximation)) uint32_t  convexhullApproximation;

/// @brief Field convexhullDownsampling, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_convexhullDownsampling, put=__cordl_internal_set_convexhullDownsampling)) uint32_t  convexhullDownsampling;

/// @brief Field maxConvexHulls, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConvexHulls, put=__cordl_internal_set_maxConvexHulls)) uint32_t  maxConvexHulls;

/// @brief Field maxNumVerticesPerCH, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNumVerticesPerCH, put=__cordl_internal_set_maxNumVerticesPerCH)) uint32_t  maxNumVerticesPerCH;

/// @brief Field minVolumePerCH, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVolumePerCH, put=__cordl_internal_set_minVolumePerCH)) float_t  minVolumePerCH;

/// @brief Field mode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) uint32_t  mode;

/// @brief Field oclAcceleration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_oclAcceleration, put=__cordl_internal_set_oclAcceleration)) uint32_t  oclAcceleration;

/// @brief Field pca, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_pca, put=__cordl_internal_set_pca)) uint32_t  pca;

/// @brief Field planeDownsampling, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_planeDownsampling, put=__cordl_internal_set_planeDownsampling)) uint32_t  planeDownsampling;

/// @brief Field projectHullVertices, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_projectHullVertices, put=__cordl_internal_set_projectHullVertices)) bool  projectHullVertices;

/// @brief Field resolution, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolution, put=__cordl_internal_set_resolution)) uint32_t  resolution;

static inline ::Technie::PhysicsCreator::VhacdParameters* New_ctor() ;

constexpr float_t const& __cordl_internal_get_alpha() const;

constexpr float_t& __cordl_internal_get_alpha() ;

constexpr float_t const& __cordl_internal_get_beta() const;

constexpr float_t& __cordl_internal_get_beta() ;

constexpr float_t const& __cordl_internal_get_concavity() const;

constexpr float_t& __cordl_internal_get_concavity() ;

constexpr uint32_t const& __cordl_internal_get_convexhullApproximation() const;

constexpr uint32_t& __cordl_internal_get_convexhullApproximation() ;

constexpr uint32_t const& __cordl_internal_get_convexhullDownsampling() const;

constexpr uint32_t& __cordl_internal_get_convexhullDownsampling() ;

constexpr uint32_t const& __cordl_internal_get_maxConvexHulls() const;

constexpr uint32_t& __cordl_internal_get_maxConvexHulls() ;

constexpr uint32_t const& __cordl_internal_get_maxNumVerticesPerCH() const;

constexpr uint32_t& __cordl_internal_get_maxNumVerticesPerCH() ;

constexpr float_t const& __cordl_internal_get_minVolumePerCH() const;

constexpr float_t& __cordl_internal_get_minVolumePerCH() ;

constexpr uint32_t const& __cordl_internal_get_mode() const;

constexpr uint32_t& __cordl_internal_get_mode() ;

constexpr uint32_t const& __cordl_internal_get_oclAcceleration() const;

constexpr uint32_t& __cordl_internal_get_oclAcceleration() ;

constexpr uint32_t const& __cordl_internal_get_pca() const;

constexpr uint32_t& __cordl_internal_get_pca() ;

constexpr uint32_t const& __cordl_internal_get_planeDownsampling() const;

constexpr uint32_t& __cordl_internal_get_planeDownsampling() ;

constexpr bool const& __cordl_internal_get_projectHullVertices() const;

constexpr bool& __cordl_internal_get_projectHullVertices() ;

constexpr uint32_t const& __cordl_internal_get_resolution() const;

constexpr uint32_t& __cordl_internal_get_resolution() ;

constexpr void __cordl_internal_set_alpha(float_t  value) ;

constexpr void __cordl_internal_set_beta(float_t  value) ;

constexpr void __cordl_internal_set_concavity(float_t  value) ;

constexpr void __cordl_internal_set_convexhullApproximation(uint32_t  value) ;

constexpr void __cordl_internal_set_convexhullDownsampling(uint32_t  value) ;

constexpr void __cordl_internal_set_maxConvexHulls(uint32_t  value) ;

constexpr void __cordl_internal_set_maxNumVerticesPerCH(uint32_t  value) ;

constexpr void __cordl_internal_set_minVolumePerCH(float_t  value) ;

constexpr void __cordl_internal_set_mode(uint32_t  value) ;

constexpr void __cordl_internal_set_oclAcceleration(uint32_t  value) ;

constexpr void __cordl_internal_set_pca(uint32_t  value) ;

constexpr void __cordl_internal_set_planeDownsampling(uint32_t  value) ;

constexpr void __cordl_internal_set_projectHullVertices(bool  value) ;

constexpr void __cordl_internal_set_resolution(uint32_t  value) ;

/// @brief Method .ctor, addr 0xadce0ec, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VhacdParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VhacdParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VhacdParameters(VhacdParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VhacdParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VhacdParameters(VhacdParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30525};

/// [Tooltip("maximum concavity")]
/// [Range(0, 1)]
/// @brief Field concavity, offset: 0x10, size: 0x4, def value: None
 float_t  ___concavity;

/// [Tooltip("controls the bias toward clipping along symmetry planes")]
/// [Range(0, 1)]
/// @brief Field alpha, offset: 0x14, size: 0x4, def value: None
 float_t  ___alpha;

/// [Tooltip("controls the bias toward clipping along revolution axes")]
/// [Range(0, 1)]
/// @brief Field beta, offset: 0x18, size: 0x4, def value: None
 float_t  ___beta;

/// [Tooltip("controls the adaptive sampling of the generated convex-hulls")]
/// [Range(0, 0.01)]
/// @brief Field minVolumePerCH, offset: 0x1c, size: 0x4, def value: None
 float_t  ___minVolumePerCH;

/// [Tooltip("maximum number of voxels generated during the voxelization stage")]
/// [Range(10000, 64000000)]
/// @brief Field resolution, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___resolution;

/// [Tooltip("controls the maximum number of triangles per convex-hull")]
/// [Range(4, 1024)]
/// @brief Field maxNumVerticesPerCH, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___maxNumVerticesPerCH;

/// [Tooltip("controls the granularity of the search for the \"best\" clipping plane")]
/// [Range(1, 16)]
/// @brief Field planeDownsampling, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___planeDownsampling;

/// [Tooltip("controls the precision of the convex-hull generation process during the clipping plane selection stage")]
/// [Range(1, 16)]
/// @brief Field convexhullDownsampling, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___convexhullDownsampling;

/// [Tooltip("enable/disable normalizing the mesh before applying the convex decomposition")]
/// [Range(0, 1)]
/// @brief Field pca, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___pca;

/// [Tooltip("0: voxel-based (recommended), 1: tetrahedron-based")]
/// [Range(0, 1)]
/// @brief Field mode, offset: 0x34, size: 0x4, def value: None
 uint32_t  ___mode;

/// [Range(0, 1)]
/// @brief Field convexhullApproximation, offset: 0x38, size: 0x4, def value: None
 uint32_t  ___convexhullApproximation;

/// [Tooltip("Enable OpenCL acceleration")]
/// [Range(0, 1)]
/// @brief Field oclAcceleration, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ___oclAcceleration;

/// @brief Field maxConvexHulls, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___maxConvexHulls;

/// [Tooltip("This will project the output convex hull vertices onto the original source mesh to increase the floating point accuracy of the results")]
/// @brief Field projectHullVertices, offset: 0x44, size: 0x1, def value: None
 bool  ___projectHullVertices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___concavity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___alpha) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___beta) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___minVolumePerCH) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___resolution) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___maxNumVerticesPerCH) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___planeDownsampling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___convexhullDownsampling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___pca) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___mode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___convexhullApproximation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___oclAcceleration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___maxConvexHulls) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::VhacdParameters, ___projectHullVertices) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::VhacdParameters) == 0x48, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
