#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/NavMeshSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AI/zzzz__NavMeshQueryFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshSurface)
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class NavMeshSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::NavMeshSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::NavMeshSurface*, "Oculus.Interaction.Surfaces", "NavMeshSurface");
// Dependencies UnityEngine.AI.NavMeshQueryFilter, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.NavMeshSurface
class CORDL_TYPE NavMeshSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CalculateHitNormals, put=set_CalculateHitNormals)) bool  CalculateHitNormals;

 __declspec(property(get=get_SnapDistance, put=set_SnapDistance)) float_t  SnapDistance;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

 __declspec(property(get=get_VoxelSize, put=set_VoxelSize)) float_t  VoxelSize;

/// @brief Field _agentIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__agentIndex, put=__cordl_internal_set__agentIndex)) int32_t  _agentIndex;

/// @brief Field _areaMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__areaMask, put=__cordl_internal_set__areaMask)) int32_t  _areaMask;

/// @brief Field _areaName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__areaName, put=__cordl_internal_set__areaName)) ::StringW  _areaName;

/// @brief Field _calculateNormals, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__calculateNormals, put=__cordl_internal_set__calculateNormals)) bool  _calculateNormals;

/// @brief Field _navMeshQuery, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__navMeshQuery, put=__cordl_internal_set__navMeshQuery)) ::UnityEngine::AI::NavMeshQueryFilter  _navMeshQuery;

/// @brief Field _openUnityNavigation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__openUnityNavigation, put=__cordl_internal_set__openUnityNavigation)) ::StringW  _openUnityNavigation;

/// @brief Field _snapDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapDistance, put=__cordl_internal_set__snapDistance)) float_t  _snapDistance;

/// @brief Field _started, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _voxelSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__voxelSize, put=__cordl_internal_set__voxelSize)) float_t  _voxelSize;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Method AlignHits, addr 0xa4b74b0, size 0x1f8, virtual false, abstract: false, final false
inline bool AlignHits(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, ::UnityEngine::Ray  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance) ;

/// @brief Method ClosestSurfacePoint, addr 0xa4b6ee8, size 0xcc, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance) ;

/// @brief Method GetNavMeshNormal, addr 0xa4b7370, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNavMeshNormal(::UnityEngine::Vector3  navMeshPoint) ;

/// @brief Method InjectOptionalAgentIndex, addr 0xa4b79e8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalAgentIndex(int32_t  agentIndex) ;

/// @brief Method InjectOptionalAreaName, addr 0xa4b79e0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalAreaName(::StringW  areaName) ;

static inline ::Oculus::Interaction::Surfaces::NavMeshSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b7a34, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b7a30, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method OpenUnityNavigation, addr 0xa4b79dc, size 0x4, virtual false, abstract: false, final false
inline void OpenUnityNavigation() ;

/// @brief Method Raycast, addr 0xa4b6fb4, size 0x3bc, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance) ;

/// @brief Method SnapSurfaceHit, addr 0xa4b76a8, size 0xe8, virtual false, abstract: false, final false
inline bool SnapSurfaceHit(::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, ::UnityEngine::Vector3  navMeshPoint) ;

/// @brief Method Start, addr 0xa4b6e2c, size 0xbc, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <GetNavMeshNormal>g__CalculateStep|25_1, addr 0xa4b7a38, size 0xac, virtual false, abstract: false, final false
inline bool _GetNavMeshNormal_g__CalculateStep_25_1(::UnityEngine::Vector3  centre, ::UnityEngine::Vector3  stepDir, ::by_ref<::UnityEngine::Vector3>  value) ;

/// [CompilerGenerated]
/// @brief Method <GetNavMeshNormal>g__CalculateTangent|25_0, addr 0xa4b7790, size 0x24c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _GetNavMeshNormal_g__CalculateTangent_25_0(::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  centre) ;

constexpr int32_t const& __cordl_internal_get__agentIndex() const;

constexpr int32_t& __cordl_internal_get__agentIndex() ;

constexpr int32_t const& __cordl_internal_get__areaMask() const;

constexpr int32_t& __cordl_internal_get__areaMask() ;

constexpr ::StringW const& __cordl_internal_get__areaName() const;

constexpr ::StringW& __cordl_internal_get__areaName() ;

constexpr bool const& __cordl_internal_get__calculateNormals() const;

constexpr bool& __cordl_internal_get__calculateNormals() ;

constexpr ::UnityEngine::AI::NavMeshQueryFilter const& __cordl_internal_get__navMeshQuery() const;

constexpr ::UnityEngine::AI::NavMeshQueryFilter& __cordl_internal_get__navMeshQuery() ;

constexpr ::StringW const& __cordl_internal_get__openUnityNavigation() const;

constexpr ::StringW& __cordl_internal_get__openUnityNavigation() ;

constexpr float_t const& __cordl_internal_get__snapDistance() const;

constexpr float_t& __cordl_internal_get__snapDistance() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__voxelSize() const;

constexpr float_t& __cordl_internal_get__voxelSize() ;

constexpr void __cordl_internal_set__agentIndex(int32_t  value) ;

constexpr void __cordl_internal_set__areaMask(int32_t  value) ;

constexpr void __cordl_internal_set__areaName(::StringW  value) ;

constexpr void __cordl_internal_set__calculateNormals(bool  value) ;

constexpr void __cordl_internal_set__navMeshQuery(::UnityEngine::AI::NavMeshQueryFilter  value) ;

constexpr void __cordl_internal_set__openUnityNavigation(::StringW  value) ;

constexpr void __cordl_internal_set__snapDistance(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__voxelSize(float_t  value) ;

/// @brief Method .ctor, addr 0xa4b79f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CalculateHitNormals, addr 0xa4b6e14, size 0x8, virtual false, abstract: false, final false
inline bool get_CalculateHitNormals() ;

/// @brief Method get_SnapDistance, addr 0xa4b6de8, size 0x8, virtual false, abstract: false, final false
inline float_t get_SnapDistance() ;

/// @brief Method get_Transform, addr 0xa4b6e24, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Method get_VoxelSize, addr 0xa4b6df8, size 0x8, virtual false, abstract: false, final false
inline float_t get_VoxelSize() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Method set_CalculateHitNormals, addr 0xa4b6e1c, size 0x8, virtual false, abstract: false, final false
inline void set_CalculateHitNormals(bool  value) ;

/// @brief Method set_SnapDistance, addr 0xa4b6df0, size 0x8, virtual false, abstract: false, final false
inline void set_SnapDistance(float_t  value) ;

/// @brief Method set_VoxelSize, addr 0xa4b6e00, size 0x14, virtual false, abstract: false, final false
inline void set_VoxelSize(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshSurface(NavMeshSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshSurface(NavMeshSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16232};

/// [SerializeField]
/// [Optional]
/// [Tooltip("Allows the specification of an area name to be used in association with Unity\'s NavMesh Areas feature.For more information, see Unity\'s documentation on NavMesh Areas.")]
/// @brief Field _areaName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____areaName;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Allows the specification of the agent index to be used in association with Unity\'s NavMesh Agent feature.For more information, see Unity\'s documentation on NavMesh Agents.")]
/// @brief Field _agentIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ____agentIndex;

/// [SerializeField]
/// [Min(0)]
/// @brief Field _snapDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ____snapDistance;

/// [SerializeField]
/// [Min(0)]
/// @brief Field _voxelSize, offset: 0x30, size: 0x4, def value: None
 float_t  ____voxelSize;

/// [SerializeField]
/// @brief Field _calculateNormals, offset: 0x34, size: 0x1, def value: None
 bool  ____calculateNormals;

/// [InspectorButton("OpenUnityNavigation")]
/// [SerializeField]
/// @brief Field _openUnityNavigation, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____openUnityNavigation;

/// @brief Field _areaMask, offset: 0x40, size: 0x4, def value: None
 int32_t  ____areaMask;

/// @brief Field _navMeshQuery, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::AI::NavMeshQueryFilter  ____navMeshQuery;

/// @brief Field _started, offset: 0x58, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____areaName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____agentIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____snapDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____voxelSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____calculateNormals) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____openUnityNavigation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____areaMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____navMeshQuery) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::NavMeshSurface, ____started) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::NavMeshSurface) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
