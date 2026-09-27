#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaKeyboardButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_def.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardBindings_def.hpp"
CORDL_MODULE_EXPORT(GorillaKeyboardButton)
// Forward declare root types
namespace GorillaNetworking {
class GorillaKeyboardButton;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaKeyboardButton*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaKeyboardButton*, "GorillaNetworking", "GorillaKeyboardButton");
// Dependencies GorillaKeyButton`1<TBinding>, GorillaNetworking.GorillaKeyboardBindings
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaKeyboardButton
class CORDL_TYPE GorillaKeyboardButton : public ::GlobalNamespace::GorillaKeyButton_1<::GorillaNetworking::GorillaKeyboardBindings> {
public:
// Declarations
static inline ::GorillaNetworking::GorillaKeyboardButton* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x5c876f0, size 0x80, virtual true, abstract: false, final false
inline void OnButtonPressedEvent() ;

/// @brief Method .ctor, addr 0x5c87770, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaKeyboardButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyboardButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaKeyboardButton(GorillaKeyboardButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyboardButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaKeyboardButton(GorillaKeyboardButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::GorillaKeyboardButton) == 0x68, "Size mismatch!");

} // namespace end def GorillaNetworking
