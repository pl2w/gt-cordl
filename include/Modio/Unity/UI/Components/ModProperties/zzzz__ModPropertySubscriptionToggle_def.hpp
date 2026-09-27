#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertySubscriptionToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertySubscriptionToggle)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertySubscriptionToggle;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*, "Modio.Unity.UI.Components.ModProperties", "ModPropertySubscriptionToggle");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertySubscriptionToggle
class CORDL_TYPE ModPropertySubscriptionToggle : public ::System::Object {
public:
// Declarations
/// @brief Field _dependenciesAreConfirmed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__dependenciesAreConfirmed, put=__cordl_internal_set__dependenciesAreConfirmed)) bool  _dependenciesAreConfirmed;

/// @brief Field _localisedText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__localisedText, put=__cordl_internal_set__localisedText)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _localisedText;

/// @brief Field _mod, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _purchaseButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchaseButton, put=__cordl_internal_set__purchaseButton)) ::UnityW<::UnityEngine::UI::Button>  _purchaseButton;

/// @brief Field _subscribeButton, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribeButton, put=__cordl_internal_set__subscribeButton)) ::UnityW<::UnityEngine::UI::Button>  _subscribeButton;

/// @brief Field _subscribeToggle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribeToggle, put=__cordl_internal_set__subscribeToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _subscribeToggle;

/// @brief Field _text, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text>  _text;

/// @brief Field _unsubscribeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__unsubscribeButton, put=__cordl_internal_set__unsubscribeButton)) ::UnityW<::UnityEngine::UI::Button>  _unsubscribeButton;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc7d60, size 0x5c0, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

/// @brief Method PurchaseButtonClicked, addr 0x9fc855c, size 0x58, virtual false, abstract: false, final false
inline void PurchaseButtonClicked() ;

/// @brief Method SubscribeButtonClicked, addr 0x9fc8320, size 0x20, virtual false, abstract: false, final false
inline void SubscribeButtonClicked() ;

/// @brief Method SubscribeToggleValueChanged, addr 0x9fc8544, size 0x18, virtual false, abstract: false, final false
inline void SubscribeToggleValueChanged(bool  arg0) ;

/// @brief Method UpdateSubscribed, addr 0x9fc8340, size 0x204, virtual false, abstract: false, final false
inline void UpdateSubscribed(bool  shouldBeSubscribed) ;

constexpr bool const& __cordl_internal_get__dependenciesAreConfirmed() const;

constexpr bool& __cordl_internal_get__dependenciesAreConfirmed() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__localisedText() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__localisedText() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__purchaseButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__purchaseButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__subscribeButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__subscribeButton() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__subscribeToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__subscribeToggle() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__unsubscribeButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__unsubscribeButton() ;

constexpr void __cordl_internal_set__dependenciesAreConfirmed(bool  value) ;

constexpr void __cordl_internal_set__localisedText(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__purchaseButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__subscribeButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__subscribeToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__unsubscribeButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x9fc85b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertySubscriptionToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertySubscriptionToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertySubscriptionToggle(ModPropertySubscriptionToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertySubscriptionToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertySubscriptionToggle(ModPropertySubscriptionToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27243};

/// [SerializeField]
/// @brief Field _subscribeButton, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____subscribeButton;

/// [SerializeField]
/// @brief Field _subscribeToggle, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____subscribeToggle;

/// [SerializeField]
/// @brief Field _unsubscribeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____unsubscribeButton;

/// [SerializeField]
/// @brief Field _purchaseButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____purchaseButton;

/// [SerializeField]
/// @brief Field _text, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____text;

/// [SerializeField]
/// @brief Field _localisedText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____localisedText;

/// [SerializeField]
/// @brief Field _dependenciesAreConfirmed, offset: 0x40, size: 0x1, def value: None
 bool  ____dependenciesAreConfirmed;

/// @brief Field _mod, offset: 0x48, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____subscribeButton) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____subscribeToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____unsubscribeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____purchaseButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____localisedText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____dependenciesAreConfirmed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle, ____mod) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle) == 0x50, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
