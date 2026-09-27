#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDAudioManager_KIDSoundType_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KIDUIButton)
namespace GlobalNamespace {
class ControllerBehaviour;
}
namespace GlobalNamespace {
struct Selectable_SelectionState;
}
namespace GlobalNamespace {
class UXSettings;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUIButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUIButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIButton*, "", "KIDUIButton");
// Dependencies KIDAudioManager::KIDSoundType, UnityEngine.Color, UnityEngine.UI.Button
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIButton
class CORDL_TYPE KIDUIButton : public ::UnityEngine::UI::Button {
public:
// Declarations
 __declspec(property(get=get_InputModule)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  InputModule;

/// @brief Field _borderImage, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__borderImage, put=__cordl_internal_set__borderImage)) ::UnityW<::UnityEngine::UI::Image>  _borderImage;

/// @brief Field _buttonText, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonText, put=__cordl_internal_set__buttonText)) ::UnityW<::TMPro::TMP_Text>  _buttonText;

/// @brief Field _canTrigger, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__canTrigger, put=setStaticF__canTrigger)) bool  _canTrigger;

/// @brief Field _cbUXSettings, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cbUXSettings, put=__cordl_internal_set__cbUXSettings)) ::UnityW<::GlobalNamespace::UXSettings>  _cbUXSettings;

/// @brief Field _disabledBorderColor, offset 0x1c0, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledBorderColor, put=__cordl_internal_set__disabledBorderColor)) ::UnityEngine::Color  _disabledBorderColor;

/// @brief Field _disabledBorderSize, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get__disabledBorderSize, put=__cordl_internal_set__disabledBorderSize)) float_t  _disabledBorderSize;

/// @brief Field _disabledTextColor, offset 0x1d0, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledTextColor, put=__cordl_internal_set__disabledTextColor)) ::UnityEngine::Color  _disabledTextColor;

/// @brief Field _fillImageRef, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__fillImageRef, put=__cordl_internal_set__fillImageRef)) ::UnityW<::UnityEngine::RectTransform>  _fillImageRef;

/// @brief Field _highlightedBorderColor, offset 0x144, size 0x10 
 __declspec(property(get=__cordl_internal_get__highlightedBorderColor, put=__cordl_internal_set__highlightedBorderColor)) ::UnityEngine::Color  _highlightedBorderColor;

/// @brief Field _highlightedBorderSize, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightedBorderSize, put=__cordl_internal_set__highlightedBorderSize)) float_t  _highlightedBorderSize;

/// @brief Field _highlightedIcon, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightedIcon, put=__cordl_internal_set__highlightedIcon)) ::UnityW<::UnityEngine::GameObject>  _highlightedIcon;

/// @brief Field _highlightedTextColor, offset 0x154, size 0x10 
 __declspec(property(get=__cordl_internal_get__highlightedTextColor, put=__cordl_internal_set__highlightedTextColor)) ::UnityEngine::Color  _highlightedTextColor;

/// @brief Field _highlightedVibrationDuration, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightedVibrationDuration, put=__cordl_internal_set__highlightedVibrationDuration)) float_t  _highlightedVibrationDuration;

/// @brief Field _highlightedVibrationStrength, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightedVibrationStrength, put=__cordl_internal_set__highlightedVibrationStrength)) float_t  _highlightedVibrationStrength;

/// @brief Field _normalBorderColor, offset 0x120, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalBorderColor, put=__cordl_internal_set__normalBorderColor)) ::UnityEngine::Color  _normalBorderColor;

/// @brief Field _normalBorderSize, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalBorderSize, put=__cordl_internal_set__normalBorderSize)) float_t  _normalBorderSize;

/// @brief Field _normalIcon, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalIcon, put=__cordl_internal_set__normalIcon)) ::UnityW<::UnityEngine::GameObject>  _normalIcon;

/// @brief Field _normalTextColor, offset 0x130, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalTextColor, put=__cordl_internal_set__normalTextColor)) ::UnityEngine::Color  _normalTextColor;

/// @brief Field _pressedBorderColor, offset 0x170, size 0x10 
 __declspec(property(get=__cordl_internal_get__pressedBorderColor, put=__cordl_internal_set__pressedBorderColor)) ::UnityEngine::Color  _pressedBorderColor;

/// @brief Field _pressedBorderSize, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedBorderSize, put=__cordl_internal_set__pressedBorderSize)) float_t  _pressedBorderSize;

/// @brief Field _pressedTextColor, offset 0x180, size 0x10 
 __declspec(property(get=__cordl_internal_get__pressedTextColor, put=__cordl_internal_set__pressedTextColor)) ::UnityEngine::Color  _pressedTextColor;

/// @brief Field _pressedVibrationDuration, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedVibrationDuration, put=__cordl_internal_set__pressedVibrationDuration)) float_t  _pressedVibrationDuration;

/// @brief Field _pressedVibrationStrength, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedVibrationStrength, put=__cordl_internal_set__pressedVibrationStrength)) float_t  _pressedVibrationStrength;

/// @brief Field _selectedBorderColor, offset 0x19c, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectedBorderColor, put=__cordl_internal_set__selectedBorderColor)) ::UnityEngine::Color  _selectedBorderColor;

/// @brief Field _selectedBorderSize, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedBorderSize, put=__cordl_internal_set__selectedBorderSize)) float_t  _selectedBorderSize;

/// @brief Field _selectedTextColor, offset 0x1ac, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectedTextColor, put=__cordl_internal_set__selectedTextColor)) ::UnityEngine::Color  _selectedTextColor;

/// @brief Field _triggeredThisFrame, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__triggeredThisFrame, put=setStaticF__triggeredThisFrame)) bool  _triggeredThisFrame;

/// @brief Field controllerBehaviour, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerBehaviour, put=__cordl_internal_set_controllerBehaviour)) ::UnityW<::GlobalNamespace::ControllerBehaviour>  controllerBehaviour;

/// @brief Field inside, offset 0x208, size 0x1 
 __declspec(property(get=__cordl_internal_get_inside, put=__cordl_internal_set_inside)) bool  inside;

/// @brief Field onClickSound, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_onClickSound, put=__cordl_internal_set_onClickSound)) ::GlobalNamespace::KIDAudioManager_KIDSoundType  onClickSound;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Method DoStateTransition, addr 0x5a48434, size 0x10c, virtual true, abstract: false, final false
inline void DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant) ;

/// @brief Method FixStuckPressedState, addr 0x5a48368, size 0xcc, virtual false, abstract: false, final false
inline void FixStuckPressedState() ;

/// @brief Method GetText, addr 0x5a4892c, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetText() ;

/// @brief Method LateUpdate, addr 0x5a47de8, size 0x3f4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::KIDUIButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a48258, size 0x110, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a47808, size 0x144, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPointerDown, addr 0x5a487ac, size 0x150, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x5a48614, size 0x198, virtual true, abstract: false, final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x5a481dc, size 0x1c, virtual true, abstract: false, final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method PostUpdate, addr 0x5a4794c, size 0x49c, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// @brief Method ResetButton, addr 0x5a481f8, size 0x60, virtual false, abstract: false, final false
inline void ResetButton() ;

/// @brief Method SetBorderImage, addr 0x5a4894c, size 0x18, virtual false, abstract: false, final false
inline void SetBorderImage(::UnityEngine::Sprite*  newImg) ;

/// @brief Method SetFont, addr 0x5a48914, size 0x18, virtual false, abstract: false, final false
inline void SetFont(::TMPro::TMP_FontAsset*  font) ;

/// @brief Method SetIcons, addr 0x5a48540, size 0xd4, virtual false, abstract: false, final false
inline void SetIcons(bool  normalEnabled, bool  highlightedEnabled) ;

/// @brief Method SetText, addr 0x5a488fc, size 0x18, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__borderImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__borderImage() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__buttonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__buttonText() ;

constexpr ::UnityW<::GlobalNamespace::UXSettings> const& __cordl_internal_get__cbUXSettings() const;

constexpr ::UnityW<::GlobalNamespace::UXSettings>& __cordl_internal_get__cbUXSettings() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledBorderColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledBorderColor() ;

constexpr float_t const& __cordl_internal_get__disabledBorderSize() const;

constexpr float_t& __cordl_internal_get__disabledBorderSize() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledTextColor() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__fillImageRef() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__fillImageRef() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightedBorderColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__highlightedBorderColor() ;

constexpr float_t const& __cordl_internal_get__highlightedBorderSize() const;

constexpr float_t& __cordl_internal_get__highlightedBorderSize() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__highlightedIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__highlightedIcon() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightedTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__highlightedTextColor() ;

constexpr float_t const& __cordl_internal_get__highlightedVibrationDuration() const;

constexpr float_t& __cordl_internal_get__highlightedVibrationDuration() ;

constexpr float_t const& __cordl_internal_get__highlightedVibrationStrength() const;

constexpr float_t& __cordl_internal_get__highlightedVibrationStrength() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalBorderColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalBorderColor() ;

constexpr float_t const& __cordl_internal_get__normalBorderSize() const;

constexpr float_t& __cordl_internal_get__normalBorderSize() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__normalIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__normalIcon() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalTextColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__pressedBorderColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__pressedBorderColor() ;

constexpr float_t const& __cordl_internal_get__pressedBorderSize() const;

constexpr float_t& __cordl_internal_get__pressedBorderSize() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__pressedTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__pressedTextColor() ;

constexpr float_t const& __cordl_internal_get__pressedVibrationDuration() const;

constexpr float_t& __cordl_internal_get__pressedVibrationDuration() ;

constexpr float_t const& __cordl_internal_get__pressedVibrationStrength() const;

constexpr float_t& __cordl_internal_get__pressedVibrationStrength() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedBorderColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectedBorderColor() ;

constexpr float_t const& __cordl_internal_get__selectedBorderSize() const;

constexpr float_t& __cordl_internal_get__selectedBorderSize() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectedTextColor() ;

constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour> const& __cordl_internal_get_controllerBehaviour() const;

constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour>& __cordl_internal_get_controllerBehaviour() ;

constexpr bool const& __cordl_internal_get_inside() const;

constexpr bool& __cordl_internal_get_inside() ;

constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType const& __cordl_internal_get_onClickSound() const;

constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType& __cordl_internal_get_onClickSound() ;

constexpr void __cordl_internal_set__borderImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__buttonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value) ;

constexpr void __cordl_internal_set__disabledBorderColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__disabledBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__disabledTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fillImageRef(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__highlightedBorderColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__highlightedBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__highlightedIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__highlightedTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__highlightedVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set__highlightedVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set__normalBorderColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__normalBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__normalIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__normalTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pressedBorderColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pressedBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__pressedTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pressedVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set__pressedVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set__selectedBorderColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__selectedBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__selectedTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_controllerBehaviour(::UnityW<::GlobalNamespace::ControllerBehaviour>  value) ;

constexpr void __cordl_internal_set_inside(bool  value) ;

constexpr void __cordl_internal_set_onClickSound(::GlobalNamespace::KIDAudioManager_KIDSoundType  value) ;

/// @brief Method .ctor, addr 0x5a48964, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__canTrigger() ;

static inline bool getStaticF__triggeredThisFrame() ;

/// @brief Method get_InputModule, addr 0x5a4775c, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> get_InputModule() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

static inline void setStaticF__canTrigger(bool  value) ;

static inline void setStaticF__triggeredThisFrame(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIButton(KIDUIButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIButton(KIDUIButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2985};

/// [SerializeField]
/// @brief Field _borderImage, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____borderImage;

/// [SerializeField]
/// @brief Field _fillImageRef, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____fillImageRef;

/// [SerializeField]
/// @brief Field _buttonText, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____buttonText;

/// [Header("Transition States")]
/// [Header("Normal")]
/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _normalBorderColor, offset: 0x120, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalBorderColor;

/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _normalTextColor, offset: 0x130, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalTextColor;

/// [SerializeField]
/// @brief Field _normalBorderSize, offset: 0x140, size: 0x4, def value: None
 float_t  ____normalBorderSize;

/// [Header("Highlighted")]
/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _highlightedBorderColor, offset: 0x144, size: 0x10, def value: None
 ::UnityEngine::Color  ____highlightedBorderColor;

/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _highlightedTextColor, offset: 0x154, size: 0x10, def value: None
 ::UnityEngine::Color  ____highlightedTextColor;

/// [SerializeField]
/// @brief Field _highlightedBorderSize, offset: 0x164, size: 0x4, def value: None
 float_t  ____highlightedBorderSize;

/// [SerializeField]
/// @brief Field _highlightedVibrationStrength, offset: 0x168, size: 0x4, def value: None
 float_t  ____highlightedVibrationStrength;

/// [SerializeField]
/// @brief Field _highlightedVibrationDuration, offset: 0x16c, size: 0x4, def value: None
 float_t  ____highlightedVibrationDuration;

/// [Header("Pressed")]
/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _pressedBorderColor, offset: 0x170, size: 0x10, def value: None
 ::UnityEngine::Color  ____pressedBorderColor;

/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _pressedTextColor, offset: 0x180, size: 0x10, def value: None
 ::UnityEngine::Color  ____pressedTextColor;

/// [SerializeField]
/// @brief Field _pressedBorderSize, offset: 0x190, size: 0x4, def value: None
 float_t  ____pressedBorderSize;

/// [SerializeField]
/// @brief Field _pressedVibrationStrength, offset: 0x194, size: 0x4, def value: None
 float_t  ____pressedVibrationStrength;

/// [SerializeField]
/// @brief Field _pressedVibrationDuration, offset: 0x198, size: 0x4, def value: None
 float_t  ____pressedVibrationDuration;

/// [Header("Selected")]
/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _selectedBorderColor, offset: 0x19c, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectedBorderColor;

/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _selectedTextColor, offset: 0x1ac, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectedTextColor;

/// [SerializeField]
/// @brief Field _selectedBorderSize, offset: 0x1bc, size: 0x4, def value: None
 float_t  ____selectedBorderSize;

/// [Header("Disabled")]
/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _disabledBorderColor, offset: 0x1c0, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledBorderColor;

/// [SerializeField]
/// [ColorUsage(true, false)]
/// @brief Field _disabledTextColor, offset: 0x1d0, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledTextColor;

/// [SerializeField]
/// @brief Field _disabledBorderSize, offset: 0x1e0, size: 0x4, def value: None
 float_t  ____disabledBorderSize;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field onClickSound, offset: 0x1e4, size: 0x4, def value: None
 ::GlobalNamespace::KIDAudioManager_KIDSoundType  ___onClickSound;

/// [Header("Icon Swap Settings")]
/// [SerializeField]
/// @brief Field _normalIcon, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____normalIcon;

/// [SerializeField]
/// @brief Field _highlightedIcon, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____highlightedIcon;

/// [Header("Steam Settings")]
/// [SerializeField]
/// @brief Field _cbUXSettings, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UXSettings>  ____cbUXSettings;

/// @brief Field controllerBehaviour, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ControllerBehaviour>  ___controllerBehaviour;

/// @brief Field inside, offset: 0x208, size: 0x1, def value: None
 bool  ___inside;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____borderImage) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____fillImageRef) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____buttonText) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____normalBorderColor) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____normalTextColor) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____normalBorderSize) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____highlightedBorderColor) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____highlightedTextColor) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____highlightedBorderSize) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____highlightedVibrationStrength) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____highlightedVibrationDuration) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____pressedBorderColor) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____pressedTextColor) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____pressedBorderSize) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____pressedVibrationStrength) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____pressedVibrationDuration) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____selectedBorderColor) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____selectedTextColor) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____selectedBorderSize) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____disabledBorderColor) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____disabledTextColor) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____disabledBorderSize) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ___onClickSound) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____normalIcon) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____highlightedIcon) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ____cbUXSettings) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ___controllerBehaviour) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIButton, ___inside) == 0x208, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIButton) == 0x210, "Size mismatch!");

} // namespace end def GlobalNamespace
