#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaWalkingGrab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaWalkingGrab)
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaWalkingGrab;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaWalkingGrab*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaWalkingGrab*, "", "GorillaWalkingGrab");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaWalkingGrab
class CORDL_TYPE GorillaWalkingGrab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field forceMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_forceMultiplier, put=__cordl_internal_set_forceMultiplier)) float_t  forceMultiplier;

/// @brief Field handToStickTo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handToStickTo, put=__cordl_internal_set_handToStickTo)) ::UnityW<::UnityEngine::GameObject>  handToStickTo;

/// @brief Field historyIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_historyIndex, put=__cordl_internal_set_historyIndex)) int32_t  historyIndex;

/// @brief Field historySteps, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_historySteps, put=__cordl_internal_set_historySteps)) int32_t  historySteps;

/// @brief Field lastPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field maybeLastPositionIDK, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_maybeLastPositionIDK, put=__cordl_internal_set_maybeLastPositionIDK)) ::UnityEngine::Vector3  maybeLastPositionIDK;

/// @brief Field playspaceRigidbody, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playspaceRigidbody, put=__cordl_internal_set_playspaceRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  playspaceRigidbody;

/// @brief Field positionHistory, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionHistory, put=__cordl_internal_set_positionHistory)) ::ArrayW<::UnityEngine::Vector3>  positionHistory;

/// @brief Field ratioToUse, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ratioToUse, put=__cordl_internal_set_ratioToUse)) float_t  ratioToUse;

/// @brief Field thisRigidbody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisRigidbody, put=__cordl_internal_set_thisRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  thisRigidbody;

/// @brief Method FixedUpdate, addr 0x579e29c, size 0xe4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method MakeJump, addr 0x579e380, size 0x8, virtual false, abstract: false, final false
inline bool MakeJump() ;

static inline ::GlobalNamespace::GorillaWalkingGrab* New_ctor() ;

/// @brief Method OnCollisionStay, addr 0x579e388, size 0x238, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method Start, addr 0x579e1fc, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_forceMultiplier() const;

constexpr float_t& __cordl_internal_get_forceMultiplier() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_handToStickTo() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_handToStickTo() ;

constexpr int32_t const& __cordl_internal_get_historyIndex() const;

constexpr int32_t& __cordl_internal_get_historyIndex() ;

constexpr int32_t const& __cordl_internal_get_historySteps() const;

constexpr int32_t& __cordl_internal_get_historySteps() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_maybeLastPositionIDK() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_maybeLastPositionIDK() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_playspaceRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_playspaceRigidbody() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_positionHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_positionHistory() ;

constexpr float_t const& __cordl_internal_get_ratioToUse() const;

constexpr float_t& __cordl_internal_get_ratioToUse() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_thisRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_thisRigidbody() ;

constexpr void __cordl_internal_set_forceMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_handToStickTo(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_historyIndex(int32_t  value) ;

constexpr void __cordl_internal_set_historySteps(int32_t  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maybeLastPositionIDK(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_playspaceRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_positionHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_ratioToUse(float_t  value) ;

constexpr void __cordl_internal_set_thisRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x579e5c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaWalkingGrab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaWalkingGrab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaWalkingGrab(GorillaWalkingGrab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaWalkingGrab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaWalkingGrab(GorillaWalkingGrab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1515};

/// @brief Field handToStickTo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___handToStickTo;

/// @brief Field ratioToUse, offset: 0x28, size: 0x4, def value: None
 float_t  ___ratioToUse;

/// @brief Field forceMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ___forceMultiplier;

/// @brief Field historySteps, offset: 0x30, size: 0x4, def value: None
 int32_t  ___historySteps;

/// @brief Field playspaceRigidbody, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___playspaceRigidbody;

/// @brief Field thisRigidbody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___thisRigidbody;

/// @brief Field lastPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field maybeLastPositionIDK, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___maybeLastPositionIDK;

/// @brief Field positionHistory, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___positionHistory;

/// @brief Field historyIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___historyIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___handToStickTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___ratioToUse) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___forceMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___historySteps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___playspaceRigidbody) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___thisRigidbody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___lastPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___maybeLastPositionIDK) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___positionHistory) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaWalkingGrab, ___historyIndex) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaWalkingGrab) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
