#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetAirJuke.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ResettableUseCounter_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirJuke_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetAirJuke)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class GameSnappable;
}
namespace GlobalNamespace {
class GorillaSurfaceOverride;
}
namespace GlobalNamespace {
struct SIGadgetAirJuke_EState;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetAirJuke;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetAirJuke*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetAirJuke*, "", "SIGadgetAirJuke");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// [RequireComponent(typeof(GameButtonActivatable))]
// Dependencies ResettableUseCounter, SIGadget, SIGadgetAirJuke_EState, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::MainModule, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetAirJuke
class CORDL_TYPE SIGadgetAirJuke : public ::GlobalNamespace::SIGadget {
public:
// Declarations
 __declspec(property(get=get__HandIndex)) int32_t  _HandIndex;

/// @brief Field _airReleaseVector, offset 0x118, size 0xc 
 __declspec(property(get=__cordl_internal_get__airReleaseVector, put=__cordl_internal_set__airReleaseVector)) ::UnityEngine::Vector3  _airReleaseVector;

/// @brief Field _dashStartFxPos, offset 0x14c, size 0xc 
 __declspec(property(get=__cordl_internal_get__dashStartFxPos, put=__cordl_internal_set__dashStartFxPos)) ::UnityEngine::Vector3  _dashStartFxPos;

/// @brief Field _dashStartTime, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__dashStartTime, put=__cordl_internal_set__dashStartTime)) float_t  _dashStartTime;

/// @brief Field _fxEmission, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__fxEmission, put=__cordl_internal_set__fxEmission)) ::GlobalNamespace::ParticleSystem_EmissionModule  _fxEmission;

/// @brief Field _fxGObj, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__fxGObj, put=__cordl_internal_set__fxGObj)) ::UnityW<::UnityEngine::GameObject>  _fxGObj;

/// @brief Field _fxMain, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__fxMain, put=__cordl_internal_set__fxMain)) ::GlobalNamespace::ParticleSystem_MainModule  _fxMain;

/// @brief Field _fxXform, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__fxXform, put=__cordl_internal_set__fxXform)) ::UnityW<::UnityEngine::Transform>  _fxXform;

/// @brief Field _groundedUseCounter, offset 0x130, size 0x18 
 __declspec(property(get=__cordl_internal_get__groundedUseCounter, put=__cordl_internal_set__groundedUseCounter)) ::GlobalNamespace::ResettableUseCounter  _groundedUseCounter;

/// @brief Field _isActivated, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActivated, put=__cordl_internal_set__isActivated)) bool  _isActivated;

/// @brief Field _isTagged, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTagged, put=__cordl_internal_set__isTagged)) bool  _isTagged;

/// @brief Field _maxDashSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDashSpeed, put=__cordl_internal_set__maxDashSpeed)) float_t  _maxDashSpeed;

/// @brief Field _playingFxUntilTimestamp, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get__playingFxUntilTimestamp, put=__cordl_internal_set__playingFxUntilTimestamp)) float_t  _playingFxUntilTimestamp;

/// @brief Field _state, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::SIGadgetAirJuke_EState  _state;

/// @brief Field _wasActivated, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasActivated, put=__cordl_internal_set__wasActivated)) bool  _wasActivated;

/// @brief Field finalJukeAudio, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalJukeAudio, put=__cordl_internal_set_finalJukeAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  finalJukeAudio;

/// @brief Field m_buttonActivatable, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_buttonActivatable, put=__cordl_internal_set_m_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  m_buttonActivatable;

/// @brief Field m_fxMaxDistance, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_fxMaxDistance, put=__cordl_internal_set_m_fxMaxDistance)) float_t  m_fxMaxDistance;

/// @brief Field m_handMaxSpeed, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_handMaxSpeed, put=__cordl_internal_set_m_handMaxSpeed)) float_t  m_handMaxSpeed;

/// @brief Field m_handMinSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_handMinSpeed, put=__cordl_internal_set_m_handMinSpeed)) float_t  m_handMinSpeed;

/// @brief Field m_inputActivateThreshold, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputActivateThreshold, put=__cordl_internal_set_m_inputActivateThreshold)) float_t  m_inputActivateThreshold;

/// @brief Field m_inputDeactivateThreshold, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputDeactivateThreshold, put=__cordl_internal_set_m_inputDeactivateThreshold)) float_t  m_inputDeactivateThreshold;

/// @brief Field m_maxDashSpeedDefault, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedDefault, put=__cordl_internal_set_m_maxDashSpeedDefault)) float_t  m_maxDashSpeedDefault;

/// @brief Field m_maxDashSpeedUpgraded, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedUpgraded, put=__cordl_internal_set_m_maxDashSpeedUpgraded)) float_t  m_maxDashSpeedUpgraded;

/// @brief Field m_maxInfluenceAngleDefault, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleDefault, put=__cordl_internal_set_m_maxInfluenceAngleDefault)) float_t  m_maxInfluenceAngleDefault;

/// @brief Field m_maxInfluenceAngleUpgrade, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleUpgrade, put=__cordl_internal_set_m_maxInfluenceAngleUpgrade)) float_t  m_maxInfluenceAngleUpgrade;

/// @brief Field m_maxRegularUses, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxRegularUses, put=__cordl_internal_set_m_maxRegularUses)) int32_t  m_maxRegularUses;

/// @brief Field m_maxSuperchargeUses, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxSuperchargeUses, put=__cordl_internal_set_m_maxSuperchargeUses)) int32_t  m_maxSuperchargeUses;

/// @brief Field m_minDashSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_minDashSpeed, put=__cordl_internal_set_m_minDashSpeed)) float_t  m_minDashSpeed;

/// @brief Field m_particleSystem, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_particleSystem, put=__cordl_internal_set_m_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  m_particleSystem;

/// @brief Field m_slipperySurfacesTime, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_slipperySurfacesTime, put=__cordl_internal_set_m_slipperySurfacesTime)) float_t  m_slipperySurfacesTime;

/// @brief Field m_snappable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_snappable, put=__cordl_internal_set_m_snappable)) ::UnityW<::GlobalNamespace::GameSnappable>  m_snappable;

/// @brief Field m_speedMappingCurve, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_speedMappingCurve, put=__cordl_internal_set_m_speedMappingCurve)) ::UnityEngine::AnimationCurve*  m_speedMappingCurve;

/// @brief Field rechargeAudio, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rechargeAudio, put=__cordl_internal_set_rechargeAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  rechargeAudio;

/// @brief Field reusableJukeAudio, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reusableJukeAudio, put=__cordl_internal_set_reusableJukeAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  reusableJukeAudio;

/// @brief Field singleJukeAudio, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleJukeAudio, put=__cordl_internal_set_singleJukeAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  singleJukeAudio;

/// @brief Method ApplyUpgradeNodes, addr 0x58d6390, size 0x4c, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method Awake, addr 0x58d4fc8, size 0x388, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x58d56c0, size 0x1e4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::SIGadgetAirJuke* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58d5370, size 0x298, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRecharged, addr 0x58d5350, size 0x20, virtual false, abstract: false, final false
inline void OnRecharged(bool  recharged) ;

/// @brief Method OnUpdateRemote, addr 0x58d5fe0, size 0x90, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method _CalculateDashSpeed, addr 0x58d61f8, size 0x84, virtual false, abstract: false, final false
inline float_t _CalculateDashSpeed(float_t  currentYankSpeed) ;

/// @brief Method _CheckInput, addr 0x58d58a4, size 0x34, virtual false, abstract: false, final false
inline bool _CheckInput() ;

/// @brief Method _DoDash, addr 0x58d5ad0, size 0x308, virtual false, abstract: false, final false
inline void _DoDash() ;

/// @brief Method _HandleStartInteraction, addr 0x58d5608, size 0x2c, virtual false, abstract: false, final false
inline void _HandleStartInteraction() ;

/// @brief Method _HandleStopInteraction, addr 0x58d5634, size 0x44, virtual false, abstract: false, final false
inline void _HandleStopInteraction() ;

/// @brief Method _IsHandGroundedSteerable, addr 0x58d5a48, size 0x88, virtual false, abstract: false, final false
static inline bool _IsHandGroundedSteerable(::GorillaLocomotion::GTPlayer*  player) ;

/// @brief Method _IsRechargeBlocked, addr 0x58d62fc, size 0x94, virtual false, abstract: false, final false
static inline bool _IsRechargeBlocked(::GlobalNamespace::GorillaSurfaceOverride*  surface) ;

/// @brief Method _OnUpdateShared, addr 0x58d5dd8, size 0x208, virtual false, abstract: false, final false
inline void _OnUpdateShared() ;

/// @brief Method _PlayHaptic, addr 0x58d58d8, size 0x170, virtual false, abstract: false, final false
inline void _PlayHaptic(float_t  strengthMultiplier) ;

/// @brief Method _SetStateAuthority, addr 0x58d5678, size 0x48, virtual false, abstract: false, final false
inline void _SetStateAuthority(::GlobalNamespace::SIGadgetAirJuke_EState  newState) ;

/// @brief Method _TrySetStateShared, addr 0x58d6074, size 0x7c, virtual false, abstract: false, final false
inline bool _TrySetStateShared(::GlobalNamespace::SIGadgetAirJuke_EState  newState) ;

/// @brief Method _UpdateFxRotation, addr 0x58d60f0, size 0xf8, virtual false, abstract: false, final false
inline void _UpdateFxRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__airReleaseVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__airReleaseVector() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__dashStartFxPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__dashStartFxPos() ;

constexpr float_t const& __cordl_internal_get__dashStartTime() const;

constexpr float_t& __cordl_internal_get__dashStartTime() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get__fxEmission() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get__fxEmission() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__fxGObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__fxGObj() ;

constexpr ::GlobalNamespace::ParticleSystem_MainModule const& __cordl_internal_get__fxMain() const;

constexpr ::GlobalNamespace::ParticleSystem_MainModule& __cordl_internal_get__fxMain() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__fxXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__fxXform() ;

constexpr ::GlobalNamespace::ResettableUseCounter const& __cordl_internal_get__groundedUseCounter() const;

constexpr ::GlobalNamespace::ResettableUseCounter& __cordl_internal_get__groundedUseCounter() ;

constexpr bool const& __cordl_internal_get__isActivated() const;

constexpr bool& __cordl_internal_get__isActivated() ;

constexpr bool const& __cordl_internal_get__isTagged() const;

constexpr bool& __cordl_internal_get__isTagged() ;

constexpr float_t const& __cordl_internal_get__maxDashSpeed() const;

constexpr float_t& __cordl_internal_get__maxDashSpeed() ;

constexpr float_t const& __cordl_internal_get__playingFxUntilTimestamp() const;

constexpr float_t& __cordl_internal_get__playingFxUntilTimestamp() ;

constexpr ::GlobalNamespace::SIGadgetAirJuke_EState const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::SIGadgetAirJuke_EState& __cordl_internal_get__state() ;

constexpr bool const& __cordl_internal_get__wasActivated() const;

constexpr bool& __cordl_internal_get__wasActivated() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_finalJukeAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_finalJukeAudio() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_m_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_m_buttonActivatable() ;

constexpr float_t const& __cordl_internal_get_m_fxMaxDistance() const;

constexpr float_t& __cordl_internal_get_m_fxMaxDistance() ;

constexpr float_t const& __cordl_internal_get_m_handMaxSpeed() const;

constexpr float_t& __cordl_internal_get_m_handMaxSpeed() ;

constexpr float_t const& __cordl_internal_get_m_handMinSpeed() const;

constexpr float_t& __cordl_internal_get_m_handMinSpeed() ;

constexpr float_t const& __cordl_internal_get_m_inputActivateThreshold() const;

constexpr float_t& __cordl_internal_get_m_inputActivateThreshold() ;

constexpr float_t const& __cordl_internal_get_m_inputDeactivateThreshold() const;

constexpr float_t& __cordl_internal_get_m_inputDeactivateThreshold() ;

constexpr float_t const& __cordl_internal_get_m_maxDashSpeedDefault() const;

constexpr float_t& __cordl_internal_get_m_maxDashSpeedDefault() ;

constexpr float_t const& __cordl_internal_get_m_maxDashSpeedUpgraded() const;

constexpr float_t& __cordl_internal_get_m_maxDashSpeedUpgraded() ;

constexpr float_t const& __cordl_internal_get_m_maxInfluenceAngleDefault() const;

constexpr float_t& __cordl_internal_get_m_maxInfluenceAngleDefault() ;

constexpr float_t const& __cordl_internal_get_m_maxInfluenceAngleUpgrade() const;

constexpr float_t& __cordl_internal_get_m_maxInfluenceAngleUpgrade() ;

constexpr int32_t const& __cordl_internal_get_m_maxRegularUses() const;

constexpr int32_t& __cordl_internal_get_m_maxRegularUses() ;

constexpr int32_t const& __cordl_internal_get_m_maxSuperchargeUses() const;

constexpr int32_t& __cordl_internal_get_m_maxSuperchargeUses() ;

constexpr float_t const& __cordl_internal_get_m_minDashSpeed() const;

constexpr float_t& __cordl_internal_get_m_minDashSpeed() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_m_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_m_particleSystem() ;

constexpr float_t const& __cordl_internal_get_m_slipperySurfacesTime() const;

constexpr float_t& __cordl_internal_get_m_slipperySurfacesTime() ;

constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& __cordl_internal_get_m_snappable() const;

constexpr ::UnityW<::GlobalNamespace::GameSnappable>& __cordl_internal_get_m_snappable() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_speedMappingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_speedMappingCurve() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_rechargeAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_rechargeAudio() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_reusableJukeAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_reusableJukeAudio() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_singleJukeAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_singleJukeAudio() ;

constexpr void __cordl_internal_set__airReleaseVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__dashStartFxPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__dashStartTime(float_t  value) ;

constexpr void __cordl_internal_set__fxEmission(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set__fxGObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__fxMain(::GlobalNamespace::ParticleSystem_MainModule  value) ;

constexpr void __cordl_internal_set__fxXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__groundedUseCounter(::GlobalNamespace::ResettableUseCounter  value) ;

constexpr void __cordl_internal_set__isActivated(bool  value) ;

constexpr void __cordl_internal_set__isTagged(bool  value) ;

constexpr void __cordl_internal_set__maxDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set__playingFxUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::SIGadgetAirJuke_EState  value) ;

constexpr void __cordl_internal_set__wasActivated(bool  value) ;

constexpr void __cordl_internal_set_finalJukeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_m_fxMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_handMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_handMinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_inputActivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_inputDeactivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_maxDashSpeedDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_maxDashSpeedUpgraded(float_t  value) ;

constexpr void __cordl_internal_set_m_maxInfluenceAngleDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_maxInfluenceAngleUpgrade(float_t  value) ;

constexpr void __cordl_internal_set_m_maxRegularUses(int32_t  value) ;

constexpr void __cordl_internal_set_m_maxSuperchargeUses(int32_t  value) ;

constexpr void __cordl_internal_set_m_minDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_m_slipperySurfacesTime(float_t  value) ;

constexpr void __cordl_internal_set_m_snappable(::UnityW<::GlobalNamespace::GameSnappable>  value) ;

constexpr void __cordl_internal_set_m_speedMappingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rechargeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_reusableJukeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_singleJukeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

/// @brief Method .ctor, addr 0x58d63dc, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__HandIndex, addr 0x58d4eb8, size 0x110, virtual false, abstract: false, final false
inline int32_t get__HandIndex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetAirJuke() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetAirJuke", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetAirJuke(SIGadgetAirJuke && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetAirJuke", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetAirJuke(SIGadgetAirJuke const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{237};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIGadgetAirJuke]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIGadgetAirJuke]  "};

/// [SerializeField]
/// @brief Field m_snappable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameSnappable>  ___m_snappable;

/// [SerializeField]
/// @brief Field m_buttonActivatable, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___m_buttonActivatable;

/// [SerializeField]
/// @brief Field m_inputActivateThreshold, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_inputActivateThreshold;

/// [SerializeField]
/// @brief Field m_inputDeactivateThreshold, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_inputDeactivateThreshold;

/// [Tooltip("Hand min speed: How fast you have to be moving your hand for the dash to trigger.")]
/// [SerializeField]
/// @brief Field m_handMinSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_handMinSpeed;

/// [Tooltip("Hand move max speed: The fastest hand speed that will be registered.")]
/// [SerializeField]
/// @brief Field m_handMaxSpeed, offset: 0x94, size: 0x4, def value: None
 float_t  ___m_handMaxSpeed;

/// [Tooltip("Dash min/max speed: The fastest speed the player will move")]
/// [SerializeField]
/// @brief Field m_minDashSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_minDashSpeed;

/// @brief Field _maxDashSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ____maxDashSpeed;

/// [SerializeField]
/// @brief Field m_maxDashSpeedDefault, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_maxDashSpeedDefault;

/// [SerializeField]
/// @brief Field m_maxDashSpeedUpgraded, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_maxDashSpeedUpgraded;

/// [Tooltip("Maps yank speed to dash speed.\nX = Yank Speed (min to max)\nY = Dash Speed (min to max).")]
/// [SerializeField]
/// @brief Field m_speedMappingCurve, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_speedMappingCurve;

/// [SerializeField]
/// @brief Field m_slipperySurfacesTime, offset: 0xb0, size: 0x4, def value: None
 float_t  ___m_slipperySurfacesTime;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleDefault, offset: 0xb4, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleDefault;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleUpgrade, offset: 0xb8, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleUpgrade;

/// [SerializeField]
/// @brief Field m_maxRegularUses, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___m_maxRegularUses;

/// [SerializeField]
/// @brief Field m_maxSuperchargeUses, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___m_maxSuperchargeUses;

/// [SerializeField]
/// @brief Field m_particleSystem, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___m_particleSystem;

/// [SerializeField]
/// @brief Field singleJukeAudio, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___singleJukeAudio;

/// [SerializeField]
/// @brief Field reusableJukeAudio, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___reusableJukeAudio;

/// [SerializeField]
/// @brief Field finalJukeAudio, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___finalJukeAudio;

/// [SerializeField]
/// @brief Field rechargeAudio, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___rechargeAudio;

/// @brief Field _fxGObj, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____fxGObj;

/// @brief Field _fxXform, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____fxXform;

/// @brief Field _fxMain, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_MainModule  ____fxMain;

/// @brief Field _fxEmission, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ____fxEmission;

/// @brief Field _isActivated, offset: 0x110, size: 0x1, def value: None
 bool  ____isActivated;

/// @brief Field _wasActivated, offset: 0x111, size: 0x1, def value: None
 bool  ____wasActivated;

/// @brief Field _dashStartTime, offset: 0x114, size: 0x4, def value: None
 float_t  ____dashStartTime;

/// @brief Field _airReleaseVector, offset: 0x118, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____airReleaseVector;

/// @brief Field _isTagged, offset: 0x124, size: 0x1, def value: None
 bool  ____isTagged;

/// @brief Field _state, offset: 0x128, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetAirJuke_EState  ____state;

/// @brief Field _groundedUseCounter, offset: 0x130, size: 0x18, def value: None
 ::GlobalNamespace::ResettableUseCounter  ____groundedUseCounter;

/// @brief Field _playingFxUntilTimestamp, offset: 0x148, size: 0x4, def value: None
 float_t  ____playingFxUntilTimestamp;

/// @brief Field _dashStartFxPos, offset: 0x14c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____dashStartFxPos;

/// [SerializeField]
/// @brief Field m_fxMaxDistance, offset: 0x158, size: 0x4, def value: None
 float_t  ___m_fxMaxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_snappable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_buttonActivatable) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_inputActivateThreshold) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_inputDeactivateThreshold) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_handMinSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_handMaxSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_minDashSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____maxDashSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_maxDashSpeedDefault) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_maxDashSpeedUpgraded) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_speedMappingCurve) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_slipperySurfacesTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_maxInfluenceAngleDefault) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_maxInfluenceAngleUpgrade) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_maxRegularUses) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_maxSuperchargeUses) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_particleSystem) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___singleJukeAudio) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___reusableJukeAudio) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___finalJukeAudio) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___rechargeAudio) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____fxGObj) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____fxXform) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____fxMain) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____fxEmission) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____isActivated) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____wasActivated) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____dashStartTime) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____airReleaseVector) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____isTagged) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____state) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____groundedUseCounter) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____playingFxUntilTimestamp) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ____dashStartFxPos) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirJuke, ___m_fxMaxDistance) == 0x158, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetAirJuke) == 0x160, "Size mismatch!");

} // namespace end def GlobalNamespace
