#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyEnabled.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyEnabled)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyEnabled;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyEnabled");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyEnabled
class CORDL_TYPE ModPropertyEnabled : public ::System::Object {
public:
// Declarations
/// @brief Field _disableButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableButton, put=__cordl_internal_set__disableButton)) ::UnityW<::UnityEngine::UI::Button>  _disableButton;

/// @brief Field _enableButton, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__enableButton, put=__cordl_internal_set__enableButton)) ::UnityW<::UnityEngine::UI::Button>  _enableButton;

/// @brief Field _enabledToggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__enabledToggle, put=__cordl_internal_set__enabledToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _enabledToggle;

/// @brief Field _mod, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _showIfInstalledWhenEnabledNotAvailable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__showIfInstalledWhenEnabledNotAvailable, put=__cordl_internal_set__showIfInstalledWhenEnabledNotAvailable)) ::UnityW<::UnityEngine::GameObject>  _showIfInstalledWhenEnabledNotAvailable;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

/// @brief Method DisableButtonClicked, addr 0x9fc6708, size 0x1c, virtual false, abstract: false, final false
inline void DisableButtonClicked() ;

/// @brief Method EnableButtonClicked, addr 0x9fc66ec, size 0x1c, virtual false, abstract: false, final false
inline void EnableButtonClicked() ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc6260, size 0x470, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

/// @brief Method OnToggleValueChanged, addr 0x9fc66d0, size 0x1c, virtual false, abstract: false, final false
inline void OnToggleValueChanged(bool  isEnabled) ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__disableButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__disableButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__enableButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__enableButton() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__enabledToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__enabledToggle() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__showIfInstalledWhenEnabledNotAvailable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__showIfInstalledWhenEnabledNotAvailable() ;

constexpr void __cordl_internal_set__disableButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__enableButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__enabledToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__showIfInstalledWhenEnabledNotAvailable(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc6724, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyEnabled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyEnabled", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyEnabled(ModPropertyEnabled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyEnabled", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyEnabled(ModPropertyEnabled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27227};

/// [SerializeField]
/// @brief Field _enabledToggle, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____enabledToggle;

/// [SerializeField]
/// @brief Field _enableButton, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____enableButton;

/// [SerializeField]
/// @brief Field _disableButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____disableButton;

/// [SerializeField]
/// @brief Field _showIfInstalledWhenEnabledNotAvailable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____showIfInstalledWhenEnabledNotAvailable;

/// @brief Field _mod, offset: 0x30, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled, ____enabledToggle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled, ____enableButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled, ____disableButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled, ____showIfInstalledWhenEnabledNotAvailable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled, ____mod) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
