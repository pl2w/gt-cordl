#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetTapTeleporterDeployable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetTapTeleporterDeployable)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class SIGadgetTapTeleporter;
}
namespace GlobalNamespace {
class SIGameEntityStealthVisibility;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetTapTeleporterDeployable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetTapTeleporterDeployable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetTapTeleporterDeployable*, "", "SIGadgetTapTeleporterDeployable");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetTapTeleporterDeployable
class CORDL_TYPE SIGadgetTapTeleporterDeployable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _pad, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__pad, put=__cordl_internal_set__pad)) ::UnityW<::GlobalNamespace::SIGadgetTapTeleporter>  _pad;

/// @brief Field activateDelay, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_activateDelay, put=__cordl_internal_set_activateDelay)) float_t  activateDelay;

/// @brief Field activateTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_activateTime, put=__cordl_internal_set_activateTime)) float_t  activateTime;

/// @brief Field destination, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::UnityW<::UnityEngine::Transform>  destination;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field identifierColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_identifierColor, put=__cordl_internal_set_identifierColor)) ::UnityEngine::Color  identifierColor;

/// @brief Field identifierColorDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_identifierColorDisplay, put=__cordl_internal_set_identifierColorDisplay)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  identifierColorDisplay;

/// @brief Field linkDirectionIndicator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkDirectionIndicator, put=__cordl_internal_set_linkDirectionIndicator)) ::UnityW<::UnityEngine::Transform>  linkDirectionIndicator;

/// @brief Field linkedPoint, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkedPoint, put=__cordl_internal_set_linkedPoint)) ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  linkedPoint;

/// @brief Field maintainVelocity, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_maintainVelocity, put=__cordl_internal_set_maintainVelocity)) bool  maintainVelocity;

/// @brief Field requiresSurfaceTapSinceTeleport, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_requiresSurfaceTapSinceTeleport, put=__cordl_internal_set_requiresSurfaceTapSinceTeleport)) bool  requiresSurfaceTapSinceTeleport;

/// @brief Field reteleportDelay, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_reteleportDelay, put=setStaticF_reteleportDelay)) float_t  reteleportDelay;

/// @brief Field reteleportTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_reteleportTime, put=setStaticF_reteleportTime)) float_t  reteleportTime;

/// @brief Field selectionColor1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionColor1, put=__cordl_internal_set_selectionColor1)) ::UnityW<::UnityEngine::Material>  selectionColor1;

/// @brief Field selectionColor2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionColor2, put=__cordl_internal_set_selectionColor2)) ::UnityW<::UnityEngine::Material>  selectionColor2;

/// @brief Field selectionColorDisplay, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionColorDisplay, put=__cordl_internal_set_selectionColorDisplay)) ::UnityW<::UnityEngine::Renderer>  selectionColorDisplay;

/// @brief Field selectionId, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectionId, put=__cordl_internal_set_selectionId)) int32_t  selectionId;

/// @brief Field stealth, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_stealth, put=__cordl_internal_set_stealth)) ::UnityW<::GlobalNamespace::SIGameEntityStealthVisibility>  stealth;

/// @brief Field teleportCheckDistance, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportCheckDistance, put=__cordl_internal_set_teleportCheckDistance)) float_t  teleportCheckDistance;

/// @brief Field teleportSoundbank, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportSoundbank, put=__cordl_internal_set_teleportSoundbank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  teleportSoundbank;

/// @brief Field timeToDie, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToDie, put=__cordl_internal_set_timeToDie)) float_t  timeToDie;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Awake, addr 0x58e6c74, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearLink, addr 0x58e6d60, size 0xc4, virtual false, abstract: false, final false
inline void ClearLink() ;

/// @brief Method LateUpdate, addr 0x58e6c9c, size 0xc4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SIGadgetTapTeleporterDeployable* New_ctor() ;

/// @brief Method OnEnable, addr 0x58e6c78, size 0x24, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x58e6f20, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58e6e24, size 0xac, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58e6f24, size 0x240, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method ResetRetriggerBlock, addr 0x58e78c0, size 0x74, virtual false, abstract: false, final false
inline void ResetRetriggerBlock() ;

/// @brief Method SetLink, addr 0x58e675c, size 0x188, virtual false, abstract: false, final false
inline void SetLink(::GlobalNamespace::SIGadgetTapTeleporter*  newPad, ::GlobalNamespace::SIGadgetTapTeleporterDeployable*  newLink) ;

/// @brief Method TeleportToLinked, addr 0x58e755c, size 0x364, virtual false, abstract: false, final false
inline void TeleportToLinked() ;

/// @brief Method TryTeleport, addr 0x58e7448, size 0x114, virtual false, abstract: false, final false
inline void TryTeleport() ;

/// @brief Method UpdateLinkDisplay, addr 0x58e7164, size 0x2e4, virtual false, abstract: false, final false
inline void UpdateLinkDisplay() ;

/// @brief Method UpdateSelectionDisplay, addr 0x58e6ed0, size 0x50, virtual false, abstract: false, final false
inline void UpdateSelectionDisplay() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporter> const& __cordl_internal_get__pad() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporter>& __cordl_internal_get__pad() ;

constexpr float_t const& __cordl_internal_get_activateDelay() const;

constexpr float_t& __cordl_internal_get_activateDelay() ;

constexpr float_t const& __cordl_internal_get_activateTime() const;

constexpr float_t& __cordl_internal_get_activateTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_destination() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_destination() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_identifierColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_identifierColor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_identifierColorDisplay() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_identifierColorDisplay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_linkDirectionIndicator() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_linkDirectionIndicator() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable> const& __cordl_internal_get_linkedPoint() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>& __cordl_internal_get_linkedPoint() ;

constexpr bool const& __cordl_internal_get_maintainVelocity() const;

constexpr bool& __cordl_internal_get_maintainVelocity() ;

constexpr bool const& __cordl_internal_get_requiresSurfaceTapSinceTeleport() const;

constexpr bool& __cordl_internal_get_requiresSurfaceTapSinceTeleport() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_selectionColor1() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_selectionColor1() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_selectionColor2() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_selectionColor2() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_selectionColorDisplay() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_selectionColorDisplay() ;

constexpr int32_t const& __cordl_internal_get_selectionId() const;

constexpr int32_t& __cordl_internal_get_selectionId() ;

constexpr ::UnityW<::GlobalNamespace::SIGameEntityStealthVisibility> const& __cordl_internal_get_stealth() const;

constexpr ::UnityW<::GlobalNamespace::SIGameEntityStealthVisibility>& __cordl_internal_get_stealth() ;

constexpr float_t const& __cordl_internal_get_teleportCheckDistance() const;

constexpr float_t& __cordl_internal_get_teleportCheckDistance() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_teleportSoundbank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_teleportSoundbank() ;

constexpr float_t const& __cordl_internal_get_timeToDie() const;

constexpr float_t& __cordl_internal_get_timeToDie() ;

constexpr void __cordl_internal_set__pad(::UnityW<::GlobalNamespace::SIGadgetTapTeleporter>  value) ;

constexpr void __cordl_internal_set_activateDelay(float_t  value) ;

constexpr void __cordl_internal_set_activateTime(float_t  value) ;

constexpr void __cordl_internal_set_destination(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_identifierColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_identifierColorDisplay(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_linkDirectionIndicator(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_linkedPoint(::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  value) ;

constexpr void __cordl_internal_set_maintainVelocity(bool  value) ;

constexpr void __cordl_internal_set_requiresSurfaceTapSinceTeleport(bool  value) ;

constexpr void __cordl_internal_set_selectionColor1(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_selectionColor2(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_selectionColorDisplay(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_selectionId(int32_t  value) ;

constexpr void __cordl_internal_set_stealth(::UnityW<::GlobalNamespace::SIGameEntityStealthVisibility>  value) ;

constexpr void __cordl_internal_set_teleportCheckDistance(float_t  value) ;

constexpr void __cordl_internal_set_teleportSoundbank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_timeToDie(float_t  value) ;

/// @brief Method .ctor, addr 0x58e7934, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_reteleportDelay() ;

static inline float_t getStaticF_reteleportTime() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

static inline void setStaticF_reteleportDelay(float_t  value) ;

static inline void setStaticF_reteleportTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetTapTeleporterDeployable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTapTeleporterDeployable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetTapTeleporterDeployable(SIGadgetTapTeleporterDeployable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetTapTeleporterDeployable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetTapTeleporterDeployable(SIGadgetTapTeleporterDeployable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{278};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [SerializeField]
/// @brief Field destination, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___destination;

/// [SerializeField]
/// @brief Field identifierColorDisplay, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___identifierColorDisplay;

/// [SerializeField]
/// @brief Field linkDirectionIndicator, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___linkDirectionIndicator;

/// [SerializeField]
/// @brief Field selectionColorDisplay, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___selectionColorDisplay;

/// [SerializeField]
/// @brief Field selectionColor1, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___selectionColor1;

/// [SerializeField]
/// @brief Field selectionColor2, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___selectionColor2;

/// [SerializeField]
/// @brief Field teleportSoundbank, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___teleportSoundbank;

/// [SerializeField]
/// @brief Field stealth, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGameEntityStealthVisibility>  ___stealth;

/// [SerializeField]
/// @brief Field requiresSurfaceTapSinceTeleport, offset: 0x68, size: 0x1, def value: None
 bool  ___requiresSurfaceTapSinceTeleport;

/// @brief Field maintainVelocity, offset: 0x69, size: 0x1, def value: None
 bool  ___maintainVelocity;

/// @brief Field selectionId, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___selectionId;

/// @brief Field _pad, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetTapTeleporter>  ____pad;

/// @brief Field linkedPoint, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetTapTeleporterDeployable>  ___linkedPoint;

/// @brief Field activateDelay, offset: 0x80, size: 0x4, def value: None
 float_t  ___activateDelay;

/// @brief Field activateTime, offset: 0x84, size: 0x4, def value: None
 float_t  ___activateTime;

/// @brief Field identifierColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___identifierColor;

/// @brief Field timeToDie, offset: 0x98, size: 0x4, def value: None
 float_t  ___timeToDie;

/// @brief Field teleportCheckDistance, offset: 0x9c, size: 0x4, def value: None
 float_t  ___teleportCheckDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___destination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___identifierColorDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___linkDirectionIndicator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___selectionColorDisplay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___selectionColor1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___selectionColor2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___teleportSoundbank) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___stealth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___requiresSurfaceTapSinceTeleport) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___maintainVelocity) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___selectionId) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ____pad) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___linkedPoint) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___activateDelay) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___activateTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___identifierColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___timeToDie) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetTapTeleporterDeployable, ___teleportCheckDistance) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetTapTeleporterDeployable) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
