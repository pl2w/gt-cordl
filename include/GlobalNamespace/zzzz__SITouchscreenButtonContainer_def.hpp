#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreenButtonContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SITouchscreenButtonContainer)
namespace GlobalNamespace {
class ITouchScreenStation;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class SITouchscreenButtonContainer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITouchscreenButtonContainer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITouchscreenButtonContainer*, "", "SITouchscreenButtonContainer");
// Dependencies SITouchscreenButton::SITouchscreenButtonType, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITouchscreenButtonContainer
class CORDL_TYPE SITouchscreenButtonContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cachedForegroundColor, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get__cachedForegroundColor, put=__cordl_internal_set__cachedForegroundColor)) ::UnityEngine::Color  _cachedForegroundColor;

/// @brief Field <isUsable>k__BackingField, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__isUsable_k__BackingField, put=__cordl_internal_set__isUsable_k__BackingField)) bool  _isUsable_k__BackingField;

/// @brief Field autoConfigure, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoConfigure, put=__cordl_internal_set_autoConfigure)) bool  autoConfigure;

/// @brief Field backGround, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_backGround, put=__cordl_internal_set_backGround)) ::UnityW<::UnityEngine::RectTransform>  backGround;

/// @brief Field backgroundShadow, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundShadow, put=__cordl_internal_set_backgroundShadow)) ::UnityW<::UnityEngine::RectTransform>  backgroundShadow;

/// @brief Field button, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::GlobalNamespace::SITouchscreenButton>  button;

/// @brief Field buttonText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonText, put=__cordl_internal_set_buttonText)) ::UnityW<::TMPro::TextMeshProUGUI>  buttonText;

/// @brief Field buttonTextString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonTextString, put=__cordl_internal_set_buttonTextString)) ::StringW  buttonTextString;

/// @brief Field data, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) int32_t  data;

/// @brief Field foreGround, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_foreGround, put=__cordl_internal_set_foreGround)) ::UnityW<::UnityEngine::UI::Image>  foreGround;

 __declspec(property(get=get_isUsable, put=set_isUsable)) bool  isUsable;

/// @brief Field station, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_station, put=__cordl_internal_set_station)) ::GlobalNamespace::ITouchScreenStation*  station;

/// @brief Field toggleOffColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_toggleOffColor, put=__cordl_internal_set_toggleOffColor)) ::UnityEngine::Color  toggleOffColor;

/// @brief Field toggleOffText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleOffText, put=__cordl_internal_set_toggleOffText)) ::StringW  toggleOffText;

/// @brief Field toggleOnColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_toggleOnColor, put=__cordl_internal_set_toggleOnColor)) ::UnityEngine::Color  toggleOnColor;

/// @brief Field toggleOnText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleOnText, put=__cordl_internal_set_toggleOnText)) ::StringW  toggleOnText;

/// @brief Field type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type;

static inline ::GlobalNamespace::SITouchscreenButtonContainer* New_ctor() ;

/// @brief Method OnToggleStateChanged, addr 0x5af6eb4, size 0x8, virtual false, abstract: false, final false
inline void OnToggleStateChanged(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr, bool  isToggledOn) ;

/// @brief Method SetUsable, addr 0x5af17e8, size 0xac, virtual false, abstract: false, final false
inline void SetUsable(bool  newIsUsable) ;

/// @brief Method Start, addr 0x5af6cb4, size 0x13c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateToggleVisual, addr 0x5af6ebc, size 0x18, virtual false, abstract: false, final false
inline void UpdateToggleVisual() ;

/// @brief Method UpdateToggleVisual, addr 0x5af6df0, size 0xc4, virtual false, abstract: false, final false
inline void UpdateToggleVisual(bool  isToggledOn) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__cachedForegroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__cachedForegroundColor() ;

constexpr bool const& __cordl_internal_get__isUsable_k__BackingField() const;

constexpr bool& __cordl_internal_get__isUsable_k__BackingField() ;

constexpr bool const& __cordl_internal_get_autoConfigure() const;

constexpr bool& __cordl_internal_get_autoConfigure() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_backGround() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_backGround() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_backgroundShadow() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_backgroundShadow() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton>& __cordl_internal_get_button() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_buttonText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_buttonText() ;

constexpr ::StringW const& __cordl_internal_get_buttonTextString() const;

constexpr ::StringW& __cordl_internal_get_buttonTextString() ;

constexpr int32_t const& __cordl_internal_get_data() const;

constexpr int32_t& __cordl_internal_get_data() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_foreGround() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_foreGround() ;

constexpr ::GlobalNamespace::ITouchScreenStation* const& __cordl_internal_get_station() const;

constexpr ::GlobalNamespace::ITouchScreenStation*& __cordl_internal_get_station() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_toggleOffColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_toggleOffColor() ;

constexpr ::StringW const& __cordl_internal_get_toggleOffText() const;

constexpr ::StringW& __cordl_internal_get_toggleOffText() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_toggleOnColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_toggleOnColor() ;

constexpr ::StringW const& __cordl_internal_get_toggleOnText() const;

constexpr ::StringW& __cordl_internal_get_toggleOnText() ;

constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set__cachedForegroundColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__isUsable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_autoConfigure(bool  value) ;

constexpr void __cordl_internal_set_backGround(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_backgroundShadow(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::SITouchscreenButton>  value) ;

constexpr void __cordl_internal_set_buttonText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_buttonTextString(::StringW  value) ;

constexpr void __cordl_internal_set_data(int32_t  value) ;

constexpr void __cordl_internal_set_foreGround(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_station(::GlobalNamespace::ITouchScreenStation*  value) ;

constexpr void __cordl_internal_set_toggleOffColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_toggleOffText(::StringW  value) ;

constexpr void __cordl_internal_set_toggleOnColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_toggleOnText(::StringW  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  value) ;

/// @brief Method .ctor, addr 0x5af6ed4, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_isUsable, addr 0x5af6ca4, size 0x8, virtual false, abstract: false, final false
inline bool get_isUsable() ;

/// [CompilerGenerated]
/// @brief Method set_isUsable, addr 0x5af6cac, size 0x8, virtual false, abstract: false, final false
inline void set_isUsable(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITouchscreenButtonContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITouchscreenButtonContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITouchscreenButtonContainer(SITouchscreenButtonContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITouchscreenButtonContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITouchscreenButtonContainer(SITouchscreenButtonContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{377};

/// @brief Field type, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  ___type;

/// @brief Field buttonTextString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___buttonTextString;

/// @brief Field data, offset: 0x30, size: 0x4, def value: None
 int32_t  ___data;

/// @brief Field backGround, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___backGround;

/// @brief Field backgroundShadow, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___backgroundShadow;

/// @brief Field foreGround, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___foreGround;

/// @brief Field buttonText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___buttonText;

/// @brief Field station, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::ITouchScreenStation*  ___station;

/// [Header("Toggle Visual Settings")]
/// @brief Field toggleOnColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___toggleOnColor;

/// @brief Field toggleOffColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ___toggleOffColor;

/// [Header("Toggle Text Settings")]
/// [Tooltip("Text to display when toggle is ON")]
/// @brief Field toggleOnText, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___toggleOnText;

/// [Tooltip("Text to display when toggle is OFF")]
/// @brief Field toggleOffText, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___toggleOffText;

/// @brief Field button, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButton>  ___button;

/// [SerializeField]
/// @brief Field autoConfigure, offset: 0x98, size: 0x1, def value: None
 bool  ___autoConfigure;

/// [CompilerGenerated]
/// @brief Field <isUsable>k__BackingField, offset: 0x99, size: 0x1, def value: None
 bool  ____isUsable_k__BackingField;

/// @brief Field _cachedForegroundColor, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ____cachedForegroundColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___buttonTextString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___backGround) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___backgroundShadow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___foreGround) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___buttonText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___station) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___toggleOnColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___toggleOffColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___toggleOnText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___toggleOffText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___button) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ___autoConfigure) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ____isUsable_k__BackingField) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITouchscreenButtonContainer, ____cachedForegroundColor) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITouchscreenButtonContainer) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
