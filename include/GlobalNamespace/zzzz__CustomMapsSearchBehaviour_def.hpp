#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsSearchBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsBehaviourBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomMapsSearchBehaviour)
namespace GT_CustomMapSupportRuntime {
class AIAgent;
}
namespace GlobalNamespace {
class CustomMapsAIBehaviourController;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsSearchBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsSearchBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsSearchBehaviour*, "", "CustomMapsSearchBehaviour");
// Dependencies CustomMapsBehaviourBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsSearchBehaviour
class CORDL_TYPE CustomMapsSearchBehaviour : public ::GlobalNamespace::CustomMapsBehaviourBase {
public:
// Declarations
/// @brief Field controller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  controller;

/// @brief Field lastSearchTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSearchTime, put=__cordl_internal_set_lastSearchTime)) float_t  lastSearchTime;

/// @brief Field sightDist, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightDist, put=__cordl_internal_set_sightDist)) float_t  sightDist;

/// @brief Field sightDistSq, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightDistSq, put=__cordl_internal_set_sightDistSq)) float_t  sightDistSq;

/// @brief Field sightFOV, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightFOV, put=__cordl_internal_set_sightFOV)) float_t  sightFOV;

/// @brief Field sightMinDot, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightMinDot, put=__cordl_internal_set_sightMinDot)) float_t  sightMinDot;

/// @brief Field sightOffset, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_sightOffset, put=__cordl_internal_set_sightOffset)) ::UnityEngine::Vector3  sightOffset;

/// @brief Method CanContinueExecuting, addr 0x59c32e4, size 0x90, virtual true, abstract: false, final false
inline bool CanContinueExecuting() ;

/// @brief Method CanExecute, addr 0x59c327c, size 0x68, virtual true, abstract: false, final false
inline bool CanExecute() ;

/// @brief Method Execute, addr 0x59c3374, size 0xe4, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method NetExecute, addr 0x59c34d0, size 0x4, virtual true, abstract: false, final false
inline void NetExecute() ;

static inline ::GlobalNamespace::CustomMapsSearchBehaviour* New_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIcontroller, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings) ;

/// @brief Method OnTriggerEnter, addr 0x59c34d8, size 0x4, virtual true, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  otherCollider) ;

/// @brief Method ResetBehavior, addr 0x59c34d4, size 0x4, virtual true, abstract: false, final false
inline void ResetBehavior() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>& __cordl_internal_get_controller() ;

constexpr float_t const& __cordl_internal_get_lastSearchTime() const;

constexpr float_t& __cordl_internal_get_lastSearchTime() ;

constexpr float_t const& __cordl_internal_get_sightDist() const;

constexpr float_t& __cordl_internal_get_sightDist() ;

constexpr float_t const& __cordl_internal_get_sightDistSq() const;

constexpr float_t& __cordl_internal_get_sightDistSq() ;

constexpr float_t const& __cordl_internal_get_sightFOV() const;

constexpr float_t& __cordl_internal_get_sightFOV() ;

constexpr float_t const& __cordl_internal_get_sightMinDot() const;

constexpr float_t& __cordl_internal_get_sightMinDot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sightOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sightOffset() ;

constexpr void __cordl_internal_set_controller(::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  value) ;

constexpr void __cordl_internal_set_lastSearchTime(float_t  value) ;

constexpr void __cordl_internal_set_sightDist(float_t  value) ;

constexpr void __cordl_internal_set_sightDistSq(float_t  value) ;

constexpr void __cordl_internal_set_sightFOV(float_t  value) ;

constexpr void __cordl_internal_set_sightMinDot(float_t  value) ;

constexpr void __cordl_internal_set_sightOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x59c3204, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIcontroller, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsSearchBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsSearchBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsSearchBehaviour(CustomMapsSearchBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsSearchBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsSearchBehaviour(CustomMapsSearchBehaviour const& ) = delete;

/// @brief Field SEARCH_COOLDOWN offset 0xffffffff size 0x4
static constexpr float_t  SEARCH_COOLDOWN{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2674};

/// @brief Field controller, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  ___controller;

/// @brief Field sightDist, offset: 0x18, size: 0x4, def value: None
 float_t  ___sightDist;

/// @brief Field sightDistSq, offset: 0x1c, size: 0x4, def value: None
 float_t  ___sightDistSq;

/// @brief Field sightOffset, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sightOffset;

/// @brief Field sightFOV, offset: 0x2c, size: 0x4, def value: None
 float_t  ___sightFOV;

/// @brief Field sightMinDot, offset: 0x30, size: 0x4, def value: None
 float_t  ___sightMinDot;

/// @brief Field lastSearchTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___lastSearchTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsSearchBehaviour, ___controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchBehaviour, ___sightDist) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchBehaviour, ___sightDistSq) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchBehaviour, ___sightOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchBehaviour, ___sightFOV) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchBehaviour, ___sightMinDot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsSearchBehaviour, ___lastSearchTime) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsSearchBehaviour) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
