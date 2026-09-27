#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundPostMuteButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SoundPostMuteButton)
// Forward declare root types
namespace GlobalNamespace {
class SoundPostMuteButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundPostMuteButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundPostMuteButton*, "", "SoundPostMuteButton");
// Dependencies GorillaPressableButton, SynchedMusicController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundPostMuteButton
class CORDL_TYPE SoundPostMuteButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field IsDummyButton, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDummyButton, put=__cordl_internal_set_IsDummyButton)) bool  IsDummyButton;

/// @brief Field _targetMuteButton, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetMuteButton, put=__cordl_internal_set__targetMuteButton)) ::UnityW<::GlobalNamespace::SoundPostMuteButton>  _targetMuteButton;

/// @brief Field musicControllers, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicControllers, put=__cordl_internal_set_musicControllers)) ::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>>  musicControllers;

/// @brief Method ButtonActivation, addr 0x59a6790, size 0xf8, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::SoundPostMuteButton* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsDummyButton() const;

constexpr bool& __cordl_internal_get_IsDummyButton() ;

constexpr ::UnityW<::GlobalNamespace::SoundPostMuteButton> const& __cordl_internal_get__targetMuteButton() const;

constexpr ::UnityW<::GlobalNamespace::SoundPostMuteButton>& __cordl_internal_get__targetMuteButton() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>> const& __cordl_internal_get_musicControllers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>>& __cordl_internal_get_musicControllers() ;

constexpr void __cordl_internal_set_IsDummyButton(bool  value) ;

constexpr void __cordl_internal_set__targetMuteButton(::UnityW<::GlobalNamespace::SoundPostMuteButton>  value) ;

constexpr void __cordl_internal_set_musicControllers(::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>>  value) ;

/// @brief Method .ctor, addr 0x59a6888, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundPostMuteButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundPostMuteButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundPostMuteButton(SoundPostMuteButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundPostMuteButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundPostMuteButton(SoundPostMuteButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2634};

/// @brief Field musicControllers, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>>  ___musicControllers;

/// [Tooltip("If true, then this button will passthrough clicks to a connected SoundPostMuteButton.")]
/// @brief Field IsDummyButton, offset: 0xc0, size: 0x1, def value: None
 bool  ___IsDummyButton;

/// [SerializeField]
/// [Tooltip("The targetted SoundPostMuteButton if this is a dummy button.")]
/// @brief Field _targetMuteButton, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundPostMuteButton>  ____targetMuteButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundPostMuteButton, ___musicControllers) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundPostMuteButton, ___IsDummyButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundPostMuteButton, ____targetMuteButton) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundPostMuteButton) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
