#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/Transitions/SelectableTransitionColorTint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectableTransitionColorTint)
namespace GlobalNamespace {
struct IModioUISelectable_SelectionState;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class ISelectableTransition;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class SelectableTransitionColorTint__CrossFadeColor_d__4;
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
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class SelectableTransitionColorTint;
}
namespace Modio::Unity::UI::Components::Selectables::Transitions {
class SelectableTransitionColorTint__CrossFadeColor_d__4;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*);
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*, "Modio.Unity.UI.Components.Selectables.Transitions", "SelectableTransitionColorTint");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4*, "Modio.Unity.UI.Components.Selectables.Transitions", "SelectableTransitionColorTint/<CrossFadeColor>d__4");
// Dependencies System.Object, UnityEngine.UI.ColorBlock
namespace Modio::Unity::UI::Components::Selectables::Transitions {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.Transitions.SelectableTransitionColorTint
class CORDL_TYPE SelectableTransitionColorTint : public ::System::Object {
public:
// Declarations
using _CrossFadeColor_d__4 = ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4;

/// @brief Field _colorBlock, offset 0x18, size 0x58 
 __declspec(property(get=__cordl_internal_get__colorBlock, put=__cordl_internal_set__colorBlock)) ::UnityEngine::UI::ColorBlock  _colorBlock;

/// @brief Field _coroutine, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutine, put=__cordl_internal_set__coroutine)) ::UnityEngine::Coroutine*  _coroutine;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::UI::Graphic>  _target;

/// @brief Convert operator to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr operator  ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition*() noexcept;

/// [IteratorStateMachine(typeof(Modio.Unity.UI.Components.Selectables.Transitions.SelectableTransitionColorTint::<CrossFadeColor>d__4))]
/// @brief Method CrossFadeColor, addr 0x9fc359c, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CrossFadeColor(::UnityEngine::Color  targetColor, float_t  duration) ;

static inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint* New_ctor() ;

/// @brief Method OnSelectionStateChanged, addr 0x9fc3300, size 0x29c, virtual true, abstract: false, final true
inline void OnSelectionStateChanged(::GlobalNamespace::IModioUISelectable_SelectionState  state, bool  instant) ;

constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get__colorBlock() const;

constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get__colorBlock() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__coroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__coroutine() ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__colorBlock(::UnityEngine::UI::ColorBlock  value) ;

constexpr void __cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::UI::Graphic>  value) ;

/// @brief Method .ctor, addr 0x9fc3668, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition"
constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::ISelectableTransition* i___Modio__Unity__UI__Components__Selectables__Transitions__ISelectableTransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectableTransitionColorTint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionColorTint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableTransitionColorTint(SelectableTransitionColorTint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionColorTint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableTransitionColorTint(SelectableTransitionColorTint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27196};

/// [SerializeField]
/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ____target;

/// [SerializeField]
/// @brief Field _colorBlock, offset: 0x18, size: 0x58, def value: None
 ::UnityEngine::UI::ColorBlock  ____colorBlock;

/// @brief Field _coroutine, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____coroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint, ____colorBlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint, ____coroutine) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint) == 0x78, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables::Transitions
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Color
namespace Modio::Unity::UI::Components::Selectables::Transitions {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.Transitions.SelectableTransitionColorTint/<CrossFadeColor>d__4
class CORDL_TYPE SelectableTransitionColorTint__CrossFadeColor_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*  __4__this;

/// @brief Field <startColor>5__2, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__startColor_5__2, put=__cordl_internal_set__startColor_5__2)) ::UnityEngine::Color  _startColor_5__2;

/// @brief Field <t>5__3, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__t_5__3, put=__cordl_internal_set__t_5__3)) float_t  _t_5__3;

/// @brief Field duration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field targetColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetColor, put=__cordl_internal_set_targetColor)) ::UnityEngine::Color  targetColor;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9fc36d8, size 0x148, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9fc3820, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9fc3828, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9fc3860, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9fc36d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint* const& __cordl_internal_get___4__this() const;

constexpr ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor_5__2() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor_5__2() ;

constexpr float_t const& __cordl_internal_get__t_5__3() const;

constexpr float_t& __cordl_internal_get__t_5__3() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_targetColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_targetColor() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*  value) ;

constexpr void __cordl_internal_set__startColor_5__2(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__t_5__3(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_targetColor(::UnityEngine::Color  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9fc3640, size 0x28, virtual false, abstract: false, final false
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
constexpr SelectableTransitionColorTint__CrossFadeColor_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionColorTint__CrossFadeColor_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectableTransitionColorTint__CrossFadeColor_d__4(SelectableTransitionColorTint__CrossFadeColor_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectableTransitionColorTint__CrossFadeColor_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectableTransitionColorTint__CrossFadeColor_d__4(SelectableTransitionColorTint__CrossFadeColor_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27195};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint*  _____4__this;

/// @brief Field targetColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___targetColor;

/// @brief Field duration, offset: 0x38, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <startColor>5__2, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor_5__2;

/// @brief Field <t>5__3, offset: 0x4c, size: 0x4, def value: None
 float_t  ____t_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4, ___targetColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4, ___duration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4, ____startColor_5__2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4, ____t_5__3) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::Transitions::SelectableTransitionColorTint__CrossFadeColor_d__4) == 0x50, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables::Transitions
