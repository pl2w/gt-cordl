#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckScreenButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckScreenButton)
namespace Liv::Lck::UI {
class LckButtonColors;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
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
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckScreenButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckScreenButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckScreenButton*, "Liv.Lck.UI", "LckScreenButton");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckScreenButton
class CORDL_TYPE LckScreenButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _button, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button>  _button;

/// @brief Field _clickedObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickedObject, put=__cordl_internal_set__clickedObject)) ::UnityW<::UnityEngine::GameObject>  _clickedObject;

/// @brief Field _colors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _colors;

/// @brief Field _hasCollided, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCollided, put=__cordl_internal_set__hasCollided)) bool  _hasCollided;

/// @brief Field _icon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon, put=__cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image>  _icon;

/// @brief Field _isDisabled, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

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

/// @brief Method DisableForDuration, addr 0x9d5164c, size 0xa0, virtual false, abstract: false, final false
inline void DisableForDuration(float_t  duration) ;

/// @brief Method IsValidTap, addr 0x9d513fc, size 0x17c, virtual false, abstract: false, final false
inline bool IsValidTap(::UnityEngine::Vector3  tapPosition) ;

static inline ::Liv::Lck::UI::LckScreenButton* New_ctor() ;

/// @brief Method OnPointerDown, addr 0x9d51164, size 0x70, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x9d51054, size 0x4c, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x9d512ac, size 0x28, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x9d511d4, size 0xbc, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnTriggerEnter, addr 0x9d512d4, size 0x128, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x9d51578, size 0xd4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnValidate, addr 0x9d51724, size 0x98, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ReEnableButton, addr 0x9d516ec, size 0x38, virtual false, abstract: false, final false
inline void ReEnableButton() ;

/// @brief Method SetDefaultButtonColors, addr 0x9d51290, size 0x1c, virtual false, abstract: false, final false
inline void SetDefaultButtonColors() ;

/// @brief Method SetIconColor, addr 0x9d510a0, size 0xc4, virtual false, abstract: false, final false
inline void SetIconColor(::UnityEngine::Color  color) ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clickedObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clickedObject() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__colors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__colors() ;

constexpr bool const& __cordl_internal_get__hasCollided() const;

constexpr bool& __cordl_internal_get__hasCollided() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon() ;

constexpr bool const& __cordl_internal_get__isDisabled() const;

constexpr bool& __cordl_internal_get__isDisabled() ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__hasCollided(bool  value) ;

constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

/// @brief Method .ctor, addr 0x9d517bc, size 0x8, virtual false, abstract: false, final false
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
constexpr LckScreenButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckScreenButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckScreenButton(LckScreenButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckScreenButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckScreenButton(LckScreenButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24922};

/// [Header("References")]
/// [SerializeField]
/// @brief Field _colors, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____colors;

/// [SerializeField]
/// @brief Field _button, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____button;

/// [SerializeField]
/// @brief Field _icon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____icon;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

/// @brief Field _isDisabled, offset: 0x40, size: 0x1, def value: None
 bool  ____isDisabled;

/// @brief Field _hasCollided, offset: 0x41, size: 0x1, def value: None
 bool  ____hasCollided;

/// @brief Field _clickedObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____clickedObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckScreenButton, ____colors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckScreenButton, ____button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckScreenButton, ____icon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckScreenButton, ____audioController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckScreenButton, ____isDisabled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckScreenButton, ____hasCollided) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckScreenButton, ____clickedObject) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckScreenButton) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck::UI
