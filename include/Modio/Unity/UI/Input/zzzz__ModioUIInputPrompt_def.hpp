#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIInputPrompt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Input/zzzz__ModioUIInput_ModioAction_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUIInputPrompt)
namespace Modio::Unity::UI::Input {
class ModioUIInput_InputPromptDisplayInfo;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class LayoutElement;
}
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUIInputPrompt;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIInputPrompt*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIInputPrompt*, "Modio.Unity.UI.Input", "ModioUIInputPrompt");
// Dependencies Modio.Unity.UI.Input.ModioUIInput::ModioAction, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIInputPrompt
class CORDL_TYPE ModioUIInputPrompt : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _action, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__action, put=__cordl_internal_set__action)) ::GlobalNamespace::ModioUIInput_ModioAction  _action;

/// @brief Field _additionalToHideIfNoBindings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__additionalToHideIfNoBindings, put=__cordl_internal_set__additionalToHideIfNoBindings)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _additionalToHideIfNoBindings;

/// @brief Field _button, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button>  _button;

/// @brief Field _hideIfController, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideIfController, put=__cordl_internal_set__hideIfController)) bool  _hideIfController;

/// @brief Field _hideIfNoBindings, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideIfNoBindings, put=__cordl_internal_set__hideIfNoBindings)) bool  _hideIfNoBindings;

/// @brief Field _hideIfNoListener, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideIfNoListener, put=__cordl_internal_set__hideIfNoListener)) bool  _hideIfNoListener;

/// @brief Field _hideIfNotController, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideIfNotController, put=__cordl_internal_set__hideIfNotController)) bool  _hideIfNotController;

/// @brief Field _image, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__image, put=__cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::Image>  _image;

/// @brief Field _inputPromptText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputPromptText, put=__cordl_internal_set__inputPromptText)) ::UnityW<::TMPro::TMP_Text>  _inputPromptText;

/// @brief Field _layoutElement, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__layoutElement, put=__cordl_internal_set__layoutElement)) ::UnityW<::UnityEngine::UI::LayoutElement>  _layoutElement;

/// @brief Field _layoutElementIgnoreLayout, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__layoutElementIgnoreLayout, put=__cordl_internal_set__layoutElementIgnoreLayout)) bool  _layoutElementIgnoreLayout;

/// @brief Field _textBackground, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__textBackground, put=__cordl_internal_set__textBackground)) ::UnityW<::UnityEngine::UI::Image>  _textBackground;

/// @brief Method Awake, addr 0x9fb5920, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisplayInfoUpdated, addr 0x9fb5aec, size 0x340, virtual false, abstract: false, final false
inline void DisplayInfoUpdated(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*  info) ;

static inline ::Modio::Unity::UI::Input::ModioUIInputPrompt* New_ctor() ;

/// @brief Method OnDisable, addr 0x9fb5e2c, size 0xc8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fb5a18, size 0xd4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PressedAction, addr 0x9fb5ef4, size 0x5c, virtual false, abstract: false, final false
inline void PressedAction() ;

/// [CompilerGenerated]
/// @brief Method <DisplayInfoUpdated>g__SetElementsVisible|16_0, addr 0x9fb5f50, size 0x20c, virtual false, abstract: false, final false
inline void _DisplayInfoUpdated_g__SetElementsVisible_16_0(bool  textVisible, bool  imageVisible) ;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction const& __cordl_internal_get__action() const;

constexpr ::GlobalNamespace::ModioUIInput_ModioAction& __cordl_internal_get__action() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__additionalToHideIfNoBindings() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__additionalToHideIfNoBindings() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button() ;

constexpr bool const& __cordl_internal_get__hideIfController() const;

constexpr bool& __cordl_internal_get__hideIfController() ;

constexpr bool const& __cordl_internal_get__hideIfNoBindings() const;

constexpr bool& __cordl_internal_get__hideIfNoBindings() ;

constexpr bool const& __cordl_internal_get__hideIfNoListener() const;

constexpr bool& __cordl_internal_get__hideIfNoListener() ;

constexpr bool const& __cordl_internal_get__hideIfNotController() const;

constexpr bool& __cordl_internal_get__hideIfNotController() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__image() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__inputPromptText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__inputPromptText() ;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement> const& __cordl_internal_get__layoutElement() const;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement>& __cordl_internal_get__layoutElement() ;

constexpr bool const& __cordl_internal_get__layoutElementIgnoreLayout() const;

constexpr bool& __cordl_internal_get__layoutElementIgnoreLayout() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__textBackground() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__textBackground() ;

constexpr void __cordl_internal_set__action(::GlobalNamespace::ModioUIInput_ModioAction  value) ;

constexpr void __cordl_internal_set__additionalToHideIfNoBindings(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__hideIfController(bool  value) ;

constexpr void __cordl_internal_set__hideIfNoBindings(bool  value) ;

constexpr void __cordl_internal_set__hideIfNoListener(bool  value) ;

constexpr void __cordl_internal_set__hideIfNotController(bool  value) ;

constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__inputPromptText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__layoutElement(::UnityW<::UnityEngine::UI::LayoutElement>  value) ;

constexpr void __cordl_internal_set__layoutElementIgnoreLayout(bool  value) ;

constexpr void __cordl_internal_set__textBackground(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x9fb615c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIInputPrompt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInputPrompt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIInputPrompt(ModioUIInputPrompt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInputPrompt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIInputPrompt(ModioUIInputPrompt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27128};

/// [SerializeField]
/// @brief Field _action, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ModioUIInput_ModioAction  ____action;

/// [FormerlySerializedAs("_text")]
/// [SerializeField]
/// @brief Field _inputPromptText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____inputPromptText;

/// [SerializeField]
/// @brief Field _textBackground, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____textBackground;

/// [SerializeField]
/// @brief Field _image, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____image;

/// [SerializeField]
/// @brief Field _hideIfNoBindings, offset: 0x40, size: 0x1, def value: None
 bool  ____hideIfNoBindings;

/// [SerializeField]
/// @brief Field _hideIfNoListener, offset: 0x41, size: 0x1, def value: None
 bool  ____hideIfNoListener;

/// [SerializeField]
/// @brief Field _hideIfController, offset: 0x42, size: 0x1, def value: None
 bool  ____hideIfController;

/// [SerializeField]
/// @brief Field _hideIfNotController, offset: 0x43, size: 0x1, def value: None
 bool  ____hideIfNotController;

/// [SerializeField]
/// @brief Field _additionalToHideIfNoBindings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____additionalToHideIfNoBindings;

/// @brief Field _button, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____button;

/// @brief Field _layoutElement, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::LayoutElement>  ____layoutElement;

/// @brief Field _layoutElementIgnoreLayout, offset: 0x60, size: 0x1, def value: None
 bool  ____layoutElementIgnoreLayout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____action) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____inputPromptText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____textBackground) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____image) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____hideIfNoBindings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____hideIfNoListener) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____hideIfController) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____hideIfNotController) == 0x43, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____additionalToHideIfNoBindings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____button) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____layoutElement) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInputPrompt, ____layoutElementIgnoreLayout) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIInputPrompt) == 0x68, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
