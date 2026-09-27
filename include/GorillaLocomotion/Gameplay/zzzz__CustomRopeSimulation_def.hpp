#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/CustomRopeSimulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Gameplay/zzzz__BurstRopeNode_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomRopeSimulation)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class CustomRopeSimulation;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::CustomRopeSimulation*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::CustomRopeSimulation*, "GorillaLocomotion.Gameplay", "CustomRopeSimulation");
// Dependencies GorillaLocomotion.Gameplay.BurstRopeNode, Unity.Collections.NativeArray`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.CustomRopeSimulation
class CORDL_TYPE CustomRopeSimulation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field burstNodes, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_burstNodes, put=__cordl_internal_set_burstNodes)) ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>  burstNodes;

/// @brief Field gravity, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) ::UnityEngine::Vector3  gravity;

/// @brief Field nodeCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodeCount, put=__cordl_internal_set_nodeCount)) int32_t  nodeCount;

/// @brief Field nodeDistance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodeDistance, put=__cordl_internal_set_nodeDistance)) float_t  nodeDistance;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  nodes;

/// @brief Field ropeNodePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeNodePrefab, put=__cordl_internal_set_ropeNodePrefab)) ::UnityW<::UnityEngine::GameObject>  ropeNodePrefab;

static inline ::GorillaLocomotion::Gameplay::CustomRopeSimulation* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ce8e68, size 0x48, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5ce8bfc, size 0x26c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5ce8eb0, size 0x1d4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode> const& __cordl_internal_get_burstNodes() const;

constexpr ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>& __cordl_internal_get_burstNodes() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravity() ;

constexpr int32_t const& __cordl_internal_get_nodeCount() const;

constexpr int32_t& __cordl_internal_get_nodeCount() ;

constexpr float_t const& __cordl_internal_get_nodeDistance() const;

constexpr float_t& __cordl_internal_get_nodeDistance() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_nodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_nodes() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ropeNodePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ropeNodePrefab() ;

constexpr void __cordl_internal_set_burstNodes(::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>  value) ;

constexpr void __cordl_internal_set_gravity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_nodeCount(int32_t  value) ;

constexpr void __cordl_internal_set_nodeDistance(float_t  value) ;

constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_ropeNodePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5ce9084, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomRopeSimulation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomRopeSimulation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomRopeSimulation(CustomRopeSimulation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomRopeSimulation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomRopeSimulation(CustomRopeSimulation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4524};

/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___nodes;

/// [SerializeField]
/// @brief Field ropeNodePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ropeNodePrefab;

/// [SerializeField]
/// @brief Field nodeCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___nodeCount;

/// [SerializeField]
/// @brief Field nodeDistance, offset: 0x34, size: 0x4, def value: None
 float_t  ___nodeDistance;

/// [SerializeField]
/// @brief Field gravity, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gravity;

/// @brief Field burstNodes, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GorillaLocomotion::Gameplay::BurstRopeNode>  ___burstNodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::CustomRopeSimulation, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::CustomRopeSimulation, ___ropeNodePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::CustomRopeSimulation, ___nodeCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::CustomRopeSimulation, ___nodeDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::CustomRopeSimulation, ___gravity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::CustomRopeSimulation, ___burstNodes) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::CustomRopeSimulation) == 0x58, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
