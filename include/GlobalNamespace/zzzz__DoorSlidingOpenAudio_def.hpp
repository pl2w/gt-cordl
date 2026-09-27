#pragma once
// IWYU pragma private; include "GlobalNamespace/DoorSlidingOpenAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DoorSlidingOpenAudio)
namespace GlobalNamespace {
class GhostLabButton;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class DoorSlidingOpenAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DoorSlidingOpenAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DoorSlidingOpenAudio*, "", "DoorSlidingOpenAudio");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DoorSlidingOpenAudio
class CORDL_TYPE DoorSlidingOpenAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=ITickSystemTick_get_TickRunning, put=ITickSystemTick_set_TickRunning)) bool  ITickSystemTick_TickRunning;

/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField)) bool  _ITickSystemTick_TickRunning_k__BackingField;

/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::GlobalNamespace::GhostLabButton>  button;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x5d09d28, size 0x12c, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method ITickSystemTick.Tick, addr 0x5d09e54, size 0xac, virtual true, abstract: false, final true
inline void ITickSystemTick_Tick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.get_TickRunning, addr 0x5d09c40, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemTick_get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.set_TickRunning, addr 0x5d09c48, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemTick_set_TickRunning(bool  value) ;

static inline ::GlobalNamespace::DoorSlidingOpenAudio* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d09cbc, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d09c50, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GlobalNamespace::GhostLabButton> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::GlobalNamespace::GhostLabButton>& __cordl_internal_get_button() ;

constexpr void __cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::GhostLabButton>  value) ;

/// @brief Method .ctor, addr 0x5d0a1d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoorSlidingOpenAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoorSlidingOpenAudio", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoorSlidingOpenAudio(DoorSlidingOpenAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoorSlidingOpenAudio", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoorSlidingOpenAudio(DoorSlidingOpenAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{454};

/// @brief Field button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostLabButton>  ___button;

/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [CompilerGenerated]
/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____ITickSystemTick_TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DoorSlidingOpenAudio, ___button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DoorSlidingOpenAudio, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DoorSlidingOpenAudio, ____ITickSystemTick_TickRunning_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DoorSlidingOpenAudio) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
