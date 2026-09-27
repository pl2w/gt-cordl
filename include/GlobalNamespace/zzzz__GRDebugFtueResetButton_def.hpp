#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDebugFtueResetButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableReleaseButton_def.hpp"
CORDL_MODULE_EXPORT(GRDebugFtueResetButton)
// Forward declare root types
namespace GlobalNamespace {
class GRDebugFtueResetButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDebugFtueResetButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDebugFtueResetButton*, "", "GRDebugFtueResetButton");
// Dependencies GorillaPressableReleaseButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDebugFtueResetButton
class CORDL_TYPE GRDebugFtueResetButton : public ::GlobalNamespace::GorillaPressableReleaseButton {
public:
// Declarations
/// @brief Field availableOnLive, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_availableOnLive, put=__cordl_internal_set_availableOnLive)) bool  availableOnLive;

/// @brief Method Awake, addr 0x58756f4, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonActivation, addr 0x587578c, size 0x2c, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// @brief Method ButtonDeactivation, addr 0x58757b8, size 0x28, virtual true, abstract: false, final false
inline void ButtonDeactivation() ;

static inline ::GlobalNamespace::GRDebugFtueResetButton* New_ctor() ;

/// @brief Method OnPressedButton, addr 0x5875728, size 0x64, virtual false, abstract: false, final false
inline void OnPressedButton() ;

constexpr bool const& __cordl_internal_get_availableOnLive() const;

constexpr bool& __cordl_internal_get_availableOnLive() ;

constexpr void __cordl_internal_set_availableOnLive(bool  value) ;

/// @brief Method .ctor, addr 0x58757e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDebugFtueResetButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDebugFtueResetButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDebugFtueResetButton(GRDebugFtueResetButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDebugFtueResetButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDebugFtueResetButton(GRDebugFtueResetButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1902};

/// @brief Field availableOnLive, offset: 0xc8, size: 0x1, def value: None
 bool  ___availableOnLive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDebugFtueResetButton, ___availableOnLive) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDebugFtueResetButton) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
