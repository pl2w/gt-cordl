#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaAmbushManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTagManager_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaAmbushManager)
namespace GlobalNamespace {
class GorillaSkin;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GorillaTagScripts {
class GorillaAmbushManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaAmbushManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaAmbushManager*, "GorillaTagScripts", "GorillaAmbushManager");
// Dependencies GorillaTagManager, UnityEngine.AudioClip, XSceneRef
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaAmbushManager
class CORDL_TYPE GorillaAmbushManager : public ::GlobalNamespace::GorillaTagManager {
public:
// Declarations
/// @brief Field <HandFXScaleModifier>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HandFXScaleModifier_k__BackingField, put=setStaticF__HandFXScaleModifier_k__BackingField)) float_t  _HandFXScaleModifier_k__BackingField;

/// @brief Field <isGhostTag>k__BackingField, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGhostTag_k__BackingField, put=__cordl_internal_set__isGhostTag_k__BackingField)) bool  _isGhostTag_k__BackingField;

/// @brief Field ambushSkin, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambushSkin, put=__cordl_internal_set_ambushSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  ambushSkin;

/// @brief Field crawlingSpeedForMaxVolume, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_crawlingSpeedForMaxVolume, put=__cordl_internal_set_crawlingSpeedForMaxVolume)) float_t  crawlingSpeedForMaxVolume;

/// @brief Field firstPersonTaggedSoundVolume, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_firstPersonTaggedSoundVolume, put=__cordl_internal_set_firstPersonTaggedSoundVolume)) float_t  firstPersonTaggedSoundVolume;

/// @brief Field firstPersonTaggedSounds, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPersonTaggedSounds, put=__cordl_internal_set_firstPersonTaggedSounds)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  firstPersonTaggedSounds;

/// @brief Field handTapFX, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTapFX, put=__cordl_internal_set_handTapFX)) ::UnityW<::UnityEngine::GameObject>  handTapFX;

/// @brief Field handTapHash, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_handTapHash, put=setStaticF_handTapHash)) int32_t  handTapHash;

/// @brief Field handTapScaleFactor, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_handTapScaleFactor, put=__cordl_internal_set_handTapScaleFactor)) float_t  handTapScaleFactor;

/// @brief Field hasScryingPlane, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasScryingPlane, put=__cordl_internal_set_hasScryingPlane)) bool  hasScryingPlane;

/// @brief Field hasScryingPlane3p, offset 0x180, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasScryingPlane3p, put=__cordl_internal_set_hasScryingPlane3p)) bool  hasScryingPlane3p;

 __declspec(property(get=get_isGhostTag, put=set_isGhostTag)) bool  isGhostTag;

/// @brief Field scryingPlane, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_scryingPlane, put=__cordl_internal_set_scryingPlane)) ::UnityW<::UnityEngine::MeshRenderer>  scryingPlane;

/// @brief Field scryingPlane3p, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_scryingPlane3p, put=__cordl_internal_set_scryingPlane3p)) ::UnityW<::UnityEngine::MeshRenderer>  scryingPlane3p;

/// @brief Field scryingPlane3pRef, offset 0x150, size 0x18 
 __declspec(property(get=__cordl_internal_get_scryingPlane3pRef, put=__cordl_internal_set_scryingPlane3pRef)) ::GlobalNamespace::XSceneRef  scryingPlane3pRef;

/// @brief Field scryingPlaneRef, offset 0x138, size 0x18 
 __declspec(property(get=__cordl_internal_get_scryingPlaneRef, put=__cordl_internal_set_scryingPlaneRef)) ::GlobalNamespace::XSceneRef  scryingPlaneRef;

/// @brief Method Awake, addr 0x5bc5548, size 0x118, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GameModeName, addr 0x5bc56d0, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x5bc573c, size 0x164, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x5bc540c, size 0x18, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method MyMatIndex, addr 0x5bc5a40, size 0x20, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

static inline ::GorillaTagScripts::GorillaAmbushManager* New_ctor() ;

/// @brief Method Start, addr 0x5bc5660, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopPlaying, addr 0x5bc5a60, size 0x40c, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method UpdatePlayerAppearance, addr 0x5bc58a0, size 0x1a0, virtual true, abstract: false, final false
inline void UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig) ;

constexpr bool const& __cordl_internal_get__isGhostTag_k__BackingField() const;

constexpr bool& __cordl_internal_get__isGhostTag_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get_ambushSkin() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get_ambushSkin() ;

constexpr float_t const& __cordl_internal_get_crawlingSpeedForMaxVolume() const;

constexpr float_t& __cordl_internal_get_crawlingSpeedForMaxVolume() ;

constexpr float_t const& __cordl_internal_get_firstPersonTaggedSoundVolume() const;

constexpr float_t& __cordl_internal_get_firstPersonTaggedSoundVolume() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_firstPersonTaggedSounds() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_firstPersonTaggedSounds() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_handTapFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_handTapFX() ;

constexpr float_t const& __cordl_internal_get_handTapScaleFactor() const;

constexpr float_t& __cordl_internal_get_handTapScaleFactor() ;

constexpr bool const& __cordl_internal_get_hasScryingPlane() const;

constexpr bool& __cordl_internal_get_hasScryingPlane() ;

constexpr bool const& __cordl_internal_get_hasScryingPlane3p() const;

constexpr bool& __cordl_internal_get_hasScryingPlane3p() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_scryingPlane() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_scryingPlane() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_scryingPlane3p() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_scryingPlane3p() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_scryingPlane3pRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_scryingPlane3pRef() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_scryingPlaneRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_scryingPlaneRef() ;

constexpr void __cordl_internal_set__isGhostTag_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_ambushSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set_crawlingSpeedForMaxVolume(float_t  value) ;

constexpr void __cordl_internal_set_firstPersonTaggedSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_firstPersonTaggedSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_handTapFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_handTapScaleFactor(float_t  value) ;

constexpr void __cordl_internal_set_hasScryingPlane(bool  value) ;

constexpr void __cordl_internal_set_hasScryingPlane3p(bool  value) ;

constexpr void __cordl_internal_set_scryingPlane(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_scryingPlane3p(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_scryingPlane3pRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_scryingPlaneRef(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x5bc5e6c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF__HandFXScaleModifier_k__BackingField() ;

static inline int32_t getStaticF_handTapHash() ;

/// @brief Method get_HandEffectHash, addr 0x5bc5424, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_HandEffectHash() ;

/// [CompilerGenerated]
/// @brief Method get_HandFXScaleModifier, addr 0x5bc547c, size 0x58, virtual false, abstract: false, final false
static inline float_t get_HandFXScaleModifier() ;

/// [CompilerGenerated]
/// @brief Method get_isGhostTag, addr 0x5bc5538, size 0x8, virtual false, abstract: false, final false
inline bool get_isGhostTag() ;

static inline void setStaticF__HandFXScaleModifier_k__BackingField(float_t  value) ;

static inline void setStaticF_handTapHash(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_HandFXScaleModifier, addr 0x5bc54d4, size 0x64, virtual false, abstract: false, final false
static inline void set_HandFXScaleModifier(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_isGhostTag, addr 0x5bc5540, size 0x8, virtual false, abstract: false, final false
inline void set_isGhostTag(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaAmbushManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaAmbushManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaAmbushManager(GorillaAmbushManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaAmbushManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaAmbushManager(GorillaAmbushManager const& ) = delete;

/// @brief Field STEALTH_MATERIAL_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  STEALTH_MATERIAL_INDEX{static_cast<int32_t>(0xd)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3982};

/// @brief Field handTapFX, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___handTapFX;

/// @brief Field ambushSkin, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ___ambushSkin;

/// [SerializeField]
/// @brief Field firstPersonTaggedSounds, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___firstPersonTaggedSounds;

/// [SerializeField]
/// @brief Field firstPersonTaggedSoundVolume, offset: 0x128, size: 0x4, def value: None
 float_t  ___firstPersonTaggedSoundVolume;

/// @brief Field handTapScaleFactor, offset: 0x12c, size: 0x4, def value: None
 float_t  ___handTapScaleFactor;

/// @brief Field crawlingSpeedForMaxVolume, offset: 0x130, size: 0x4, def value: None
 float_t  ___crawlingSpeedForMaxVolume;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <isGhostTag>k__BackingField, offset: 0x134, size: 0x1, def value: None
 bool  ____isGhostTag_k__BackingField;

/// [SerializeField]
/// @brief Field scryingPlaneRef, offset: 0x138, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___scryingPlaneRef;

/// [SerializeField]
/// @brief Field scryingPlane3pRef, offset: 0x150, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___scryingPlane3pRef;

/// @brief Field scryingPlane, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___scryingPlane;

/// @brief Field hasScryingPlane, offset: 0x170, size: 0x1, def value: None
 bool  ___hasScryingPlane;

/// @brief Field scryingPlane3p, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___scryingPlane3p;

/// @brief Field hasScryingPlane3p, offset: 0x180, size: 0x1, def value: None
 bool  ___hasScryingPlane3p;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___handTapFX) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___ambushSkin) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___firstPersonTaggedSounds) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___firstPersonTaggedSoundVolume) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___handTapScaleFactor) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___crawlingSpeedForMaxVolume) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ____isGhostTag_k__BackingField) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___scryingPlaneRef) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___scryingPlane3pRef) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___scryingPlane) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___hasScryingPlane) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___scryingPlane3p) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaAmbushManager, ___hasScryingPlane3p) == 0x180, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaAmbushManager) == 0x188, "Size mismatch!");

} // namespace end def GorillaTagScripts
