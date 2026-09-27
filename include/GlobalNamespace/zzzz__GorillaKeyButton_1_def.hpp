#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaKeyButton_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaKeyButton_1)
namespace GlobalNamespace {
template<typename TBinding>
class GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d;
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
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBinding>
class GorillaKeyButton_1;
}
namespace GlobalNamespace {
template<typename TBinding>
class GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::GorillaKeyButton_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GorillaKeyButton_1, "", "GorillaKeyButton`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d, "", "GorillaKeyButton`1/<<PressButtonColourUpdate>g__ButtonColorUpdate_Local|21_0>d");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// cpp template
template<typename TBinding>
// Is value type: false
// CS Name: GorillaKeyButton`1<TBinding>
class CORDL_TYPE GorillaKeyButton_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d = ::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>;

/// @brief Field Binding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Binding, put=__cordl_internal_set_Binding)) TBinding  Binding;

/// @brief Field ButtonColorSettings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ButtonColorSettings, put=__cordl_internal_set_ButtonColorSettings)) ::UnityW<::GorillaTag::ButtonColorSettings>  ButtonColorSettings;

/// @brief Field ButtonRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ButtonRenderer, put=__cordl_internal_set_ButtonRenderer)) ::UnityW<::UnityEngine::Renderer>  ButtonRenderer;

/// @brief Field OnKeyButtonPressed, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnKeyButtonPressed, put=__cordl_internal_set_OnKeyButtonPressed)) ::UnityEngine::Events::UnityEvent_1<TBinding>*  OnKeyButtonPressed;

/// @brief Field characterString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_characterString, put=__cordl_internal_set_characterString)) ::StringW  characterString;

/// @brief Field functionKey, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_functionKey, put=__cordl_internal_set_functionKey)) bool  functionKey;

/// @brief Field lastTestClick, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTestClick, put=__cordl_internal_set_lastTestClick)) float_t  lastTestClick;

/// @brief Field linkedObjects, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkedObjects, put=__cordl_internal_set_linkedObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  linkedObjects;

/// @brief Field pressTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressTime, put=__cordl_internal_set_pressTime)) float_t  pressTime;

/// @brief Field propBlock, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_propBlock, put=__cordl_internal_set_propBlock)) ::UnityEngine::MaterialPropertyBlock*  propBlock;

/// @brief Field repeatCooldown, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatCooldown, put=__cordl_internal_set_repeatCooldown)) float_t  repeatCooldown;

/// @brief Field repeatTestClick, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_repeatTestClick, put=__cordl_internal_set_repeatTestClick)) bool  repeatTestClick;

/// @brief Field testClick, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_testClick, put=__cordl_internal_set_testClick)) bool  testClick;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Click, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Click(bool  leftHand) ;

static inline ::GlobalNamespace::GorillaKeyButton_1<TBinding>* New_ctor() ;

/// @brief Method OnButtonPressedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnButtonPressedEvent() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisableEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisableEvents() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnableEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnableEvents() ;

/// @brief Method OnTriggerEnter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method PressButton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PressButton(bool  isLeftHand) ;

/// @brief Method PressButtonColourUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PressButtonColourUpdate() ;

/// [IteratorStateMachine(typeof(GorillaKeyButton`1::<<PressButtonColourUpdate>g__ButtonColorUpdate_Local|21_0>d<TBinding>))]
/// [CompilerGenerated]
/// @brief Method <PressButtonColourUpdate>g__ButtonColorUpdate_Local|21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0() ;

constexpr TBinding const& __cordl_internal_get_Binding() const;

constexpr TBinding& __cordl_internal_get_Binding() ;

constexpr ::UnityW<::GorillaTag::ButtonColorSettings> const& __cordl_internal_get_ButtonColorSettings() const;

constexpr ::UnityW<::GorillaTag::ButtonColorSettings>& __cordl_internal_get_ButtonColorSettings() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_ButtonRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_ButtonRenderer() ;

constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>* const& __cordl_internal_get_OnKeyButtonPressed() const;

constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>*& __cordl_internal_get_OnKeyButtonPressed() ;

constexpr ::StringW const& __cordl_internal_get_characterString() const;

constexpr ::StringW& __cordl_internal_get_characterString() ;

constexpr bool const& __cordl_internal_get_functionKey() const;

constexpr bool& __cordl_internal_get_functionKey() ;

constexpr float_t const& __cordl_internal_get_lastTestClick() const;

constexpr float_t& __cordl_internal_get_lastTestClick() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_linkedObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_linkedObjects() ;

constexpr float_t const& __cordl_internal_get_pressTime() const;

constexpr float_t& __cordl_internal_get_pressTime() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_propBlock() ;

constexpr float_t const& __cordl_internal_get_repeatCooldown() const;

constexpr float_t& __cordl_internal_get_repeatCooldown() ;

constexpr bool const& __cordl_internal_get_repeatTestClick() const;

constexpr bool& __cordl_internal_get_repeatTestClick() ;

constexpr bool const& __cordl_internal_get_testClick() const;

constexpr bool& __cordl_internal_get_testClick() ;

constexpr void __cordl_internal_set_Binding(TBinding  value) ;

constexpr void __cordl_internal_set_ButtonColorSettings(::UnityW<::GorillaTag::ButtonColorSettings>  value) ;

constexpr void __cordl_internal_set_ButtonRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_OnKeyButtonPressed(::UnityEngine::Events::UnityEvent_1<TBinding>*  value) ;

constexpr void __cordl_internal_set_characterString(::StringW  value) ;

constexpr void __cordl_internal_set_functionKey(bool  value) ;

constexpr void __cordl_internal_set_lastTestClick(float_t  value) ;

constexpr void __cordl_internal_set_linkedObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_pressTime(float_t  value) ;

constexpr void __cordl_internal_set_propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_repeatCooldown(float_t  value) ;

constexpr void __cordl_internal_set_repeatTestClick(bool  value) ;

constexpr void __cordl_internal_set_testClick(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaKeyButton_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyButton_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaKeyButton_1(GorillaKeyButton_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyButton_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaKeyButton_1(GorillaKeyButton_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2604};

/// @brief Field characterString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___characterString;

/// @brief Field Binding, offset: 0x28, size: 0x8, def value: None
 TBinding  ___Binding;

/// @brief Field functionKey, offset: 0x30, size: 0x1, def value: None
 bool  ___functionKey;

/// @brief Field ButtonRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___ButtonRenderer;

/// @brief Field ButtonColorSettings, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTag::ButtonColorSettings>  ___ButtonColorSettings;

/// [Tooltip("These GameObjects will be Activated/Deactivated when this button is Activated/Deactivated")]
/// @brief Field linkedObjects, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___linkedObjects;

/// [Tooltip("Intended for use with GorillaKeyWrapper")]
/// @brief Field OnKeyButtonPressed, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<TBinding>*  ___OnKeyButtonPressed;

/// @brief Field testClick, offset: 0x58, size: 0x1, def value: None
 bool  ___testClick;

/// @brief Field repeatTestClick, offset: 0x59, size: 0x1, def value: None
 bool  ___repeatTestClick;

/// @brief Field repeatCooldown, offset: 0x5c, size: 0x4, def value: None
 float_t  ___repeatCooldown;

/// @brief Field pressTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___pressTime;

/// @brief Field lastTestClick, offset: 0x64, size: 0x4, def value: None
 float_t  ___lastTestClick;

/// @brief Field propBlock, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___propBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TBinding>
// Is value type: false
// CS Name: GorillaKeyButton`1/<<PressButtonColourUpdate>g__ButtonColorUpdate_Local|21_0>d<TBinding>
class CORDL_TYPE GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<TBinding>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d<TBinding>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<TBinding> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<TBinding>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<TBinding>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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
constexpr GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d(GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d(GorillaKeyButton_1___PressButtonColourUpdate_g__ButtonColorUpdate_Local_21_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2603};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<TBinding>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
