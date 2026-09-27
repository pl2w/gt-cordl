#pragma once
// IWYU pragma private; include "UnityEngine/UI/Navigation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Navigation_Mode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Navigation)
namespace GlobalNamespace {
struct Navigation_Mode;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UI {
class Selectable;
}
// Forward declare root types
namespace UnityEngine::UI {
struct Navigation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::Navigation);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::Navigation, "UnityEngine.UI", "Navigation");
// Dependencies UnityEngine.UI.Navigation::Mode
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Navigation
struct CORDL_TYPE Navigation {
public:
// Declarations
using Mode = ::GlobalNamespace::Navigation_Mode;

 __declspec(property(get=get_mode, put=set_mode)) ::GlobalNamespace::Navigation_Mode  mode;

 __declspec(property(get=get_selectOnDown, put=set_selectOnDown)) ::UnityW<::UnityEngine::UI::Selectable>  selectOnDown;

 __declspec(property(get=get_selectOnLeft, put=set_selectOnLeft)) ::UnityW<::UnityEngine::UI::Selectable>  selectOnLeft;

 __declspec(property(get=get_selectOnRight, put=set_selectOnRight)) ::UnityW<::UnityEngine::UI::Selectable>  selectOnRight;

 __declspec(property(get=get_selectOnUp, put=set_selectOnUp)) ::UnityW<::UnityEngine::UI::Selectable>  selectOnUp;

 __declspec(property(get=get_wrapAround, put=set_wrapAround)) bool  wrapAround;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UI::Navigation>*() ;

/// @brief Method Equals, addr 0xb8fdd30, size 0x118, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UI::Navigation  other) ;

/// @brief Method get_defaultNavigation, addr 0xb8fdd14, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::UI::Navigation get_defaultNavigation() ;

/// @brief Method get_mode, addr 0xb8fdcb4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Navigation_Mode get_mode() ;

/// @brief Method get_selectOnDown, addr 0xb8fdce4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnDown() ;

/// @brief Method get_selectOnLeft, addr 0xb8fdcf4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnLeft() ;

/// @brief Method get_selectOnRight, addr 0xb8fdd04, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnRight() ;

/// @brief Method get_selectOnUp, addr 0xb8fdcd4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> get_selectOnUp() ;

/// @brief Method get_wrapAround, addr 0xb8fdcc4, size 0x8, virtual false, abstract: false, final false
inline bool get_wrapAround() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
constexpr ::System::IEquatable_1<::UnityEngine::UI::Navigation>* i___System__IEquatable_1___UnityEngine__UI__Navigation_() ;

/// @brief Method set_mode, addr 0xb8fdcbc, size 0x8, virtual false, abstract: false, final false
inline void set_mode(::GlobalNamespace::Navigation_Mode  value) ;

/// @brief Method set_selectOnDown, addr 0xb8fdcec, size 0x8, virtual false, abstract: false, final false
inline void set_selectOnDown(::UnityEngine::UI::Selectable*  value) ;

/// @brief Method set_selectOnLeft, addr 0xb8fdcfc, size 0x8, virtual false, abstract: false, final false
inline void set_selectOnLeft(::UnityEngine::UI::Selectable*  value) ;

/// @brief Method set_selectOnRight, addr 0xb8fdd0c, size 0x8, virtual false, abstract: false, final false
inline void set_selectOnRight(::UnityEngine::UI::Selectable*  value) ;

/// @brief Method set_selectOnUp, addr 0xb8fdcdc, size 0x8, virtual false, abstract: false, final false
inline void set_selectOnUp(::UnityEngine::UI::Selectable*  value) ;

/// @brief Method set_wrapAround, addr 0xb8fdccc, size 0x8, virtual false, abstract: false, final false
inline void set_wrapAround(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Navigation() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::GlobalNamespace::Navigation_Mode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WrapAround", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SelectOnUp", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SelectOnDown", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SelectOnLeft", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SelectOnRight", ty: "::UnityW<::UnityEngine::UI::Selectable>", modifiers: "", def_value: None, comment: None }]
constexpr Navigation(::GlobalNamespace::Navigation_Mode  m_Mode, bool  m_WrapAround, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnUp, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnDown, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnLeft, ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnRight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [SerializeField]
/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Navigation_Mode  m_Mode;

/// [Tooltip("Enables navigation to wrap around from last to first or first to last element. Does not work for automatic grid navigation")]
/// [SerializeField]
/// @brief Field m_WrapAround, offset: 0x4, size: 0x1, def value: None
 bool  m_WrapAround;

/// [SerializeField]
/// @brief Field m_SelectOnUp, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnUp;

/// [SerializeField]
/// @brief Field m_SelectOnDown, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnDown;

/// [SerializeField]
/// @brief Field m_SelectOnLeft, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnLeft;

/// [SerializeField]
/// @brief Field m_SelectOnRight, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Selectable>  m_SelectOnRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Navigation, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_WrapAround) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnUp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnDown) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Navigation, m_SelectOnRight) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::Navigation) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UI
