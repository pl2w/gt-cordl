#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckDoubleButtonTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckDoubleButtonTrigger)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
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
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckDoubleButtonTrigger;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckDoubleButtonTrigger*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckDoubleButtonTrigger*, "Liv.Lck.UI", "LckDoubleButtonTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckDoubleButtonTrigger
class CORDL_TYPE LckDoubleButtonTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnDown, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDown, put=__cordl_internal_set_OnDown)) ::System::Action_1<bool>*  OnDown;

/// @brief Field OnEnter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::System::Action_1<bool>*  OnEnter;

/// @brief Field OnExit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnExit, put=__cordl_internal_set_OnExit)) ::System::Action_1<bool>*  OnExit;

/// @brief Field OnUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUp, put=__cordl_internal_set_OnUp)) ::System::Action_2<bool,bool>*  OnUp;

/// @brief Field _background, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__background, put=__cordl_internal_set__background)) ::UnityW<::UnityEngine::UI::Image>  _background;

/// @brief Field _hasCollided, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCollided, put=__cordl_internal_set__hasCollided)) bool  _hasCollided;

/// @brief Field _icon, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon, put=__cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image>  _icon;

/// @brief Field _isIncreaseButton, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__isIncreaseButton, put=__cordl_internal_set__isIncreaseButton)) bool  _isIncreaseButton;

/// @brief Field _isUsingColliders, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isUsingColliders, put=__cordl_internal_set__isUsingColliders)) bool  _isUsingColliders;

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

/// @brief Method IsValidTap, addr 0x9d509a4, size 0x17c, virtual false, abstract: false, final false
inline bool IsValidTap(::UnityEngine::Vector3  tapPosition) ;

static inline ::Liv::Lck::UI::LckDoubleButtonTrigger* New_ctor() ;

/// @brief Method OnPointerDown, addr 0x9d50804, size 0x28, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x9d5082c, size 0x28, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x9d50884, size 0x28, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x9d50854, size 0x30, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnTriggerEnter, addr 0x9d508ac, size 0xf8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x9d50b20, size 0xc0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method SetBackgroundColor, addr 0x9d501bc, size 0x20, virtual false, abstract: false, final false
inline void SetBackgroundColor(::UnityEngine::Color  color) ;

/// @brief Method SetIconColor, addr 0x9d50464, size 0x20, virtual false, abstract: false, final false
inline void SetIconColor(::UnityEngine::Color  color) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnDown() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnDown() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnEnter() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnEnter() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnExit() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnExit() ;

constexpr ::System::Action_2<bool,bool>* const& __cordl_internal_get_OnUp() const;

constexpr ::System::Action_2<bool,bool>*& __cordl_internal_get_OnUp() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__background() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__background() ;

constexpr bool const& __cordl_internal_get__hasCollided() const;

constexpr bool& __cordl_internal_get__hasCollided() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon() ;

constexpr bool const& __cordl_internal_get__isIncreaseButton() const;

constexpr bool& __cordl_internal_get__isIncreaseButton() ;

constexpr bool const& __cordl_internal_get__isUsingColliders() const;

constexpr bool& __cordl_internal_get__isUsingColliders() ;

constexpr void __cordl_internal_set_OnDown(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnEnter(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnExit(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnUp(::System::Action_2<bool,bool>*  value) ;

constexpr void __cordl_internal_set__background(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__hasCollided(bool  value) ;

constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__isIncreaseButton(bool  value) ;

constexpr void __cordl_internal_set__isUsingColliders(bool  value) ;

/// @brief Method .ctor, addr 0x9d50be0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDown, addr 0x9d4ecc4, size 0xb0, virtual false, abstract: false, final false
inline void add_OnDown(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEnter, addr 0x9d4ec14, size 0xb0, virtual false, abstract: false, final false
inline void add_OnEnter(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnExit, addr 0x9d4ee24, size 0xb0, virtual false, abstract: false, final false
inline void add_OnExit(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUp, addr 0x9d4ed74, size 0xb0, virtual false, abstract: false, final false
inline void add_OnUp(::System::Action_2<bool,bool>*  value) ;

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
/// @brief Method remove_OnDown, addr 0x9d4f3bc, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnDown(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEnter, addr 0x9d4f30c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnEnter(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnExit, addr 0x9d4f51c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnExit(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUp, addr 0x9d4f46c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnUp(::System::Action_2<bool,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDoubleButtonTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDoubleButtonTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDoubleButtonTrigger(LckDoubleButtonTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDoubleButtonTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDoubleButtonTrigger(LckDoubleButtonTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24918};

/// [CompilerGenerated]
/// @brief Field OnDown, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnDown;

/// [CompilerGenerated]
/// @brief Field OnEnter, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnEnter;

/// [CompilerGenerated]
/// @brief Field OnUp, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<bool,bool>*  ___OnUp;

/// [CompilerGenerated]
/// @brief Field OnExit, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnExit;

/// [SerializeField]
/// @brief Field _isUsingColliders, offset: 0x40, size: 0x1, def value: None
 bool  ____isUsingColliders;

/// [SerializeField]
/// @brief Field _isIncreaseButton, offset: 0x41, size: 0x1, def value: None
 bool  ____isIncreaseButton;

/// [SerializeField]
/// @brief Field _background, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____background;

/// [SerializeField]
/// @brief Field _icon, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____icon;

/// @brief Field _hasCollided, offset: 0x58, size: 0x1, def value: None
 bool  ____hasCollided;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ___OnDown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ___OnEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ___OnUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ___OnExit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ____isUsingColliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ____isIncreaseButton) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ____background) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ____icon) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckDoubleButtonTrigger, ____hasCollided) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckDoubleButtonTrigger) == 0x60, "Size mismatch!");

} // namespace end def Liv::Lck::UI
