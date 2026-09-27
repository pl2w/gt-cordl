#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/VirtualStumpModeSelectButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ModeSelectButton_def.hpp"
CORDL_MODULE_EXPORT(VirtualStumpModeSelectButton)
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class VirtualStumpModeSelectButton;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton*, "GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpModeSelectButton");
// Dependencies ModeSelectButton
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpModeSelectButton
class CORDL_TYPE VirtualStumpModeSelectButton : public ::GlobalNamespace::ModeSelectButton {
public:
// Declarations
/// @brief Method ButtonActivationWithHand, addr 0x5bee7a4, size 0x2d0, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton* New_ctor() ;

/// @brief Method .ctor, addr 0x5beea74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpModeSelectButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpModeSelectButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpModeSelectButton(VirtualStumpModeSelectButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpModeSelectButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpModeSelectButton(VirtualStumpModeSelectButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4060};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpModeSelectButton) == 0xe0, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
