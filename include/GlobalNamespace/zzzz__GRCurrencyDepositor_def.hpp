#pragma once
// IWYU pragma private; include "GlobalNamespace/GRCurrencyDepositor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRCurrencyDepositor)
namespace GlobalNamespace {
class GhostReactor;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRCurrencyDepositor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRCurrencyDepositor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRCurrencyDepositor*, "", "GRCurrencyDepositor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRCurrencyDepositor
class CORDL_TYPE GRCurrencyDepositor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field collectSentientCores, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_collectSentientCores, put=__cordl_internal_set_collectSentientCores)) bool  collectSentientCores;

/// @brief Field collectibleDepositedClip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleDepositedClip, put=__cordl_internal_set_collectibleDepositedClip)) ::UnityW<::UnityEngine::AudioClip>  collectibleDepositedClip;

/// @brief Field collectibleDepositedClipVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectibleDepositedClipVolume, put=__cordl_internal_set_collectibleDepositedClipVolume)) float_t  collectibleDepositedClipVolume;

/// @brief Field collectibleDepositedEffect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleDepositedEffect, put=__cordl_internal_set_collectibleDepositedEffect)) ::UnityW<::UnityEngine::ParticleSystem>  collectibleDepositedEffect;

/// @brief Field depositingChargePoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositingChargePoint, put=__cordl_internal_set_depositingChargePoint)) ::UnityW<::UnityEngine::Transform>  depositingChargePoint;

/// @brief Field reactor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Method Init, addr 0x5875398, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GRCurrencyDepositor* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x58753a0, size 0x34c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_collectSentientCores() const;

constexpr bool& __cordl_internal_get_collectSentientCores() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_collectibleDepositedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_collectibleDepositedClip() ;

constexpr float_t const& __cordl_internal_get_collectibleDepositedClipVolume() const;

constexpr float_t& __cordl_internal_get_collectibleDepositedClipVolume() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_collectibleDepositedEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_collectibleDepositedEffect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depositingChargePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depositingChargePoint() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collectSentientCores(bool  value) ;

constexpr void __cordl_internal_set_collectibleDepositedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_collectibleDepositedClipVolume(float_t  value) ;

constexpr void __cordl_internal_set_collectibleDepositedEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_depositingChargePoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

/// @brief Method .ctor, addr 0x58756ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRCurrencyDepositor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRCurrencyDepositor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRCurrencyDepositor(GRCurrencyDepositor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRCurrencyDepositor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRCurrencyDepositor(GRCurrencyDepositor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1901};

/// @brief Field hapticDuration offset 0xffffffff size 0x4
static constexpr float_t  hapticDuration{static_cast<float_t>(0.15f)};

/// @brief Field hapticStrength offset 0xffffffff size 0x4
static constexpr float_t  hapticStrength{static_cast<float_t>(0.5f)};

/// @brief Field depositingChargePoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depositingChargePoint;

/// [SerializeField]
/// @brief Field collectibleDepositedEffect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___collectibleDepositedEffect;

/// [SerializeField]
/// @brief Field collectibleDepositedClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___collectibleDepositedClip;

/// [SerializeField]
/// @brief Field collectibleDepositedClipVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ___collectibleDepositedClipVolume;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field collectSentientCores, offset: 0x48, size: 0x1, def value: None
 bool  ___collectSentientCores;

/// @brief Field reactor, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRCurrencyDepositor, ___depositingChargePoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCurrencyDepositor, ___collectibleDepositedEffect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCurrencyDepositor, ___collectibleDepositedClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCurrencyDepositor, ___collectibleDepositedClipVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCurrencyDepositor, ___audioSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCurrencyDepositor, ___collectSentientCores) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCurrencyDepositor, ___reactor) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRCurrencyDepositor) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
