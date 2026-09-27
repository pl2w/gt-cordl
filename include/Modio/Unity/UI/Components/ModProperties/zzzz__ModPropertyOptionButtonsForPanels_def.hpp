#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyOptionButtonsForPanels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyOptionButtonsForPanels)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyOptionButtonsForPanels;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyOptionButtonsForPanels");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyOptionButtonsForPanels
class CORDL_TYPE ModPropertyOptionButtonsForPanels : public ::System::Object {
public:
// Declarations
/// @brief Field _mod, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _moreFromCreatorButton, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__moreFromCreatorButton, put=__cordl_internal_set__moreFromCreatorButton)) ::UnityW<::UnityEngine::UI::Button>  _moreFromCreatorButton;

/// @brief Field _reportModButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__reportModButton, put=__cordl_internal_set__reportModButton)) ::UnityW<::UnityEngine::UI::Button>  _reportModButton;

/// @brief Field _retryDownloadButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__retryDownloadButton, put=__cordl_internal_set__retryDownloadButton)) ::UnityW<::UnityEngine::UI::Button>  _retryDownloadButton;

/// @brief Field _uninstallButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uninstallButton, put=__cordl_internal_set__uninstallButton)) ::UnityW<::UnityEngine::UI::Button>  _uninstallButton;

/// @brief Field _viewModButton, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__viewModButton, put=__cordl_internal_set__viewModButton)) ::UnityW<::UnityEngine::UI::Button>  _viewModButton;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

/// @brief Method MoreFromCreatorButtonClicked, addr 0x9fc7524, size 0x64, virtual false, abstract: false, final false
inline void MoreFromCreatorButtonClicked() ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc7278, size 0x1a8, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

/// @brief Method ReportModButtonClicked, addr 0x9fc7588, size 0x58, virtual false, abstract: false, final false
inline void ReportModButtonClicked() ;

/// @brief Method RetryDownloadButtonClicked, addr 0x9fc75e0, size 0x9c, virtual false, abstract: false, final false
inline void RetryDownloadButtonClicked() ;

/// @brief Method UninstallModButtonClicked, addr 0x9fc767c, size 0x1c, virtual false, abstract: false, final false
inline void UninstallModButtonClicked() ;

/// @brief Method ViewModButtonClicked, addr 0x9fc74cc, size 0x58, virtual false, abstract: false, final false
inline void ViewModButtonClicked() ;

/// [CompilerGenerated]
/// @brief Method <OnModUpdate>g__SetupButton|6_0, addr 0x9fc7420, size 0xac, virtual false, abstract: false, final false
static inline void _OnModUpdate_g__SetupButton_6_0(::UnityEngine::UI::Button*  button, ::UnityEngine::Events::UnityAction*  listener) ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__moreFromCreatorButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__moreFromCreatorButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__reportModButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__reportModButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__retryDownloadButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__retryDownloadButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__uninstallButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__uninstallButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__viewModButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__viewModButton() ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__moreFromCreatorButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__reportModButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__retryDownloadButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__uninstallButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__viewModButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x9fc7698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyOptionButtonsForPanels() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyOptionButtonsForPanels", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyOptionButtonsForPanels(ModPropertyOptionButtonsForPanels && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyOptionButtonsForPanels", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyOptionButtonsForPanels(ModPropertyOptionButtonsForPanels const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27235};

/// [SerializeField]
/// @brief Field _viewModButton, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____viewModButton;

/// [SerializeField]
/// @brief Field _moreFromCreatorButton, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____moreFromCreatorButton;

/// [SerializeField]
/// @brief Field _reportModButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____reportModButton;

/// [SerializeField]
/// @brief Field _retryDownloadButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____retryDownloadButton;

/// [SerializeField]
/// @brief Field _uninstallButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____uninstallButton;

/// @brief Field _mod, offset: 0x38, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels, ____viewModButton) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels, ____moreFromCreatorButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels, ____reportModButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels, ____retryDownloadButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels, ____uninstallButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels, ____mod) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyOptionButtonsForPanels) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
