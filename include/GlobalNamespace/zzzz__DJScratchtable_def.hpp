#pragma once
// IWYU pragma private; include "GlobalNamespace/DJScratchtable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DJScratchtable)
namespace GlobalNamespace {
class CosmeticFan;
}
namespace GlobalNamespace {
class DJScratchSoundPlayer;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class DJScratchtable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DJScratchtable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DJScratchtable*, "", "DJScratchtable");
// Dependencies UnityEngine.AudioSource, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: DJScratchtable
class CORDL_TYPE DJScratchtable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cantBackScratchUntilTimestamp, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_cantBackScratchUntilTimestamp, put=__cordl_internal_set_cantBackScratchUntilTimestamp)) float_t  cantBackScratchUntilTimestamp;

/// @brief Field cantForwardScratchUntilTimestamp, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_cantForwardScratchUntilTimestamp, put=__cordl_internal_set_cantForwardScratchUntilTimestamp)) float_t  cantForwardScratchUntilTimestamp;

/// @brief Field firstTouchRotation, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_firstTouchRotation, put=__cordl_internal_set_firstTouchRotation)) ::UnityEngine::Quaternion  firstTouchRotation;

/// @brief Field hapticDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field isLeft, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeft, put=__cordl_internal_set_isLeft)) bool  isLeft;

/// @brief Field isPlaying, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlaying, put=__cordl_internal_set_isPlaying)) bool  isPlaying;

/// @brief Field isTouching, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTouching, put=__cordl_internal_set_isTouching)) bool  isTouching;

/// @brief Field lastScratchSoundAngle, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastScratchSoundAngle, put=__cordl_internal_set_lastScratchSoundAngle)) float_t  lastScratchSoundAngle;

/// @brief Field lastSelectedTrack, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSelectedTrack, put=__cordl_internal_set_lastSelectedTrack)) int32_t  lastSelectedTrack;

/// @brief Field pausedUntilTimestamp, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_pausedUntilTimestamp, put=__cordl_internal_set_pausedUntilTimestamp)) float_t  pausedUntilTimestamp;

/// @brief Field scratchCooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_scratchCooldown, put=__cordl_internal_set_scratchCooldown)) float_t  scratchCooldown;

/// @brief Field scratchMinAngle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_scratchMinAngle, put=__cordl_internal_set_scratchMinAngle)) float_t  scratchMinAngle;

/// @brief Field scratchPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchPlayer, put=__cordl_internal_set_scratchPlayer)) ::UnityW<::GlobalNamespace::DJScratchSoundPlayer>  scratchPlayer;

/// @brief Field trackDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackDuration, put=__cordl_internal_set_trackDuration)) float_t  trackDuration;

/// @brief Field tracks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tracks, put=__cordl_internal_set_tracks)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  tracks;

/// @brief Field turntableVisual, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_turntableVisual, put=__cordl_internal_set_turntableVisual)) ::UnityW<::GlobalNamespace::CosmeticFan>  turntableVisual;

static inline ::GlobalNamespace::DJScratchtable* New_ctor() ;

/// @brief Method OnTriggerExit, addr 0x564c5b0, size 0xd8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerStay, addr 0x564c0f8, size 0x4b8, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  collider) ;

/// @brief Method PauseTrack, addr 0x564c058, size 0x74, virtual false, abstract: false, final false
inline void PauseTrack() ;

/// @brief Method ResumeTrack, addr 0x564c0cc, size 0x1c, virtual false, abstract: false, final false
inline void ResumeTrack() ;

/// @brief Method SelectTrack, addr 0x564c688, size 0x1b4, virtual false, abstract: false, final false
inline void SelectTrack(int32_t  track) ;

/// @brief Method SetPlaying, addr 0x564c0f0, size 0x8, virtual false, abstract: false, final false
inline void SetPlaying(bool  playing) ;

constexpr float_t const& __cordl_internal_get_cantBackScratchUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_cantBackScratchUntilTimestamp() ;

constexpr float_t const& __cordl_internal_get_cantForwardScratchUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_cantForwardScratchUntilTimestamp() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_firstTouchRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_firstTouchRotation() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr bool const& __cordl_internal_get_isLeft() const;

constexpr bool& __cordl_internal_get_isLeft() ;

constexpr bool const& __cordl_internal_get_isPlaying() const;

constexpr bool& __cordl_internal_get_isPlaying() ;

constexpr bool const& __cordl_internal_get_isTouching() const;

constexpr bool& __cordl_internal_get_isTouching() ;

constexpr float_t const& __cordl_internal_get_lastScratchSoundAngle() const;

constexpr float_t& __cordl_internal_get_lastScratchSoundAngle() ;

constexpr int32_t const& __cordl_internal_get_lastSelectedTrack() const;

constexpr int32_t& __cordl_internal_get_lastSelectedTrack() ;

constexpr float_t const& __cordl_internal_get_pausedUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_pausedUntilTimestamp() ;

constexpr float_t const& __cordl_internal_get_scratchCooldown() const;

constexpr float_t& __cordl_internal_get_scratchCooldown() ;

constexpr float_t const& __cordl_internal_get_scratchMinAngle() const;

constexpr float_t& __cordl_internal_get_scratchMinAngle() ;

constexpr ::UnityW<::GlobalNamespace::DJScratchSoundPlayer> const& __cordl_internal_get_scratchPlayer() const;

constexpr ::UnityW<::GlobalNamespace::DJScratchSoundPlayer>& __cordl_internal_get_scratchPlayer() ;

constexpr float_t const& __cordl_internal_get_trackDuration() const;

constexpr float_t& __cordl_internal_get_trackDuration() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_tracks() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_tracks() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticFan> const& __cordl_internal_get_turntableVisual() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticFan>& __cordl_internal_get_turntableVisual() ;

constexpr void __cordl_internal_set_cantBackScratchUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_cantForwardScratchUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_firstTouchRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_isLeft(bool  value) ;

constexpr void __cordl_internal_set_isPlaying(bool  value) ;

constexpr void __cordl_internal_set_isTouching(bool  value) ;

constexpr void __cordl_internal_set_lastScratchSoundAngle(float_t  value) ;

constexpr void __cordl_internal_set_lastSelectedTrack(int32_t  value) ;

constexpr void __cordl_internal_set_pausedUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_scratchCooldown(float_t  value) ;

constexpr void __cordl_internal_set_scratchMinAngle(float_t  value) ;

constexpr void __cordl_internal_set_scratchPlayer(::UnityW<::GlobalNamespace::DJScratchSoundPlayer>  value) ;

constexpr void __cordl_internal_set_trackDuration(float_t  value) ;

constexpr void __cordl_internal_set_tracks(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_turntableVisual(::UnityW<::GlobalNamespace::CosmeticFan>  value) ;

/// @brief Method .ctor, addr 0x564c83c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DJScratchtable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DJScratchtable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DJScratchtable(DJScratchtable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DJScratchtable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DJScratchtable(DJScratchtable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{708};

/// [SerializeField]
/// @brief Field isLeft, offset: 0x20, size: 0x1, def value: None
 bool  ___isLeft;

/// [SerializeField]
/// @brief Field scratchPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DJScratchSoundPlayer>  ___scratchPlayer;

/// [SerializeField]
/// @brief Field scratchCooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ___scratchCooldown;

/// [SerializeField]
/// @brief Field scratchMinAngle, offset: 0x34, size: 0x4, def value: None
 float_t  ___scratchMinAngle;

/// [SerializeField]
/// @brief Field tracks, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___tracks;

/// [SerializeField]
/// @brief Field turntableVisual, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticFan>  ___turntableVisual;

/// [SerializeField]
/// @brief Field trackDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___trackDuration;

/// [SerializeField]
/// @brief Field hapticStrength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// [SerializeField]
/// @brief Field hapticDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// @brief Field lastSelectedTrack, offset: 0x54, size: 0x4, def value: None
 int32_t  ___lastSelectedTrack;

/// @brief Field isPlaying, offset: 0x58, size: 0x1, def value: None
 bool  ___isPlaying;

/// @brief Field isTouching, offset: 0x59, size: 0x1, def value: None
 bool  ___isTouching;

/// @brief Field firstTouchRotation, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___firstTouchRotation;

/// @brief Field lastScratchSoundAngle, offset: 0x6c, size: 0x4, def value: None
 float_t  ___lastScratchSoundAngle;

/// @brief Field cantForwardScratchUntilTimestamp, offset: 0x70, size: 0x4, def value: None
 float_t  ___cantForwardScratchUntilTimestamp;

/// @brief Field cantBackScratchUntilTimestamp, offset: 0x74, size: 0x4, def value: None
 float_t  ___cantBackScratchUntilTimestamp;

/// @brief Field pausedUntilTimestamp, offset: 0x78, size: 0x4, def value: None
 float_t  ___pausedUntilTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___isLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___scratchPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___scratchCooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___scratchMinAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___tracks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___turntableVisual) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___trackDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___hapticStrength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___hapticDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___lastSelectedTrack) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___isPlaying) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___isTouching) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___firstTouchRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___lastScratchSoundAngle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___cantForwardScratchUntilTimestamp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___cantBackScratchUntilTimestamp) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchtable, ___pausedUntilTimestamp) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DJScratchtable) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
