#pragma once
// IWYU pragma private; include "DefaultNamespace/SoundBankPlayerCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SoundBankPlayerCosmetic)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
// Forward declare root types
namespace DefaultNamespace {
class SoundBankPlayerCosmetic;
}
// Write type traits
MARK_REF_T(::DefaultNamespace::SoundBankPlayerCosmetic*);
DEFINE_IL2CPP_CLASS(::DefaultNamespace::SoundBankPlayerCosmetic*, "DefaultNamespace", "SoundBankPlayerCosmetic");
// [RequireComponent(typeof(SoundBankPlayer))]
// Dependencies UnityEngine.MonoBehaviour
namespace DefaultNamespace {
// Is value type: false
// CS Name: DefaultNamespace.SoundBankPlayerCosmetic
class CORDL_TYPE SoundBankPlayerCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field playAudioLoop, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_playAudioLoop, put=__cordl_internal_set_playAudioLoop)) bool  playAudioLoop;

/// @brief Field soundBankPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5dd1a18, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::DefaultNamespace::SoundBankPlayerCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5dd1a8c, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5dd1a20, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayAudio, addr 0x5dd1c00, size 0xe4, virtual false, abstract: false, final false
inline void PlayAudio() ;

/// @brief Method PlayAudioLoop, addr 0x5dd1ce4, size 0xc, virtual false, abstract: false, final false
inline void PlayAudioLoop() ;

/// @brief Method PlayAudioNonInterrupting, addr 0x5dd1cf0, size 0x100, virtual false, abstract: false, final false
inline void PlayAudioNonInterrupting() ;

/// @brief Method PlayAudioWithTunableVolume, addr 0x5dd1df0, size 0x124, virtual false, abstract: false, final false
inline void PlayAudioWithTunableVolume(bool  leftHand, float_t  fingerValue) ;

/// @brief Method StopAudio, addr 0x5dd1f14, size 0xe8, virtual false, abstract: false, final false
inline void StopAudio() ;

/// @brief Method Tick, addr 0x5dd1af8, size 0x108, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get_playAudioLoop() const;

constexpr bool& __cordl_internal_get_playAudioLoop() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_playAudioLoop(bool  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

/// @brief Method .ctor, addr 0x5dd1ffc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5dd1a08, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5dd1a10, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundBankPlayerCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundBankPlayerCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundBankPlayerCosmetic(SoundBankPlayerCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundBankPlayerCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundBankPlayerCosmetic(SoundBankPlayerCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5083};

/// [SerializeField]
/// @brief Field soundBankPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// @brief Field playAudioLoop, offset: 0x28, size: 0x1, def value: None
 bool  ___playAudioLoop;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x29, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DefaultNamespace::SoundBankPlayerCosmetic, ___soundBankPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DefaultNamespace::SoundBankPlayerCosmetic, ___playAudioLoop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DefaultNamespace::SoundBankPlayerCosmetic, ____TickRunning_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(sizeof(::DefaultNamespace::SoundBankPlayerCosmetic) == 0x30, "Size mismatch!");

} // namespace end def DefaultNamespace
