#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMesh)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::AI {
struct NavMeshBuildSettings;
}
namespace UnityEngine::AI {
struct NavMeshDataInstance;
}
namespace UnityEngine::AI {
class NavMeshData;
}
namespace UnityEngine::AI {
struct NavMeshHit;
}
namespace UnityEngine::AI {
struct NavMeshLinkData;
}
namespace UnityEngine::AI {
struct NavMeshLinkInstance;
}
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine::AI {
struct NavMeshQueryFilter;
}
namespace UnityEngine::AI {
struct NavMeshTriangulation;
}
namespace UnityEngine::AI {
class NavMesh_OnNavMeshPreUpdate;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMesh;
}
namespace UnityEngine::AI {
class NavMesh_OnNavMeshPreUpdate;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMesh*);
MARK_REF_T(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMesh*, "UnityEngine.AI", "NavMesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*, "UnityEngine.AI", "NavMesh/OnNavMeshPreUpdate");
// [StaticAccessor("NavMeshBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/AI/NavMeshManager.h")]
// [NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
// [MovedFrom("UnityEngine")]
// Dependencies System.Object
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMesh
class CORDL_TYPE NavMesh : public ::System::Object {
public:
// Declarations
using OnNavMeshPreUpdate = ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate;

/// @brief Field onPreUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPreUpdate, put=setStaticF_onPreUpdate)) ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*  onPreUpdate;

/// @brief Method AddLink, addr 0xb520de4, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshLinkInstance AddLink(::UnityEngine::AI::NavMeshLinkData  link, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// [NativeName("AddLink")]
/// @brief Method AddLinkInternal, addr 0xb520e10, size 0x60, virtual false, abstract: false, final false
static inline int32_t AddLinkInternal(::UnityEngine::AI::NavMeshLinkData  link, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method AddLinkInternal_Injected, addr 0xb5210f8, size 0x54, virtual false, abstract: false, final false
static inline int32_t AddLinkInternal_Injected(::by_ref<::UnityEngine::AI::NavMeshLinkData>  link, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method AddNavMeshData, addr 0xb520be8, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshDataInstance AddNavMeshData(::UnityEngine::AI::NavMeshData*  navMeshData, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// [NativeName("LoadData")]
/// @brief Method AddNavMeshDataTransformedInternal, addr 0xb520cf0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t AddNavMeshDataTransformedInternal(::UnityEngine::AI::NavMeshData*  navMeshData, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method AddNavMeshDataTransformedInternal_Injected, addr 0xb520d90, size 0x54, virtual false, abstract: false, final false
static inline int32_t AddNavMeshDataTransformedInternal_Injected(::System::IntPtr  navMeshData, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method CalculatePath, addr 0xb520758, size 0x8c, virtual false, abstract: false, final false
static inline bool CalculatePath(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, int32_t  areaMask, ::UnityEngine::AI::NavMeshPath*  path) ;

/// @brief Method CalculatePathInternal, addr 0xb520804, size 0x74, virtual false, abstract: false, final false
static inline bool CalculatePathInternal(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, int32_t  areaMask, ::UnityEngine::AI::NavMeshPath*  path) ;

/// @brief Method CalculatePathInternal_Injected, addr 0xb520878, size 0x5c, virtual false, abstract: false, final false
static inline bool CalculatePathInternal_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::Vector3>  targetPosition, int32_t  areaMask, ::System::IntPtr  path) ;

/// @brief Method CalculateTriangulation, addr 0xb520b54, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshTriangulation CalculateTriangulation() ;

/// @brief Method CalculateTriangulation_Injected, addr 0xb520bac, size 0x3c, virtual false, abstract: false, final false
static inline void CalculateTriangulation_Injected(::by_ref<::UnityEngine::AI::NavMeshTriangulation>  ret) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method ClearPreUpdateListeners, addr 0xb5205dc, size 0x54, virtual false, abstract: false, final false
static inline void ClearPreUpdateListeners() ;

/// [StaticAccessor("GetNavMeshProjectSettings()")]
/// @brief Method CreateSettings, addr 0xb52139c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshBuildSettings CreateSettings() ;

/// @brief Method CreateSettings_Injected, addr 0xb521400, size 0x3c, virtual false, abstract: false, final false
static inline void CreateSettings_Injected(::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  ret) ;

/// [NativeName("GetAreaFromName")]
/// [StaticAccessor("GetNavMeshProjectSettings()")]
/// @brief Method GetAreaFromName, addr 0xb5209a8, size 0x170, virtual false, abstract: false, final false
static inline int32_t GetAreaFromName(::StringW  areaName) ;

/// @brief Method GetAreaFromName_Injected, addr 0xb520b18, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetAreaFromName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  areaName) ;

/// @brief Method GetSettingsByID, addr 0xb52143c, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByID(int32_t  agentTypeID) ;

/// @brief Method GetSettingsByID_Injected, addr 0xb5214a8, size 0x44, virtual false, abstract: false, final false
static inline void GetSettingsByID_Injected(int32_t  agentTypeID, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  ret) ;

/// @brief Method GetSettingsByIndex, addr 0xb521514, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByIndex(int32_t  index) ;

/// @brief Method GetSettingsByIndex_Injected, addr 0xb521580, size 0x44, virtual false, abstract: false, final false
static inline void GetSettingsByIndex_Injected(int32_t  index, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  ret) ;

/// [StaticAccessor("GetNavMeshProjectSettings()")]
/// @brief Method GetSettingsCount, addr 0xb5214ec, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetSettingsCount() ;

/// @brief Method GetSettingsNameFromID, addr 0xb5215c4, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetSettingsNameFromID(int32_t  agentTypeID) ;

/// @brief Method GetSettingsNameFromID_Injected, addr 0xb521690, size 0x44, virtual false, abstract: false, final false
static inline void GetSettingsNameFromID_Injected(int32_t  agentTypeID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [NativeName("SetLinkUserID")]
/// [StaticAccessor("GetNavMeshManager()")]
/// @brief Method InternalSetLinkOwner, addr 0xb520578, size 0x44, virtual false, abstract: false, final false
static inline bool InternalSetLinkOwner(int32_t  linkID, int32_t  ownerID) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// [NativeName("SetSurfaceUserID")]
/// @brief Method InternalSetOwner, addr 0xb5202dc, size 0x44, virtual false, abstract: false, final false
static inline bool InternalSetOwner(int32_t  dataID, int32_t  ownerID) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_CallOnNavMeshPreUpdate, addr 0xb520630, size 0x64, virtual false, abstract: false, final false
static inline void Internal_CallOnNavMeshPreUpdate() ;

/// @brief Method IsLinkOccupied, addr 0xb520f34, size 0x3c, virtual false, abstract: false, final false
static inline bool IsLinkOccupied(::UnityEngine::AI::NavMeshLinkInstance  handle) ;

/// @brief Method IsLinkValid, addr 0xb520fac, size 0x3c, virtual false, abstract: false, final false
static inline bool IsLinkValid(::UnityEngine::AI::NavMeshLinkInstance  handle) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// @brief Method IsOffMeshConnectionOccupied, addr 0xb520f70, size 0x3c, virtual false, abstract: false, final false
static inline bool IsOffMeshConnectionOccupied(int32_t  handle) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// @brief Method IsValidLinkHandle, addr 0xb5203b0, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValidLinkHandle(int32_t  handle) ;

/// [NativeName("IsValidSurfaceID")]
/// [StaticAccessor("GetNavMeshManager()")]
/// @brief Method IsValidNavMeshDataHandle, addr 0xb520104, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValidNavMeshDataHandle(int32_t  handle) ;

/// @brief Method Raycast, addr 0xb520694, size 0x68, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  areaMask) ;

/// @brief Method Raycast, addr 0xb5212ac, size 0x8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, ::UnityEngine::AI::NavMeshQueryFilter  filter) ;

/// @brief Method RaycastFilter, addr 0xb5212b4, size 0x7c, virtual false, abstract: false, final false
static inline bool RaycastFilter(::UnityEngine::Vector3  sourcePosition, ::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  type, int32_t  mask) ;

/// @brief Method RaycastFilter_Injected, addr 0xb521330, size 0x6c, virtual false, abstract: false, final false
static inline bool RaycastFilter_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::Vector3>  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  type, int32_t  mask) ;

/// @brief Method Raycast_Injected, addr 0xb5206fc, size 0x5c, virtual false, abstract: false, final false
static inline bool Raycast_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::Vector3>  targetPosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, int32_t  areaMask) ;

/// @brief Method RemoveLink, addr 0xb520e70, size 0x3c, virtual false, abstract: false, final false
static inline void RemoveLink(::UnityEngine::AI::NavMeshLinkInstance  handle) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// [NativeName("RemoveLink")]
/// @brief Method RemoveLinkInternal, addr 0xb520428, size 0x3c, virtual false, abstract: false, final false
static inline void RemoveLinkInternal(int32_t  handle) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// [NativeName("UnloadData")]
/// @brief Method RemoveNavMeshDataInternal, addr 0xb52018c, size 0x3c, virtual false, abstract: false, final false
static inline void RemoveNavMeshDataInternal(int32_t  handle) ;

/// @brief Method SamplePosition, addr 0xb5208d4, size 0x70, virtual false, abstract: false, final false
static inline bool SamplePosition(::UnityEngine::Vector3  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  areaMask) ;

/// @brief Method SamplePosition, addr 0xb52114c, size 0x74, virtual false, abstract: false, final false
static inline bool SamplePosition(::UnityEngine::Vector3  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, ::UnityEngine::AI::NavMeshQueryFilter  filter) ;

/// @brief Method SamplePositionFilter, addr 0xb5211c0, size 0x80, virtual false, abstract: false, final false
static inline bool SamplePositionFilter(::UnityEngine::Vector3  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  type, int32_t  mask) ;

/// @brief Method SamplePositionFilter_Injected, addr 0xb521240, size 0x6c, virtual false, abstract: false, final false
static inline bool SamplePositionFilter_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  type, int32_t  mask) ;

/// @brief Method SamplePosition_Injected, addr 0xb520944, size 0x64, virtual false, abstract: false, final false
static inline bool SamplePosition_Injected(::by_ref<::UnityEngine::Vector3>  sourcePosition, ::by_ref<::UnityEngine::AI::NavMeshHit>  hit, float_t  maxDistance, int32_t  areaMask) ;

/// @brief Method SetLinkActive, addr 0xb520eac, size 0x44, virtual false, abstract: false, final false
static inline void SetLinkActive(::UnityEngine::AI::NavMeshLinkInstance  handle, bool  value) ;

/// @brief Method SetLinkOwner, addr 0xb520fe8, size 0x110, virtual false, abstract: false, final false
static inline void SetLinkOwner(::UnityEngine::AI::NavMeshLinkInstance  handle, ::UnityEngine::Object*  owner) ;

/// [StaticAccessor("GetNavMeshManager()")]
/// @brief Method SetOffMeshConnectionActive, addr 0xb520ef0, size 0x44, virtual false, abstract: false, final false
static inline void SetOffMeshConnectionActive(int32_t  linkHandle, bool  activated) ;

static inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* getStaticF_onPreUpdate() ;

static inline void setStaticF_onPreUpdate(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMesh(NavMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMesh(NavMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32108};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMesh) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AI
// Dependencies System.MulticastDelegate
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMesh/OnNavMeshPreUpdate
class CORDL_TYPE NavMesh_OnNavMeshPreUpdate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb521770, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb5216d4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMesh_OnNavMeshPreUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMesh_OnNavMeshPreUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMesh_OnNavMeshPreUpdate(NavMesh_OnNavMeshPreUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMesh_OnNavMeshPreUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMesh_OnNavMeshPreUpdate(NavMesh_OnNavMeshPreUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32107};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::AI
