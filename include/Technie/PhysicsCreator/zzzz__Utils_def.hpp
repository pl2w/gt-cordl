#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator {
class IHull;
}
namespace Technie::PhysicsCreator {
class UnpackedMesh;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class Utils;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Utils*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Utils*, "Technie.PhysicsCreator", "Utils");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Method AsymtopicProgression, addr 0xadd7d28, size 0x10, virtual false, abstract: false, final false
static inline float_t AsymtopicProgression(float_t  inputProgress, float_t  maxProgression, float_t  rate) ;

/// @brief Method CalcTriangleArea, addr 0xadd7c18, size 0xfc, virtual false, abstract: false, final false
static inline float_t CalcTriangleArea(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

/// @brief Method Clip, addr 0xadd79e8, size 0x230, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> Clip(::UnityEngine::Mesh*  boundingMesh, ::UnityEngine::Mesh*  inputMesh) ;

/// @brief Method Contains, addr 0xadd7780, size 0x268, virtual false, abstract: false, final false
static inline bool Contains(::UnityEngine::Plane  toTest, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*  planes) ;

/// @brief Method ConvertToPlanes, addr 0xadd6f90, size 0x7f0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Plane> ConvertToPlanes(::UnityEngine::Mesh*  convexMesh, bool  show) ;

/// @brief Method CreateSkewableTRS, addr 0xadd6d40, size 0x208, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 CreateSkewableTRS(::UnityEngine::Transform*  target) ;

/// @brief Method FindBoneIndex, addr 0xadd7d38, size 0xd4, virtual false, abstract: false, final false
static inline int32_t FindBoneIndex(::UnityEngine::SkinnedMeshRenderer*  skinnedRenderer, ::UnityEngine::Transform*  bone) ;

/// @brief Method Inflate, addr 0xadd6f48, size 0x48, virtual false, abstract: false, final false
static inline void Inflate(::UnityEngine::Vector3  point, ::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max) ;

/// @brief Method IsWeightAboveThreshold, addr 0xadd7f08, size 0x18, virtual false, abstract: false, final false
static inline bool IsWeightAboveThreshold(int32_t  boneIndex, float_t  boneWeight, int32_t  ourIndex, float_t  minThreshold, float_t  maxThreshold) ;

/// @brief Method IsWeightAboveThreshold, addr 0xadd7e0c, size 0xfc, virtual false, abstract: false, final false
static inline bool IsWeightAboveThreshold(::UnityEngine::BoneWeight  weights, int32_t  ownBoneIndex, float_t  minThreshold, float_t  maxThreshold) ;

/// @brief Method NumVerticesForBone, addr 0xadd7f20, size 0xc4, virtual false, abstract: false, final false
static inline int32_t NumVerticesForBone(::Technie::PhysicsCreator::UnpackedMesh*  mesh, ::UnityEngine::Transform*  bone, float_t  minThreshold, float_t  maxThreshold) ;

/// @brief Method TimeProgression, addr 0xadd7d14, size 0x14, virtual false, abstract: false, final false
static inline float_t TimeProgression(float_t  elapsedTime, float_t  maxTime) ;

/// @brief Method UpdateCachedVertices, addr 0xadd7fe4, size 0x414, virtual false, abstract: false, final false
static inline void UpdateCachedVertices(::Technie::PhysicsCreator::IHull*  hull, ::UnityEngine::Mesh*  srcMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::Utils) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
