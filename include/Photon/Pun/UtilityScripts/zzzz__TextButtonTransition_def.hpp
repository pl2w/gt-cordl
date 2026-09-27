#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TextButtonTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextButtonTransition)
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
class Selectable;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TextButtonTransition;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::TextButtonTransition*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::TextButtonTransition*, "Photon.Pun.UtilityScripts", "TextButtonTransition");
// [RequireComponent(typeof(UnityEngine.UI.Text))]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.TextButtonTransition
class CORDL_TYPE TextButtonTransition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field HoverColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_HoverColor, put=__cordl_internal_set_HoverColor)) ::UnityEngine::Color  HoverColor;

/// @brief Field NormalColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_NormalColor, put=__cordl_internal_set_NormalColor)) ::UnityEngine::Color  NormalColor;

/// @brief Field Selectable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Selectable, put=__cordl_internal_set_Selectable)) ::UnityW<::UnityEngine::UI::Selectable>  Selectable;

/// @brief Field _text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::UnityEngine::UI::Text>  _text;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Method Awake, addr 0xa73e3ac, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Photon::Pun::UtilityScripts::TextButtonTransition* New_ctor() ;

/// @brief Method OnDisable, addr 0xa73e430, size 0x2c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa73e404, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPointerEnter, addr 0xa73e45c, size 0xb0, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0xa73e50c, size 0xb0, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_HoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_HoverColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_NormalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_NormalColor() ;

constexpr ::UnityW<::UnityEngine::UI::Selectable> const& __cordl_internal_get_Selectable() const;

constexpr ::UnityW<::UnityEngine::UI::Selectable>& __cordl_internal_get_Selectable() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set_HoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_NormalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_Selectable(::UnityW<::UnityEngine::UI::Selectable>  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0xa73e5bc, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextButtonTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextButtonTransition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextButtonTransition(TextButtonTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextButtonTransition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextButtonTransition(TextButtonTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31248};

/// @brief Field _text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____text;

/// @brief Field Selectable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  ___Selectable;

/// @brief Field NormalColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___NormalColor;

/// @brief Field HoverColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___HoverColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::TextButtonTransition, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextButtonTransition, ___Selectable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextButtonTransition, ___NormalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::TextButtonTransition, ___HoverColor) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::TextButtonTransition) == 0x50, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
