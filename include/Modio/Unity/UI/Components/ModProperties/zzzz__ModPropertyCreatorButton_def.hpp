#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyCreatorButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyButtonBase_1_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyCreatorButton)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Users {
class UserProfile;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyCreatorButton;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyCreatorButton");
// Dependencies Modio.Unity.UI.Components.ModProperties.ModPropertyButtonBase`1<T>
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyCreatorButton
class CORDL_TYPE ModPropertyCreatorButton : public ::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<::Modio::Users::UserProfile*> {
public:
// Declarations
/// @brief Method GetProperty, addr 0x9fc5f04, size 0x14, virtual true, abstract: false, final false
inline ::Modio::Users::UserProfile* GetProperty(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton* New_ctor() ;

/// @brief Method .ctor, addr 0x9fc5f18, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyCreatorButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCreatorButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyCreatorButton(ModPropertyCreatorButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCreatorButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyCreatorButton(ModPropertyCreatorButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorButton) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
