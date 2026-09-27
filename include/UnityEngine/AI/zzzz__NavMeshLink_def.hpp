#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
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
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshLink;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshLink*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshLink*, "UnityEngine.AI", "NavMeshLink");
// [ExecuteInEditMode]
// [DefaultExecutionOrder(-101)]
// [AddComponentMenu("Navigation/NavMeshLink", 33)]
// [HelpURL("https://github.com/Unity-Technologies/NavMeshComponents#documentation-draft")]
// Dependencies UnityEngine.AI.NavMeshLinkInstance, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshLink
class CORDL_TYPE NavMeshLink : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_agentTypeID, put=set_agentTypeID)) int32_t  agentTypeID;

 __declspec(property(get=get_area, put=set_area)) int32_t  area;

 __declspec(property(get=get_autoUpdate, put=set_autoUpdate)) bool  autoUpdate;

 __declspec(property(get=get_bidirectional, put=set_bidirectional)) bool  bidirectional;

 __declspec(property(get=get_costModifier, put=set_costModifier)) int32_t  costModifier;

 __declspec(property(get=get_endPoint, put=set_endPoint)) ::UnityEngine::Vector3  endPoint;

/// @brief Field m_AgentTypeID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AgentTypeID, put=__cordl_internal_set_m_AgentTypeID)) int32_t  m_AgentTypeID;

/// @brief Field m_Area, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Area, put=__cordl_internal_set_m_Area)) int32_t  m_Area;

/// @brief Field m_AutoUpdatePosition, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoUpdatePosition, put=__cordl_internal_set_m_AutoUpdatePosition)) bool  m_AutoUpdatePosition;

/// @brief Field m_Bidirectional, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Bidirectional, put=__cordl_internal_set_m_Bidirectional)) bool  m_Bidirectional;

/// @brief Field m_CostModifier, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CostModifier, put=__cordl_internal_set_m_CostModifier)) int32_t  m_CostModifier;

/// @brief Field m_EndPoint, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_EndPoint, put=__cordl_internal_set_m_EndPoint)) ::UnityEngine::Vector3  m_EndPoint;

/// @brief Field m_LastPosition, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastPosition, put=__cordl_internal_set_m_LastPosition)) ::UnityEngine::Vector3  m_LastPosition;

/// @brief Field m_LastRotation, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LastRotation, put=__cordl_internal_set_m_LastRotation)) ::UnityEngine::Quaternion  m_LastRotation;

/// @brief Field m_LinkInstance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LinkInstance, put=__cordl_internal_set_m_LinkInstance)) ::UnityEngine::AI::NavMeshLinkInstance  m_LinkInstance;

/// @brief Field m_StartPoint, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_StartPoint, put=__cordl_internal_set_m_StartPoint)) ::UnityEngine::Vector3  m_StartPoint;

/// @brief Field m_Width, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Width, put=__cordl_internal_set_m_Width)) float_t  m_Width;

/// @brief Field s_Tracked, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Tracked, put=setStaticF_s_Tracked)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>*  s_Tracked;

 __declspec(property(get=get_startPoint, put=set_startPoint)) ::UnityEngine::Vector3  startPoint;

 __declspec(property(get=get_width, put=set_width)) float_t  width;

/// @brief Method AddLink, addr 0xa36a590, size 0x178, virtual false, abstract: false, final false
inline void AddLink() ;

/// @brief Method AddTracking, addr 0xa36a708, size 0x1ec, virtual false, abstract: false, final false
static inline void AddTracking(::UnityEngine::AI::NavMeshLink*  link) ;

/// @brief Method HasTransformChanged, addr 0xa36aadc, size 0xc4, virtual false, abstract: false, final false
inline bool HasTransformChanged() ;

static inline ::UnityEngine::AI::NavMeshLink* New_ctor() ;

/// @brief Method OnDidApplyAnimationProperties, addr 0xa36aba0, size 0x20, virtual false, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnDisable, addr 0xa36a8f4, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa36a510, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveTracking, addr 0xa36a954, size 0x188, virtual false, abstract: false, final false
static inline void RemoveTracking(::UnityEngine::AI::NavMeshLink*  link) ;

/// @brief Method SetAutoUpdate, addr 0xa36a440, size 0xa4, virtual false, abstract: false, final false
inline void SetAutoUpdate(bool  value) ;

/// @brief Method UpdateLink, addr 0xa36a328, size 0x20, virtual false, abstract: false, final false
inline void UpdateLink() ;

/// @brief Method UpdateTrackedInstances, addr 0xa36abc0, size 0x174, virtual false, abstract: false, final false
static inline void UpdateTrackedInstances() ;

constexpr int32_t const& __cordl_internal_get_m_AgentTypeID() const;

constexpr int32_t& __cordl_internal_get_m_AgentTypeID() ;

constexpr int32_t const& __cordl_internal_get_m_Area() const;

constexpr int32_t& __cordl_internal_get_m_Area() ;

constexpr bool const& __cordl_internal_get_m_AutoUpdatePosition() const;

constexpr bool& __cordl_internal_get_m_AutoUpdatePosition() ;

constexpr bool const& __cordl_internal_get_m_Bidirectional() const;

constexpr bool& __cordl_internal_get_m_Bidirectional() ;

constexpr int32_t const& __cordl_internal_get_m_CostModifier() const;

constexpr int32_t& __cordl_internal_get_m_CostModifier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_EndPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_EndPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_LastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_LastRotation() ;

constexpr ::UnityEngine::AI::NavMeshLinkInstance const& __cordl_internal_get_m_LinkInstance() const;

constexpr ::UnityEngine::AI::NavMeshLinkInstance& __cordl_internal_get_m_LinkInstance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StartPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StartPoint() ;

constexpr float_t const& __cordl_internal_get_m_Width() const;

constexpr float_t& __cordl_internal_get_m_Width() ;

constexpr void __cordl_internal_set_m_AgentTypeID(int32_t  value) ;

constexpr void __cordl_internal_set_m_Area(int32_t  value) ;

constexpr void __cordl_internal_set_m_AutoUpdatePosition(bool  value) ;

constexpr void __cordl_internal_set_m_Bidirectional(bool  value) ;

constexpr void __cordl_internal_set_m_CostModifier(int32_t  value) ;

constexpr void __cordl_internal_set_m_EndPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_LinkInstance(::UnityEngine::AI::NavMeshLinkInstance  value) ;

constexpr void __cordl_internal_set_m_StartPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Width(float_t  value) ;

/// @brief Method .ctor, addr 0xa36ad34, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>* getStaticF_s_Tracked() ;

/// @brief Method get_agentTypeID, addr 0xa36a2fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_agentTypeID() ;

/// @brief Method get_area, addr 0xa36a4e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_area() ;

/// @brief Method get_autoUpdate, addr 0xa36a434, size 0x8, virtual false, abstract: false, final false
inline bool get_autoUpdate() ;

/// @brief Method get_bidirectional, addr 0xa36a408, size 0x8, virtual false, abstract: false, final false
inline bool get_bidirectional() ;

/// @brief Method get_costModifier, addr 0xa36a3dc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_costModifier() ;

/// @brief Method get_endPoint, addr 0xa36a37c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_endPoint() ;

/// @brief Method get_startPoint, addr 0xa36a348, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_startPoint() ;

/// @brief Method get_width, addr 0xa36a3b0, size 0x8, virtual false, abstract: false, final false
inline float_t get_width() ;

static inline void setStaticF_s_Tracked(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshLink>>*  value) ;

/// @brief Method set_agentTypeID, addr 0xa36a304, size 0x24, virtual false, abstract: false, final false
inline void set_agentTypeID(int32_t  value) ;

/// @brief Method set_area, addr 0xa36a4ec, size 0x24, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_autoUpdate, addr 0xa36a43c, size 0x4, virtual false, abstract: false, final false
inline void set_autoUpdate(bool  value) ;

/// @brief Method set_bidirectional, addr 0xa36a410, size 0x24, virtual false, abstract: false, final false
inline void set_bidirectional(bool  value) ;

/// @brief Method set_costModifier, addr 0xa36a3e4, size 0x24, virtual false, abstract: false, final false
inline void set_costModifier(int32_t  value) ;

/// @brief Method set_endPoint, addr 0xa36a388, size 0x28, virtual false, abstract: false, final false
inline void set_endPoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_startPoint, addr 0xa36a354, size 0x28, virtual false, abstract: false, final false
inline void set_startPoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_width, addr 0xa36a3b8, size 0x24, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32780};

/// [SerializeField]
/// @brief Field m_AgentTypeID, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_AgentTypeID;

/// [SerializeField]
/// @brief Field m_StartPoint, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_StartPoint;

/// [SerializeField]
/// @brief Field m_EndPoint, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_EndPoint;

/// [SerializeField]
/// @brief Field m_Width, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_Width;

/// [SerializeField]
/// @brief Field m_CostModifier, offset: 0x40, size: 0x4, def value: None
 int32_t  ___m_CostModifier;

/// [SerializeField]
/// @brief Field m_Bidirectional, offset: 0x44, size: 0x1, def value: None
 bool  ___m_Bidirectional;

/// [SerializeField]
/// @brief Field m_AutoUpdatePosition, offset: 0x45, size: 0x1, def value: None
 bool  ___m_AutoUpdatePosition;

/// [SerializeField]
/// @brief Field m_Area, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_Area;

/// @brief Field m_LinkInstance, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::AI::NavMeshLinkInstance  ___m_LinkInstance;

/// @brief Field m_LastPosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastPosition;

/// @brief Field m_LastRotation, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_LastRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_AgentTypeID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_StartPoint) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_EndPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_Width) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_CostModifier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_Bidirectional) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_AutoUpdatePosition) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_Area) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_LinkInstance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_LastPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLink, ___m_LastRotation) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshLink) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::AI
