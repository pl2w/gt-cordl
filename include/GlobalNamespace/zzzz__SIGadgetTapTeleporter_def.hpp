#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetTapTeleporter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetTapTeleporter)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class SIGadgetTapTeleporterDeployable;
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
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetTapTeleporter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetTapTeleporter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetTapTeleporter*, "", "SIGadgetTapTeleporter");
// Dependencies SIGadget, SIUpgradeSet, UnityEngine.Collider, UnityEngine.Color, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetTapTeleporter
class CORDL_TYPE SIGadgetTapTeleporter : public ::GlobalNamespace::SIGadget {
public:
// Declarations
/// @brief Field <hasInfiniteDuration>k__BackingField, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasInfiniteDuration_k__BackingField, put=__cordl_internal_set__hasInfiniteDuration_k__BackingField)) bool  _hasInfiniteDuration_k__BackingField;

/// @brief Field <identifierColor>k__BackingField, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get__identifierColor_k__BackingField, put=__cordl_internal_set__identifierColor_k__BackingField)) ::UnityEngine::Color  _identifierColor_k__BackingField;

/// @brief Field <isVelocityPreserved>k__BackingField, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVelocityPreserved_k__BackingField, put=__cordl_internal_set__isVelocityPreserved_k__BackingField)) bool  _isVelocityPreserved_k__BackingField;

/// @brief Field _selection1Teleport, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selection1Teleport, put=__cordl_internal_set__selection1Teleport)) ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  _selection1Teleport;

/// @brief Field _selection2Teleport, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__selection2Teleport, put=__cordl_internal_set__selection2Teleport)) ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  _selection2Teleport;

/// @brief Field <useStealthTeleporters>k__BackingField, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__useStealthTeleporters_k__BackingField, put=__cordl_internal_set__useStealthTeleporters_k__BackingField)) bool  _useStealthTeleporters_k__BackingField;

/// @brief Field blockedSFX, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockedSFX, put=__cordl_internal_set_blockedSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  blockedSFX;

/// @brief Field buttonActivatable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonActivatable, put=__cordl_internal_set_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  buttonActivatable;

/// @brief Field farOffset, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_farOffset, put=__cordl_internal_set_farOffset)) float_t  farOffset;

 __declspec(property(get=get_hasInfiniteDuration, put=set_hasInfiniteDuration)) bool  hasInfiniteDuration;

 __declspec(property(get=get_identifierColor, put=set_identifierColor)) ::UnityEngine::Color  identifierColor;

/// @brief Field identifierColorDisplay, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_identifierColorDisplay, put=__cordl_internal_set_identifierColorDisplay)) ::UnityW<::UnityEngine::Renderer>  identifierColorDisplay;

/// @brief Field instanceUpgrades, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_instanceUpgrades, put=__cordl_internal_set_instanceUpgrades)) ::GlobalNamespace::SIUpgradeSet  instanceUpgrades;

/// @brief Field isActivated, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActivated, put=__cordl_internal_set_isActivated)) bool  isActivated;

/// @brief Field isHandTapSetup, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHandTapSetup, put=__cordl_internal_set_isHandTapSetup)) bool  isHandTapSetup;

 __declspec(property(get=get_isVelocityPreserved, put=set_isVelocityPreserved)) bool  isVelocityPreserved;

/// @brief Field maxBrightness, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxBrightness, put=__cordl_internal_set_maxBrightness)) float_t  maxBrightness;

/// @brief Field minBrightness, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_minBrightness, put=__cordl_internal_set_minBrightness)) float_t  minBrightness;

/// @brief Field nearOffset, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearOffset, put=__cordl_internal_set_nearOffset)) float_t  nearOffset;

/// @brief Field nextPlacementDelay, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPlacementDelay, put=__cordl_internal_set_nextPlacementDelay)) float_t  nextPlacementDelay;

/// @brief Field nextSelectionId, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSelectionId, put=__cordl_internal_set_nextSelectionId)) int32_t  nextSelectionId;

/// @brief Field overlapCheckLayers, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlapCheckLayers, put=__cordl_internal_set_overlapCheckLayers)) ::UnityEngine::LayerMask  overlapCheckLayers;

/// @brief Field overlapCheckRadius, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlapCheckRadius, put=__cordl_internal_set_overlapCheckRadius)) float_t  overlapCheckRadius;

/// @brief Field overlapCheckResults, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapCheckResults, put=__cordl_internal_set_overlapCheckResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapCheckResults;

/// @brief Field placementCheckDistance, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_placementCheckDistance, put=__cordl_internal_set_placementCheckDistance)) float_t  placementCheckDistance;

/// @brief Field placementDelay, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_placementDelay, put=__cordl_internal_set_placementDelay)) float_t  placementDelay;

/// @brief Field portalDefaultDuration, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_portalDefaultDuration, put=__cordl_internal_set_portalDefaultDuration)) float_t  portalDefaultDuration;

/// @brief Field selectionColor1, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionColor1, put=__cordl_internal_set_selectionColor1)) ::UnityW<::UnityEngine::Material>  selectionColor1;

/// @brief Field selectionColor2, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionColor2, put=__cordl_internal_set_selectionColor2)) ::UnityW<::UnityEngine::Material>  selectionColor2;

/// @brief Field selectionColorDisplay, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionColorDisplay, put=__cordl_internal_set_selectionColorDisplay)) ::UnityW<::UnityEngine::Renderer>  selectionColorDisplay;

/// @brief Field teleportPointPrefab, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportPointPrefab, put=__cordl_internal_set_teleportPointPrefab)) ::UnityW<::UnityEngine::GameObject>  teleportPointPrefab;

 __declspec(property(get=get_useStealthTeleporters, put=set_useStealthTeleporters)) bool  useStealthTeleporters;

/// @brief Method ApplyIdentifierColor, addr 0x58e5620, size 0x34, virtual false, abstract: false, final false
inline void ApplyIdentifierColor() ;

/// @brief Method ApplyUpgradeNodes, addr 0x58e5f7c, size 0x68, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method CheckValidTeleporterPlacement, addr 0x58e5d88, size 0x104, virtual false, abstract: false, final false
inline bool CheckValidTeleporterPlacement(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction) ;

/// @brief Method CycleSelection, addr 0x58e5e8c, size 0xf0, virtual false, abstract: false, final false
inline void CycleSelection() ;

/// @brief Method GenerateColor, addr 0x58e5530, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Color GenerateColor(int32_t  seed) ;

/// @brief Method HandleHandAttached, addr 0x58e58a8, size 0x11c, virtual false, abstract: false, final false
inline void HandleHandAttached() ;

/// @brief Method HandleHandDetach, addr 0x58e57a8, size 0x100, virtual false, abstract: false, final false
inline void HandleHandDetach() ;

/// @brief Method HandleOnDestroyed, addr 0x58e56a4, size 0x100, virtual false, abstract: false, final false
inline void HandleOnDestroyed(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method HandleOnHandTap, addr 0x58e59c4, size 0xa8, virtual false, abstract: false, final false
inline void HandleOnHandTap(bool  isLeft, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

/// @brief Method HandleStateChanged, addr 0x58e6a04, size 0x1ac, virtual false, abstract: false, final false
inline void HandleStateChanged(int64_t  oldState, int64_t  newState) ;

static inline ::GlobalNamespace::SIGadgetTapTeleporter* New_ctor() ;

/// @brief Method OnDisable, addr 0x58e57a4, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEntityInit, addr 0x58e51f8, size 0x338, virtual true, abstract: false, final false
inline void OnEntityInit() ;

/// @brief Method OnUpdateAuthority, addr 0x58e5d38, size 0x50, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method PlaceNewTapTeleporter, addr 0x58e63a4, size 0x2c0, virtual false, abstract: false, final false
inline void PlaceNewTapTeleporter(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  selectionId, float_t  duration) ;

/// @brief Method PlaceTapTeleporter, addr 0x58e5a6c, size 0x2cc, virtual false, abstract: false, final false
inline void PlaceTapTeleporter(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

/// @brief Method ProcessClientToAuthorityRPC, addr 0x58e5fe4, size 0x2c8, virtual true, abstract: false, final false
inline void ProcessClientToAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method ProcessClientToClientRPC, addr 0x58e6664, size 0xf8, virtual true, abstract: false, final false
inline void ProcessClientToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method RemoveTeleporter, addr 0x58e62ac, size 0xf8, virtual false, abstract: false, final false
inline void RemoveTeleporter(int32_t  selectId) ;

/// @brief Method UpdateNewTeleporters, addr 0x58e68e4, size 0x120, virtual false, abstract: false, final false
inline void UpdateNewTeleporters() ;

/// @brief Method UpdateNextSelectionDisplay, addr 0x58e5654, size 0x50, virtual false, abstract: false, final false
inline void UpdateNextSelectionDisplay() ;

constexpr bool const& __cordl_internal_get__hasInfiniteDuration_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasInfiniteDuration_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__identifierColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__identifierColor_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isVelocityPreserved_k__BackingField() const;

constexpr bool& __cordl_internal_get__isVelocityPreserved_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable> const& __cordl_internal_get__selection1Teleport() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>& __cordl_internal_get__selection1Teleport() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable> const& __cordl_internal_get__selection2Teleport() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>& __cordl_internal_get__selection2Teleport() ;

constexpr bool const& __cordl_internal_get__useStealthTeleporters_k__BackingField() const;

constexpr bool& __cordl_internal_get__useStealthTeleporters_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_blockedSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_blockedSFX() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_buttonActivatable() ;

constexpr float_t const& __cordl_internal_get_farOffset() const;

constexpr float_t& __cordl_internal_get_farOffset() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_identifierColorDisplay() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_identifierColorDisplay() ;

constexpr ::GlobalNamespace::SIUpgradeSet const& __cordl_internal_get_instanceUpgrades() const;

constexpr ::GlobalNamespace::SIUpgradeSet& __cordl_internal_get_instanceUpgrades() ;

constexpr bool const& __cordl_internal_get_isActivated() const;

constexpr bool& __cordl_internal_get_isActivated() ;

constexpr bool const& __cordl_internal_get_isHandTapSetup() const;

constexpr bool& __cordl_internal_get_isHandTapSetup() ;

constexpr float_t const& __cordl_internal_get_maxBrightness() const;

constexpr float_t& __cordl_internal_get_maxBrightness() ;

constexpr float_t const& __cordl_internal_get_minBrightness() const;

constexpr float_t& __cordl_internal_get_minBrightness() ;

constexpr float_t const& __cordl_internal_get_nearOffset() const;

constexpr float_t& __cordl_internal_get_nearOffset() ;

constexpr float_t const& __cordl_internal_get_nextPlacementDelay() const;

constexpr float_t& __cordl_internal_get_nextPlacementDelay() ;

constexpr int32_t const& __cordl_internal_get_nextSelectionId() const;

constexpr int32_t& __cordl_internal_get_nextSelectionId() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_overlapCheckLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_overlapCheckLayers() ;

constexpr float_t const& __cordl_internal_get_overlapCheckRadius() const;

constexpr float_t& __cordl_internal_get_overlapCheckRadius() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_overlapCheckResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_overlapCheckResults() ;

constexpr float_t const& __cordl_internal_get_placementCheckDistance() const;

constexpr float_t& __cordl_internal_get_placementCheckDistance() ;

constexpr float_t const& __cordl_internal_get_placementDelay() const;

constexpr float_t& __cordl_internal_get_placementDelay() ;

constexpr float_t const& __cordl_internal_get_portalDefaultDuration() const;

constexpr float_t& __cordl_internal_get_portalDefaultDuration() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_selectionColor1() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_selectionColor1() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_selectionColor2() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_selectionColor2() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_selectionColorDisplay() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_selectionColorDisplay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_teleportPointPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_teleportPointPrefab() ;

constexpr void __cordl_internal_set__hasInfiniteDuration_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__identifierColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__isVelocityPreserved_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__selection1Teleport(::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  value) ;

constexpr void __cordl_internal_set__selection2Teleport(::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  value) ;

constexpr void __cordl_internal_set__useStealthTeleporters_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_blockedSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_farOffset(float_t  value) ;

constexpr void __cordl_internal_set_identifierColorDisplay(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_instanceUpgrades(::GlobalNamespace::SIUpgradeSet  value) ;

constexpr void __cordl_internal_set_isActivated(bool  value) ;

constexpr void __cordl_internal_set_isHandTapSetup(bool  value) ;

constexpr void __cordl_internal_set_maxBrightness(float_t  value) ;

constexpr void __cordl_internal_set_minBrightness(float_t  value) ;

constexpr void __cordl_internal_set_nearOffset(float_t  value) ;

constexpr void __cordl_internal_set_nextPlacementDelay(float_t  value) ;

constexpr void __cordl_internal_set_nextSelectionId(int32_t  value) ;

constexpr void __cordl_internal_set_overlapCheckLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_overlapCheckRadius(float_t  value) ;

constexpr void __cordl_internal_set_overlapCheckResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_placementCheckDistance(float_t  value) ;

constexpr void __cordl_internal_set_placementDelay(float_t  value) ;

constexpr void __cordl_internal_set_portalDefaultDuration(float_t  value) ;

constexpr void __cordl_internal_set_selectionColor1(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_selectionColor2(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_selectionColorDisplay(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_teleportPointPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x58e6bb0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_hasInfiniteDuration, addr 0x58e51e8, size 0x8, virtual false, abstract: false, final false
inline bool get_hasInfiniteDuration() ;

/// [CompilerGenerated]
/// @brief Method get_identifierColor, addr 0x58e51b0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_identifierColor() ;

/// [CompilerGenerated]
/// @brief Method get_isVelocityPreserved, addr 0x58e51d8, size 0x8, virtual false, abstract: false, final false
inline bool get_isVelocityPreserved() ;

/// [CompilerGenerated]
/// @brief Method get_useStealthTeleporters, addr 0x58e51c8, size 0x8, virtual false, abstract: false, final false
inline bool get_useStealthTeleporters() ;

/// [CompilerGenerated]
/// @brief Method set_hasInfiniteDuration, addr 0x58e51f0, size 0x8, virtual false, abstract: false, final false
inline void set_hasInfiniteDuration(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_identifierColor, addr 0x58e51bc, size 0xc, virtual false, abstract: false, final false
inline void set_identifierColor(::UnityEngine::Color  value) ;

/// [CompilerGenerated]
/// @brief Method set_isVelocityPreserved, addr 0x58e51e0, size 0x8, virtual false, abstract: false, final false
inline void set_isVelocityPreserved(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_useStealthTeleporters, addr 0x58e51d0, size 0x8, virtual false, abstract: false, final false
inline void set_useStealthTeleporters(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetTapTeleporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTapTeleporter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetTapTeleporter(SIGadgetTapTeleporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTapTeleporter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetTapTeleporter(SIGadgetTapTeleporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{277};

/// [SerializeField]
/// @brief Field buttonActivatable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___buttonActivatable;

/// [SerializeField]
/// @brief Field teleportPointPrefab, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___teleportPointPrefab;

/// [SerializeField]
/// @brief Field blockedSFX, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___blockedSFX;

/// [SerializeField]
/// @brief Field placementDelay, offset: 0x90, size: 0x4, def value: None
 float_t  ___placementDelay;

/// [SerializeField]
/// @brief Field identifierColorDisplay, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___identifierColorDisplay;

/// [SerializeField]
/// @brief Field selectionColorDisplay, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___selectionColorDisplay;

/// [SerializeField]
/// @brief Field selectionColor1, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___selectionColor1;

/// [SerializeField]
/// @brief Field selectionColor2, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___selectionColor2;

/// [SerializeField]
/// @brief Field portalDefaultDuration, offset: 0xb8, size: 0x4, def value: None
 float_t  ___portalDefaultDuration;

/// @brief Field placementCheckDistance, offset: 0xbc, size: 0x4, def value: None
 float_t  ___placementCheckDistance;

/// [CompilerGenerated]
/// @brief Field <identifierColor>k__BackingField, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::Color  ____identifierColor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <useStealthTeleporters>k__BackingField, offset: 0xd0, size: 0x1, def value: None
 bool  ____useStealthTeleporters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isVelocityPreserved>k__BackingField, offset: 0xd1, size: 0x1, def value: None
 bool  ____isVelocityPreserved_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <hasInfiniteDuration>k__BackingField, offset: 0xd2, size: 0x1, def value: None
 bool  ____hasInfiniteDuration_k__BackingField;

/// @brief Field _selection1Teleport, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  ____selection1Teleport;

/// @brief Field _selection2Teleport, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  ____selection2Teleport;

/// @brief Field isHandTapSetup, offset: 0xe8, size: 0x1, def value: None
 bool  ___isHandTapSetup;

/// @brief Field isActivated, offset: 0xe9, size: 0x1, def value: None
 bool  ___isActivated;

/// @brief Field nextPlacementDelay, offset: 0xec, size: 0x4, def value: None
 float_t  ___nextPlacementDelay;

/// @brief Field nextSelectionId, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___nextSelectionId;

/// @brief Field instanceUpgrades, offset: 0xf4, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeSet  ___instanceUpgrades;

/// @brief Field minBrightness, offset: 0xf8, size: 0x4, def value: None
 float_t  ___minBrightness;

/// @brief Field maxBrightness, offset: 0xfc, size: 0x4, def value: None
 float_t  ___maxBrightness;

/// [SerializeField]
/// @brief Field overlapCheckLayers, offset: 0x100, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___overlapCheckLayers;

/// [SerializeField]
/// @brief Field nearOffset, offset: 0x104, size: 0x4, def value: None
 float_t  ___nearOffset;

/// [SerializeField]
/// @brief Field farOffset, offset: 0x108, size: 0x4, def value: None
 float_t  ___farOffset;

/// [SerializeField]
/// @brief Field overlapCheckRadius, offset: 0x10c, size: 0x4, def value: None
 float_t  ___overlapCheckRadius;

/// @brief Field overlapCheckResults, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___overlapCheckResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___buttonActivatable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___teleportPointPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___blockedSFX) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___placementDelay) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___identifierColorDisplay) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___selectionColorDisplay) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___selectionColor1) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___selectionColor2) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___portalDefaultDuration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___placementCheckDistance) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ____identifierColor_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ____useStealthTeleporters_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ____isVelocityPreserved_k__BackingField) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ____hasInfiniteDuration_k__BackingField) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ____selection1Teleport) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ____selection2Teleport) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___isHandTapSetup) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___isActivated) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___nextPlacementDelay) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___nextSelectionId) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___instanceUpgrades) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___minBrightness) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___maxBrightness) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___overlapCheckLayers) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___nearOffset) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___farOffset) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___overlapCheckRadius) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporter, ___overlapCheckResults) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetTapTeleporter) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
