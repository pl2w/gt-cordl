#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTargetGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_PositionModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_RotationModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_UpdateMethods_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTargetGroup)
namespace GlobalNamespace {
struct CinemachineTargetGroup_PositionModes;
}
namespace GlobalNamespace {
struct CinemachineTargetGroup_RotationModes;
}
namespace GlobalNamespace {
struct CinemachineTargetGroup_UpdateMethods;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class CinemachineTargetGroup_Target;
}
namespace Unity::Cinemachine {
class ICinemachineTargetGroup;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
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
namespace Unity::Cinemachine {
class CinemachineTargetGroup;
}
namespace Unity::Cinemachine {
class CinemachineTargetGroup_Target;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineTargetGroup*);
MARK_REF_T(::Unity::Cinemachine::CinemachineTargetGroup_Target*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineTargetGroup*, "Unity.Cinemachine", "CinemachineTargetGroup");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineTargetGroup_Target*, "Unity.Cinemachine", "CinemachineTargetGroup/Target");
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Target Group")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineTargetGroup.html")]
// Dependencies Unity.Cinemachine.CinemachineTargetGroup::PositionModes, Unity.Cinemachine.CinemachineTargetGroup::RotationModes, Unity.Cinemachine.CinemachineTargetGroup::Target, Unity.Cinemachine.CinemachineTargetGroup::UpdateMethods, UnityEngine.BoundingSphere, UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTargetGroup
class CORDL_TYPE CinemachineTargetGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PositionModes = ::GlobalNamespace::CinemachineTargetGroup_PositionModes;

using RotationModes = ::GlobalNamespace::CinemachineTargetGroup_RotationModes;

using UpdateMethods = ::GlobalNamespace::CinemachineTargetGroup_UpdateMethods;

using Target = ::Unity::Cinemachine::CinemachineTargetGroup_Target;

 __declspec(property(get=get_BoundingBox, put=set_BoundingBox)) ::UnityEngine::Bounds  BoundingBox;

 __declspec(property(get=get_CachedCountIsValid)) bool  CachedCountIsValid;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field PositionMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PositionMode, put=__cordl_internal_set_PositionMode)) ::GlobalNamespace::CinemachineTargetGroup_PositionModes  PositionMode;

/// @brief Field RotationMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotationMode, put=__cordl_internal_set_RotationMode)) ::GlobalNamespace::CinemachineTargetGroup_RotationModes  RotationMode;

 __declspec(property(get=get_Sphere, put=set_Sphere)) ::UnityEngine::BoundingSphere  Sphere;

/// @brief Field Targets, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Targets, put=__cordl_internal_set_Targets)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>*  Targets;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field UpdateMethod, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateMethod, put=__cordl_internal_set_UpdateMethod)) ::GlobalNamespace::CinemachineTargetGroup_UpdateMethods  UpdateMethod;

/// @brief Field m_AveragePos, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_AveragePos, put=__cordl_internal_set_m_AveragePos)) ::UnityEngine::Vector3  m_AveragePos;

/// @brief Field m_BoundingBox, offset 0x4c, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_BoundingBox, put=__cordl_internal_set_m_BoundingBox)) ::UnityEngine::Bounds  m_BoundingBox;

/// @brief Field m_BoundingSphere, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_BoundingSphere, put=__cordl_internal_set_m_BoundingSphere)) ::UnityEngine::BoundingSphere  m_BoundingSphere;

/// @brief Field m_LastUpdateFrame, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastUpdateFrame, put=__cordl_internal_set_m_LastUpdateFrame)) int32_t  m_LastUpdateFrame;

/// @brief Field m_LegacyTargets, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacyTargets, put=__cordl_internal_set_m_LegacyTargets)) ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>  m_LegacyTargets;

/// @brief Field m_MaxWeight, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxWeight, put=__cordl_internal_set_m_MaxWeight)) float_t  m_MaxWeight;

/// @brief Field m_MemberValidity, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MemberValidity, put=__cordl_internal_set_m_MemberValidity)) ::System::Collections::Generic::List_1<bool>*  m_MemberValidity;

/// @brief [Obsolete("m_Targets is obsolete.  Please use Targets instead")]
 __declspec(property(get=get_m_Targets, put=set_m_Targets)) ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>  m_Targets;

/// @brief Field m_ValidMembers, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValidMembers, put=__cordl_internal_set_m_ValidMembers)) ::System::Collections::Generic::List_1<int32_t>*  m_ValidMembers;

/// @brief Field m_WeightSum, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_WeightSum, put=__cordl_internal_set_m_WeightSum)) float_t  m_WeightSum;

/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineTargetGroup"
constexpr operator  ::Unity::Cinemachine::ICinemachineTargetGroup*() noexcept;

/// @brief Method AddMember, addr 0xae9bd44, size 0x114, virtual false, abstract: false, final false
inline void AddMember(::UnityEngine::Transform*  t, float_t  weight, float_t  radius) ;

/// @brief Method Awake, addr 0xae9b7bc, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateAverageOrientation, addr 0xae9d114, size 0x344, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion CalculateAverageOrientation() ;

/// @brief Method CalculateAveragePosition, addr 0xae9cac0, size 0x198, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateAveragePosition() ;

/// @brief Method CalculateBoundingBox, addr 0xae9cc58, size 0x294, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds CalculateBoundingBox() ;

/// @brief Method CalculateBoundingSphere, addr 0xae9ceec, size 0x228, virtual false, abstract: false, final false
inline ::UnityEngine::BoundingSphere CalculateBoundingSphere() ;

/// @brief Method DoUpdate, addr 0xae9ba30, size 0x178, virtual false, abstract: false, final false
inline void DoUpdate() ;

/// @brief Method FindMember, addr 0xae9bee0, size 0xe8, virtual false, abstract: false, final false
inline int32_t FindMember(::UnityEngine::Transform*  t) ;

/// @brief Method FixedUpdate, addr 0xae9d458, size 0x14, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetViewSpaceAngularBounds, addr 0xae9d4f4, size 0x54c, virtual true, abstract: false, final true
inline void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4  observer, ::by_ref<::UnityEngine::Vector2>  minAngles, ::by_ref<::UnityEngine::Vector2>  maxAngles, ::by_ref<::UnityEngine::Vector2>  zRange) ;

/// @brief Method GetViewSpaceBoundingBox, addr 0xae9c294, size 0x3dc, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4  observer, bool  includeBehind) ;

/// @brief Method GetWeightedBoundsForMember, addr 0xae9bfc8, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::BoundingSphere GetWeightedBoundsForMember(int32_t  index) ;

/// @brief Method IndexIsValid, addr 0xae9c0f8, size 0x6c, virtual false, abstract: false, final false
inline bool IndexIsValid(int32_t  index) ;

/// @brief Method LateUpdate, addr 0xae9d4e0, size 0x14, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Unity::Cinemachine::CinemachineTargetGroup* New_ctor() ;

/// @brief Method OnValidate, addr 0xae9b628, size 0x118, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RemoveMember, addr 0xae9be6c, size 0x74, virtual false, abstract: false, final false
inline void RemoveMember(::UnityEngine::Transform*  t) ;

/// @brief Method Reset, addr 0xae9b740, size 0x7c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0xae9d46c, size 0x74, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateMemberValidity, addr 0xae9c6d8, size 0x3e8, virtual false, abstract: false, final false
inline void UpdateMemberValidity() ;

/// @brief Method WeightedMemberBoundsForValidMember, addr 0xae9c164, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::BoundingSphere WeightedMemberBoundsForValidMember(::Unity::Cinemachine::CinemachineTargetGroup_Target*  t, ::UnityEngine::Vector3  avgPos, float_t  maxWeight) ;

constexpr ::GlobalNamespace::CinemachineTargetGroup_PositionModes const& __cordl_internal_get_PositionMode() const;

constexpr ::GlobalNamespace::CinemachineTargetGroup_PositionModes& __cordl_internal_get_PositionMode() ;

constexpr ::GlobalNamespace::CinemachineTargetGroup_RotationModes const& __cordl_internal_get_RotationMode() const;

constexpr ::GlobalNamespace::CinemachineTargetGroup_RotationModes& __cordl_internal_get_RotationMode() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>* const& __cordl_internal_get_Targets() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>*& __cordl_internal_get_Targets() ;

constexpr ::GlobalNamespace::CinemachineTargetGroup_UpdateMethods const& __cordl_internal_get_UpdateMethod() const;

constexpr ::GlobalNamespace::CinemachineTargetGroup_UpdateMethods& __cordl_internal_get_UpdateMethod() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_AveragePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_AveragePos() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_BoundingBox() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_BoundingBox() ;

constexpr ::UnityEngine::BoundingSphere const& __cordl_internal_get_m_BoundingSphere() const;

constexpr ::UnityEngine::BoundingSphere& __cordl_internal_get_m_BoundingSphere() ;

constexpr int32_t const& __cordl_internal_get_m_LastUpdateFrame() const;

constexpr int32_t& __cordl_internal_get_m_LastUpdateFrame() ;

constexpr ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*> const& __cordl_internal_get_m_LegacyTargets() const;

constexpr ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>& __cordl_internal_get_m_LegacyTargets() ;

constexpr float_t const& __cordl_internal_get_m_MaxWeight() const;

constexpr float_t& __cordl_internal_get_m_MaxWeight() ;

constexpr ::System::Collections::Generic::List_1<bool>* const& __cordl_internal_get_m_MemberValidity() const;

constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_m_MemberValidity() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_ValidMembers() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_ValidMembers() ;

constexpr float_t const& __cordl_internal_get_m_WeightSum() const;

constexpr float_t& __cordl_internal_get_m_WeightSum() ;

constexpr void __cordl_internal_set_PositionMode(::GlobalNamespace::CinemachineTargetGroup_PositionModes  value) ;

constexpr void __cordl_internal_set_RotationMode(::GlobalNamespace::CinemachineTargetGroup_RotationModes  value) ;

constexpr void __cordl_internal_set_Targets(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>*  value) ;

constexpr void __cordl_internal_set_UpdateMethod(::GlobalNamespace::CinemachineTargetGroup_UpdateMethods  value) ;

constexpr void __cordl_internal_set_m_AveragePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_BoundingBox(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_m_BoundingSphere(::UnityEngine::BoundingSphere  value) ;

constexpr void __cordl_internal_set_m_LastUpdateFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_LegacyTargets(::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>  value) ;

constexpr void __cordl_internal_set_m_MaxWeight(float_t  value) ;

constexpr void __cordl_internal_set_m_MemberValidity(::System::Collections::Generic::List_1<bool>*  value) ;

constexpr void __cordl_internal_set_m_ValidMembers(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_WeightSum(float_t  value) ;

/// @brief Method .ctor, addr 0xae9da40, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BoundingBox, addr 0xae9b974, size 0xbc, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds get_BoundingBox() ;

/// @brief Method get_CachedCountIsValid, addr 0xae9c670, size 0x68, virtual false, abstract: false, final false
inline bool get_CachedCountIsValid() ;

/// @brief Method get_IsEmpty, addr 0xae9bc78, size 0xcc, virtual true, abstract: false, final true
inline bool get_IsEmpty() ;

/// @brief Method get_IsValid, addr 0xae9b918, size 0x5c, virtual true, abstract: false, final true
inline bool get_IsValid() ;

/// @brief Method get_Sphere, addr 0xae9bbbc, size 0xb0, virtual true, abstract: false, final true
inline ::UnityEngine::BoundingSphere get_Sphere() ;

/// @brief Method get_Transform, addr 0xae9b910, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Method get_m_Targets, addr 0xae9b830, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*> get_m_Targets() ;

/// @brief Convert to "::Unity::Cinemachine::ICinemachineTargetGroup"
constexpr ::Unity::Cinemachine::ICinemachineTargetGroup* i___Unity__Cinemachine__ICinemachineTargetGroup() noexcept;

/// @brief Method set_BoundingBox, addr 0xae9bba8, size 0x14, virtual false, abstract: false, final false
inline void set_BoundingBox(::UnityEngine::Bounds  value) ;

/// @brief Method set_Sphere, addr 0xae9bc6c, size 0xc, virtual false, abstract: false, final false
inline void set_Sphere(::UnityEngine::BoundingSphere  value) ;

/// @brief Method set_m_Targets, addr 0xae9b880, size 0x90, virtual false, abstract: false, final false
inline void set_m_Targets(::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTargetGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTargetGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineTargetGroup(CinemachineTargetGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTargetGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineTargetGroup(CinemachineTargetGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22219};

/// [Tooltip("How the group\'s position is calculated.  Select GroupCenter for the center of the bounding box, and GroupAverage for a weighted average of the positions of the members.")]
/// [FormerlySerializedAs("m_PositionMode")]
/// @brief Field PositionMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineTargetGroup_PositionModes  ___PositionMode;

/// [Tooltip("How the group\'s rotation is calculated.  Select Manual to use the value in the group\'s transform, and GroupAverage for a weighted average of the orientations of the members.")]
/// [FormerlySerializedAs("m_RotationMode")]
/// @brief Field RotationMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineTargetGroup_RotationModes  ___RotationMode;

/// [Tooltip("When to update the group\'s transform based on the position of the group members")]
/// [FormerlySerializedAs("m_UpdateMethod")]
/// @brief Field UpdateMethod, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineTargetGroup_UpdateMethods  ___UpdateMethod;

/// [NoSaveDuringPlay]
/// [Tooltip("The target objects, together with their weights and radii, that will contribute to the group\'s average position, orientation, and size.")]
/// @brief Field Targets, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>*  ___Targets;

/// @brief Field m_MaxWeight, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_MaxWeight;

/// @brief Field m_WeightSum, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_WeightSum;

/// @brief Field m_AveragePos, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_AveragePos;

/// @brief Field m_BoundingBox, offset: 0x4c, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___m_BoundingBox;

/// @brief Field m_BoundingSphere, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::BoundingSphere  ___m_BoundingSphere;

/// @brief Field m_LastUpdateFrame, offset: 0x74, size: 0x4, def value: None
 int32_t  ___m_LastUpdateFrame;

/// @brief Field m_ValidMembers, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_ValidMembers;

/// @brief Field m_MemberValidity, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<bool>*  ___m_MemberValidity;

/// [HideInInspector]
/// [SerializeField]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("m_Targets")]
/// @brief Field m_LegacyTargets, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>  ___m_LegacyTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___PositionMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___RotationMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___UpdateMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___Targets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_MaxWeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_WeightSum) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_AveragePos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_BoundingBox) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_BoundingSphere) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_LastUpdateFrame) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_ValidMembers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_MemberValidity) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup, ___m_LegacyTargets) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineTargetGroup) == 0x90, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTargetGroup/Target
class CORDL_TYPE CinemachineTargetGroup_Target : public ::System::Object {
public:
// Declarations
/// @brief Field Object, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::UnityW<::UnityEngine::Transform>  Object;

/// @brief Field Radius, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field Weight, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight, put=__cordl_internal_set_Weight)) float_t  Weight;

static inline ::Unity::Cinemachine::CinemachineTargetGroup_Target* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Object() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Object() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr float_t const& __cordl_internal_get_Weight() const;

constexpr float_t& __cordl_internal_get_Weight() ;

constexpr void __cordl_internal_set_Object(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_Weight(float_t  value) ;

/// @brief Method .ctor, addr 0xae9be58, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTargetGroup_Target() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTargetGroup_Target", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineTargetGroup_Target(CinemachineTargetGroup_Target && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTargetGroup_Target", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineTargetGroup_Target(CinemachineTargetGroup_Target const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22215};

/// [Tooltip("The target object.  This object\'s position and rotation will contribute to the group\'s average position and rotation, in accordance with its weight")]
/// [FormerlySerializedAs("target")]
/// @brief Field Object, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Object;

/// [Tooltip("How much weight to give the target when averaging.  Cannot be negative")]
/// [FormerlySerializedAs("weight")]
/// @brief Field Weight, offset: 0x18, size: 0x4, def value: None
 float_t  ___Weight;

/// [Tooltip("The radius of the target, used for calculating the bounding box.  Cannot be negative")]
/// [FormerlySerializedAs("radius")]
/// @brief Field Radius, offset: 0x1c, size: 0x4, def value: None
 float_t  ___Radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup_Target, ___Object) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup_Target, ___Weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTargetGroup_Target, ___Radius) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineTargetGroup_Target) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
