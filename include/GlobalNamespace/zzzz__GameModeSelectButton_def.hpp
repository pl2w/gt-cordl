#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSelectButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameModeSelectButton)
namespace GlobalNamespace {
class GameModePages;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModeSelectButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModeSelectButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSelectButton*, "", "GameModeSelectButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModeSelectButton
class CORDL_TYPE GameModeSelectButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field buttonIndex, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonIndex, put=__cordl_internal_set_buttonIndex)) int32_t  buttonIndex;

/// @brief Field selector, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::UnityW<::GlobalNamespace::GameModePages>  selector;

/// @brief Method ButtonActivation, addr 0x579d220, size 0x2c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::GameModeSelectButton* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_buttonIndex() const;

constexpr int32_t& __cordl_internal_get_buttonIndex() ;

constexpr ::UnityW<::GlobalNamespace::GameModePages> const& __cordl_internal_get_selector() const;

constexpr ::UnityW<::GlobalNamespace::GameModePages>& __cordl_internal_get_selector() ;

constexpr void __cordl_internal_set_buttonIndex(int32_t  value) ;

constexpr void __cordl_internal_set_selector(::UnityW<::GlobalNamespace::GameModePages>  value) ;

/// @brief Method .ctor, addr 0x579d24c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeSelectButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeSelectButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeSelectButton(GameModeSelectButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeSelectButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeSelectButton(GameModeSelectButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1494};

/// [SerializeField]
/// @brief Field selector, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModePages>  ___selector;

/// [SerializeField]
/// @brief Field buttonIndex, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___buttonIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModeSelectButton, ___selector) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectButton, ___buttonIndex) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModeSelectButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
