#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigateFocusRing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavigateFocusRing)
namespace GlobalNamespace {
struct NavigateFocusRing_FocusableHierarchyTraversal;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class NavigateFocusRing_ChangeDirection;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigateFocusRing;
}
namespace UnityEngine::UIElements {
class NavigateFocusRing_ChangeDirection;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::NavigateFocusRing*);
MARK_REF_T(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::NavigateFocusRing*, "UnityEngine.UIElements", "NavigateFocusRing");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "UnityEngine.UIElements", "NavigateFocusRing/ChangeDirection");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigateFocusRing
class CORDL_TYPE NavigateFocusRing : public ::System::Object {
public:
// Declarations
using FocusableHierarchyTraversal = ::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal;

using ChangeDirection = ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection;

/// @brief Field Down, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Down, put=setStaticF_Down)) ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  Down;

/// @brief Field Left, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Left, put=setStaticF_Left)) ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  Left;

/// @brief Field Next, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Next, put=setStaticF_Next)) ::UnityEngine::UIElements::FocusChangeDirection*  Next;

/// @brief Field Previous, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Previous, put=setStaticF_Previous)) ::UnityEngine::UIElements::FocusChangeDirection*  Previous;

/// @brief Field Right, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Right, put=setStaticF_Right)) ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  Right;

/// @brief Field Up, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Up, put=setStaticF_Up)) ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  Up;

 __declspec(property(get=get_focusController)) ::UnityEngine::UIElements::FocusController*  focusController;

/// @brief Field m_Ring, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ring, put=__cordl_internal_set_m_Ring)) ::UnityEngine::UIElements::VisualElementFocusRing*  m_Ring;

/// @brief Field m_Root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Root, put=__cordl_internal_set_m_Root)) ::UnityEngine::UIElements::VisualElement*  m_Root;

/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr operator  ::UnityEngine::UIElements::IFocusRing*() noexcept;

/// @brief Method GetFocusChangeDirection, addr 0xb8ac9b4, size 0x32c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::EventBase*  e) ;

/// @brief Method GetNextFocusable, addr 0xb8acce0, size 0x350, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection*  direction) ;

/// @brief Method GetNextFocusable2D, addr 0xb8ad128, size 0x45c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* GetNextFocusable2D(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  direction, ::UnityEngine::UIElements::VisualElement*  root) ;

/// @brief Method IsActive, addr 0xb8ad67c, size 0xd8, virtual false, abstract: false, final false
static inline bool IsActive(::UnityEngine::UIElements::VisualElement*  v) ;

/// @brief Method IsNavigable, addr 0xb8ad754, size 0x50, virtual false, abstract: false, final false
static inline bool IsNavigable(::UnityEngine::UIElements::Focusable*  focusable) ;

/// @brief Method IsWorldSpaceNavigationValid, addr 0xb8ad030, size 0xf8, virtual false, abstract: false, final false
inline bool IsWorldSpaceNavigationValid(::UnityEngine::UIElements::Focusable*  currentFocusable, ::by_ref<::UnityEngine::UIElements::UIDocument*>  document) ;

static inline ::UnityEngine::UIElements::NavigateFocusRing* New_ctor(::UnityEngine::UIElements::VisualElement*  root) ;

constexpr ::UnityEngine::UIElements::VisualElementFocusRing* const& __cordl_internal_get_m_Ring() const;

constexpr ::UnityEngine::UIElements::VisualElementFocusRing*& __cordl_internal_get_m_Ring() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Root() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Root() ;

constexpr void __cordl_internal_set_m_Ring(::UnityEngine::UIElements::VisualElementFocusRing*  value) ;

constexpr void __cordl_internal_set_m_Root(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method .ctor, addr 0xb8ac924, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  root) ;

static inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* getStaticF_Down() ;

static inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* getStaticF_Left() ;

static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF_Next() ;

static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF_Previous() ;

static inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* getStaticF_Right() ;

static inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* getStaticF_Up() ;

/// @brief Method get_focusController, addr 0xb8ac904, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::FocusController* get_focusController() ;

/// @brief Convert to "::UnityEngine::UIElements::IFocusRing"
constexpr ::UnityEngine::UIElements::IFocusRing* i___UnityEngine__UIElements__IFocusRing() noexcept;

static inline void setStaticF_Down(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value) ;

static inline void setStaticF_Left(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value) ;

static inline void setStaticF_Next(::UnityEngine::UIElements::FocusChangeDirection*  value) ;

static inline void setStaticF_Previous(::UnityEngine::UIElements::FocusChangeDirection*  value) ;

static inline void setStaticF_Right(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value) ;

static inline void setStaticF_Up(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavigateFocusRing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigateFocusRing(NavigateFocusRing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigateFocusRing(NavigateFocusRing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7764};

/// @brief Field m_Root, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_Root;

/// @brief Field m_Ring, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElementFocusRing*  ___m_Ring;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::NavigateFocusRing, ___m_Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigateFocusRing, ___m_Ring) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::NavigateFocusRing) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FocusChangeDirection
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigateFocusRing/ChangeDirection
class CORDL_TYPE NavigateFocusRing_ChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
// Declarations
static inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* New_ctor(int32_t  i) ;

/// @brief Method .ctor, addr 0xb8ad95c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(int32_t  i) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavigateFocusRing_ChangeDirection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing_ChangeDirection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigateFocusRing_ChangeDirection(NavigateFocusRing_ChangeDirection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing_ChangeDirection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigateFocusRing_ChangeDirection(NavigateFocusRing_ChangeDirection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
