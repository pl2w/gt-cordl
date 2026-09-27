#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableColorVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableColorVisual)
namespace Oculus::Interaction {
class IInteractableView;
}
namespace Oculus::Interaction {
class InteractableColorVisual_ColorState;
}
namespace Oculus::Interaction {
class InteractableColorVisual__ChangeColor_d__25;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace Oculus::Interaction {
struct InteractableState;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
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
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractableColorVisual;
}
namespace Oculus::Interaction {
class InteractableColorVisual_ColorState;
}
namespace Oculus::Interaction {
class InteractableColorVisual__ChangeColor_d__25;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractableColorVisual*);
MARK_REF_T(::Oculus::Interaction::InteractableColorVisual_ColorState*);
MARK_REF_T(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableColorVisual*, "Oculus.Interaction", "InteractableColorVisual");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableColorVisual_ColorState*, "Oculus.Interaction", "InteractableColorVisual/ColorState");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25*, "Oculus.Interaction", "InteractableColorVisual/<ChangeColor>d__25");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableColorVisual
class CORDL_TYPE InteractableColorVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColorState = ::Oculus::Interaction::InteractableColorVisual_ColorState;

using _ChangeColor_d__25 = ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25;

 __declspec(property(get=get_InteractableView, put=set_InteractableView)) ::Oculus::Interaction::IInteractableView*  InteractableView;

/// @brief Field <InteractableView>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__InteractableView_k__BackingField, put=__cordl_internal_set__InteractableView_k__BackingField)) ::Oculus::Interaction::IInteractableView*  _InteractableView_k__BackingField;

/// @brief Field _colorShaderID, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__colorShaderID, put=__cordl_internal_set__colorShaderID)) int32_t  _colorShaderID;

/// @brief Field _colorShaderPropertyName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorShaderPropertyName, put=__cordl_internal_set__colorShaderPropertyName)) ::StringW  _colorShaderPropertyName;

/// @brief Field _currentColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentColor, put=__cordl_internal_set__currentColor)) ::UnityEngine::Color  _currentColor;

/// @brief Field _disabledColorState, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledColorState, put=__cordl_internal_set__disabledColorState)) ::Oculus::Interaction::InteractableColorVisual_ColorState*  _disabledColorState;

/// @brief Field _editor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__editor, put=__cordl_internal_set__editor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _editor;

/// @brief Field _hoverColorState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoverColorState, put=__cordl_internal_set__hoverColorState)) ::Oculus::Interaction::InteractableColorVisual_ColorState*  _hoverColorState;

/// @brief Field _interactableView, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableView, put=__cordl_internal_set__interactableView)) ::UnityW<::UnityEngine::Object>  _interactableView;

/// @brief Field _normalColorState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalColorState, put=__cordl_internal_set__normalColorState)) ::Oculus::Interaction::InteractableColorVisual_ColorState*  _normalColorState;

/// @brief Field _routine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__routine, put=__cordl_internal_set__routine)) ::UnityEngine::Coroutine*  _routine;

/// @brief Field _selectColorState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectColorState, put=__cordl_internal_set__selectColorState)) ::Oculus::Interaction::InteractableColorVisual_ColorState*  _selectColorState;

/// @brief Field _started, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _target, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::Oculus::Interaction::InteractableColorVisual_ColorState*  _target;

/// @brief Field _waiter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__waiter, put=setStaticF__waiter)) ::UnityEngine::YieldInstruction*  _waiter;

/// @brief Method Awake, addr 0xa47001c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelRoutine, addr 0xa470474, size 0x44, virtual false, abstract: false, final false
inline void CancelRoutine() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.InteractableColorVisual::<ChangeColor>d__25))]
/// @brief Method ChangeColor, addr 0xa4704b8, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ChangeColor(::Oculus::Interaction::InteractableColorVisual_ColorState*  targetState) ;

/// @brief Method ColorForState, addr 0xa47042c, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::InteractableColorVisual_ColorState* ColorForState(::Oculus::Interaction::InteractableState  state) ;

/// @brief Method InjectAllInteractableColorVisual, addr 0xa4705d0, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllInteractableColorVisual(::Oculus::Interaction::IInteractableView*  interactableView, ::Oculus::Interaction::MaterialPropertyBlockEditor*  editor) ;

/// @brief Method InjectInteractableView, addr 0xa4705fc, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractableView(::Oculus::Interaction::IInteractableView*  interactableview) ;

/// @brief Method InjectMaterialPropertyBlockEditor, addr 0xa4706cc, size 0x8, virtual false, abstract: false, final false
inline void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  editor) ;

/// @brief Method InjectOptionalColorShaderPropertyName, addr 0xa4706d4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalColorShaderPropertyName(::StringW  colorShaderPropertyName) ;

/// @brief Method InjectOptionalHoverColorState, addr 0xa4706e4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalHoverColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  hoverColorState) ;

/// @brief Method InjectOptionalNormalColorState, addr 0xa4706dc, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalNormalColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  normalColorState) ;

/// @brief Method InjectOptionalSelectColorState, addr 0xa4706ec, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalSelectColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  selectColorState) ;

static inline ::Oculus::Interaction::InteractableColorVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4701dc, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4700c0, size 0x11c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0xa470568, size 0x68, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Start, addr 0xa470074, size 0x4c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa4702e8, size 0x144, virtual true, abstract: false, final false
inline void UpdateVisual() ;

/// @brief Method UpdateVisualState, addr 0xa4702dc, size 0xc, virtual false, abstract: false, final false
inline void UpdateVisualState(::Oculus::Interaction::InteractableStateChangeArgs  args) ;

constexpr ::Oculus::Interaction::IInteractableView* const& __cordl_internal_get__InteractableView_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractableView*& __cordl_internal_get__InteractableView_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__colorShaderID() const;

constexpr int32_t& __cordl_internal_get__colorShaderID() ;

constexpr ::StringW const& __cordl_internal_get__colorShaderPropertyName() const;

constexpr ::StringW& __cordl_internal_get__colorShaderPropertyName() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentColor() ;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& __cordl_internal_get__disabledColorState() const;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& __cordl_internal_get__disabledColorState() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__editor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__editor() ;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& __cordl_internal_get__hoverColorState() const;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& __cordl_internal_get__hoverColorState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactableView() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactableView() ;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& __cordl_internal_get__normalColorState() const;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& __cordl_internal_get__normalColorState() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__routine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__routine() ;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& __cordl_internal_get__selectColorState() const;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& __cordl_internal_get__selectColorState() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& __cordl_internal_get__target() const;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__InteractableView_k__BackingField(::Oculus::Interaction::IInteractableView*  value) ;

constexpr void __cordl_internal_set__colorShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__colorShaderPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set__currentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__disabledColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value) ;

constexpr void __cordl_internal_set__editor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__hoverColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value) ;

constexpr void __cordl_internal_set__interactableView(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__normalColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value) ;

constexpr void __cordl_internal_set__routine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__selectColorState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__target(::Oculus::Interaction::InteractableColorVisual_ColorState*  value) ;

/// @brief Method .ctor, addr 0xa4706f4, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::YieldInstruction* getStaticF__waiter() ;

/// [CompilerGenerated]
/// @brief Method get_InteractableView, addr 0xa47000c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractableView* get_InteractableView() ;

static inline void setStaticF__waiter(::UnityEngine::YieldInstruction*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InteractableView, addr 0xa470014, size 0x8, virtual false, abstract: false, final false
inline void set_InteractableView(::Oculus::Interaction::IInteractableView*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableColorVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableColorVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableColorVisual(InteractableColorVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableColorVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableColorVisual(InteractableColorVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15928};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractableView), new[] {  })]
/// @brief Field _interactableView, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactableView;

/// [CompilerGenerated]
/// @brief Field <InteractableView>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractableView*  ____InteractableView_k__BackingField;

/// [SerializeField]
/// @brief Field _editor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____editor;

/// [SerializeField]
/// @brief Field _colorShaderPropertyName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____colorShaderPropertyName;

/// [SerializeField]
/// @brief Field _normalColorState, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::InteractableColorVisual_ColorState*  ____normalColorState;

/// [SerializeField]
/// @brief Field _hoverColorState, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::InteractableColorVisual_ColorState*  ____hoverColorState;

/// [SerializeField]
/// @brief Field _selectColorState, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::InteractableColorVisual_ColorState*  ____selectColorState;

/// [SerializeField]
/// @brief Field _disabledColorState, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::InteractableColorVisual_ColorState*  ____disabledColorState;

/// @brief Field _currentColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentColor;

/// @brief Field _target, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::InteractableColorVisual_ColorState*  ____target;

/// @brief Field _colorShaderID, offset: 0x78, size: 0x4, def value: None
 int32_t  ____colorShaderID;

/// @brief Field _routine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____routine;

/// @brief Field _started, offset: 0x88, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____interactableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____InteractableView_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____editor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____colorShaderPropertyName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____normalColorState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____hoverColorState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____selectColorState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____disabledColorState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____currentColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____target) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____colorShaderID) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____routine) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual, ____started) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableColorVisual) == 0x90, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Color
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableColorVisual/<ChangeColor>d__25
class CORDL_TYPE InteractableColorVisual__ChangeColor_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::InteractableColorVisual>  __4__this;

/// @brief Field <startColor>5__2, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__startColor_5__2, put=__cordl_internal_set__startColor_5__2)) ::UnityEngine::Color  _startColor_5__2;

/// @brief Field <timer>5__3, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__timer_5__3, put=__cordl_internal_set__timer_5__3)) float_t  _timer_5__3;

/// @brief Field targetState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetState, put=__cordl_internal_set_targetState)) ::Oculus::Interaction::InteractableColorVisual_ColorState*  targetState;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa470900, size 0x16c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa470a6c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa470a74, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa470aac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4708fc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::InteractableColorVisual> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::InteractableColorVisual>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor_5__2() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor_5__2() ;

constexpr float_t const& __cordl_internal_get__timer_5__3() const;

constexpr float_t& __cordl_internal_get__timer_5__3() ;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState* const& __cordl_internal_get_targetState() const;

constexpr ::Oculus::Interaction::InteractableColorVisual_ColorState*& __cordl_internal_get_targetState() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::InteractableColorVisual>  value) ;

constexpr void __cordl_internal_set__startColor_5__2(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__timer_5__3(float_t  value) ;

constexpr void __cordl_internal_set_targetState(::Oculus::Interaction::InteractableColorVisual_ColorState*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa470540, size 0x28, virtual false, abstract: false, final false
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
constexpr InteractableColorVisual__ChangeColor_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableColorVisual__ChangeColor_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableColorVisual__ChangeColor_d__25(InteractableColorVisual__ChangeColor_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableColorVisual__ChangeColor_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableColorVisual__ChangeColor_d__25(InteractableColorVisual__ChangeColor_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15927};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::InteractableColorVisual>  _____4__this;

/// @brief Field targetState, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::InteractableColorVisual_ColorState*  ___targetState;

/// @brief Field <startColor>5__2, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor_5__2;

/// @brief Field <timer>5__3, offset: 0x40, size: 0x4, def value: None
 float_t  ____timer_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25, ___targetState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25, ____startColor_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25, ____timer_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableColorVisual__ChangeColor_d__25) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object, UnityEngine.Color
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableColorVisual/ColorState
class CORDL_TYPE InteractableColorVisual_ColorState : public ::System::Object {
public:
// Declarations
/// @brief Field Color, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Color, put=__cordl_internal_set_Color)) ::UnityEngine::Color  Color;

/// @brief Field ColorCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ColorCurve, put=__cordl_internal_set_ColorCurve)) ::UnityEngine::AnimationCurve*  ColorCurve;

/// @brief Field ColorTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ColorTime, put=__cordl_internal_set_ColorTime)) float_t  ColorTime;

static inline ::Oculus::Interaction::InteractableColorVisual_ColorState* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_Color() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_ColorCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_ColorCurve() ;

constexpr float_t const& __cordl_internal_get_ColorTime() const;

constexpr float_t& __cordl_internal_get_ColorTime() ;

constexpr void __cordl_internal_set_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_ColorCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_ColorTime(float_t  value) ;

/// @brief Method .ctor, addr 0xa47082c, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableColorVisual_ColorState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableColorVisual_ColorState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableColorVisual_ColorState(InteractableColorVisual_ColorState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableColorVisual_ColorState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableColorVisual_ColorState(InteractableColorVisual_ColorState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15926};

/// @brief Field Color, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___Color;

/// @brief Field ColorCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___ColorCurve;

/// @brief Field ColorTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___ColorTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual_ColorState, ___Color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual_ColorState, ___ColorCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableColorVisual_ColorState, ___ColorTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableColorVisual_ColorState) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
