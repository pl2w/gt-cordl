#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabbyTentacleController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TentacleTracker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabbyTentacleController)
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class GrabbyTentacleController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GrabbyTentacleController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabbyTentacleController*, "", "GrabbyTentacleController");
// Dependencies TentacleTracker, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabbyTentacleController
class CORDL_TYPE GrabbyTentacleController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field candidateBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_candidateBuffer, put=__cordl_internal_set_candidateBuffer)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  candidateBuffer;

/// @brief Field freshCandidates, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_freshCandidates, put=__cordl_internal_set_freshCandidates)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  freshCandidates;

/// @brief Field grabRegion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabRegion, put=__cordl_internal_set_grabRegion)) ::UnityW<::UnityEngine::BoxCollider>  grabRegion;

/// @brief Field grabbedBefore, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedBefore, put=__cordl_internal_set_grabbedBefore)) ::System::Collections::Generic::HashSet_1<int32_t>*  grabbedBefore;

/// @brief Field maxRetryDelay, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetryDelay, put=__cordl_internal_set_maxRetryDelay)) float_t  maxRetryDelay;

/// @brief Field minRetryDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_minRetryDelay, put=__cordl_internal_set_minRetryDelay)) float_t  minRetryDelay;

/// @brief Field nextAttemptTimestamp, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextAttemptTimestamp, put=__cordl_internal_set_nextAttemptTimestamp)) float_t  nextAttemptTimestamp;

/// @brief Field tentacles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacles, put=__cordl_internal_set_tentacles)) ::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>>  tentacles;

/// @brief Method IsRigCurrentlyGrabbed, addr 0x5641fd8, size 0x108, virtual false, abstract: false, final false
inline bool IsRigCurrentlyGrabbed(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::GrabbyTentacleController* New_ctor() ;

/// @brief Method OnDisable, addr 0x56413b4, size 0xe4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5641264, size 0x150, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrabReceived, addr 0x5641f1c, size 0xbc, virtual false, abstract: false, final false
inline void OnGrabReceived(int32_t  tentacleIndex, ::GlobalNamespace::VRRig*  targetRig, bool  isLocalPlayer) ;

/// @brief Method PickTarget, addr 0x5641838, size 0x544, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* PickTarget() ;

/// @brief Method Update, addr 0x5641528, size 0x310, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_candidateBuffer() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_candidateBuffer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_freshCandidates() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_freshCandidates() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_grabRegion() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_grabRegion() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_grabbedBefore() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_grabbedBefore() ;

constexpr float_t const& __cordl_internal_get_maxRetryDelay() const;

constexpr float_t& __cordl_internal_get_maxRetryDelay() ;

constexpr float_t const& __cordl_internal_get_minRetryDelay() const;

constexpr float_t& __cordl_internal_get_minRetryDelay() ;

constexpr float_t const& __cordl_internal_get_nextAttemptTimestamp() const;

constexpr float_t& __cordl_internal_get_nextAttemptTimestamp() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>> const& __cordl_internal_get_tentacles() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>>& __cordl_internal_get_tentacles() ;

constexpr void __cordl_internal_set_candidateBuffer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_freshCandidates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_grabRegion(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_grabbedBefore(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_maxRetryDelay(float_t  value) ;

constexpr void __cordl_internal_set_minRetryDelay(float_t  value) ;

constexpr void __cordl_internal_set_nextAttemptTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_tentacles(::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>>  value) ;

/// @brief Method .ctor, addr 0x5642204, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabbyTentacleController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabbyTentacleController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabbyTentacleController(GrabbyTentacleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabbyTentacleController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabbyTentacleController(GrabbyTentacleController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{651};

/// [SerializeField]
/// @brief Field tentacles, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TentacleTracker>>  ___tentacles;

/// [SerializeField]
/// @brief Field grabRegion, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___grabRegion;

/// [SerializeField]
/// @brief Field minRetryDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ___minRetryDelay;

/// [SerializeField]
/// @brief Field maxRetryDelay, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxRetryDelay;

/// @brief Field nextAttemptTimestamp, offset: 0x38, size: 0x4, def value: None
 float_t  ___nextAttemptTimestamp;

/// @brief Field grabbedBefore, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___grabbedBefore;

/// @brief Field candidateBuffer, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___candidateBuffer;

/// @brief Field freshCandidates, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___freshCandidates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___tentacles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___grabRegion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___minRetryDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___maxRetryDelay) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___nextAttemptTimestamp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___grabbedBefore) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___candidateBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabbyTentacleController, ___freshCandidates) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabbyTentacleController) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
