#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/FaceAlignmentBoxFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FaceAlignmentBoxFitter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace Technie::PhysicsCreator {
class ConstructionPlane;
}
namespace Technie::PhysicsCreator {
class TriangleBucket;
}
namespace Technie::PhysicsCreator {
class Triangle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class FaceAlignmentBoxFitter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::FaceAlignmentBoxFitter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::FaceAlignmentBoxFitter*, "Technie.PhysicsCreator", "FaceAlignmentBoxFitter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.FaceAlignmentBoxFitter
class CORDL_TYPE FaceAlignmentBoxFitter : public ::System::Object {
public:
// Declarations
/// @brief Method CreateConstructionPlane, addr 0xadc5e00, size 0x1c8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::ConstructionPlane* CreateConstructionPlane(::Technie::PhysicsCreator::TriangleBucket*  primaryBucket, ::Technie::PhysicsCreator::TriangleBucket*  secondaryBucket, ::Technie::PhysicsCreator::TriangleBucket*  tertiaryBucket) ;

/// @brief Method FindBestBucket, addr 0xadc57e4, size 0x398, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::TriangleBucket* FindBestBucket(::Technie::PhysicsCreator::Triangle*  tri, float_t  thresholdAngleDeg, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*  buckets) ;

/// @brief Method Fit, addr 0xadc50a8, size 0x3f4, virtual false, abstract: false, final false
inline void Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method MergeClosestBuckets, addr 0xadc5b7c, size 0x284, virtual false, abstract: false, final false
inline void MergeClosestBuckets(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*  buckets) ;

static inline ::Technie::PhysicsCreator::FaceAlignmentBoxFitter* New_ctor() ;

/// @brief Method .ctor, addr 0xadc50a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FaceAlignmentBoxFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FaceAlignmentBoxFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FaceAlignmentBoxFitter(FaceAlignmentBoxFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FaceAlignmentBoxFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FaceAlignmentBoxFitter(FaceAlignmentBoxFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::FaceAlignmentBoxFitter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
