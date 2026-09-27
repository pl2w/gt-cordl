#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBall)
namespace GlobalNamespace {
class GameBall;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBall;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBall*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBall*, "", "MonkeBall");
// Dependencies MonoBehaviourTick, UnityEngine.Material, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBall
class CORDL_TYPE MonkeBall : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field _droppedTimer, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__droppedTimer, put=__cordl_internal_set__droppedTimer)) float_t  _droppedTimer;

/// @brief Field _justGrabbed, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__justGrabbed, put=__cordl_internal_set__justGrabbed)) bool  _justGrabbed;

/// @brief Field _justGrabbedTimer, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__justGrabbedTimer, put=__cordl_internal_set__justGrabbedTimer)) float_t  _justGrabbedTimer;

/// @brief Field _launchAfterScore, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__launchAfterScore, put=__cordl_internal_set__launchAfterScore)) bool  _launchAfterScore;

/// @brief Field _offsetThreshold, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__offsetThreshold, put=__cordl_internal_set__offsetThreshold)) float_t  _offsetThreshold;

/// @brief Field _positionFailsafe, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__positionFailsafe, put=__cordl_internal_set__positionFailsafe)) bool  _positionFailsafe;

/// @brief Field _positionFailsafeTimer, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__positionFailsafeTimer, put=__cordl_internal_set__positionFailsafeTimer)) float_t  _positionFailsafeTimer;

/// @brief Field _resyncDelay, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__resyncDelay, put=__cordl_internal_set__resyncDelay)) float_t  _resyncDelay;

/// @brief Field _resyncPosition, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__resyncPosition, put=__cordl_internal_set__resyncPosition)) bool  _resyncPosition;

/// @brief Field _rigidBody, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidBody, put=__cordl_internal_set__rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidBody;

/// @brief Field _timeOffset, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeOffset, put=__cordl_internal_set__timeOffset)) float_t  _timeOffset;

/// @brief Field _visualOffset, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__visualOffset, put=__cordl_internal_set__visualOffset)) bool  _visualOffset;

/// @brief Field alreadyDropped, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_alreadyDropped, put=__cordl_internal_set_alreadyDropped)) bool  alreadyDropped;

/// @brief Field defaultMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterial, put=__cordl_internal_set_defaultMaterial)) ::UnityW<::UnityEngine::Material>  defaultMaterial;

/// @brief Field gameBall, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameBall, put=__cordl_internal_set_gameBall)) ::UnityW<::GlobalNamespace::GameBall>  gameBall;

/// @brief Field lastVisiblePosition, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastVisiblePosition, put=__cordl_internal_set_lastVisiblePosition)) ::UnityEngine::Vector3  lastVisiblePosition;

/// @brief Field mainRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainRenderer, put=__cordl_internal_set_mainRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  mainRenderer;

/// @brief Field maxLerpTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLerpTime, put=__cordl_internal_set_maxLerpTime)) float_t  maxLerpTime;

/// @brief Field offsetLerp, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetLerp, put=__cordl_internal_set_offsetLerp)) float_t  offsetLerp;

/// @brief Field restrictTeamGrabEndTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_restrictTeamGrabEndTime, put=__cordl_internal_set_restrictTeamGrabEndTime)) double_t  restrictTeamGrabEndTime;

/// @brief Field teamMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamMaterial, put=__cordl_internal_set_teamMaterial)) ::ArrayW<::UnityW<::UnityEngine::Material>>  teamMaterial;

/// @brief Method AlreadyDropped, addr 0x57aa0d4, size 0x8, virtual false, abstract: false, final false
inline bool AlreadyDropped() ;

/// @brief Method ClearCannotGrabTeamId, addr 0x57aa1ac, size 0x24, virtual false, abstract: false, final false
inline void ClearCannotGrabTeamId() ;

/// @brief Method Get, addr 0x57aa03c, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MonkeBall> Get(::GlobalNamespace::GameBall*  ball) ;

/// @brief Method IsGamePlayer, addr 0x57a9ebc, size 0x70, virtual false, abstract: false, final false
static inline bool IsGamePlayer(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::MonkeBall* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x57a9cd4, size 0x1e8, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnGrabbed, addr 0x57aa0dc, size 0x1c, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnSwitchHeldByTeam, addr 0x57aa0f8, size 0xb4, virtual false, abstract: false, final false
inline void OnSwitchHeldByTeam(int32_t  teamId) ;

/// @brief Method ReattachVisuals, addr 0x57aa2dc, size 0x114, virtual false, abstract: false, final false
inline void ReattachVisuals() ;

/// @brief Method Refresh, addr 0x57a94a4, size 0x64, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method RestrictBallToTeam, addr 0x57aa1d0, size 0x90, virtual false, abstract: false, final false
inline bool RestrictBallToTeam(int32_t  teamId, float_t  duration) ;

/// @brief Method SetRigidbodyContinuous, addr 0x57aa020, size 0x1c, virtual false, abstract: false, final false
inline void SetRigidbodyContinuous() ;

/// @brief Method SetRigidbodyDiscrete, addr 0x57aa004, size 0x1c, virtual false, abstract: false, final false
inline void SetRigidbodyDiscrete() ;

/// @brief Method SetVisualOffset, addr 0x57aa260, size 0x7c, virtual false, abstract: false, final false
inline void SetVisualOffset(bool  detach) ;

/// @brief Method Start, addr 0x57a94a0, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x57a9508, size 0x610, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TriggerDelayedResync, addr 0x57a9f90, size 0x74, virtual false, abstract: false, final false
inline void TriggerDelayedResync() ;

/// @brief Method UpdateVisualOffset, addr 0x57a9b18, size 0x18c, virtual false, abstract: false, final false
inline void UpdateVisualOffset() ;

constexpr float_t const& __cordl_internal_get__droppedTimer() const;

constexpr float_t& __cordl_internal_get__droppedTimer() ;

constexpr bool const& __cordl_internal_get__justGrabbed() const;

constexpr bool& __cordl_internal_get__justGrabbed() ;

constexpr float_t const& __cordl_internal_get__justGrabbedTimer() const;

constexpr float_t& __cordl_internal_get__justGrabbedTimer() ;

constexpr bool const& __cordl_internal_get__launchAfterScore() const;

constexpr bool& __cordl_internal_get__launchAfterScore() ;

constexpr float_t const& __cordl_internal_get__offsetThreshold() const;

constexpr float_t& __cordl_internal_get__offsetThreshold() ;

constexpr bool const& __cordl_internal_get__positionFailsafe() const;

constexpr bool& __cordl_internal_get__positionFailsafe() ;

constexpr float_t const& __cordl_internal_get__positionFailsafeTimer() const;

constexpr float_t& __cordl_internal_get__positionFailsafeTimer() ;

constexpr float_t const& __cordl_internal_get__resyncDelay() const;

constexpr float_t& __cordl_internal_get__resyncDelay() ;

constexpr bool const& __cordl_internal_get__resyncPosition() const;

constexpr bool& __cordl_internal_get__resyncPosition() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidBody() ;

constexpr float_t const& __cordl_internal_get__timeOffset() const;

constexpr float_t& __cordl_internal_get__timeOffset() ;

constexpr bool const& __cordl_internal_get__visualOffset() const;

constexpr bool& __cordl_internal_get__visualOffset() ;

constexpr bool const& __cordl_internal_get_alreadyDropped() const;

constexpr bool& __cordl_internal_get_alreadyDropped() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMaterial() ;

constexpr ::UnityW<::GlobalNamespace::GameBall> const& __cordl_internal_get_gameBall() const;

constexpr ::UnityW<::GlobalNamespace::GameBall>& __cordl_internal_get_gameBall() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastVisiblePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastVisiblePosition() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_mainRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_mainRenderer() ;

constexpr float_t const& __cordl_internal_get_maxLerpTime() const;

constexpr float_t& __cordl_internal_get_maxLerpTime() ;

constexpr float_t const& __cordl_internal_get_offsetLerp() const;

constexpr float_t& __cordl_internal_get_offsetLerp() ;

constexpr double_t const& __cordl_internal_get_restrictTeamGrabEndTime() const;

constexpr double_t& __cordl_internal_get_restrictTeamGrabEndTime() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_teamMaterial() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_teamMaterial() ;

constexpr void __cordl_internal_set__droppedTimer(float_t  value) ;

constexpr void __cordl_internal_set__justGrabbed(bool  value) ;

constexpr void __cordl_internal_set__justGrabbedTimer(float_t  value) ;

constexpr void __cordl_internal_set__launchAfterScore(bool  value) ;

constexpr void __cordl_internal_set__offsetThreshold(float_t  value) ;

constexpr void __cordl_internal_set__positionFailsafe(bool  value) ;

constexpr void __cordl_internal_set__positionFailsafeTimer(float_t  value) ;

constexpr void __cordl_internal_set__resyncDelay(float_t  value) ;

constexpr void __cordl_internal_set__resyncPosition(bool  value) ;

constexpr void __cordl_internal_set__rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__timeOffset(float_t  value) ;

constexpr void __cordl_internal_set__visualOffset(bool  value) ;

constexpr void __cordl_internal_set_alreadyDropped(bool  value) ;

constexpr void __cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_gameBall(::UnityW<::GlobalNamespace::GameBall>  value) ;

constexpr void __cordl_internal_set_lastVisiblePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mainRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_maxLerpTime(float_t  value) ;

constexpr void __cordl_internal_set_offsetLerp(float_t  value) ;

constexpr void __cordl_internal_set_restrictTeamGrabEndTime(double_t  value) ;

constexpr void __cordl_internal_set_teamMaterial(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

/// @brief Method .ctor, addr 0x57aa3f0, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBall(MonkeBall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBall(MonkeBall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1545};

/// @brief Field gameBall, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameBall>  ___gameBall;

/// @brief Field mainRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___mainRenderer;

/// @brief Field defaultMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMaterial;

/// @brief Field teamMaterial, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___teamMaterial;

/// @brief Field restrictTeamGrabEndTime, offset: 0x48, size: 0x8, def value: None
 double_t  ___restrictTeamGrabEndTime;

/// @brief Field alreadyDropped, offset: 0x50, size: 0x1, def value: None
 bool  ___alreadyDropped;

/// @brief Field _justGrabbed, offset: 0x51, size: 0x1, def value: None
 bool  ____justGrabbed;

/// @brief Field _justGrabbedTimer, offset: 0x54, size: 0x4, def value: None
 float_t  ____justGrabbedTimer;

/// @brief Field _launchAfterScore, offset: 0x58, size: 0x1, def value: None
 bool  ____launchAfterScore;

/// @brief Field _droppedTimer, offset: 0x5c, size: 0x4, def value: None
 float_t  ____droppedTimer;

/// @brief Field _resyncPosition, offset: 0x60, size: 0x1, def value: None
 bool  ____resyncPosition;

/// @brief Field _resyncDelay, offset: 0x64, size: 0x4, def value: None
 float_t  ____resyncDelay;

/// @brief Field _visualOffset, offset: 0x68, size: 0x1, def value: None
 bool  ____visualOffset;

/// @brief Field _offsetThreshold, offset: 0x6c, size: 0x4, def value: None
 float_t  ____offsetThreshold;

/// @brief Field _timeOffset, offset: 0x70, size: 0x4, def value: None
 float_t  ____timeOffset;

/// @brief Field maxLerpTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___maxLerpTime;

/// @brief Field offsetLerp, offset: 0x78, size: 0x4, def value: None
 float_t  ___offsetLerp;

/// @brief Field _positionFailsafe, offset: 0x7c, size: 0x1, def value: None
 bool  ____positionFailsafe;

/// @brief Field _positionFailsafeTimer, offset: 0x80, size: 0x4, def value: None
 float_t  ____positionFailsafeTimer;

/// @brief Field lastVisiblePosition, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastVisiblePosition;

/// [SerializeField]
/// @brief Field _rigidBody, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidBody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBall, ___gameBall) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___mainRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___defaultMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___teamMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___restrictTeamGrabEndTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___alreadyDropped) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____justGrabbed) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____justGrabbedTimer) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____launchAfterScore) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____droppedTimer) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____resyncPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____resyncDelay) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____visualOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____offsetThreshold) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____timeOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___maxLerpTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___offsetLerp) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____positionFailsafe) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____positionFailsafeTimer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ___lastVisiblePosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBall, ____rigidBody) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBall) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
