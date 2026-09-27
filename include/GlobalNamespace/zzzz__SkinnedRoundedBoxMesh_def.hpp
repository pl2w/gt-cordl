#pragma once
// IWYU pragma private; include "GlobalNamespace/SkinnedRoundedBoxMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedRoundedBoxMesh)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SkinnedRoundedBoxMesh;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SkinnedRoundedBoxMesh*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SkinnedRoundedBoxMesh*, "", "SkinnedRoundedBoxMesh");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SkinnedRoundedBoxMesh
class CORDL_TYPE SkinnedRoundedBoxMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _borderRadius, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__borderRadius, put=__cordl_internal_set__borderRadius)) float_t  _borderRadius;

/// @brief Field _bottomLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bottomLeft, put=__cordl_internal_set__bottomLeft)) ::UnityW<::UnityEngine::Transform>  _bottomLeft;

/// @brief Field _bottomRight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bottomRight, put=__cordl_internal_set__bottomRight)) ::UnityW<::UnityEngine::Transform>  _bottomRight;

/// @brief Field _cornerSegmentCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__cornerSegmentCount, put=__cordl_internal_set__cornerSegmentCount)) int32_t  _cornerSegmentCount;

/// @brief Field _cylinderFaceCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__cylinderFaceCount, put=__cordl_internal_set__cylinderFaceCount)) int32_t  _cylinderFaceCount;

/// @brief Field _cylinderRadius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cylinderRadius, put=__cordl_internal_set__cylinderRadius)) float_t  _cylinderRadius;

/// @brief Field _skinnedMeshRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__skinnedMeshRenderer, put=__cordl_internal_set__skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _skinnedMeshRenderer;

/// @brief Field _topLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__topLeft, put=__cordl_internal_set__topLeft)) ::UnityW<::UnityEngine::Transform>  _topLeft;

/// @brief Field _topRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__topRight, put=__cordl_internal_set__topRight)) ::UnityW<::UnityEngine::Transform>  _topRight;

/// @brief Field generateOnStart, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_generateOnStart, put=__cordl_internal_set_generateOnStart)) bool  generateOnStart;

/// @brief Method GenerateArcPath, addr 0xa429f14, size 0x170, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> GenerateArcPath(float_t  startAngle, float_t  endAngle, int32_t  steps, float_t  radius, bool  closed) ;

/// @brief Method GenerateCylinderAroundPath, addr 0xa42a084, size 0x408, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> GenerateCylinderAroundPath(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  path, int32_t  cylinderFaceCount, float_t  cylinderRadius) ;

/// @brief Method GenerateCylinderIndices, addr 0xa42a48c, size 0x37c, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> GenerateCylinderIndices(int32_t  cornerSegmentCount, int32_t  cylinderFaceCount) ;

/// @brief Method GenerateMesh, addr 0xa429a00, size 0x514, virtual false, abstract: false, final false
static inline void GenerateMesh(int32_t  cornerSegmentCount, float_t  borderRadius, int32_t  cylinderFaceCount, float_t  cylinderRadius, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer, ::UnityEngine::Transform*  topLeft, ::UnityEngine::Transform*  topRight, ::UnityEngine::Transform*  bottomLeft, ::UnityEngine::Transform*  bottomRight) ;

/// [ContextMenu("Generate Mesh")]
/// @brief Method GenerateMeshFromMenu, addr 0xa42a940, size 0x1c, virtual false, abstract: false, final false
inline void GenerateMeshFromMenu() ;

static inline ::GlobalNamespace::SkinnedRoundedBoxMesh* New_ctor() ;

/// @brief Method PushBoneWeigth, addr 0xa42a808, size 0x138, virtual false, abstract: false, final false
static inline void PushBoneWeigth(int32_t  boneIndex, ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*  weights, int32_t  cornerSegmentCount, int32_t  cylinderFaceCount) ;

/// @brief Method Start, addr 0xa4299d8, size 0x28, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__borderRadius() const;

constexpr float_t& __cordl_internal_get__borderRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__bottomLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__bottomLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__bottomRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__bottomRight() ;

constexpr int32_t const& __cordl_internal_get__cornerSegmentCount() const;

constexpr int32_t& __cordl_internal_get__cornerSegmentCount() ;

constexpr int32_t const& __cordl_internal_get__cylinderFaceCount() const;

constexpr int32_t& __cordl_internal_get__cylinderFaceCount() ;

constexpr float_t const& __cordl_internal_get__cylinderRadius() const;

constexpr float_t& __cordl_internal_get__cylinderRadius() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__skinnedMeshRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__topLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__topLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__topRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__topRight() ;

constexpr bool const& __cordl_internal_get_generateOnStart() const;

constexpr bool& __cordl_internal_get_generateOnStart() ;

constexpr void __cordl_internal_set__borderRadius(float_t  value) ;

constexpr void __cordl_internal_set__bottomLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__bottomRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__cornerSegmentCount(int32_t  value) ;

constexpr void __cordl_internal_set__cylinderFaceCount(int32_t  value) ;

constexpr void __cordl_internal_set__cylinderRadius(float_t  value) ;

constexpr void __cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__topLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__topRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_generateOnStart(bool  value) ;

/// @brief Method .ctor, addr 0xa42a95c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedRoundedBoxMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedRoundedBoxMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedRoundedBoxMesh(SkinnedRoundedBoxMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedRoundedBoxMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedRoundedBoxMesh(SkinnedRoundedBoxMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28246};

/// [SerializeField]
/// @brief Field _topLeft, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____topLeft;

/// [SerializeField]
/// @brief Field _topRight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____topRight;

/// [SerializeField]
/// @brief Field _bottomLeft, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____bottomLeft;

/// [SerializeField]
/// @brief Field _bottomRight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____bottomRight;

/// [SerializeField]
/// @brief Field _cornerSegmentCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ____cornerSegmentCount;

/// [SerializeField]
/// @brief Field _cylinderFaceCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ____cylinderFaceCount;

/// [SerializeField]
/// @brief Field _borderRadius, offset: 0x48, size: 0x4, def value: None
 float_t  ____borderRadius;

/// [SerializeField]
/// @brief Field _cylinderRadius, offset: 0x4c, size: 0x4, def value: None
 float_t  ____cylinderRadius;

/// [SerializeField]
/// @brief Field _skinnedMeshRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____skinnedMeshRenderer;

/// @brief Field generateOnStart, offset: 0x58, size: 0x1, def value: None
 bool  ___generateOnStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____topLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____topRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____bottomLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____bottomRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____cornerSegmentCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____cylinderFaceCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____borderRadius) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____cylinderRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ____skinnedMeshRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SkinnedRoundedBoxMesh, ___generateOnStart) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SkinnedRoundedBoxMesh) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
