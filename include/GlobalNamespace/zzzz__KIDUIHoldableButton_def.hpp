#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIHoldableButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(KIDUIHoldableButton)
namespace GlobalNamespace {
class ControllerBehaviour;
}
namespace GlobalNamespace {
class KIDUIButton;
}
namespace GlobalNamespace {
class KIDUIHoldableButton_ButtonHoldCompleteEvent;
}
namespace GlobalNamespace {
class KIDUIHoldableButton_ButtonHoldReleaseEvent;
}
namespace GlobalNamespace {
class KIDUIHoldableButton_ButtonHoldStartEvent;
}
namespace GlobalNamespace {
class UXSettings;
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
// Forward declare root types
namespace GlobalNamespace {
class KIDUIHoldableButton;
}
namespace GlobalNamespace {
class KIDUIHoldableButton_ButtonHoldCompleteEvent;
}
namespace GlobalNamespace {
class KIDUIHoldableButton_ButtonHoldReleaseEvent;
}
namespace GlobalNamespace {
class KIDUIHoldableButton_ButtonHoldStartEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUIHoldableButton*);
MARK_REF_T(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*);
MARK_REF_T(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*);
MARK_REF_T(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIHoldableButton*, "", "KIDUIHoldableButton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*, "", "KIDUIHoldableButton/ButtonHoldCompleteEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*, "", "KIDUIHoldableButton/ButtonHoldReleaseEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*, "", "KIDUIHoldableButton/ButtonHoldStartEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIHoldableButton
class CORDL_TYPE KIDUIHoldableButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonHoldCompleteEvent = ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent;

using ButtonHoldReleaseEvent = ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent;

using ButtonHoldStartEvent = ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent;

 __declspec(property(get=get_HoldPercentage)) float_t  HoldPercentage;

/// @brief Field _button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::GlobalNamespace::KIDUIButton>  _button;

/// @brief Field _canTrigger, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__canTrigger, put=setStaticF__canTrigger)) bool  _canTrigger;

/// @brief Field _cbUXSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cbUXSettings, put=__cordl_internal_set__cbUXSettings)) ::UnityW<::GlobalNamespace::UXSettings>  _cbUXSettings;

/// @brief Field _elapsedTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsedTime, put=__cordl_internal_set__elapsedTime)) float_t  _elapsedTime;

/// @brief Field _holdDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__holdDuration, put=__cordl_internal_set__holdDuration)) float_t  _holdDuration;

/// @brief Field _holdProgressFill, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__holdProgressFill, put=__cordl_internal_set__holdProgressFill)) ::UnityW<::UnityEngine::UI::Image>  _holdProgressFill;

/// @brief Field _isHoldingButton, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHoldingButton, put=__cordl_internal_set__isHoldingButton)) bool  _isHoldingButton;

/// @brief Field _isHoldingMouse, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHoldingMouse, put=__cordl_internal_set__isHoldingMouse)) bool  _isHoldingMouse;

/// @brief Field _triggeredThisFrame, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__triggeredThisFrame, put=setStaticF__triggeredThisFrame)) bool  _triggeredThisFrame;

/// @brief Field controllerBehaviour, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerBehaviour, put=__cordl_internal_set_controllerBehaviour)) ::UnityW<::GlobalNamespace::ControllerBehaviour>  controllerBehaviour;

/// @brief Field inside, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_inside, put=__cordl_internal_set_inside)) bool  inside;

/// @brief Field m_OnHoldComplete, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnHoldComplete, put=__cordl_internal_set_m_OnHoldComplete)) ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*  m_OnHoldComplete;

/// @brief Field m_OnHoldRelease, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnHoldRelease, put=__cordl_internal_set_m_OnHoldRelease)) ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*  m_OnHoldRelease;

/// @brief Field m_OnHoldStart, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnHoldStart, put=__cordl_internal_set_m_OnHoldStart)) ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*  m_OnHoldStart;

 __declspec(property(get=get_onHoldComplete, put=set_onHoldComplete)) ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*  onHoldComplete;

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

/// @brief Method Awake, addr 0x5a49ec4, size 0x11c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HoldComplete, addr 0x5a49d7c, size 0xd8, virtual false, abstract: false, final false
inline void HoldComplete() ;

/// @brief Method LateUpdate, addr 0x5a4a498, size 0x3f4, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method ManageButtonInteraction, addr 0x5a49bf4, size 0xb4, virtual false, abstract: false, final false
inline void ManageButtonInteraction(bool  isPointerUp) ;

static inline ::GlobalNamespace::KIDUIHoldableButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a4a8a0, size 0x100, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a49ac8, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPointerDown, addr 0x5a49ca8, size 0x8, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x5a4a88c, size 0xc, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x5a4a898, size 0x8, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x5a49d74, size 0x8, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method PostUpdate, addr 0x5a49fe0, size 0x4b8, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// @brief Method ResetButton, addr 0x5a49e54, size 0x70, virtual false, abstract: false, final false
inline void ResetButton() ;

/// @brief Method ToggleHoldingButton, addr 0x5a49cb0, size 0xc4, virtual false, abstract: false, final false
inline void ToggleHoldingButton(bool  isPointerDown) ;

/// @brief Method Update, addr 0x5a49bec, size 0x8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__button() ;

constexpr ::UnityW<::GlobalNamespace::UXSettings> const& __cordl_internal_get__cbUXSettings() const;

constexpr ::UnityW<::GlobalNamespace::UXSettings>& __cordl_internal_get__cbUXSettings() ;

constexpr float_t const& __cordl_internal_get__elapsedTime() const;

constexpr float_t& __cordl_internal_get__elapsedTime() ;

constexpr float_t const& __cordl_internal_get__holdDuration() const;

constexpr float_t& __cordl_internal_get__holdDuration() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__holdProgressFill() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__holdProgressFill() ;

constexpr bool const& __cordl_internal_get__isHoldingButton() const;

constexpr bool& __cordl_internal_get__isHoldingButton() ;

constexpr bool const& __cordl_internal_get__isHoldingMouse() const;

constexpr bool& __cordl_internal_get__isHoldingMouse() ;

constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour> const& __cordl_internal_get_controllerBehaviour() const;

constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour>& __cordl_internal_get_controllerBehaviour() ;

constexpr bool const& __cordl_internal_get_inside() const;

constexpr bool& __cordl_internal_get_inside() ;

constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* const& __cordl_internal_get_m_OnHoldComplete() const;

constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*& __cordl_internal_get_m_OnHoldComplete() ;

constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent* const& __cordl_internal_get_m_OnHoldRelease() const;

constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*& __cordl_internal_get_m_OnHoldRelease() ;

constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent* const& __cordl_internal_get_m_OnHoldStart() const;

constexpr ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*& __cordl_internal_get_m_OnHoldStart() ;

constexpr void __cordl_internal_set__button(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value) ;

constexpr void __cordl_internal_set__elapsedTime(float_t  value) ;

constexpr void __cordl_internal_set__holdDuration(float_t  value) ;

constexpr void __cordl_internal_set__holdProgressFill(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__isHoldingButton(bool  value) ;

constexpr void __cordl_internal_set__isHoldingMouse(bool  value) ;

constexpr void __cordl_internal_set_controllerBehaviour(::UnityW<::GlobalNamespace::ControllerBehaviour>  value) ;

constexpr void __cordl_internal_set_inside(bool  value) ;

constexpr void __cordl_internal_set_m_OnHoldComplete(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*  value) ;

constexpr void __cordl_internal_set_m_OnHoldRelease(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*  value) ;

constexpr void __cordl_internal_set_m_OnHoldStart(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*  value) ;

/// @brief Method .ctor, addr 0x5a4a9a0, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__canTrigger() ;

static inline bool getStaticF__triggeredThisFrame() ;

/// @brief Method get_HoldPercentage, addr 0x5a49ab8, size 0x10, virtual false, abstract: false, final false
inline float_t get_HoldPercentage() ;

/// @brief Method get_onHoldComplete, addr 0x5a49aa8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* get_onHoldComplete() ;

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

static inline void setStaticF__canTrigger(bool  value) ;

static inline void setStaticF__triggeredThisFrame(bool  value) ;

/// @brief Method set_onHoldComplete, addr 0x5a49ab0, size 0x8, virtual false, abstract: false, final false
inline void set_onHoldComplete(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIHoldableButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIHoldableButton(KIDUIHoldableButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIHoldableButton(KIDUIHoldableButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2991};

/// @brief Field _button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____button;

/// [SerializeField]
/// @brief Field _holdDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ____holdDuration;

/// [SerializeField]
/// @brief Field _holdProgressFill, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____holdProgressFill;

/// [Header("Steam Settings")]
/// [SerializeField]
/// @brief Field _cbUXSettings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UXSettings>  ____cbUXSettings;

/// [SerializeField]
/// @brief Field m_OnHoldComplete, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent*  ___m_OnHoldComplete;

/// [SerializeField]
/// @brief Field m_OnHoldStart, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent*  ___m_OnHoldStart;

/// [SerializeField]
/// @brief Field m_OnHoldRelease, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent*  ___m_OnHoldRelease;

/// @brief Field _isHoldingButton, offset: 0x58, size: 0x1, def value: None
 bool  ____isHoldingButton;

/// @brief Field _elapsedTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ____elapsedTime;

/// @brief Field controllerBehaviour, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ControllerBehaviour>  ___controllerBehaviour;

/// @brief Field inside, offset: 0x68, size: 0x1, def value: None
 bool  ___inside;

/// @brief Field _isHoldingMouse, offset: 0x69, size: 0x1, def value: None
 bool  ____isHoldingMouse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ____holdDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ____holdProgressFill) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ____cbUXSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ___m_OnHoldComplete) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ___m_OnHoldStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ___m_OnHoldRelease) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ____isHoldingButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ____elapsedTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ___controllerBehaviour) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ___inside) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIHoldableButton, ____isHoldingMouse) == 0x69, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIHoldableButton) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Events.UnityEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIHoldableButton/ButtonHoldReleaseEvent
class CORDL_TYPE KIDUIHoldableButton_ButtonHoldReleaseEvent : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5a4ab90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIHoldableButton_ButtonHoldReleaseEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton_ButtonHoldReleaseEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIHoldableButton_ButtonHoldReleaseEvent(KIDUIHoldableButton_ButtonHoldReleaseEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton_ButtonHoldReleaseEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIHoldableButton_ButtonHoldReleaseEvent(KIDUIHoldableButton_ButtonHoldReleaseEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2990};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldReleaseEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Events.UnityEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIHoldableButton/ButtonHoldStartEvent
class CORDL_TYPE KIDUIHoldableButton_ButtonHoldStartEvent : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5a4ab88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIHoldableButton_ButtonHoldStartEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton_ButtonHoldStartEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIHoldableButton_ButtonHoldStartEvent(KIDUIHoldableButton_ButtonHoldStartEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton_ButtonHoldStartEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIHoldableButton_ButtonHoldStartEvent(KIDUIHoldableButton_ButtonHoldStartEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldStartEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Events.UnityEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIHoldableButton/ButtonHoldCompleteEvent
class CORDL_TYPE KIDUIHoldableButton_ButtonHoldCompleteEvent : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5a4ab80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIHoldableButton_ButtonHoldCompleteEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton_ButtonHoldCompleteEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIHoldableButton_ButtonHoldCompleteEvent(KIDUIHoldableButton_ButtonHoldCompleteEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIHoldableButton_ButtonHoldCompleteEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIHoldableButton_ButtonHoldCompleteEvent(KIDUIHoldableButton_ButtonHoldCompleteEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2988};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUIHoldableButton_ButtonHoldCompleteEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
