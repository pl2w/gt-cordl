#pragma once
// IWYU pragma private; include "GlobalNamespace/SeedPacketTriggerHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SeedPacketTriggerHandler)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SeedPacketTriggerHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SeedPacketTriggerHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SeedPacketTriggerHandler*, "", "SeedPacketTriggerHandler");
// [RequireComponent(typeof(GorillaTag.Cosmetics.OnTriggerEventsCosmetic))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeedPacketTriggerHandler
class CORDL_TYPE SeedPacketTriggerHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field destroyDelay, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyDelay, put=__cordl_internal_set_destroyDelay)) float_t  destroyDelay;

/// @brief Field destroyOnTriggerEnter, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyOnTriggerEnter, put=__cordl_internal_set_destroyOnTriggerEnter)) bool  destroyOnTriggerEnter;

/// @brief Field onTriggerEntered, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTriggerEntered, put=__cordl_internal_set_onTriggerEntered)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  onTriggerEntered;

/// @brief Field particleToPlay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleToPlay, put=__cordl_internal_set_particleToPlay)) ::UnityW<::UnityEngine::ParticleSystem>  particleToPlay;

/// @brief Field soundBankPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Field toggleOnceOnly, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_toggleOnceOnly, put=__cordl_internal_set_toggleOnceOnly)) bool  toggleOnceOnly;

/// @brief Field triggerEntered, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerEntered, put=__cordl_internal_set_triggerEntered)) bool  triggerEntered;

/// @brief Method Destroy, addr 0x578f8f0, size 0x10c, virtual false, abstract: false, final false
inline void Destroy() ;

static inline ::GlobalNamespace::SeedPacketTriggerHandler* New_ctor() ;

/// @brief Method OnTriggerEntered, addr 0x578f778, size 0x7c, virtual false, abstract: false, final false
inline void OnTriggerEntered() ;

/// @brief Method ToggleEffects, addr 0x578f7f4, size 0xfc, virtual false, abstract: false, final false
inline void ToggleEffects() ;

constexpr float_t const& __cordl_internal_get_destroyDelay() const;

constexpr float_t& __cordl_internal_get_destroyDelay() ;

constexpr bool const& __cordl_internal_get_destroyOnTriggerEnter() const;

constexpr bool& __cordl_internal_get_destroyOnTriggerEnter() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>* const& __cordl_internal_get_onTriggerEntered() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*& __cordl_internal_get_onTriggerEntered() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleToPlay() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleToPlay() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr bool const& __cordl_internal_get_toggleOnceOnly() const;

constexpr bool& __cordl_internal_get_toggleOnceOnly() ;

constexpr bool const& __cordl_internal_get_triggerEntered() const;

constexpr bool& __cordl_internal_get_triggerEntered() ;

constexpr void __cordl_internal_set_destroyDelay(float_t  value) ;

constexpr void __cordl_internal_set_destroyOnTriggerEnter(bool  value) ;

constexpr void __cordl_internal_set_onTriggerEntered(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  value) ;

constexpr void __cordl_internal_set_particleToPlay(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_toggleOnceOnly(bool  value) ;

constexpr void __cordl_internal_set_triggerEntered(bool  value) ;

/// @brief Method .ctor, addr 0x578f9fc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeedPacketTriggerHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeedPacketTriggerHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SeedPacketTriggerHandler(SeedPacketTriggerHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeedPacketTriggerHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeedPacketTriggerHandler(SeedPacketTriggerHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1443};

/// [SerializeField]
/// @brief Field particleToPlay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleToPlay;

/// [SerializeField]
/// @brief Field soundBankPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// [SerializeField]
/// @brief Field destroyOnTriggerEnter, offset: 0x30, size: 0x1, def value: None
 bool  ___destroyOnTriggerEnter;

/// [SerializeField]
/// @brief Field destroyDelay, offset: 0x34, size: 0x4, def value: None
 float_t  ___destroyDelay;

/// [SerializeField]
/// @brief Field toggleOnceOnly, offset: 0x38, size: 0x1, def value: None
 bool  ___toggleOnceOnly;

/// [HideInInspector]
/// @brief Field onTriggerEntered, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  ___onTriggerEntered;

/// @brief Field triggerEntered, offset: 0x48, size: 0x1, def value: None
 bool  ___triggerEntered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeedPacketTriggerHandler, ___particleToPlay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeedPacketTriggerHandler, ___soundBankPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeedPacketTriggerHandler, ___destroyOnTriggerEnter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeedPacketTriggerHandler, ___destroyDelay) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeedPacketTriggerHandler, ___toggleOnceOnly) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeedPacketTriggerHandler, ___onTriggerEntered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeedPacketTriggerHandler, ___triggerEntered) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SeedPacketTriggerHandler) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
