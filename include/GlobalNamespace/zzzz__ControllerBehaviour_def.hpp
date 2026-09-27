#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerBehaviour)
namespace GlobalNamespace {
class ControllerBehaviour_OnActionEvent;
}
namespace GlobalNamespace {
class ControllerInputPoller;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class UXSettings;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ControllerBehaviour;
}
namespace GlobalNamespace {
class ControllerBehaviour_OnActionEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ControllerBehaviour*);
MARK_REF_T(::GlobalNamespace::ControllerBehaviour_OnActionEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerBehaviour*, "", "ControllerBehaviour");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ControllerBehaviour_OnActionEvent*, "", "ControllerBehaviour/OnActionEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerBehaviour
class CORDL_TYPE ControllerBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnActionEvent = ::GlobalNamespace::ControllerBehaviour_OnActionEvent;

 __declspec(property(get=get_ButtonDown)) bool  ButtonDown;

 __declspec(property(get=get_IsDownStick)) bool  IsDownStick;

 __declspec(property(get=get_IsLeftStick)) bool  IsLeftStick;

 __declspec(property(get=get_IsRightStick)) bool  IsRightStick;

 __declspec(property(get=get_IsUpStick)) bool  IsUpStick;

 __declspec(property(get=get_LeftButtonDown)) bool  LeftButtonDown;

/// @brief Field OnAction, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAction, put=__cordl_internal_set_OnAction)) ::GlobalNamespace::ControllerBehaviour_OnActionEvent*  OnAction;

 __declspec(property(get=get_Poller)) ::UnityW<::GlobalNamespace::ControllerInputPoller>  Poller;

 __declspec(property(get=get_RightButtonDown)) bool  RightButtonDown;

 __declspec(property(get=get_StickXValue)) float_t  StickXValue;

 __declspec(property(get=get_StickYValue)) float_t  StickYValue;

 __declspec(property(get=get_TriggerDown)) bool  TriggerDown;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::ControllerBehaviour>  _Instance_k__BackingField;

/// @brief Field actionDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_actionDelay, put=__cordl_internal_set_actionDelay)) float_t  actionDelay;

/// @brief Field actionRepeatDelayReduction, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_actionRepeatDelayReduction, put=__cordl_internal_set_actionRepeatDelayReduction)) float_t  actionRepeatDelayReduction;

/// @brief Field actionTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_actionTime, put=__cordl_internal_set_actionTime)) float_t  actionTime;

/// @brief Field poller, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_poller, put=__cordl_internal_set_poller)) ::UnityW<::GlobalNamespace::ControllerInputPoller>  poller;

/// @brief Field repeatAction, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatAction, put=__cordl_internal_set_repeatAction)) float_t  repeatAction;

/// @brief Field useTriggersAsSticks, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTriggersAsSticks, put=__cordl_internal_set_useTriggersAsSticks)) bool  useTriggersAsSticks;

/// @brief Field uxSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_uxSettings, put=__cordl_internal_set_uxSettings)) ::UnityW<::GlobalNamespace::UXSettings>  uxSettings;

/// @brief Field wasDownStick, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasDownStick, put=__cordl_internal_set_wasDownStick)) bool  wasDownStick;

/// @brief Field wasHeld, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHeld, put=__cordl_internal_set_wasHeld)) bool  wasHeld;

/// @brief Field wasLeftStick, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasLeftStick, put=__cordl_internal_set_wasLeftStick)) bool  wasLeftStick;

/// @brief Field wasRightStick, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasRightStick, put=__cordl_internal_set_wasRightStick)) bool  wasRightStick;

/// @brief Field wasUpStick, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasUpStick, put=__cordl_internal_set_wasUpStick)) bool  wasUpStick;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Awake, addr 0x5a5ea80, size 0x15c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildValidationCheck, addr 0x5a5ed34, size 0xb8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method CreateNewControllerBehaviour, addr 0x5a4ad48, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ControllerBehaviour> CreateNewControllerBehaviour(::UnityEngine::GameObject*  gameObject, ::GlobalNamespace::UXSettings*  settings) ;

static inline ::GlobalNamespace::ControllerBehaviour* New_ctor() ;

/// @brief Method Update, addr 0x5a5ebdc, size 0x158, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::ControllerBehaviour_OnActionEvent* const& __cordl_internal_get_OnAction() const;

constexpr ::GlobalNamespace::ControllerBehaviour_OnActionEvent*& __cordl_internal_get_OnAction() ;

constexpr float_t const& __cordl_internal_get_actionDelay() const;

constexpr float_t& __cordl_internal_get_actionDelay() ;

constexpr float_t const& __cordl_internal_get_actionRepeatDelayReduction() const;

constexpr float_t& __cordl_internal_get_actionRepeatDelayReduction() ;

constexpr float_t const& __cordl_internal_get_actionTime() const;

constexpr float_t& __cordl_internal_get_actionTime() ;

constexpr ::UnityW<::GlobalNamespace::ControllerInputPoller> const& __cordl_internal_get_poller() const;

constexpr ::UnityW<::GlobalNamespace::ControllerInputPoller>& __cordl_internal_get_poller() ;

constexpr float_t const& __cordl_internal_get_repeatAction() const;

constexpr float_t& __cordl_internal_get_repeatAction() ;

constexpr bool const& __cordl_internal_get_useTriggersAsSticks() const;

constexpr bool& __cordl_internal_get_useTriggersAsSticks() ;

constexpr ::UnityW<::GlobalNamespace::UXSettings> const& __cordl_internal_get_uxSettings() const;

constexpr ::UnityW<::GlobalNamespace::UXSettings>& __cordl_internal_get_uxSettings() ;

constexpr bool const& __cordl_internal_get_wasDownStick() const;

constexpr bool& __cordl_internal_get_wasDownStick() ;

constexpr bool const& __cordl_internal_get_wasHeld() const;

constexpr bool& __cordl_internal_get_wasHeld() ;

constexpr bool const& __cordl_internal_get_wasLeftStick() const;

constexpr bool& __cordl_internal_get_wasLeftStick() ;

constexpr bool const& __cordl_internal_get_wasRightStick() const;

constexpr bool& __cordl_internal_get_wasRightStick() ;

constexpr bool const& __cordl_internal_get_wasUpStick() const;

constexpr bool& __cordl_internal_get_wasUpStick() ;

constexpr void __cordl_internal_set_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent*  value) ;

constexpr void __cordl_internal_set_actionDelay(float_t  value) ;

constexpr void __cordl_internal_set_actionRepeatDelayReduction(float_t  value) ;

constexpr void __cordl_internal_set_actionTime(float_t  value) ;

constexpr void __cordl_internal_set_poller(::UnityW<::GlobalNamespace::ControllerInputPoller>  value) ;

constexpr void __cordl_internal_set_repeatAction(float_t  value) ;

constexpr void __cordl_internal_set_useTriggersAsSticks(bool  value) ;

constexpr void __cordl_internal_set_uxSettings(::UnityW<::GlobalNamespace::UXSettings>  value) ;

constexpr void __cordl_internal_set_wasDownStick(bool  value) ;

constexpr void __cordl_internal_set_wasHeld(bool  value) ;

constexpr void __cordl_internal_set_wasLeftStick(bool  value) ;

constexpr void __cordl_internal_set_wasRightStick(bool  value) ;

constexpr void __cordl_internal_set_wasUpStick(bool  value) ;

/// @brief Method .ctor, addr 0x5a5edec, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnAction, addr 0x5a4af94, size 0x9c, virtual false, abstract: false, final false
inline void add_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent*  value) ;

static inline ::UnityW<::GlobalNamespace::ControllerBehaviour> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_ButtonDown, addr 0x5a5e394, size 0xdc, virtual false, abstract: false, final false
inline bool get_ButtonDown() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5a5e1f0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ControllerBehaviour> get_Instance() ;

/// @brief Method get_IsDownStick, addr 0x5a5e850, size 0xc8, virtual false, abstract: false, final false
inline bool get_IsDownStick() ;

/// @brief Method get_IsLeftStick, addr 0x5a5e600, size 0xc8, virtual false, abstract: false, final false
inline bool get_IsLeftStick() ;

/// @brief Method get_IsRightStick, addr 0x5a5e6c8, size 0xc4, virtual false, abstract: false, final false
inline bool get_IsRightStick() ;

/// @brief Method get_IsUpStick, addr 0x5a5e78c, size 0xc4, virtual false, abstract: false, final false
inline bool get_IsUpStick() ;

/// @brief Method get_LeftButtonDown, addr 0x5a5e470, size 0xc8, virtual false, abstract: false, final false
inline bool get_LeftButtonDown() ;

/// @brief Method get_Poller, addr 0x5a5e290, size 0x104, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::ControllerInputPoller> get_Poller() ;

/// @brief Method get_RightButtonDown, addr 0x5a5e538, size 0xc8, virtual false, abstract: false, final false
inline bool get_RightButtonDown() ;

/// @brief Method get_StickXValue, addr 0x5a5e918, size 0xb4, virtual false, abstract: false, final false
inline float_t get_StickXValue() ;

/// @brief Method get_StickYValue, addr 0x5a5e9cc, size 0xb4, virtual false, abstract: false, final false
inline float_t get_StickYValue() ;

/// @brief Method get_TriggerDown, addr 0x5a4c0d4, size 0xb4, virtual false, abstract: false, final false
inline bool get_TriggerDown() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnAction, addr 0x5a4c674, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnAction(::GlobalNamespace::ControllerBehaviour_OnActionEvent*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ControllerBehaviour>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5a5e238, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::ControllerBehaviour*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerBehaviour(ControllerBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerBehaviour(ControllerBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3054};

/// @brief Field actionTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___actionTime;

/// @brief Field repeatAction, offset: 0x24, size: 0x4, def value: None
 float_t  ___repeatAction;

/// [SerializeField]
/// @brief Field uxSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UXSettings>  ___uxSettings;

/// [SerializeField]
/// @brief Field actionDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ___actionDelay;

/// [SerializeField]
/// @brief Field actionRepeatDelayReduction, offset: 0x34, size: 0x4, def value: None
 float_t  ___actionRepeatDelayReduction;

/// [Tooltip("Should the triggers modify the x axis like the sticks do?")]
/// [SerializeField]
/// @brief Field useTriggersAsSticks, offset: 0x38, size: 0x1, def value: None
 bool  ___useTriggersAsSticks;

/// @brief Field poller, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ControllerInputPoller>  ___poller;

/// @brief Field wasLeftStick, offset: 0x48, size: 0x1, def value: None
 bool  ___wasLeftStick;

/// @brief Field wasRightStick, offset: 0x49, size: 0x1, def value: None
 bool  ___wasRightStick;

/// @brief Field wasUpStick, offset: 0x4a, size: 0x1, def value: None
 bool  ___wasUpStick;

/// @brief Field wasDownStick, offset: 0x4b, size: 0x1, def value: None
 bool  ___wasDownStick;

/// @brief Field wasHeld, offset: 0x4c, size: 0x1, def value: None
 bool  ___wasHeld;

/// [CompilerGenerated]
/// @brief Field OnAction, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::ControllerBehaviour_OnActionEvent*  ___OnAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___actionTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___repeatAction) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___uxSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___actionDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___actionRepeatDelayReduction) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___useTriggersAsSticks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___poller) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___wasLeftStick) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___wasRightStick) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___wasUpStick) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___wasDownStick) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___wasHeld) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ControllerBehaviour, ___OnAction) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ControllerBehaviour) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ControllerBehaviour/OnActionEvent
class CORDL_TYPE ControllerBehaviour_OnActionEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a5ee18, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5a5ee34, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5a5ee04, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::ControllerBehaviour_OnActionEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5a4aef8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerBehaviour_OnActionEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerBehaviour_OnActionEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerBehaviour_OnActionEvent(ControllerBehaviour_OnActionEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerBehaviour_OnActionEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerBehaviour_OnActionEvent(ControllerBehaviour_OnActionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3053};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ControllerBehaviour_OnActionEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
