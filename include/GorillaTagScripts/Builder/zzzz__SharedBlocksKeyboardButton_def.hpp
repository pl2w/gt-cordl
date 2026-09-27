#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksKeyboardButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksKeyboardBindings_def.hpp"
CORDL_MODULE_EXPORT(SharedBlocksKeyboardButton)
// Forward declare root types
namespace GorillaTagScripts::Builder {
class SharedBlocksKeyboardButton;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*, "GorillaTagScripts.Builder", "SharedBlocksKeyboardButton");
// Dependencies GorillaKeyButton`1<TBinding>, GorillaTagScripts.Builder.SharedBlocksKeyboardBindings
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksKeyboardButton
class CORDL_TYPE SharedBlocksKeyboardButton : public ::GlobalNamespace::GorillaKeyButton_1<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings> {
public:
// Declarations
static inline ::GorillaTagScripts::Builder::SharedBlocksKeyboardButton* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x5c36224, size 0x80, virtual true, abstract: false, final false
inline void OnButtonPressedEvent() ;

/// @brief Method .ctor, addr 0x5c362a4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksKeyboardButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksKeyboardButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksKeyboardButton(SharedBlocksKeyboardButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksKeyboardButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksKeyboardButton(SharedBlocksKeyboardButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4184};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksKeyboardButton) == 0x68, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
