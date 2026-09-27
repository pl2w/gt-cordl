#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportStationTappable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TeleportStationTappable)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class TeleportStation;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleportStationTappable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportStationTappable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportStationTappable*, "", "TeleportStationTappable");
// Dependencies Tappable, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportStationTappable
class CORDL_TYPE TeleportStationTappable : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field _firstPersonEffect, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonEffect, put=__cordl_internal_set__firstPersonEffect)) ::UnityW<::UnityEngine::GameObject>  _firstPersonEffect;

/// @brief Field _on1PTeleport, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__on1PTeleport, put=__cordl_internal_set__on1PTeleport)) ::UnityEngine::Events::UnityEvent*  _on1PTeleport;

/// @brief Field _on3PTeleport, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__on3PTeleport, put=__cordl_internal_set__on3PTeleport)) ::UnityEngine::Events::UnityEvent*  _on3PTeleport;

/// @brief Field _teleportStation, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__teleportStation, put=__cordl_internal_set__teleportStation)) ::UnityW<::GlobalNamespace::TeleportStation>  _teleportStation;

/// @brief Field _teleportStationRef, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get__teleportStationRef, put=__cordl_internal_set__teleportStationRef)) ::GlobalNamespace::XSceneRef  _teleportStationRef;

/// @brief Field _thirdPersonEffectEnd, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonEffectEnd, put=__cordl_internal_set__thirdPersonEffectEnd)) ::UnityW<::UnityEngine::GameObject>  _thirdPersonEffectEnd;

/// @brief Field _thirdPersonEffectStart, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonEffectStart, put=__cordl_internal_set__thirdPersonEffectStart)) ::UnityW<::UnityEngine::GameObject>  _thirdPersonEffectStart;

static inline ::GlobalNamespace::TeleportStationTappable* New_ctor() ;

/// @brief Method OnTapLocal, addr 0x5ade4f4, size 0x278, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

/// @brief Method Start, addr 0x5ade45c, size 0x98, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__firstPersonEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__firstPersonEffect() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__on1PTeleport() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__on1PTeleport() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__on3PTeleport() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__on3PTeleport() ;

constexpr ::UnityW<::GlobalNamespace::TeleportStation> const& __cordl_internal_get__teleportStation() const;

constexpr ::UnityW<::GlobalNamespace::TeleportStation>& __cordl_internal_get__teleportStation() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get__teleportStationRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get__teleportStationRef() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__thirdPersonEffectEnd() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__thirdPersonEffectEnd() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__thirdPersonEffectStart() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__thirdPersonEffectStart() ;

constexpr void __cordl_internal_set__firstPersonEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__on1PTeleport(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__on3PTeleport(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__teleportStation(::UnityW<::GlobalNamespace::TeleportStation>  value) ;

constexpr void __cordl_internal_set__teleportStationRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set__thirdPersonEffectEnd(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__thirdPersonEffectStart(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5ade76c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportStationTappable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationTappable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportStationTappable(TeleportStationTappable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportStationTappable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportStationTappable(TeleportStationTappable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3430};

/// [SerializeField]
/// @brief Field _teleportStationRef, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ____teleportStationRef;

/// @brief Field _teleportStation, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeleportStation>  ____teleportStation;

/// [Space]
/// [SerializeField]
/// @brief Field _firstPersonEffect, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____firstPersonEffect;

/// [SerializeField]
/// @brief Field _thirdPersonEffectStart, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____thirdPersonEffectStart;

/// [SerializeField]
/// @brief Field _thirdPersonEffectEnd, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____thirdPersonEffectEnd;

/// [SerializeField]
/// @brief Field _on3PTeleport, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____on3PTeleport;

/// [SerializeField]
/// @brief Field _on1PTeleport, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____on1PTeleport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportStationTappable, ____teleportStationRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationTappable, ____teleportStation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationTappable, ____firstPersonEffect) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationTappable, ____thirdPersonEffectStart) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationTappable, ____thirdPersonEffectEnd) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationTappable, ____on3PTeleport) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportStationTappable, ____on1PTeleport) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportStationTappable) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
