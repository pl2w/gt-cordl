#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaATMKeyButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_def.hpp"
#include "GorillaNetworking/zzzz__GorillaATMKeyBindings_def.hpp"
CORDL_MODULE_EXPORT(GorillaATMKeyButton)
// Forward declare root types
namespace GorillaNetworking {
class GorillaATMKeyButton;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GorillaATMKeyButton*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaATMKeyButton*, "GorillaNetworking", "GorillaATMKeyButton");
// Dependencies GorillaKeyButton`1<TBinding>, GorillaNetworking.GorillaATMKeyBindings
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GorillaATMKeyButton
class CORDL_TYPE GorillaATMKeyButton : public ::GlobalNamespace::GorillaKeyButton_1<::GorillaNetworking::GorillaATMKeyBindings> {
public:
// Declarations
static inline ::GorillaNetworking::GorillaATMKeyButton* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x5c74144, size 0x80, virtual true, abstract: false, final false
inline void OnButtonPressedEvent() ;

/// @brief Method .ctor, addr 0x5c741c4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaATMKeyButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaATMKeyButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaATMKeyButton(GorillaATMKeyButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaATMKeyButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaATMKeyButton(GorillaATMKeyButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::GorillaATMKeyButton) == 0x68, "Size mismatch!");

} // namespace end def GorillaNetworking
