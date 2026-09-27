#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GroupWeightManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GroupWeightManipulator)
namespace Unity::Cinemachine {
class CinemachineTargetGroup;
}
// Forward declare root types
namespace Unity::Cinemachine {
class GroupWeightManipulator;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::GroupWeightManipulator*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::GroupWeightManipulator*, "Unity.Cinemachine", "GroupWeightManipulator");
// [RequireComponent(typeof(Unity.Cinemachine.CinemachineTargetGroup))]
// [ExecuteAlways]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Group Weight Manipulator")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/GroupWeightManipulator.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.GroupWeightManipulator
class CORDL_TYPE GroupWeightManipulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Weight0, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight0, put=__cordl_internal_set_Weight0)) float_t  Weight0;

/// @brief Field Weight1, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight1, put=__cordl_internal_set_Weight1)) float_t  Weight1;

/// @brief Field Weight2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight2, put=__cordl_internal_set_Weight2)) float_t  Weight2;

/// @brief Field Weight3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight3, put=__cordl_internal_set_Weight3)) float_t  Weight3;

/// @brief Field Weight4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight4, put=__cordl_internal_set_Weight4)) float_t  Weight4;

/// @brief Field Weight5, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight5, put=__cordl_internal_set_Weight5)) float_t  Weight5;

/// @brief Field Weight6, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight6, put=__cordl_internal_set_Weight6)) float_t  Weight6;

/// @brief Field Weight7, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight7, put=__cordl_internal_set_Weight7)) float_t  Weight7;

/// @brief Field m_Group, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Group, put=__cordl_internal_set_m_Group)) ::UnityW<::Unity::Cinemachine::CinemachineTargetGroup>  m_Group;

static inline ::Unity::Cinemachine::GroupWeightManipulator* New_ctor() ;

/// @brief Method OnValidate, addr 0xaee127c, size 0x1c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0xaee1230, size 0x4c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xaee1298, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateWeights, addr 0xaee1310, size 0x188, virtual false, abstract: false, final false
inline void UpdateWeights() ;

constexpr float_t const& __cordl_internal_get_Weight0() const;

constexpr float_t& __cordl_internal_get_Weight0() ;

constexpr float_t const& __cordl_internal_get_Weight1() const;

constexpr float_t& __cordl_internal_get_Weight1() ;

constexpr float_t const& __cordl_internal_get_Weight2() const;

constexpr float_t& __cordl_internal_get_Weight2() ;

constexpr float_t const& __cordl_internal_get_Weight3() const;

constexpr float_t& __cordl_internal_get_Weight3() ;

constexpr float_t const& __cordl_internal_get_Weight4() const;

constexpr float_t& __cordl_internal_get_Weight4() ;

constexpr float_t const& __cordl_internal_get_Weight5() const;

constexpr float_t& __cordl_internal_get_Weight5() ;

constexpr float_t const& __cordl_internal_get_Weight6() const;

constexpr float_t& __cordl_internal_get_Weight6() ;

constexpr float_t const& __cordl_internal_get_Weight7() const;

constexpr float_t& __cordl_internal_get_Weight7() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineTargetGroup> const& __cordl_internal_get_m_Group() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineTargetGroup>& __cordl_internal_get_m_Group() ;

constexpr void __cordl_internal_set_Weight0(float_t  value) ;

constexpr void __cordl_internal_set_Weight1(float_t  value) ;

constexpr void __cordl_internal_set_Weight2(float_t  value) ;

constexpr void __cordl_internal_set_Weight3(float_t  value) ;

constexpr void __cordl_internal_set_Weight4(float_t  value) ;

constexpr void __cordl_internal_set_Weight5(float_t  value) ;

constexpr void __cordl_internal_set_Weight6(float_t  value) ;

constexpr void __cordl_internal_set_Weight7(float_t  value) ;

constexpr void __cordl_internal_set_m_Group(::UnityW<::Unity::Cinemachine::CinemachineTargetGroup>  value) ;

/// @brief Method .ctor, addr 0xaee1498, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupWeightManipulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupWeightManipulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupWeightManipulator(GroupWeightManipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupWeightManipulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupWeightManipulator(GroupWeightManipulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22466};

/// [Tooltip("The weight of the group member at index 0")]
/// [FormerlySerializedAs("m_Weight0")]
/// @brief Field Weight0, offset: 0x20, size: 0x4, def value: None
 float_t  ___Weight0;

/// [Tooltip("The weight of the group member at index 1")]
/// [FormerlySerializedAs("m_Weight1")]
/// @brief Field Weight1, offset: 0x24, size: 0x4, def value: None
 float_t  ___Weight1;

/// [Tooltip("The weight of the group member at index 2")]
/// [FormerlySerializedAs("m_Weight2")]
/// @brief Field Weight2, offset: 0x28, size: 0x4, def value: None
 float_t  ___Weight2;

/// [Tooltip("The weight of the group member at index 3")]
/// [FormerlySerializedAs("m_Weight3")]
/// @brief Field Weight3, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Weight3;

/// [Tooltip("The weight of the group member at index 4")]
/// [FormerlySerializedAs("m_Weight4")]
/// @brief Field Weight4, offset: 0x30, size: 0x4, def value: None
 float_t  ___Weight4;

/// [Tooltip("The weight of the group member at index 5")]
/// [FormerlySerializedAs("m_Weight5")]
/// @brief Field Weight5, offset: 0x34, size: 0x4, def value: None
 float_t  ___Weight5;

/// [Tooltip("The weight of the group member at index 6")]
/// [FormerlySerializedAs("m_Weight6")]
/// @brief Field Weight6, offset: 0x38, size: 0x4, def value: None
 float_t  ___Weight6;

/// [Tooltip("The weight of the group member at index 7")]
/// [FormerlySerializedAs("m_Weight7")]
/// @brief Field Weight7, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Weight7;

/// @brief Field m_Group, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineTargetGroup>  ___m_Group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight5) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight6) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___Weight7) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::GroupWeightManipulator, ___m_Group) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::GroupWeightManipulator) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
