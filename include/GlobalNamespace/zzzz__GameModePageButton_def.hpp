#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModePageButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(GameModePageButton)
namespace GlobalNamespace {
class GameModePages;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModePageButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModePageButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModePageButton*, "", "GameModePageButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModePageButton
class CORDL_TYPE GameModePageButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field left, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_left, put=__cordl_internal_set_left)) bool  left;

/// @brief Field selector, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::UnityW<::GlobalNamespace::GameModePages>  selector;

/// @brief Method ButtonActivation, addr 0x579c7b8, size 0x2c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::GameModePageButton* New_ctor() ;

constexpr bool const& __cordl_internal_get_left() const;

constexpr bool& __cordl_internal_get_left() ;

constexpr ::UnityW<::GlobalNamespace::GameModePages> const& __cordl_internal_get_selector() const;

constexpr ::UnityW<::GlobalNamespace::GameModePages>& __cordl_internal_get_selector() ;

constexpr void __cordl_internal_set_left(bool  value) ;

constexpr void __cordl_internal_set_selector(::UnityW<::GlobalNamespace::GameModePages>  value) ;

/// @brief Method .ctor, addr 0x579c7e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModePageButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModePageButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModePageButton(GameModePageButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModePageButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModePageButton(GameModePageButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1492};

/// [SerializeField]
/// @brief Field selector, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModePages>  ___selector;

/// [SerializeField]
/// @brief Field left, offset: 0xc0, size: 0x1, def value: None
 bool  ___left;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModePageButton, ___selector) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModePageButton, ___left) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModePageButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
