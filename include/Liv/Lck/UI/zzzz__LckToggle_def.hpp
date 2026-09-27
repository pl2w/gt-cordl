#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckToggle)
namespace Liv::Lck::UI {
class LckButtonColors;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckToggle;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckToggle*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckToggle*, "Liv.Lck.UI", "LckToggle");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckToggle
class CORDL_TYPE LckToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsDisabled, put=set_IsDisabled)) bool  IsDisabled;

/// @brief Field <IsDisabled>k__BackingField, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDisabled_k__BackingField, put=__cordl_internal_set__IsDisabled_k__BackingField)) bool  _IsDisabled_k__BackingField;

/// @brief Field _audioController, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _clickedObject, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickedObject, put=__cordl_internal_set__clickedObject)) ::UnityW<::UnityEngine::GameObject>  _clickedObject;

/// @brief Field _collided, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__collided, put=__cordl_internal_set__collided)) bool  _collided;

/// @brief Field _colorId, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__colorId, put=__cordl_internal_set__colorId)) int32_t  _colorId;

/// @brief Field _colors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _colors;

/// @brief Field _colorsOn, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorsOn, put=__cordl_internal_set__colorsOn)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _colorsOn;

/// @brief Field _defaultColors, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultColors, put=__cordl_internal_set__defaultColors)) ::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>*  _defaultColors;

/// @brief Field _defaultIcons, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultIcons, put=__cordl_internal_set__defaultIcons)) ::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  _defaultIcons;

/// @brief Field _icon, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon, put=__cordl_internal_set__icon)) ::UnityW<::UnityEngine::Sprite>  _icon;

/// @brief Field _iconImage, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconImage, put=__cordl_internal_set__iconImage)) ::UnityW<::UnityEngine::UI::Image>  _iconImage;

/// @brief Field _iconOn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconOn, put=__cordl_internal_set__iconOn)) ::UnityW<::UnityEngine::Sprite>  _iconOn;

/// @brief Field _labelText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__labelText, put=__cordl_internal_set__labelText)) ::UnityW<::TMPro::TextMeshProUGUI>  _labelText;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _propertyBlock, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyBlock, put=__cordl_internal_set__propertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _propertyBlock;

/// @brief Field _renderer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _stayPressedDownWhenToggled, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__stayPressedDownWhenToggled, put=__cordl_internal_set__stayPressedDownWhenToggled)) bool  _stayPressedDownWhenToggled;

/// @brief Field _toggle, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

/// @brief Field _togglePressedPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get__togglePressedPosition, put=__cordl_internal_set__togglePressedPosition)) ::UnityEngine::Vector3  _togglePressedPosition;

/// @brief Field _visuals, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__visuals, put=__cordl_internal_set__visuals)) ::UnityW<::UnityEngine::RectTransform>  _visuals;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Method Awake, addr 0x9d51df4, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsValidTap, addr 0x9d52e68, size 0x17c, virtual false, abstract: false, final false
inline bool IsValidTap(::UnityEngine::Vector3  tapPosition) ;

static inline ::Liv::Lck::UI::LckToggle* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d53058, size 0xf4, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnPointerDown, addr 0x9d52988, size 0xf0, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x9d52800, size 0xc0, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x9d52c5c, size 0x108, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x9d52a78, size 0x1e4, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnToggleValueChanged, addr 0x9d520c8, size 0xb8, virtual false, abstract: false, final false
inline void OnToggleValueChanged(bool  value) ;

/// @brief Method OnTriggerEnter, addr 0x9d52d64, size 0x104, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x9d52fe4, size 0x74, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnValidate, addr 0x9d53190, size 0x100, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RestoreDefaultColors, addr 0x9d4d8c0, size 0x80, virtual false, abstract: false, final false
inline void RestoreDefaultColors() ;

/// @brief Method RestoreDefaultIcons, addr 0x9d4d940, size 0x80, virtual false, abstract: false, final false
inline void RestoreDefaultIcons() ;

/// @brief Method RestoreToggleState, addr 0x9d4d77c, size 0x44, virtual false, abstract: false, final false
inline void RestoreToggleState() ;

/// @brief Method SetCustomColors, addr 0x9d4dac0, size 0x38, virtual false, abstract: false, final false
inline void SetCustomColors(::Liv::Lck::UI::LckButtonColors*  colors, ::Liv::Lck::UI::LckButtonColors*  colorsOn) ;

/// @brief Method SetCustomIcons, addr 0x9d4daf8, size 0x38, virtual false, abstract: false, final false
inline void SetCustomIcons(::UnityEngine::Sprite*  icon, ::UnityEngine::Sprite*  iconOn) ;

/// @brief Method SetDisabledState, addr 0x9d4d17c, size 0x5c, virtual false, abstract: false, final false
inline void SetDisabledState(bool  usePressedPosition) ;

/// @brief Method SetMeshColor, addr 0x9d528c0, size 0xc8, virtual false, abstract: false, final false
inline void SetMeshColor(::UnityEngine::Color  color) ;

/// @brief Method SetToggleVisualsOff, addr 0x9d5314c, size 0x44, virtual false, abstract: false, final false
inline void SetToggleVisualsOff() ;

/// @brief Method SetToggleVisualsOn, addr 0x9d4d9c0, size 0xb0, virtual false, abstract: false, final false
inline void SetToggleVisualsOn() ;

/// @brief Method Start, addr 0x9d51edc, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ValidateColors, addr 0x9d523ec, size 0x414, virtual false, abstract: false, final false
inline void ValidateColors() ;

/// @brief Method ValidateIcon, addr 0x9d52180, size 0x26c, virtual false, abstract: false, final false
inline void ValidateIcon() ;

/// @brief Method ValidateMeshColors, addr 0x9d51f88, size 0x140, virtual false, abstract: false, final false
inline void ValidateMeshColors() ;

constexpr bool const& __cordl_internal_get__IsDisabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDisabled_k__BackingField() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clickedObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clickedObject() ;

constexpr bool const& __cordl_internal_get__collided() const;

constexpr bool& __cordl_internal_get__collided() ;

constexpr int32_t const& __cordl_internal_get__colorId() const;

constexpr int32_t& __cordl_internal_get__colorId() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__colors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__colors() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__colorsOn() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__colorsOn() ;

constexpr ::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>* const& __cordl_internal_get__defaultColors() const;

constexpr ::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>*& __cordl_internal_get__defaultColors() ;

constexpr ::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>* const& __cordl_internal_get__defaultIcons() const;

constexpr ::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get__defaultIcons() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__iconImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__iconImage() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__iconOn() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__iconOn() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__labelText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__labelText() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propertyBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr bool const& __cordl_internal_get__stayPressedDownWhenToggled() const;

constexpr bool& __cordl_internal_get__stayPressedDownWhenToggled() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__togglePressedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__togglePressedPosition() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set__IsDisabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__collided(bool  value) ;

constexpr void __cordl_internal_set__colorId(int32_t  value) ;

constexpr void __cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__colorsOn(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__defaultColors(::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>*  value) ;

constexpr void __cordl_internal_set__defaultIcons(::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  value) ;

constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__iconOn(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__stayPressedDownWhenToggled(bool  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__togglePressedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x9d53290, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsDisabled, addr 0x9d51de4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDisabled() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsDisabled, addr 0x9d51dec, size 0x8, virtual false, abstract: false, final false
inline void set_IsDisabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckToggle(LckToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckToggle(LckToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24924};

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _icon, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____icon;

/// [SerializeField]
/// @brief Field _iconOn, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____iconOn;

/// @brief Field _defaultIcons, offset: 0x38, size: 0x8, def value: None
 ::System::Tuple_2<::UnityW<::UnityEngine::Sprite>,::UnityW<::UnityEngine::Sprite>>*  ____defaultIcons;

/// [SerializeField]
/// @brief Field _colors, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____colors;

/// [SerializeField]
/// @brief Field _colorsOn, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____colorsOn;

/// @brief Field _defaultColors, offset: 0x50, size: 0x8, def value: None
 ::System::Tuple_2<::UnityW<::Liv::Lck::UI::LckButtonColors>,::UnityW<::Liv::Lck::UI::LckButtonColors>>*  ____defaultColors;

/// [SerializeField]
/// @brief Field _togglePressedPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____togglePressedPosition;

/// [Header("Toggle Group Settings")]
/// [SerializeField]
/// @brief Field _stayPressedDownWhenToggled, offset: 0x64, size: 0x1, def value: None
 bool  ____stayPressedDownWhenToggled;

/// [Header("References")]
/// [SerializeField]
/// @brief Field _labelText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____labelText;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _visuals, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____visuals;

/// [SerializeField]
/// @brief Field _iconImage, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____iconImage;

/// [SerializeField]
/// @brief Field _toggle, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// @brief Field _collided, offset: 0x98, size: 0x1, def value: None
 bool  ____collided;

/// @brief Field _clickedObject, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____clickedObject;

/// @brief Field _propertyBlock, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propertyBlock;

/// @brief Field _colorId, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____colorId;

/// [CompilerGenerated]
/// @brief Field <IsDisabled>k__BackingField, offset: 0xb4, size: 0x1, def value: None
 bool  ____IsDisabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____icon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____iconOn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____defaultIcons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____colors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____colorsOn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____defaultColors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____togglePressedPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____stayPressedDownWhenToggled) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____labelText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____renderer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____visuals) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____iconImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____toggle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____audioController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____collided) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____clickedObject) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____propertyBlock) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____colorId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggle, ____IsDisabled_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckToggle) == 0xb8, "Size mismatch!");

} // namespace end def Liv::Lck::UI
