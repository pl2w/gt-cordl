#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckButton)
namespace Liv::Lck::UI {
class LckButtonColors;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
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
class Button;
}
namespace UnityEngine::UI {
class Image;
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
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckButton*, "Liv.Lck.UI", "LckButton");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckButton
class CORDL_TYPE LckButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _button, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button>  _button;

/// @brief Field _clickedObject, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickedObject, put=__cordl_internal_set__clickedObject)) ::UnityW<::UnityEngine::GameObject>  _clickedObject;

/// @brief Field _colorId, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__colorId, put=__cordl_internal_set__colorId)) int32_t  _colorId;

/// @brief Field _colors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _colors;

/// @brief Field _hasCollided, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCollided, put=__cordl_internal_set__hasCollided)) bool  _hasCollided;

/// @brief Field _iconImage, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconImage, put=__cordl_internal_set__iconImage)) ::UnityW<::UnityEngine::UI::Image>  _iconImage;

/// @brief Field _isDisabled, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

/// @brief Field _labelText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__labelText, put=__cordl_internal_set__labelText)) ::UnityW<::TMPro::TextMeshProUGUI>  _labelText;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _propertyBlock, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyBlock, put=__cordl_internal_set__propertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _propertyBlock;

/// @brief Field _renderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _visuals, offset 0x48, size 0x8 
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

/// @brief Method Awake, addr 0x9d4dd08, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsValidTap, addr 0x9d4e268, size 0x17c, virtual false, abstract: false, final false
inline bool IsValidTap(::UnityEngine::Vector3  tapPosition) ;

static inline ::Liv::Lck::UI::LckButton* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d4e4d4, size 0x68, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnPointerDown, addr 0x9d4df38, size 0x90, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x9d4deec, size 0x4c, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x9d4e0cc, size 0x54, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x9d4dfc8, size 0x104, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnTriggerEnter, addr 0x9d4e120, size 0x148, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x9d4e3e4, size 0xf0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnValidate, addr 0x9d4e53c, size 0x2fc, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetIsDisabled, addr 0x9d4ddb8, size 0xfc, virtual false, abstract: false, final false
inline void SetIsDisabled(bool  isDisabled) ;

/// @brief Method SetLabelText, addr 0x9d4dd98, size 0x20, virtual false, abstract: false, final false
inline void SetLabelText(::StringW  text) ;

/// @brief Method SetMeshColor, addr 0x9d4deb4, size 0x38, virtual false, abstract: false, final false
inline void SetMeshColor(::UnityEngine::Color  color) ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clickedObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clickedObject() ;

constexpr int32_t const& __cordl_internal_get__colorId() const;

constexpr int32_t& __cordl_internal_get__colorId() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__colors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__colors() ;

constexpr bool const& __cordl_internal_get__hasCollided() const;

constexpr bool& __cordl_internal_get__hasCollided() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__iconImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__iconImage() ;

constexpr bool const& __cordl_internal_get__isDisabled() const;

constexpr bool& __cordl_internal_get__isDisabled() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__labelText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__labelText() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propertyBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__visuals() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__visuals() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__colorId(int32_t  value) ;

constexpr void __cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__hasCollided(bool  value) ;

constexpr void __cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

constexpr void __cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__visuals(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x9d4e838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

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

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckButton(LckButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckButton(LckButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24914};

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____name;

/// [SerializeField]
/// @brief Field _colors, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____colors;

/// [Header("References")]
/// [SerializeField]
/// @brief Field _labelText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____labelText;

/// [SerializeField]
/// @brief Field _iconImage, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____iconImage;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field _visuals, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____visuals;

/// [SerializeField]
/// @brief Field _button, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____button;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// @brief Field _clickedObject, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____clickedObject;

/// @brief Field _hasCollided, offset: 0x68, size: 0x1, def value: None
 bool  ____hasCollided;

/// @brief Field _propertyBlock, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propertyBlock;

/// @brief Field _colorId, offset: 0x78, size: 0x4, def value: None
 int32_t  ____colorId;

/// @brief Field _isDisabled, offset: 0x7c, size: 0x1, def value: None
 bool  ____isDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckButton, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____colors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____labelText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____iconImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____renderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____visuals) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____button) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____audioController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____clickedObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____hasCollided) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____propertyBlock) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____colorId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButton, ____isDisabled) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckButton) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::UI
