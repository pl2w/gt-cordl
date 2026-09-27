#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyModButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyButtonBase_1_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyModButton)
namespace Modio::Mods {
class Mod;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyModButton;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyModButton");
// Dependencies Modio.Unity.UI.Components.ModProperties.ModPropertyButtonBase`1<T>
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyModButton
class CORDL_TYPE ModPropertyModButton : public ::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<::Modio::Mods::Mod*> {
public:
// Declarations
/// @brief Method GetProperty, addr 0x9fc71f4, size 0x8, virtual true, abstract: false, final false
inline ::Modio::Mods::Mod* GetProperty(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton* New_ctor() ;

/// @brief Method .ctor, addr 0x9fc71fc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyModButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyModButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyModButton(ModPropertyModButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyModButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyModButton(ModPropertyModButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyModButton) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
