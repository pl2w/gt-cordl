#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsScreenTouchPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsScreenTouchPoint_TouchPointDirections_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsScreenTouchPoint)
namespace GlobalNamespace {
struct CustomMapsScreenTouchPoint_TouchPointDirections;
}
namespace GlobalNamespace {
class CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d;
}
namespace GlobalNamespace {
class CustomMapsTerminalScreen;
}
namespace GlobalNamespace {
class IClickable;
}
namespace GorillaTag {
class ButtonColorSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsScreenTouchPoint;
}
namespace GlobalNamespace {
class CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsScreenTouchPoint*);
MARK_REF_T(::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsScreenTouchPoint*, "", "CustomMapsScreenTouchPoint");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d*, "", "CustomMapsScreenTouchPoint/<<PressButtonColourUpdate>g__ButtonColorUpdate_Local|12_0>d");
// Dependencies CustomMapsScreenTouchPoint::TouchPointDirections, GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapKeyboardBinding, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsScreenTouchPoint
class CORDL_TYPE CustomMapsScreenTouchPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TouchPointDirections = ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections;

using __PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d = ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d;

/// @brief Field buttonColorSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonColorSettings, put=__cordl_internal_set_buttonColorSettings)) ::UnityW<::GorillaTag::ButtonColorSettings>  buttonColorSettings;

/// @brief Field colorUpdateCoroutine, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorUpdateCoroutine, put=__cordl_internal_set_colorUpdateCoroutine)) ::UnityEngine::Coroutine*  colorUpdateCoroutine;

/// @brief Field forwardDirection, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_forwardDirection, put=__cordl_internal_set_forwardDirection)) ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections  forwardDirection;

/// @brief Field keyBinding, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_keyBinding, put=__cordl_internal_set_keyBinding)) ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  keyBinding;

/// @brief Field pressTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_pressTime, put=setStaticF_pressTime)) float_t  pressTime;

/// @brief Field pressedTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_pressedTime, put=setStaticF_pressedTime)) float_t  pressedTime;

/// @brief Field screen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_screen, put=__cordl_internal_set_screen)) ::UnityW<::GlobalNamespace::CustomMapsTerminalScreen>  screen;

/// @brief Field touchPointRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchPointRenderer, put=__cordl_internal_set_touchPointRenderer)) ::UnityW<::UnityEngine::SpriteRenderer>  touchPointRenderer;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method Awake, addr 0x5a03930, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Click, addr 0x5a0527c, size 0x4, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

/// @brief Method GetForwardDirection, addr 0x5a05158, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetForwardDirection() ;

static inline ::GlobalNamespace::CustomMapsScreenTouchPoint* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnButtonPressedEvent() ;

/// @brief Method OnDisable, addr 0x5a048e8, size 0xa8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5a04b84, size 0x5d4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method PressButtonColourUpdate, addr 0x5a04aa4, size 0x78, virtual true, abstract: false, final false
inline void PressButtonColourUpdate() ;

/// [IteratorStateMachine(typeof(CustomMapsScreenTouchPoint::<<PressButtonColourUpdate>g__ButtonColorUpdate_Local|12_0>d))]
/// [CompilerGenerated]
/// @brief Method <PressButtonColourUpdate>g__ButtonColorUpdate_Local|12_0, addr 0x5a05210, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0() ;

constexpr ::UnityW<::GorillaTag::ButtonColorSettings> const& __cordl_internal_get_buttonColorSettings() const;

constexpr ::UnityW<::GorillaTag::ButtonColorSettings>& __cordl_internal_get_buttonColorSettings() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_colorUpdateCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_colorUpdateCoroutine() ;

constexpr ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections const& __cordl_internal_get_forwardDirection() const;

constexpr ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections& __cordl_internal_get_forwardDirection() ;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const& __cordl_internal_get_keyBinding() const;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding& __cordl_internal_get_keyBinding() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalScreen> const& __cordl_internal_get_screen() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalScreen>& __cordl_internal_get_screen() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_touchPointRenderer() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_touchPointRenderer() ;

constexpr void __cordl_internal_set_buttonColorSettings(::UnityW<::GorillaTag::ButtonColorSettings>  value) ;

constexpr void __cordl_internal_set_colorUpdateCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_forwardDirection(::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections  value) ;

constexpr void __cordl_internal_set_keyBinding(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  value) ;

constexpr void __cordl_internal_set_screen(::UnityW<::GlobalNamespace::CustomMapsTerminalScreen>  value) ;

constexpr void __cordl_internal_set_touchPointRenderer(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

/// @brief Method .ctor, addr 0x5a03fa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_pressTime() ;

static inline float_t getStaticF_pressedTime() ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

static inline void setStaticF_pressTime(float_t  value) ;

static inline void setStaticF_pressedTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsScreenTouchPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsScreenTouchPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsScreenTouchPoint(CustomMapsScreenTouchPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsScreenTouchPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsScreenTouchPoint(CustomMapsScreenTouchPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2759};

/// [SerializeField]
/// @brief Field screen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsTerminalScreen>  ___screen;

/// [SerializeField]
/// @brief Field keyBinding, offset: 0x28, size: 0x4, def value: None
 ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  ___keyBinding;

/// [SerializeField]
/// @brief Field forwardDirection, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::CustomMapsScreenTouchPoint_TouchPointDirections  ___forwardDirection;

/// [SerializeField]
/// @brief Field touchPointRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___touchPointRenderer;

/// [SerializeField]
/// @brief Field buttonColorSettings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTag::ButtonColorSettings>  ___buttonColorSettings;

/// @brief Field colorUpdateCoroutine, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___colorUpdateCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint, ___screen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint, ___keyBinding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint, ___forwardDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint, ___touchPointRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint, ___buttonColorSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint, ___colorUpdateCoroutine) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsScreenTouchPoint) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsScreenTouchPoint/<<PressButtonColourUpdate>g__ButtonColorUpdate_Local|12_0>d
class CORDL_TYPE CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a052f8, size 0x184, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a0547c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a05484, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a054bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a052f4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a052cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d(CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d(CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2758};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsScreenTouchPoint>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsScreenTouchPoint___PressButtonColourUpdate_g__ButtonColorUpdate_Local_12_0_d) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
