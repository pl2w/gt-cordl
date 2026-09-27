#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/VectorizedCustomRopeSimulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Gameplay/zzzz__VectorizedBurstRopeData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorizedCustomRopeSimulation)
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwing;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class VectorizedCustomRopeSimulation;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation*, "GorillaLocomotion.Gameplay", "VectorizedCustomRopeSimulation");
// Dependencies GorillaLocomotion.Gameplay.VectorizedBurstRopeData, UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.VectorizedCustomRopeSimulation
class CORDL_TYPE VectorizedCustomRopeSimulation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field applyConstraintIterations, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_applyConstraintIterations, put=__cordl_internal_set_applyConstraintIterations)) int32_t  applyConstraintIterations;

/// @brief Field burstData, offset 0x38, size 0x90 
 __declspec(property(get=__cordl_internal_get_burstData, put=__cordl_internal_set_burstData)) ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData  burstData;

/// @brief Field deregisterQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deregisterQueue, put=setStaticF_deregisterQueue)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  deregisterQueue;

/// @brief Field finalPassIterations, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_finalPassIterations, put=__cordl_internal_set_finalPassIterations)) int32_t  finalPassIterations;

/// @brief Field gravity, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) float_t  gravity;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation>  instance;

/// @brief Field lastDelta, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDelta, put=__cordl_internal_set_lastDelta)) float_t  lastDelta;

/// @brief Field nodeDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodeDistance, put=__cordl_internal_set_nodeDistance)) float_t  nodeDistance;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  nodes;

/// @brief Field registerQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registerQueue, put=setStaticF_registerQueue)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  registerQueue;

/// @brief Field ropes, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropes, put=__cordl_internal_set_ropes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  ropes;

/// @brief Method Awake, addr 0x5cf19fc, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Dispose, addr 0x5cf2280, size 0xfc, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetNodeVelocity, addr 0x5cea9d8, size 0x17c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetNodeVelocity(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, int32_t  nodeIndex) ;

static inline ::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5cf237c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RegenerateData, addr 0x5cf1a64, size 0x81c, virtual false, abstract: false, final false
inline void RegenerateData() ;

/// @brief Method Register, addr 0x5ce9e38, size 0xd4, virtual false, abstract: false, final false
static inline void Register(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  rope) ;

/// @brief Method SetMassForPlayers, addr 0x5cec138, size 0xf4, virtual false, abstract: false, final false
inline void SetMassForPlayers(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, bool  hasPlayers, int32_t  furthestBoneIndex) ;

/// @brief Method SetRopePos, addr 0x5cf2380, size 0x258, virtual false, abstract: false, final false
inline void SetRopePos(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, ::ArrayW<::UnityEngine::Vector3>  positions, bool  setCurPos, bool  setLastPos, int32_t  onlySetIndex) ;

/// @brief Method SetVelocity, addr 0x5cec470, size 0x408, virtual false, abstract: false, final false
inline void SetVelocity(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  ropeTarget, ::UnityEngine::Vector3  velocity, bool  wholeRope, int32_t  boneIndex) ;

/// @brief Method Unregister, addr 0x5cea0f8, size 0xd4, virtual false, abstract: false, final false
static inline void Unregister(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  rope) ;

/// @brief Method Update, addr 0x5cf25d8, size 0x444, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_applyConstraintIterations() const;

constexpr int32_t& __cordl_internal_get_applyConstraintIterations() ;

constexpr ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData const& __cordl_internal_get_burstData() const;

constexpr ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData& __cordl_internal_get_burstData() ;

constexpr int32_t const& __cordl_internal_get_finalPassIterations() const;

constexpr int32_t& __cordl_internal_get_finalPassIterations() ;

constexpr float_t const& __cordl_internal_get_gravity() const;

constexpr float_t& __cordl_internal_get_gravity() ;

constexpr float_t const& __cordl_internal_get_lastDelta() const;

constexpr float_t& __cordl_internal_get_lastDelta() ;

constexpr float_t const& __cordl_internal_get_nodeDistance() const;

constexpr float_t& __cordl_internal_get_nodeDistance() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_nodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_nodes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* const& __cordl_internal_get_ropes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*& __cordl_internal_get_ropes() ;

constexpr void __cordl_internal_set_applyConstraintIterations(int32_t  value) ;

constexpr void __cordl_internal_set_burstData(::GorillaLocomotion::Gameplay::VectorizedBurstRopeData  value) ;

constexpr void __cordl_internal_set_finalPassIterations(int32_t  value) ;

constexpr void __cordl_internal_set_gravity(float_t  value) ;

constexpr void __cordl_internal_set_lastDelta(float_t  value) ;

constexpr void __cordl_internal_set_nodeDistance(float_t  value) ;

constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_ropes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value) ;

/// @brief Method .ctor, addr 0x5cf2a1c, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* getStaticF_deregisterQueue() ;

static inline ::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* getStaticF_registerQueue() ;

static inline void setStaticF_deregisterQueue(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation>  value) ;

static inline void setStaticF_registerQueue(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorizedCustomRopeSimulation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorizedCustomRopeSimulation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorizedCustomRopeSimulation(VectorizedCustomRopeSimulation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorizedCustomRopeSimulation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorizedCustomRopeSimulation(VectorizedCustomRopeSimulation const& ) = delete;

/// @brief Field MAX_NODE_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  MAX_NODE_COUNT{static_cast<int32_t>(0x20)};

/// @brief Field MAX_ROPE_SPEED offset 0xffffffff size 0x4
static constexpr float_t  MAX_ROPE_SPEED{static_cast<float_t>(15.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4543};

/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___nodes;

/// [SerializeField]
/// @brief Field nodeDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___nodeDistance;

/// [SerializeField]
/// @brief Field applyConstraintIterations, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___applyConstraintIterations;

/// [SerializeField]
/// @brief Field finalPassIterations, offset: 0x30, size: 0x4, def value: None
 int32_t  ___finalPassIterations;

/// [SerializeField]
/// @brief Field gravity, offset: 0x34, size: 0x4, def value: None
 float_t  ___gravity;

/// @brief Field burstData, offset: 0x38, size: 0x90, def value: None
 ::GorillaLocomotion::Gameplay::VectorizedBurstRopeData  ___burstData;

/// @brief Field lastDelta, offset: 0xc8, size: 0x4, def value: None
 float_t  ___lastDelta;

/// @brief Field ropes, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  ___ropes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___nodeDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___applyConstraintIterations) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___finalPassIterations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___gravity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___burstData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___lastDelta) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation, ___ropes) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::VectorizedCustomRopeSimulation) == 0xd8, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
