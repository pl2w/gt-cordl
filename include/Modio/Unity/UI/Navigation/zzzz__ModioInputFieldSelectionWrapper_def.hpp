#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioInputFieldSelectionWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioInputFieldSelectionWrapper)
namespace GlobalNamespace {
struct ModioInputFieldSelectionWrapper___Awake_g__DelayPopFocusSuppression_6_3_d;
}
namespace Modio::Unity::UI::Navigation {
class ModioInputFieldSelectionWrapper__Animate_d__11;
}
namespace Modio::Unity::UI::Navigation {
class ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::UI {
class LayoutElement;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Navigation {
class ModioInputFieldSelectionWrapper;
}
namespace Modio::Unity::UI::Navigation {
class ModioInputFieldSelectionWrapper__Animate_d__11;
}
namespace Modio::Unity::UI::Navigation {
class ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper*);
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11*);
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper*, "Modio.Unity.UI.Navigation", "ModioInputFieldSelectionWrapper");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11*, "Modio.Unity.UI.Navigation", "ModioInputFieldSelectionWrapper/<Animate>d__11");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17*, "Modio.Unity.UI.Navigation", "ModioInputFieldSelectionWrapper/<SelectChildDelayed>d__17");
// Dependencies UnityEngine.UI.Selectable
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioInputFieldSelectionWrapper
class CORDL_TYPE ModioInputFieldSelectionWrapper : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using __Awake_g__DelayPopFocusSuppression_6_3_d = ::GlobalNamespace::ModioInputFieldSelectionWrapper___Awake_g__DelayPopFocusSuppression_6_3_d;

using _Animate_d__11 = ::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11;

using _SelectChildDelayed_d__17 = ::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17;

/// @brief Field _animateSelectionWidth, offset 0x112, size 0x1 
 __declspec(property(get=__cordl_internal_get__animateSelectionWidth, put=__cordl_internal_set__animateSelectionWidth)) bool  _animateSelectionWidth;

/// @brief Field _disableWhenCollapsed, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableWhenCollapsed, put=__cordl_internal_set__disableWhenCollapsed)) ::UnityW<::UnityEngine::GameObject>  _disableWhenCollapsed;

/// @brief Field _inputField, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputField, put=__cordl_internal_set__inputField)) ::UnityW<::TMPro::TMP_InputField>  _inputField;

/// @brief Field _isExpanded, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__isExpanded, put=__cordl_internal_set__isExpanded)) bool  _isExpanded;

/// @brief Field _keepFocusOnSubmit, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get__keepFocusOnSubmit, put=__cordl_internal_set__keepFocusOnSubmit)) bool  _keepFocusOnSubmit;

/// @brief Field _layoutElement, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__layoutElement, put=__cordl_internal_set__layoutElement)) ::UnityW<::UnityEngine::UI::LayoutElement>  _layoutElement;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

/// [IteratorStateMachine(typeof(Modio.Unity.UI.Navigation.ModioInputFieldSelectionWrapper::<Animate>d__11))]
/// @brief Method Animate, addr 0x9fb3024, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Animate(bool  hasFocus) ;

/// @brief Method Awake, addr 0x9fb2998, size 0x294, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper* New_ctor() ;

/// @brief Method OnDeselect, addr 0x9fb30d4, size 0x8, virtual true, abstract: false, final false
inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnDestroy, addr 0x9fb2c2c, size 0xb0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEndEdit, addr 0x9fb2cdc, size 0x150, virtual false, abstract: false, final false
inline void OnEndEdit(::StringW  s) ;

/// @brief Method OnPressedCancel, addr 0x9fb2e2c, size 0xe8, virtual false, abstract: false, final false
inline void OnPressedCancel() ;

/// @brief Method OnSelect, addr 0x9fb30cc, size 0x8, virtual true, abstract: false, final false
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnSubmit, addr 0x9fb30dc, size 0x20, virtual true, abstract: false, final true
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// [IteratorStateMachine(typeof(Modio.Unity.UI.Navigation.ModioInputFieldSelectionWrapper::<SelectChildDelayed>d__17))]
/// @brief Method SelectChildDelayed, addr 0x9fb30fc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SelectChildDelayed() ;

/// @brief Method SelectInputField, addr 0x9fa4430, size 0x20, virtual false, abstract: false, final false
inline void SelectInputField() ;

/// @brief Method UpdateAnimation, addr 0x9fb2fac, size 0x78, virtual false, abstract: false, final false
inline void UpdateAnimation(bool  gainingFocus) ;

/// @brief Method UpdateSelectedVisuals, addr 0x9fb2f14, size 0x98, virtual false, abstract: false, final false
inline void UpdateSelectedVisuals(bool  selected) ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__6_0, addr 0x9fb31e8, size 0xc0, virtual false, abstract: false, final false
inline void _Awake_b__6_0(::StringW  s) ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__6_1, addr 0x9fb32a8, size 0x14, virtual false, abstract: false, final false
inline void _Awake_b__6_1(::StringW  s) ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__6_2, addr 0x9fb3394, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__6_2(::StringW  s) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Navigation.ModioInputFieldSelectionWrapper::<<Awake>g__DelayPopFocusSuppression|6_3>d))]
/// [CompilerGenerated]
/// @brief Method <Awake>g__DelayPopFocusSuppression|6_3, addr 0x9fb32bc, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _Awake_g__DelayPopFocusSuppression_6_3() ;

constexpr bool const& __cordl_internal_get__animateSelectionWidth() const;

constexpr bool& __cordl_internal_get__animateSelectionWidth() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__disableWhenCollapsed() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__disableWhenCollapsed() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__inputField() ;

constexpr bool const& __cordl_internal_get__isExpanded() const;

constexpr bool& __cordl_internal_get__isExpanded() ;

constexpr bool const& __cordl_internal_get__keepFocusOnSubmit() const;

constexpr bool& __cordl_internal_get__keepFocusOnSubmit() ;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement> const& __cordl_internal_get__layoutElement() const;

constexpr ::UnityW<::UnityEngine::UI::LayoutElement>& __cordl_internal_get__layoutElement() ;

constexpr void __cordl_internal_set__animateSelectionWidth(bool  value) ;

constexpr void __cordl_internal_set__disableWhenCollapsed(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__isExpanded(bool  value) ;

constexpr void __cordl_internal_set__keepFocusOnSubmit(bool  value) ;

constexpr void __cordl_internal_set__layoutElement(::UnityW<::UnityEngine::UI::LayoutElement>  value) ;

/// @brief Method .ctor, addr 0x9fb3190, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioInputFieldSelectionWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioInputFieldSelectionWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioInputFieldSelectionWrapper(ModioInputFieldSelectionWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioInputFieldSelectionWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioInputFieldSelectionWrapper(ModioInputFieldSelectionWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27117};

/// @brief Field _inputField, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____inputField;

/// @brief Field _layoutElement, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::LayoutElement>  ____layoutElement;

/// @brief Field _isExpanded, offset: 0x110, size: 0x1, def value: None
 bool  ____isExpanded;

/// [SerializeField]
/// @brief Field _keepFocusOnSubmit, offset: 0x111, size: 0x1, def value: None
 bool  ____keepFocusOnSubmit;

/// [SerializeField]
/// @brief Field _animateSelectionWidth, offset: 0x112, size: 0x1, def value: None
 bool  ____animateSelectionWidth;

/// [SerializeField]
/// @brief Field _disableWhenCollapsed, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____disableWhenCollapsed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper, ____inputField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper, ____layoutElement) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper, ____isExpanded) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper, ____keepFocusOnSubmit) == 0x111, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper, ____animateSelectionWidth) == 0x112, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper, ____disableWhenCollapsed) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper) == 0x120, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioInputFieldSelectionWrapper/<SelectChildDelayed>d__17
class CORDL_TYPE ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9fb3978, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9fb3a34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9fb3a3c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9fb3a74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9fb3974, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9fb3168, size 0x28, virtual false, abstract: false, final false
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
constexpr ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17(ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17(ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27116};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__SelectChildDelayed_d__17) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioInputFieldSelectionWrapper/<Animate>d__11
class CORDL_TYPE ModioInputFieldSelectionWrapper__Animate_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  __4__this;

/// @brief Field <duration>5__4, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration_5__4, put=__cordl_internal_set__duration_5__4)) float_t  _duration_5__4;

/// @brief Field <startWidth>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startWidth_5__2, put=__cordl_internal_set__startWidth_5__2)) float_t  _startWidth_5__2;

/// @brief Field <t>5__5, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__t_5__5, put=__cordl_internal_set__t_5__5)) float_t  _t_5__5;

/// @brief Field <targetWidth>5__3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetWidth_5__3, put=__cordl_internal_set__targetWidth_5__3)) int32_t  _targetWidth_5__3;

/// @brief Field hasFocus, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFocus, put=__cordl_internal_set_hasFocus)) bool  hasFocus;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9fb3724, size 0x208, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9fb392c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9fb3934, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9fb396c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9fb3720, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__duration_5__4() const;

constexpr float_t& __cordl_internal_get__duration_5__4() ;

constexpr float_t const& __cordl_internal_get__startWidth_5__2() const;

constexpr float_t& __cordl_internal_get__startWidth_5__2() ;

constexpr float_t const& __cordl_internal_get__t_5__5() const;

constexpr float_t& __cordl_internal_get__t_5__5() ;

constexpr int32_t const& __cordl_internal_get__targetWidth_5__3() const;

constexpr int32_t& __cordl_internal_get__targetWidth_5__3() ;

constexpr bool const& __cordl_internal_get_hasFocus() const;

constexpr bool& __cordl_internal_get_hasFocus() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  value) ;

constexpr void __cordl_internal_set__duration_5__4(float_t  value) ;

constexpr void __cordl_internal_set__startWidth_5__2(float_t  value) ;

constexpr void __cordl_internal_set__t_5__5(float_t  value) ;

constexpr void __cordl_internal_set__targetWidth_5__3(int32_t  value) ;

constexpr void __cordl_internal_set_hasFocus(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9fb30a4, size 0x28, virtual false, abstract: false, final false
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
constexpr ModioInputFieldSelectionWrapper__Animate_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioInputFieldSelectionWrapper__Animate_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioInputFieldSelectionWrapper__Animate_d__11(ModioInputFieldSelectionWrapper__Animate_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioInputFieldSelectionWrapper__Animate_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioInputFieldSelectionWrapper__Animate_d__11(ModioInputFieldSelectionWrapper__Animate_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27115};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  _____4__this;

/// @brief Field hasFocus, offset: 0x28, size: 0x1, def value: None
 bool  ___hasFocus;

/// @brief Field <startWidth>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____startWidth_5__2;

/// @brief Field <targetWidth>5__3, offset: 0x30, size: 0x4, def value: None
 int32_t  ____targetWidth_5__3;

/// @brief Field <duration>5__4, offset: 0x34, size: 0x4, def value: None
 float_t  ____duration_5__4;

/// @brief Field <t>5__5, offset: 0x38, size: 0x4, def value: None
 float_t  ____t_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, ___hasFocus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, ____startWidth_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, ____targetWidth_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, ____duration_5__4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11, ____t_5__5) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper__Animate_d__11) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
