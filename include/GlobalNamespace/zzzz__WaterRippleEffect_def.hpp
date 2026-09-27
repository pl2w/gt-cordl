#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterRippleEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterRippleEffect)
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class WaterRippleEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WaterRippleEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaterRippleEffect*, "", "WaterRippleEffect");
// [RequireComponent(typeof(UnityEngine.Animator))]
// [RequireComponent(typeof(UnityEngine.SpriteRenderer))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaterRippleEffect
class CORDL_TYPE WaterRippleEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field fadeOutDelay, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeOutDelay, put=__cordl_internal_set_fadeOutDelay)) float_t  fadeOutDelay;

/// @brief Field fadeOutTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeOutTime, put=__cordl_internal_set_fadeOutTime)) float_t  fadeOutTime;

/// @brief Field renderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::SpriteRenderer>  renderer;

/// @brief Field ripplePlaybackSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ripplePlaybackSpeed, put=__cordl_internal_set_ripplePlaybackSpeed)) float_t  ripplePlaybackSpeed;

/// @brief Field ripplePlaybackSpeedHash, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ripplePlaybackSpeedHash, put=__cordl_internal_set_ripplePlaybackSpeedHash)) int32_t  ripplePlaybackSpeedHash;

/// @brief Field ripplePlaybackSpeedName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ripplePlaybackSpeedName, put=__cordl_internal_set_ripplePlaybackSpeedName)) ::StringW  ripplePlaybackSpeedName;

/// @brief Field rippleStartTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rippleStartTime, put=__cordl_internal_set_rippleStartTime)) float_t  rippleStartTime;

/// @brief Field waterVolume, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterVolume, put=__cordl_internal_set_waterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  waterVolume;

/// @brief Method Awake, addr 0x56b5da8, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Destroy, addr 0x56b5e4c, size 0x8c, virtual false, abstract: false, final false
inline void Destroy() ;

static inline ::GlobalNamespace::WaterRippleEffect* New_ctor() ;

/// @brief Method PlayEffect, addr 0x56b5ed8, size 0x128, virtual false, abstract: false, final false
inline void PlayEffect(::GorillaLocomotion::Swimming::WaterVolume*  volume) ;

/// @brief Method Update, addr 0x56b6000, size 0x280, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_fadeOutDelay() const;

constexpr float_t& __cordl_internal_get_fadeOutDelay() ;

constexpr float_t const& __cordl_internal_get_fadeOutTime() const;

constexpr float_t& __cordl_internal_get_fadeOutTime() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_renderer() ;

constexpr float_t const& __cordl_internal_get_ripplePlaybackSpeed() const;

constexpr float_t& __cordl_internal_get_ripplePlaybackSpeed() ;

constexpr int32_t const& __cordl_internal_get_ripplePlaybackSpeedHash() const;

constexpr int32_t& __cordl_internal_get_ripplePlaybackSpeedHash() ;

constexpr ::StringW const& __cordl_internal_get_ripplePlaybackSpeedName() const;

constexpr ::StringW& __cordl_internal_get_ripplePlaybackSpeedName() ;

constexpr float_t const& __cordl_internal_get_rippleStartTime() const;

constexpr float_t& __cordl_internal_get_rippleStartTime() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_waterVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_waterVolume() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_fadeOutDelay(float_t  value) ;

constexpr void __cordl_internal_set_fadeOutTime(float_t  value) ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_ripplePlaybackSpeed(float_t  value) ;

constexpr void __cordl_internal_set_ripplePlaybackSpeedHash(int32_t  value) ;

constexpr void __cordl_internal_set_ripplePlaybackSpeedName(::StringW  value) ;

constexpr void __cordl_internal_set_rippleStartTime(float_t  value) ;

constexpr void __cordl_internal_set_waterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

/// @brief Method .ctor, addr 0x56b6280, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterRippleEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterRippleEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterRippleEffect(WaterRippleEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterRippleEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterRippleEffect(WaterRippleEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{951};

/// [SerializeField]
/// @brief Field ripplePlaybackSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___ripplePlaybackSpeed;

/// [SerializeField]
/// @brief Field fadeOutDelay, offset: 0x24, size: 0x4, def value: None
 float_t  ___fadeOutDelay;

/// [SerializeField]
/// @brief Field fadeOutTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___fadeOutTime;

/// @brief Field ripplePlaybackSpeedName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ripplePlaybackSpeedName;

/// @brief Field ripplePlaybackSpeedHash, offset: 0x38, size: 0x4, def value: None
 int32_t  ___ripplePlaybackSpeedHash;

/// @brief Field rippleStartTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___rippleStartTime;

/// @brief Field animator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field renderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___renderer;

/// @brief Field waterVolume, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___waterVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___ripplePlaybackSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___fadeOutDelay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___fadeOutTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___ripplePlaybackSpeedName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___ripplePlaybackSpeedHash) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___rippleStartTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___animator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___renderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WaterRippleEffect, ___waterVolume) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WaterRippleEffect) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
