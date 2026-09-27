#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/NavMeshLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AI/zzzz__NavMeshLinkInstance_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshLink)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::AI::Navigation {
class NavMeshLink;
}
// Write type traits
MARK_REF_T(::Unity::AI::Navigation::NavMeshLink*);
DEFINE_IL2CPP_CLASS(::Unity::AI::Navigation::NavMeshLink*, "Unity.AI.Navigation", "NavMeshLink");
// [ExecuteAlways]
// [DefaultExecutionOrder(-101)]
// [AddComponentMenu("Navigation/NavMesh Link", 33)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshLink.html")]
// Dependencies UnityEngine.AI.NavMeshLinkInstance, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Unity::AI::Navigation {
// Is value type: false
// CS Name: Unity.AI.Navigation.NavMeshLink
class CORDL_TYPE NavMeshLink : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_activated, put=set_activated)) bool  activated;

 __declspec(property(get=get_agentTypeID, put=set_agentTypeID)) int32_t  agentTypeID;

 __declspec(property(get=get_area, put=set_area)) int32_t  area;

 __declspec(property(get=get_autoUpdate, put=set_autoUpdate)) bool  autoUpdate;

/// @brief [Obsolete("autoUpdatePositions has been deprecated. Use autoUpdate instead. (UnityUpgradable) -> autoUpdate")]
 __declspec(property(get=get_autoUpdatePositions, put=set_autoUpdatePositions)) bool  autoUpdatePositions;

/// @brief [Obsolete("biDirectional has been deprecated. Use bidirectional instead. (UnityUpgradable) -> bidirectional")]
 __declspec(property(get=get_biDirectional, put=set_biDirectional)) bool  biDirectional;

 __declspec(property(get=get_bidirectional, put=set_bidirectional)) bool  bidirectional;

 __declspec(property(get=get_costModifier, put=set_costModifier)) float_t  costModifier;

/// @brief [Obsolete("costOverride has been deprecated. Use costModifier instead. (UnityUpgradable) -> costModifier")]
 __declspec(property(get=get_costOverride, put=set_costOverride)) float_t  costOverride;

 __declspec(property(get=get_endPoint, put=set_endPoint)) ::UnityEngine::Vector3  endPoint;

 __declspec(property(get=get_endTransform, put=set_endTransform)) ::UnityW<::UnityEngine::Transform>  endTransform;

/// @brief Field m_Activated, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Activated, put=__cordl_internal_set_m_Activated)) bool  m_Activated;

/// @brief Field m_AgentTypeID, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AgentTypeID, put=__cordl_internal_set_m_AgentTypeID)) int32_t  m_AgentTypeID;

/// @brief Field m_Area, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Area, put=__cordl_internal_set_m_Area)) int32_t  m_Area;

/// @brief Field m_AutoUpdatePosition, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoUpdatePosition, put=__cordl_internal_set_m_AutoUpdatePosition)) bool  m_AutoUpdatePosition;

/// @brief Field m_Bidirectional, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Bidirectional, put=__cordl_internal_set_m_Bidirectional)) bool  m_Bidirectional;

/// @brief Field m_CostModifier, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CostModifier, put=__cordl_internal_set_m_CostModifier)) float_t  m_CostModifier;

/// @brief Field m_EndPoint, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_EndPoint, put=__cordl_internal_set_m_EndPoint)) ::UnityEngine::Vector3  m_EndPoint;

/// @brief Field m_EndTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EndTransform, put=__cordl_internal_set_m_EndTransform)) ::UnityW<::UnityEngine::Transform>  m_EndTransform;

/// @brief Field m_EndTransformWasEmpty, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EndTransformWasEmpty, put=__cordl_internal_set_m_EndTransformWasEmpty)) bool  m_EndTransformWasEmpty;

/// @brief Field m_IsOverridingCost, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsOverridingCost, put=__cordl_internal_set_m_IsOverridingCost)) bool  m_IsOverridingCost;

/// @brief Field m_LastEndWorldPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastEndWorldPosition, put=__cordl_internal_set_m_LastEndWorldPosition)) ::UnityEngine::Vector3  m_LastEndWorldPosition;

/// @brief Field m_LastPosition, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastPosition, put=__cordl_internal_set_m_LastPosition)) ::UnityEngine::Vector3  m_LastPosition;

/// @brief Field m_LastRotation, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LastRotation, put=__cordl_internal_set_m_LastRotation)) ::UnityEngine::Quaternion  m_LastRotation;

/// @brief Field m_LastStartWorldPosition, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastStartWorldPosition, put=__cordl_internal_set_m_LastStartWorldPosition)) ::UnityEngine::Vector3  m_LastStartWorldPosition;

/// @brief Field m_LinkInstance, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LinkInstance, put=__cordl_internal_set_m_LinkInstance)) ::UnityEngine::AI::NavMeshLinkInstance  m_LinkInstance;

/// @brief Field m_SerializedVersion, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SerializedVersion, put=__cordl_internal_set_m_SerializedVersion)) uint8_t  m_SerializedVersion;

/// @brief Field m_StartPoint, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartPoint, put=__cordl_internal_set_m_StartPoint)) ::UnityEngine::Vector3  m_StartPoint;

/// @brief Field m_StartTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartTransform, put=__cordl_internal_set_m_StartTransform)) ::UnityW<::UnityEngine::Transform>  m_StartTransform;

/// @brief Field m_StartTransformWasEmpty, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StartTransformWasEmpty, put=__cordl_internal_set_m_StartTransformWasEmpty)) bool  m_StartTransformWasEmpty;

/// @brief Field m_Width, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Width, put=__cordl_internal_set_m_Width)) float_t  m_Width;

 __declspec(property(get=get_occupied)) bool  occupied;

/// @brief Field s_Tracked, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Tracked, put=setStaticF_s_Tracked)) ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>*  s_Tracked;

 __declspec(property(get=get_startPoint, put=set_startPoint)) ::UnityEngine::Vector3  startPoint;

 __declspec(property(get=get_startTransform, put=set_startTransform)) ::UnityW<::UnityEngine::Transform>  startTransform;

 __declspec(property(get=get_width, put=set_width)) float_t  width;

/// @brief Method AddLink, addr 0xae72e4c, size 0x1e4, virtual false, abstract: false, final false
inline void AddLink() ;

/// @brief Method AddTracking, addr 0xae7283c, size 0x1ec, virtual false, abstract: false, final false
static inline void AddTracking(::Unity::AI::Navigation::NavMeshLink*  link) ;

/// @brief Method Awake, addr 0xae72dc8, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method ClearTrackedList, addr 0xae72bf8, size 0x98, virtual false, abstract: false, final false
static inline void ClearTrackedList() ;

/// @brief Method GetLocalPositions, addr 0xae733a8, size 0x1a0, virtual false, abstract: false, final false
inline void GetLocalPositions(::by_ref<::UnityEngine::Vector3>  localStartPosition, ::by_ref<::UnityEngine::Vector3>  localEndPosition) ;

/// @brief Method GetWorldPositions, addr 0xae73118, size 0x188, virtual false, abstract: false, final false
inline void GetWorldPositions(::by_ref<::UnityEngine::Vector3>  worldStartPosition, ::by_ref<::UnityEngine::Vector3>  worldEndPosition) ;

/// @brief Method HaveTransformsChanged, addr 0xae73548, size 0x29c, virtual false, abstract: false, final false
inline bool HaveTransformsChanged() ;

/// @brief Method LocalToWorldUnscaled, addr 0xae732a0, size 0x108, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 LocalToWorldUnscaled() ;

static inline ::Unity::AI::Navigation::NavMeshLink* New_ctor() ;

/// @brief Method OnDidApplyAnimationProperties, addr 0xae737e4, size 0x4, virtual false, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnDisable, addr 0xae73030, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xae72dcc, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecordEndpointTransforms, addr 0xae73090, size 0x88, virtual false, abstract: false, final false
inline void RecordEndpointTransforms() ;

/// @brief Method RemoveTracking, addr 0xae72a28, size 0x188, virtual false, abstract: false, final false
static inline void RemoveTracking(::Unity::AI::Navigation::NavMeshLink*  link) ;

/// @brief Method UpdateLink, addr 0xae72474, size 0x34, virtual false, abstract: false, final false
inline void UpdateLink() ;

/// [Obsolete("UpdatePositions() has been deprecated. Use UpdateLink() instead. (UnityUpgradable) -> UpdateLink(*)")]
/// @brief Method UpdatePositions, addr 0xae739a0, size 0x4, virtual false, abstract: false, final false
inline void UpdatePositions() ;

/// @brief Method UpdateTrackedInstances, addr 0xae737e8, size 0x16c, virtual false, abstract: false, final false
static inline void UpdateTrackedInstances() ;

/// @brief Method UpgradeSerializedVersion, addr 0xae72c90, size 0x138, virtual false, abstract: false, final false
inline void UpgradeSerializedVersion() ;

constexpr bool const& __cordl_internal_get_m_Activated() const;

constexpr bool& __cordl_internal_get_m_Activated() ;

constexpr int32_t const& __cordl_internal_get_m_AgentTypeID() const;

constexpr int32_t& __cordl_internal_get_m_AgentTypeID() ;

constexpr int32_t const& __cordl_internal_get_m_Area() const;

constexpr int32_t& __cordl_internal_get_m_Area() ;

constexpr bool const& __cordl_internal_get_m_AutoUpdatePosition() const;

constexpr bool& __cordl_internal_get_m_AutoUpdatePosition() ;

constexpr bool const& __cordl_internal_get_m_Bidirectional() const;

constexpr bool& __cordl_internal_get_m_Bidirectional() ;

constexpr float_t const& __cordl_internal_get_m_CostModifier() const;

constexpr float_t& __cordl_internal_get_m_CostModifier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_EndPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_EndPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_EndTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_EndTransform() ;

constexpr bool const& __cordl_internal_get_m_EndTransformWasEmpty() const;

constexpr bool& __cordl_internal_get_m_EndTransformWasEmpty() ;

constexpr bool const& __cordl_internal_get_m_IsOverridingCost() const;

constexpr bool& __cordl_internal_get_m_IsOverridingCost() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastEndWorldPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastEndWorldPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_LastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_LastRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastStartWorldPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastStartWorldPosition() ;

constexpr ::UnityEngine::AI::NavMeshLinkInstance const& __cordl_internal_get_m_LinkInstance() const;

constexpr ::UnityEngine::AI::NavMeshLinkInstance& __cordl_internal_get_m_LinkInstance() ;

constexpr uint8_t const& __cordl_internal_get_m_SerializedVersion() const;

constexpr uint8_t& __cordl_internal_get_m_SerializedVersion() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_StartTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_StartTransform() ;

constexpr bool const& __cordl_internal_get_m_StartTransformWasEmpty() const;

constexpr bool& __cordl_internal_get_m_StartTransformWasEmpty() ;

constexpr float_t const& __cordl_internal_get_m_Width() const;

constexpr float_t& __cordl_internal_get_m_Width() ;

constexpr void __cordl_internal_set_m_Activated(bool  value) ;

constexpr void __cordl_internal_set_m_AgentTypeID(int32_t  value) ;

constexpr void __cordl_internal_set_m_Area(int32_t  value) ;

constexpr void __cordl_internal_set_m_AutoUpdatePosition(bool  value) ;

constexpr void __cordl_internal_set_m_Bidirectional(bool  value) ;

constexpr void __cordl_internal_set_m_CostModifier(float_t  value) ;

constexpr void __cordl_internal_set_m_EndPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_EndTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_EndTransformWasEmpty(bool  value) ;

constexpr void __cordl_internal_set_m_IsOverridingCost(bool  value) ;

constexpr void __cordl_internal_set_m_LastEndWorldPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_LastStartWorldPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LinkInstance(::UnityEngine::AI::NavMeshLinkInstance  value) ;

constexpr void __cordl_internal_set_m_SerializedVersion(uint8_t  value) ;

constexpr void __cordl_internal_set_m_StartPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_StartTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_StartTransformWasEmpty(bool  value) ;

constexpr void __cordl_internal_set_m_Width(float_t  value) ;

/// @brief Method .ctor, addr 0xae739a4, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>* getStaticF_s_Tracked() ;

/// @brief Method get_activated, addr 0xae72bd0, size 0x8, virtual false, abstract: false, final false
inline bool get_activated() ;

/// @brief Method get_agentTypeID, addr 0xae72454, size 0x8, virtual false, abstract: false, final false
inline int32_t get_agentTypeID() ;

/// @brief Method get_area, addr 0xae72bb0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_area() ;

/// @brief Method get_autoUpdate, addr 0xae72790, size 0x8, virtual false, abstract: false, final false
inline bool get_autoUpdate() ;

/// @brief Method get_autoUpdatePositions, addr 0xae73954, size 0x8, virtual false, abstract: false, final false
inline bool get_autoUpdatePositions() ;

/// @brief Method get_biDirectional, addr 0xae73960, size 0x8, virtual false, abstract: false, final false
inline bool get_biDirectional() ;

/// @brief Method get_bidirectional, addr 0xae7276c, size 0x8, virtual false, abstract: false, final false
inline bool get_bidirectional() ;

/// @brief Method get_costModifier, addr 0xae726e4, size 0x18, virtual false, abstract: false, final false
inline float_t get_costModifier() ;

/// @brief Method get_costOverride, addr 0xae73984, size 0x18, virtual false, abstract: false, final false
inline float_t get_costOverride() ;

/// @brief Method get_endPoint, addr 0xae724fc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_endPoint() ;

/// @brief Method get_endTransform, addr 0xae725f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_endTransform() ;

/// @brief Method get_occupied, addr 0xae72bec, size 0xc, virtual false, abstract: false, final false
inline bool get_occupied() ;

/// @brief Method get_startPoint, addr 0xae724a8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_startPoint() ;

/// @brief Method get_startTransform, addr 0xae72550, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_startTransform() ;

/// @brief Method get_width, addr 0xae72698, size 0x8, virtual false, abstract: false, final false
inline float_t get_width() ;

static inline void setStaticF_s_Tracked(::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshLink>>*  value) ;

/// @brief Method set_activated, addr 0xae72bd8, size 0x14, virtual false, abstract: false, final false
inline void set_activated(bool  value) ;

/// @brief Method set_agentTypeID, addr 0xae7245c, size 0x18, virtual false, abstract: false, final false
inline void set_agentTypeID(int32_t  value) ;

/// @brief Method set_area, addr 0xae72bb8, size 0x18, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_autoUpdate, addr 0xae72798, size 0xa4, virtual false, abstract: false, final false
inline void set_autoUpdate(bool  value) ;

/// @brief Method set_autoUpdatePositions, addr 0xae7395c, size 0x4, virtual false, abstract: false, final false
inline void set_autoUpdatePositions(bool  value) ;

/// @brief Method set_biDirectional, addr 0xae73968, size 0x1c, virtual false, abstract: false, final false
inline void set_biDirectional(bool  value) ;

/// @brief Method set_bidirectional, addr 0xae72774, size 0x1c, virtual false, abstract: false, final false
inline void set_bidirectional(bool  value) ;

/// @brief Method set_costModifier, addr 0xae726fc, size 0x70, virtual false, abstract: false, final false
inline void set_costModifier(float_t  value) ;

/// @brief Method set_costOverride, addr 0xae7399c, size 0x4, virtual false, abstract: false, final false
inline void set_costOverride(float_t  value) ;

/// @brief Method set_endPoint, addr 0xae72508, size 0x48, virtual false, abstract: false, final false
inline void set_endPoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_endTransform, addr 0xae725fc, size 0x9c, virtual false, abstract: false, final false
inline void set_endTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_startPoint, addr 0xae724b4, size 0x48, virtual false, abstract: false, final false
inline void set_startPoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_startTransform, addr 0xae72558, size 0x9c, virtual false, abstract: false, final false
inline void set_startTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_width, addr 0xae726a0, size 0x44, virtual false, abstract: false, final false
inline void set_width(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshLink(NavMeshLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshLink(NavMeshLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32512};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_SerializedVersion, offset: 0x20, size: 0x1, def value: None
 uint8_t  ___m_SerializedVersion;

/// [SerializeField]
/// @brief Field m_AgentTypeID, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_AgentTypeID;

/// [SerializeField]
/// @brief Field m_StartPoint, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartPoint;

/// [SerializeField]
/// @brief Field m_EndPoint, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_EndPoint;

/// [SerializeField]
/// @brief Field m_StartTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_StartTransform;

/// [SerializeField]
/// @brief Field m_EndTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_EndTransform;

/// [SerializeField]
/// @brief Field m_Activated, offset: 0x50, size: 0x1, def value: None
 bool  ___m_Activated;

/// [SerializeField]
/// @brief Field m_Width, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_Width;

/// [SerializeField]
/// [Min(0)]
/// @brief Field m_CostModifier, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_CostModifier;

/// [SerializeField]
/// @brief Field m_IsOverridingCost, offset: 0x5c, size: 0x1, def value: None
 bool  ___m_IsOverridingCost;

/// [SerializeField]
/// @brief Field m_Bidirectional, offset: 0x5d, size: 0x1, def value: None
 bool  ___m_Bidirectional;

/// [SerializeField]
/// @brief Field m_AutoUpdatePosition, offset: 0x5e, size: 0x1, def value: None
 bool  ___m_AutoUpdatePosition;

/// [SerializeField]
/// @brief Field m_Area, offset: 0x60, size: 0x4, def value: None
 int32_t  ___m_Area;

/// @brief Field m_LinkInstance, offset: 0x64, size: 0x4, def value: None
 ::UnityEngine::AI::NavMeshLinkInstance  ___m_LinkInstance;

/// @brief Field m_StartTransformWasEmpty, offset: 0x68, size: 0x1, def value: None
 bool  ___m_StartTransformWasEmpty;

/// @brief Field m_EndTransformWasEmpty, offset: 0x69, size: 0x1, def value: None
 bool  ___m_EndTransformWasEmpty;

/// @brief Field m_LastStartWorldPosition, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastStartWorldPosition;

/// @brief Field m_LastEndWorldPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastEndWorldPosition;

/// @brief Field m_LastPosition, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastPosition;

/// @brief Field m_LastRotation, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_LastRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_SerializedVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_AgentTypeID) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_StartPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_EndPoint) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_StartTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_EndTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_Activated) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_Width) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_CostModifier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_IsOverridingCost) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_Bidirectional) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_AutoUpdatePosition) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_Area) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_LinkInstance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_StartTransformWasEmpty) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_EndTransformWasEmpty) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_LastStartWorldPosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_LastEndWorldPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_LastPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshLink, ___m_LastRotation) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Unity::AI::Navigation::NavMeshLink) == 0xa0, "Size mismatch!");

} // namespace end def Unity::AI::Navigation
