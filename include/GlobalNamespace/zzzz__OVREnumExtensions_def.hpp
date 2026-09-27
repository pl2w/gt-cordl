#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVREnumExtensions)
namespace GlobalNamespace {
struct OVRHandSkeletonVersion;
}
namespace GlobalNamespace {
struct OVRHand_Hand;
}
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
// Forward declare root types
namespace GlobalNamespace {
class OVREnumExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVREnumExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVREnumExtensions*, "", "OVREnumExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVREnumExtensions
class CORDL_TYPE OVREnumExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AsHandType, addr 0xa6617c0, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRHand_Hand AsHandType(::GlobalNamespace::OVRMesh_MeshType  meshType) ;

/// [Extension]
/// @brief Method AsHandType, addr 0xa6616e8, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRHand_Hand AsHandType(::GlobalNamespace::OVRSkeleton_SkeletonType  skeletonType) ;

/// [Extension]
/// [Obsolete("Use the overload which takes an OVRHandSkeletonVersioninstead.")]
/// @brief Method AsMeshType, addr 0xa661748, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRMesh_MeshType AsMeshType(::GlobalNamespace::OVRHand_Hand  hand) ;

/// [Extension]
/// @brief Method AsMeshType, addr 0xa661778, size 0x2c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRMesh_MeshType AsMeshType(::GlobalNamespace::OVRHand_Hand  hand, ::GlobalNamespace::OVRHandSkeletonVersion  version) ;

/// [Extension]
/// [Obsolete("Use the overload which takes an OVRHandSkeletonVersioninstead.")]
/// @brief Method AsSkeletonType, addr 0xa661708, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRSkeleton_SkeletonType AsSkeletonType(::GlobalNamespace::OVRHand_Hand  hand) ;

/// [Extension]
/// @brief Method AsSkeletonType, addr 0xa66171c, size 0x2c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRSkeleton_SkeletonType AsSkeletonType(::GlobalNamespace::OVRHand_Hand  hand, ::GlobalNamespace::OVRHandSkeletonVersion  version) ;

/// [Extension]
/// @brief Method IsHand, addr 0xa6617b0, size 0x10, virtual false, abstract: false, final false
static inline bool IsHand(::GlobalNamespace::OVRMesh_MeshType  meshType) ;

/// [Extension]
/// @brief Method IsHand, addr 0xa6616b0, size 0x10, virtual false, abstract: false, final false
static inline bool IsHand(::GlobalNamespace::OVRSkeleton_SkeletonType  skeletonType) ;

/// [Extension]
/// @brief Method IsLeft, addr 0xa6617a4, size 0xc, virtual false, abstract: false, final false
static inline bool IsLeft(::GlobalNamespace::OVRMesh_MeshType  type) ;

/// [Extension]
/// @brief Method IsLeft, addr 0xa6616dc, size 0xc, virtual false, abstract: false, final false
static inline bool IsLeft(::GlobalNamespace::OVRSkeleton_SkeletonType  type) ;

/// [Extension]
/// @brief Method IsOVRHandMesh, addr 0xa66176c, size 0xc, virtual false, abstract: false, final false
static inline bool IsOVRHandMesh(::GlobalNamespace::OVRMesh_MeshType  meshType) ;

/// [Extension]
/// @brief Method IsOVRHandSkeleton, addr 0xa6616d0, size 0xc, virtual false, abstract: false, final false
static inline bool IsOVRHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType  skeletonType) ;

/// [Extension]
/// @brief Method IsOpenXRHandMesh, addr 0xa66175c, size 0x10, virtual false, abstract: false, final false
static inline bool IsOpenXRHandMesh(::GlobalNamespace::OVRMesh_MeshType  meshType) ;

/// [Extension]
/// @brief Method IsOpenXRHandSkeleton, addr 0xa6616c0, size 0x10, virtual false, abstract: false, final false
static inline bool IsOpenXRHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType  skeletonType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVREnumExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVREnumExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVREnumExtensions(OVREnumExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVREnumExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVREnumExtensions(OVREnumExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12640};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVREnumExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
