#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetPlatformDeployer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetPlatformDeployer_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetPlatformDeployer)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
class IEnergyGadget;
}
namespace GlobalNamespace {
class I_SIDisruptable;
}
namespace GlobalNamespace {
class SIChargeDisplay;
}
namespace GlobalNamespace {
struct SIGadgetPlatformDeployer_State;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetPlatformDeployer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetPlatformDeployer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetPlatformDeployer*, "", "SIGadgetPlatformDeployer");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// [RequireComponent(typeof(GameButtonActivatable))]
// Dependencies SIGadget, SIGadgetPlatformDeployer::State, SIUpgradeSet
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetPlatformDeployer
class CORDL_TYPE SIGadgetPlatformDeployer : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetPlatformDeployer_State;

 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_UsesEnergy)) bool  UsesEnergy;

/// @brief Field activationHandDistance, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationHandDistance, put=__cordl_internal_set_activationHandDistance)) float_t  activationHandDistance;

/// @brief Field blockedDisplayMesh, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockedDisplayMesh, put=__cordl_internal_set_blockedDisplayMesh)) ::UnityW<::UnityEngine::MeshRenderer>  blockedDisplayMesh;

/// @brief Field blockedMat, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockedMat, put=__cordl_internal_set_blockedMat)) ::UnityW<::UnityEngine::Material>  blockedMat;

/// @brief Field blockedSFX, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockedSFX, put=__cordl_internal_set_blockedSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  blockedSFX;

/// @brief Field buttonActivatable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonActivatable, put=__cordl_internal_set_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  buttonActivatable;

/// @brief Field chargeDisplay, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeDisplay, put=__cordl_internal_set_chargeDisplay)) ::UnityW<::GlobalNamespace::SIChargeDisplay>  chargeDisplay;

/// @brief Field chargeDisplayDefault, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeDisplayDefault, put=__cordl_internal_set_chargeDisplayDefault)) ::UnityW<::GlobalNamespace::SIChargeDisplay>  chargeDisplayDefault;

/// @brief Field chargeDisplayHighCapacity, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeDisplayHighCapacity, put=__cordl_internal_set_chargeDisplayHighCapacity)) ::UnityW<::GlobalNamespace::SIChargeDisplay>  chargeDisplayHighCapacity;

/// @brief Field chargeRecoveryTime, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeRecoveryTime, put=__cordl_internal_set_chargeRecoveryTime)) float_t  chargeRecoveryTime;

/// @brief Field chargeRecoveryTimeDefault, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeRecoveryTimeDefault, put=__cordl_internal_set_chargeRecoveryTimeDefault)) float_t  chargeRecoveryTimeDefault;

/// @brief Field chargeRecoveryTimeFast, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeRecoveryTimeFast, put=__cordl_internal_set_chargeRecoveryTimeFast)) float_t  chargeRecoveryTimeFast;

/// @brief Field deployMinRequiredHandDistance, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_deployMinRequiredHandDistance, put=__cordl_internal_set_deployMinRequiredHandDistance)) float_t  deployMinRequiredHandDistance;

/// @brief Field deployedPlatformCount, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_deployedPlatformCount, put=__cordl_internal_set_deployedPlatformCount)) int32_t  deployedPlatformCount;

/// @brief Field handDepthOffset, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_handDepthOffset, put=__cordl_internal_set_handDepthOffset)) float_t  handDepthOffset;

/// @brief Field handInset, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_handInset, put=__cordl_internal_set_handInset)) float_t  handInset;

/// @brief Field inputSensitivity, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputSensitivity, put=__cordl_internal_set_inputSensitivity)) float_t  inputSensitivity;

/// @brief Field instanceUpgrades, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_instanceUpgrades, put=__cordl_internal_set_instanceUpgrades)) ::GlobalNamespace::SIUpgradeSet  instanceUpgrades;

/// @brief Field invalidPreviewMaterial, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_invalidPreviewMaterial, put=__cordl_internal_set_invalidPreviewMaterial)) ::UnityW<::UnityEngine::Material>  invalidPreviewMaterial;

/// @brief Field isInstancePlace, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInstancePlace, put=__cordl_internal_set_isInstancePlace)) bool  isInstancePlace;

/// @brief Field maxCharges, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCharges, put=__cordl_internal_set_maxCharges)) int32_t  maxCharges;

/// @brief Field maxChargesDefault, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxChargesDefault, put=__cordl_internal_set_maxChargesDefault)) int32_t  maxChargesDefault;

/// @brief Field maxChargesHighCapacity, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxChargesHighCapacity, put=__cordl_internal_set_maxChargesHighCapacity)) int32_t  maxChargesHighCapacity;

/// @brief Field platformPrefab, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformPrefab, put=__cordl_internal_set_platformPrefab)) ::UnityW<::UnityEngine::GameObject>  platformPrefab;

/// @brief Field previewMesh, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewMesh, put=__cordl_internal_set_previewMesh)) ::UnityW<::UnityEngine::MeshRenderer>  previewMesh;

/// @brief Field previewPlatform, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewPlatform, put=__cordl_internal_set_previewPlatform)) ::UnityW<::UnityEngine::GameObject>  previewPlatform;

/// @brief Field rechargeSFX, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rechargeSFX, put=__cordl_internal_set_rechargeSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  rechargeSFX;

/// @brief Field remainingRechargeTime, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingRechargeTime, put=__cordl_internal_set_remainingRechargeTime)) float_t  remainingRechargeTime;

/// @brief Field state, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetPlatformDeployer_State  state;

/// @brief Field unblockedMat, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_unblockedMat, put=__cordl_internal_set_unblockedMat)) ::UnityW<::UnityEngine::Material>  unblockedMat;

/// @brief Field validPreviewMaterial, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_validPreviewMaterial, put=__cordl_internal_set_validPreviewMaterial)) ::UnityW<::UnityEngine::Material>  validPreviewMaterial;

/// @brief Field wasInputPressed, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInputPressed, put=__cordl_internal_set_wasInputPressed)) bool  wasInputPressed;

/// @brief Convert operator to "::GlobalNamespace::IEnergyGadget"
constexpr operator  ::GlobalNamespace::IEnergyGadget*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr operator  ::GlobalNamespace::I_SIDisruptable*() noexcept;

/// @brief Method ApplyUpgradeNodes, addr 0x58e24d8, size 0x8c, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method CanChangeState, addr 0x58e2484, size 0xc, virtual false, abstract: false, final false
inline bool CanChangeState(int64_t  newStateIndex) ;

/// @brief Method CheckInitInputs, addr 0x58e0b8c, size 0x158, virtual false, abstract: false, final false
inline bool CheckInitInputs() ;

/// @brief Method CheckReleaseInputs, addr 0x58e1218, size 0x30, virtual false, abstract: false, final false
inline bool CheckReleaseInputs() ;

/// @brief Method CreateLocalPlatformInstance, addr 0x58e1e08, size 0x2ec, virtual false, abstract: false, final false
inline void CreateLocalPlatformInstance(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method DeployPlatform, addr 0x58e1678, size 0x378, virtual false, abstract: false, final false
inline void DeployPlatform(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Disrupt, addr 0x58e2564, size 0x18, virtual true, abstract: false, final true
inline void Disrupt(float_t  disruptTime) ;

/// @brief Method HandleBlockedActionChanged, addr 0x58e257c, size 0x30, virtual true, abstract: false, final false
inline void HandleBlockedActionChanged(bool  isBlocked) ;

/// @brief Method HandleStopInteraction, addr 0x58e0844, size 0x8, virtual false, abstract: false, final false
inline void HandleStopInteraction() ;

/// @brief Method IsChargeAvailable, addr 0x58e0ce4, size 0x20, virtual false, abstract: false, final false
inline bool IsChargeAvailable() ;

/// @brief Method IsLeftHandOrSnapSlot, addr 0x58e15fc, size 0xc, virtual false, abstract: false, final false
static inline bool IsLeftHandOrSnapSlot(int32_t  handIndex) ;

static inline ::GlobalNamespace::SIGadgetPlatformDeployer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58e06f4, size 0x150, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnUpdateAuthority, addr 0x58e0ac0, size 0xcc, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58e159c, size 0x4c, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method ProcessAuthorityToClientRPC, addr 0x58e22c4, size 0x1c0, virtual true, abstract: false, final false
inline void ProcessAuthorityToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method ProcessClientToAuthorityRPC, addr 0x58e20f4, size 0x1d0, virtual true, abstract: false, final false
inline void ProcessClientToAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method SetPreviewVisibility, addr 0x58e2490, size 0x48, virtual false, abstract: false, final false
inline void SetPreviewVisibility(bool  enabled) ;

/// @brief Method SetState, addr 0x58e084c, size 0x48, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetPlatformDeployer_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58e11e0, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetPlatformDeployer_State  newState) ;

/// @brief Method SpendCharge, addr 0x58e15e8, size 0x14, virtual false, abstract: false, final false
inline void SpendCharge() ;

/// @brief Method Start, addr 0x58e0590, size 0x164, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryDeployInstantPlatform, addr 0x58e0d04, size 0x4dc, virtual false, abstract: false, final false
inline void TryDeployInstantPlatform() ;

/// @brief Method TryDeployPlatform, addr 0x58e1248, size 0x1bc, virtual false, abstract: false, final false
inline void TryDeployPlatform() ;

/// @brief Method TryGetGamePlayer, addr 0x58e1608, size 0x70, virtual false, abstract: false, final false
inline bool TryGetGamePlayer(::by_ref<::GlobalNamespace::GamePlayer*>  player) ;

/// @brief Method TryGetPlatformPosRotScale, addr 0x58e19f0, size 0x418, virtual false, abstract: false, final false
inline bool TryGetPlatformPosRotScale(::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// @brief Method UpdatePreview, addr 0x58e1404, size 0x198, virtual false, abstract: false, final false
inline void UpdatePreview() ;

/// @brief Method UpdateRecharge, addr 0x58e08ac, size 0x214, virtual true, abstract: false, final true
inline void UpdateRecharge(float_t  dt) ;

/// [CompilerGenerated]
/// @brief Method <CreateLocalPlatformInstance>b__53_0, addr 0x58e2648, size 0x10, virtual false, abstract: false, final false
inline void _CreateLocalPlatformInstance_b__53_0() ;

constexpr float_t const& __cordl_internal_get_activationHandDistance() const;

constexpr float_t& __cordl_internal_get_activationHandDistance() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_blockedDisplayMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_blockedDisplayMesh() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blockedMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blockedMat() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_blockedSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_blockedSFX() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_buttonActivatable() ;

constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay> const& __cordl_internal_get_chargeDisplay() const;

constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay>& __cordl_internal_get_chargeDisplay() ;

constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay> const& __cordl_internal_get_chargeDisplayDefault() const;

constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay>& __cordl_internal_get_chargeDisplayDefault() ;

constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay> const& __cordl_internal_get_chargeDisplayHighCapacity() const;

constexpr ::UnityW<::GlobalNamespace::SIChargeDisplay>& __cordl_internal_get_chargeDisplayHighCapacity() ;

constexpr float_t const& __cordl_internal_get_chargeRecoveryTime() const;

constexpr float_t& __cordl_internal_get_chargeRecoveryTime() ;

constexpr float_t const& __cordl_internal_get_chargeRecoveryTimeDefault() const;

constexpr float_t& __cordl_internal_get_chargeRecoveryTimeDefault() ;

constexpr float_t const& __cordl_internal_get_chargeRecoveryTimeFast() const;

constexpr float_t& __cordl_internal_get_chargeRecoveryTimeFast() ;

constexpr float_t const& __cordl_internal_get_deployMinRequiredHandDistance() const;

constexpr float_t& __cordl_internal_get_deployMinRequiredHandDistance() ;

constexpr int32_t const& __cordl_internal_get_deployedPlatformCount() const;

constexpr int32_t& __cordl_internal_get_deployedPlatformCount() ;

constexpr float_t const& __cordl_internal_get_handDepthOffset() const;

constexpr float_t& __cordl_internal_get_handDepthOffset() ;

constexpr float_t const& __cordl_internal_get_handInset() const;

constexpr float_t& __cordl_internal_get_handInset() ;

constexpr float_t const& __cordl_internal_get_inputSensitivity() const;

constexpr float_t& __cordl_internal_get_inputSensitivity() ;

constexpr ::GlobalNamespace::SIUpgradeSet const& __cordl_internal_get_instanceUpgrades() const;

constexpr ::GlobalNamespace::SIUpgradeSet& __cordl_internal_get_instanceUpgrades() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_invalidPreviewMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_invalidPreviewMaterial() ;

constexpr bool const& __cordl_internal_get_isInstancePlace() const;

constexpr bool& __cordl_internal_get_isInstancePlace() ;

constexpr int32_t const& __cordl_internal_get_maxCharges() const;

constexpr int32_t& __cordl_internal_get_maxCharges() ;

constexpr int32_t const& __cordl_internal_get_maxChargesDefault() const;

constexpr int32_t& __cordl_internal_get_maxChargesDefault() ;

constexpr int32_t const& __cordl_internal_get_maxChargesHighCapacity() const;

constexpr int32_t& __cordl_internal_get_maxChargesHighCapacity() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_platformPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_platformPrefab() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_previewMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_previewMesh() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_previewPlatform() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_previewPlatform() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_rechargeSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_rechargeSFX() ;

constexpr float_t const& __cordl_internal_get_remainingRechargeTime() const;

constexpr float_t& __cordl_internal_get_remainingRechargeTime() ;

constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetPlatformDeployer_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_unblockedMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_unblockedMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_validPreviewMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_validPreviewMaterial() ;

constexpr bool const& __cordl_internal_get_wasInputPressed() const;

constexpr bool& __cordl_internal_get_wasInputPressed() ;

constexpr void __cordl_internal_set_activationHandDistance(float_t  value) ;

constexpr void __cordl_internal_set_blockedDisplayMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_blockedMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_blockedSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_chargeDisplay(::UnityW<::GlobalNamespace::SIChargeDisplay>  value) ;

constexpr void __cordl_internal_set_chargeDisplayDefault(::UnityW<::GlobalNamespace::SIChargeDisplay>  value) ;

constexpr void __cordl_internal_set_chargeDisplayHighCapacity(::UnityW<::GlobalNamespace::SIChargeDisplay>  value) ;

constexpr void __cordl_internal_set_chargeRecoveryTime(float_t  value) ;

constexpr void __cordl_internal_set_chargeRecoveryTimeDefault(float_t  value) ;

constexpr void __cordl_internal_set_chargeRecoveryTimeFast(float_t  value) ;

constexpr void __cordl_internal_set_deployMinRequiredHandDistance(float_t  value) ;

constexpr void __cordl_internal_set_deployedPlatformCount(int32_t  value) ;

constexpr void __cordl_internal_set_handDepthOffset(float_t  value) ;

constexpr void __cordl_internal_set_handInset(float_t  value) ;

constexpr void __cordl_internal_set_inputSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_instanceUpgrades(::GlobalNamespace::SIUpgradeSet  value) ;

constexpr void __cordl_internal_set_invalidPreviewMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_isInstancePlace(bool  value) ;

constexpr void __cordl_internal_set_maxCharges(int32_t  value) ;

constexpr void __cordl_internal_set_maxChargesDefault(int32_t  value) ;

constexpr void __cordl_internal_set_maxChargesHighCapacity(int32_t  value) ;

constexpr void __cordl_internal_set_platformPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_previewMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_previewPlatform(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rechargeSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_remainingRechargeTime(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetPlatformDeployer_State  value) ;

constexpr void __cordl_internal_set_unblockedMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_validPreviewMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_wasInputPressed(bool  value) ;

/// @brief Method .ctor, addr 0x58e25ac, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsFull, addr 0x58e089c, size 0x10, virtual true, abstract: false, final true
inline bool get_IsFull() ;

/// @brief Method get_UsesEnergy, addr 0x58e0894, size 0x8, virtual true, abstract: false, final true
inline bool get_UsesEnergy() ;

/// @brief Convert to "::GlobalNamespace::IEnergyGadget"
constexpr ::GlobalNamespace::IEnergyGadget* i___GlobalNamespace__IEnergyGadget() noexcept;

/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* i___GlobalNamespace__I_SIDisruptable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetPlatformDeployer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetPlatformDeployer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetPlatformDeployer(SIGadgetPlatformDeployer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetPlatformDeployer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetPlatformDeployer(SIGadgetPlatformDeployer const& ) = delete;

/// @brief Field MAX_DEPLOY_DIST offset 0xffffffff size 0x4
static constexpr float_t  MAX_DEPLOY_DIST{static_cast<float_t>(2.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{274};

/// [SerializeField]
/// @brief Field buttonActivatable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___buttonActivatable;

/// [SerializeField]
/// @brief Field rechargeSFX, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___rechargeSFX;

/// [SerializeField]
/// @brief Field blockedSFX, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___blockedSFX;

/// [SerializeField]
/// @brief Field blockedDisplayMesh, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___blockedDisplayMesh;

/// [SerializeField]
/// @brief Field unblockedMat, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___unblockedMat;

/// [SerializeField]
/// @brief Field blockedMat, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blockedMat;

/// [SerializeField]
/// @brief Field platformPrefab, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___platformPrefab;

/// [Header("Activation")]
/// [SerializeField]
/// @brief Field isInstancePlace, offset: 0xb0, size: 0x1, def value: None
 bool  ___isInstancePlace;

/// [SerializeField]
/// @brief Field activationHandDistance, offset: 0xb4, size: 0x4, def value: None
 float_t  ___activationHandDistance;

/// [SerializeField]
/// @brief Field inputSensitivity, offset: 0xb8, size: 0x4, def value: None
 float_t  ___inputSensitivity;

/// [Header("Deploy")]
/// [SerializeField]
/// @brief Field deployMinRequiredHandDistance, offset: 0xbc, size: 0x4, def value: None
 float_t  ___deployMinRequiredHandDistance;

/// [SerializeField]
/// @brief Field previewPlatform, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___previewPlatform;

/// [SerializeField]
/// @brief Field handInset, offset: 0xc8, size: 0x4, def value: None
 float_t  ___handInset;

/// [SerializeField]
/// @brief Field handDepthOffset, offset: 0xcc, size: 0x4, def value: None
 float_t  ___handDepthOffset;

/// [SerializeField]
/// @brief Field previewMesh, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___previewMesh;

/// [SerializeField]
/// @brief Field validPreviewMaterial, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___validPreviewMaterial;

/// [SerializeField]
/// @brief Field invalidPreviewMaterial, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___invalidPreviewMaterial;

/// [Header("Charges")]
/// @brief Field maxCharges, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___maxCharges;

/// @brief Field chargeRecoveryTime, offset: 0xec, size: 0x4, def value: None
 float_t  ___chargeRecoveryTime;

/// @brief Field chargeDisplay, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIChargeDisplay>  ___chargeDisplay;

/// [SerializeField]
/// @brief Field maxChargesDefault, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___maxChargesDefault;

/// [SerializeField]
/// @brief Field maxChargesHighCapacity, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___maxChargesHighCapacity;

/// [SerializeField]
/// @brief Field chargeDisplayDefault, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIChargeDisplay>  ___chargeDisplayDefault;

/// [SerializeField]
/// @brief Field chargeDisplayHighCapacity, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIChargeDisplay>  ___chargeDisplayHighCapacity;

/// [SerializeField]
/// @brief Field chargeRecoveryTimeDefault, offset: 0x110, size: 0x4, def value: None
 float_t  ___chargeRecoveryTimeDefault;

/// [SerializeField]
/// @brief Field chargeRecoveryTimeFast, offset: 0x114, size: 0x4, def value: None
 float_t  ___chargeRecoveryTimeFast;

/// @brief Field state, offset: 0x118, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetPlatformDeployer_State  ___state;

/// @brief Field wasInputPressed, offset: 0x11c, size: 0x1, def value: None
 bool  ___wasInputPressed;

/// @brief Field remainingRechargeTime, offset: 0x120, size: 0x4, def value: None
 float_t  ___remainingRechargeTime;

/// @brief Field instanceUpgrades, offset: 0x124, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeSet  ___instanceUpgrades;

/// @brief Field deployedPlatformCount, offset: 0x128, size: 0x4, def value: None
 int32_t  ___deployedPlatformCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___buttonActivatable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___rechargeSFX) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___blockedSFX) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___blockedDisplayMesh) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___unblockedMat) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___blockedMat) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___platformPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___isInstancePlace) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___activationHandDistance) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___inputSensitivity) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___deployMinRequiredHandDistance) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___previewPlatform) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___handInset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___handDepthOffset) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___previewMesh) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___validPreviewMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___invalidPreviewMaterial) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___maxCharges) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___chargeRecoveryTime) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___chargeDisplay) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___maxChargesDefault) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___maxChargesHighCapacity) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___chargeDisplayDefault) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___chargeDisplayHighCapacity) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___chargeRecoveryTimeDefault) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___chargeRecoveryTimeFast) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___state) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___wasInputPressed) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___remainingRechargeTime) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___instanceUpgrades) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployer, ___deployedPlatformCount) == 0x128, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetPlatformDeployer) == 0x130, "Size mismatch!");

} // namespace end def GlobalNamespace
