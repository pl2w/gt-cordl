#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapsKeyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/UI/zzzz__GorillaKeyWrapper_1_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomMapsKeyboard)
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class CustomMapsKeyboard;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapsKeyboard");
// Dependencies GorillaTagScripts.UI.GorillaKeyWrapper`1<TBinding>, GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapKeyboardBinding
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapsKeyboard
class CORDL_TYPE CustomMapsKeyboard : public ::GorillaTagScripts::UI::GorillaKeyWrapper_1<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding> {
public:
// Declarations
/// @brief Method BindingToString, addr 0x5bf113c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW BindingToString(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  binding) ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard* New_ctor() ;

/// @brief Method .ctor, addr 0x5bf12b4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsKeyboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsKeyboard(CustomMapsKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsKeyboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsKeyboard(CustomMapsKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4067};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
