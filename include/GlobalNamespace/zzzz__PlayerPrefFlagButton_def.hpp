#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefFlagButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlagButton_ButtonMode_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_def.hpp"
CORDL_MODULE_EXPORT(PlayerPrefFlagButton)
namespace GlobalNamespace {
struct PlayerPrefFlagButton_ButtonMode;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerPrefFlagButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerPrefFlagButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPrefFlagButton*, "", "PlayerPrefFlagButton");
// Dependencies GorillaPressableButton, PlayerPrefFlagButton::ButtonMode, PlayerPrefFlags::Flag
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerPrefFlagButton
class CORDL_TYPE PlayerPrefFlagButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
using ButtonMode = ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode;

/// @brief Field flag, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_flag, put=__cordl_internal_set_flag)) ::GlobalNamespace::PlayerPrefFlags_Flag  flag;

/// @brief Field mode, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode  mode;

/// @brief Field value, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) bool  value;

/// @brief Method ButtonActivation, addr 0x5712808, size 0x58, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::PlayerPrefFlagButton* New_ctor() ;

/// @brief Method OnEnable, addr 0x571277c, size 0x34, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::PlayerPrefFlags_Flag const& __cordl_internal_get_flag() const;

constexpr ::GlobalNamespace::PlayerPrefFlags_Flag& __cordl_internal_get_flag() ;

constexpr ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode& __cordl_internal_get_mode() ;

constexpr bool const& __cordl_internal_get_value() const;

constexpr bool& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_flag(::GlobalNamespace::PlayerPrefFlags_Flag  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::PlayerPrefFlagButton_ButtonMode  value) ;

constexpr void __cordl_internal_set_value(bool  value) ;

/// @brief Method .ctor, addr 0x57129e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefFlagButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefFlagButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefFlagButton(PlayerPrefFlagButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefFlagButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefFlagButton(PlayerPrefFlagButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1182};

/// [SerializeField]
/// @brief Field flag, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::PlayerPrefFlags_Flag  ___flag;

/// [SerializeField]
/// @brief Field mode, offset: 0xbc, size: 0x4, def value: None
 ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode  ___mode;

/// [SerializeField]
/// @brief Field value, offset: 0xc0, size: 0x1, def value: None
 bool  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPrefFlagButton, ___flag) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPrefFlagButton, ___mode) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPrefFlagButton, ___value) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPrefFlagButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
