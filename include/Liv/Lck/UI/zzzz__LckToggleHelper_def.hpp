#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckToggleHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckToggleHelper)
namespace Liv::Lck::UI {
class LckToggle;
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
class Toggle;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckToggleHelper;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckToggleHelper*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckToggleHelper*, "Liv.Lck.UI", "LckToggleHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckToggleHelper
class CORDL_TYPE LckToggleHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lckToggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckToggle, put=__cordl_internal_set__lckToggle)) ::UnityW<::Liv::Lck::UI::LckToggle>  _lckToggle;

/// @brief Field _toggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

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

static inline ::Liv::Lck::UI::LckToggleHelper* New_ctor() ;

/// @brief Method OnPointerDown, addr 0x9d532c4, size 0x20, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x9d532a4, size 0x20, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x9d53330, size 0x20, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x9d532e4, size 0x4c, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& __cordl_internal_get__lckToggle() const;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& __cordl_internal_get__lckToggle() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr void __cordl_internal_set__lckToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0x9d53350, size 0x8, virtual false, abstract: false, final false
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
constexpr LckToggleHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckToggleHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckToggleHelper(LckToggleHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckToggleHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckToggleHelper(LckToggleHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24925};

/// [SerializeField]
/// @brief Field _lckToggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckToggle>  ____lckToggle;

/// [SerializeField]
/// @brief Field _toggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckToggleHelper, ____lckToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckToggleHelper, ____toggle) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckToggleHelper) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::UI
