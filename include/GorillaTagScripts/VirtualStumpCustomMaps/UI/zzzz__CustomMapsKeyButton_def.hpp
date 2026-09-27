#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapsKeyButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomMapsKeyButton)
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class CustomMapsKeyButton;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapsKeyButton");
// Dependencies GorillaKeyButton`1<TBinding>, GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapKeyboardBinding
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapsKeyButton
class CORDL_TYPE CustomMapsKeyButton : public ::GlobalNamespace::GorillaKeyButton_1<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding> {
public:
// Declarations
/// @brief Field _buttonDisplayNameTxt, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonDisplayNameTxt, put=__cordl_internal_set__buttonDisplayNameTxt)) ::UnityW<::TMPro::TMP_Text>  _buttonDisplayNameTxt;

/// @brief Field _isLocalized, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLocalized, put=__cordl_internal_set__isLocalized)) bool  _isLocalized;

/// @brief Field _localizedName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizedName, put=__cordl_internal_set__localizedName)) ::UnityEngine::Localization::LocalizedString*  _localizedName;

/// @brief Method BindingToString, addr 0x5bf1140, size 0x174, virtual false, abstract: false, final false
static inline ::StringW BindingToString(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  binding) ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x5bf15f0, size 0x4, virtual true, abstract: false, final false
inline void OnButtonPressedEvent() ;

/// @brief Method OnDisableEvents, addr 0x5bf1520, size 0xd0, virtual true, abstract: false, final false
inline void OnDisableEvents() ;

/// @brief Method OnEnableEvents, addr 0x5bf12fc, size 0xe4, virtual true, abstract: false, final false
inline void OnEnableEvents() ;

/// @brief Method OnLanguageChanged, addr 0x5bf13e0, size 0x140, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__buttonDisplayNameTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__buttonDisplayNameTxt() ;

constexpr bool const& __cordl_internal_get__isLocalized() const;

constexpr bool& __cordl_internal_get__isLocalized() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__localizedName() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__localizedName() ;

constexpr void __cordl_internal_set__buttonDisplayNameTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__isLocalized(bool  value) ;

constexpr void __cordl_internal_set__localizedName(::UnityEngine::Localization::LocalizedString*  value) ;

/// @brief Method .ctor, addr 0x5bf15f4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsKeyButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsKeyButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsKeyButton(CustomMapsKeyButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsKeyButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsKeyButton(CustomMapsKeyButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4069};

/// [SerializeField]
/// @brief Field _isLocalized, offset: 0x68, size: 0x1, def value: None
 bool  ____isLocalized;

/// [SerializeField]
/// @brief Field _localizedName, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____localizedName;

/// [SerializeField]
/// @brief Field _buttonDisplayNameTxt, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____buttonDisplayNameTxt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton, ____isLocalized) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton, ____localizedName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton, ____buttonDisplayNameTxt) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyButton) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
