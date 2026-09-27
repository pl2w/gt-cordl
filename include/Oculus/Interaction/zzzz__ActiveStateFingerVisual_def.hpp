#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateFingerVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveStateFingerVisual)
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction {
class ActiveStateFingerVisual__UpdateGlowValue_d__22;
}
namespace Oculus::Interaction {
class IActiveState;
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
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ActiveStateFingerVisual;
}
namespace Oculus::Interaction {
class ActiveStateFingerVisual__UpdateGlowValue_d__22;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateFingerVisual*);
MARK_REF_T(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateFingerVisual*, "Oculus.Interaction", "ActiveStateFingerVisual");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22*, "Oculus.Interaction", "ActiveStateFingerVisual/<UpdateGlowValue>d__22");
// Dependencies Oculus.Interaction.Input.HandFingerFlags, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateFingerVisual
class CORDL_TYPE ActiveStateFingerVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateGlowValue_d__22 = ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22;

/// @brief Field ActiveState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

 __declspec(property(get=get_FingerGlowColor, put=set_FingerGlowColor)) ::UnityEngine::Color  FingerGlowColor;

 __declspec(property(get=get_FingersMask, put=set_FingersMask)) ::Oculus::Interaction::Input::HandFingerFlags  FingersMask;

 __declspec(property(get=get_GlowLerpSpeed, put=set_GlowLerpSpeed)) float_t  GlowLerpSpeed;

/// @brief Field _activeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _fingerGlowColor, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get__fingerGlowColor, put=__cordl_internal_set__fingerGlowColor)) ::UnityEngine::Color  _fingerGlowColor;

/// @brief Field _fingerGlowColorPropertyId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingerGlowColorPropertyId, put=__cordl_internal_set__fingerGlowColorPropertyId)) int32_t  _fingerGlowColorPropertyId;

/// @brief Field _fingersMask, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingersMask, put=__cordl_internal_set__fingersMask)) ::Oculus::Interaction::Input::HandFingerFlags  _fingersMask;

/// @brief Field _glowLerpSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowLerpSpeed, put=__cordl_internal_set__glowLerpSpeed)) float_t  _glowLerpSpeed;

/// @brief Field _handMaterialPropertyBlockEditor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handMaterialPropertyBlockEditor, put=__cordl_internal_set__handMaterialPropertyBlockEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _handMaterialPropertyBlockEditor;

/// @brief Field _handShaderGlowPropertyIds, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__handShaderGlowPropertyIds, put=__cordl_internal_set__handShaderGlowPropertyIds)) ::ArrayW<int32_t>  _handShaderGlowPropertyIds;

/// @brief Field _prevActive, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__prevActive, put=__cordl_internal_set__prevActive)) bool  _prevActive;

/// @brief Field _started, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa45346c, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectActiveState, addr 0xa453810, size 0xcc, virtual false, abstract: false, final false
inline void InjectActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectAllActiveStateFingerVisual, addr 0xa4537e4, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllActiveStateFingerVisual(::Oculus::Interaction::IActiveState*  activeState, ::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor) ;

/// @brief Method InjectHandMaterialPropertyBlockEditor, addr 0xa4538dc, size 0x8, virtual false, abstract: false, final false
inline void InjectHandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  handMaterialPropertyBlockEditor) ;

static inline ::Oculus::Interaction::ActiveStateFingerVisual* New_ctor() ;

/// @brief Method Start, addr 0xa4534d4, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa453500, size 0x230, virtual false, abstract: false, final false
inline void Update() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.ActiveStateFingerVisual::<UpdateGlowValue>d__22))]
/// @brief Method UpdateGlowValue, addr 0xa453730, size 0x8c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateGlowValue(int32_t  fingerIndex, float_t  targetGlow) ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__fingerGlowColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__fingerGlowColor() ;

constexpr int32_t const& __cordl_internal_get__fingerGlowColorPropertyId() const;

constexpr int32_t& __cordl_internal_get__fingerGlowColorPropertyId() ;

constexpr ::Oculus::Interaction::Input::HandFingerFlags const& __cordl_internal_get__fingersMask() const;

constexpr ::Oculus::Interaction::Input::HandFingerFlags& __cordl_internal_get__fingersMask() ;

constexpr float_t const& __cordl_internal_get__glowLerpSpeed() const;

constexpr float_t& __cordl_internal_get__glowLerpSpeed() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__handMaterialPropertyBlockEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__handMaterialPropertyBlockEditor() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__handShaderGlowPropertyIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__handShaderGlowPropertyIds() ;

constexpr bool const& __cordl_internal_get__prevActive() const;

constexpr bool& __cordl_internal_get__prevActive() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__fingerGlowColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fingerGlowColorPropertyId(int32_t  value) ;

constexpr void __cordl_internal_set__fingersMask(::Oculus::Interaction::Input::HandFingerFlags  value) ;

constexpr void __cordl_internal_set__glowLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set__handMaterialPropertyBlockEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__handShaderGlowPropertyIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__prevActive(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4538e4, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FingerGlowColor, addr 0xa453454, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_FingerGlowColor() ;

/// @brief Method get_FingersMask, addr 0xa453434, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandFingerFlags get_FingersMask() ;

/// @brief Method get_GlowLerpSpeed, addr 0xa453444, size 0x8, virtual false, abstract: false, final false
inline float_t get_GlowLerpSpeed() ;

/// @brief Method set_FingerGlowColor, addr 0xa453460, size 0xc, virtual false, abstract: false, final false
inline void set_FingerGlowColor(::UnityEngine::Color  value) ;

/// @brief Method set_FingersMask, addr 0xa45343c, size 0x8, virtual false, abstract: false, final false
inline void set_FingersMask(::Oculus::Interaction::Input::HandFingerFlags  value) ;

/// @brief Method set_GlowLerpSpeed, addr 0xa45344c, size 0x8, virtual false, abstract: false, final false
inline void set_GlowLerpSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateFingerVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateFingerVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateFingerVisual(ActiveStateFingerVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateFingerVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateFingerVisual(ActiveStateFingerVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15847};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

/// [SerializeField]
/// @brief Field _fingersMask, offset: 0x30, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFingerFlags  ____fingersMask;

/// [SerializeField]
/// @brief Field _handMaterialPropertyBlockEditor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____handMaterialPropertyBlockEditor;

/// [SerializeField]
/// @brief Field _glowLerpSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____glowLerpSpeed;

/// [SerializeField]
/// @brief Field _fingerGlowColor, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  ____fingerGlowColor;

/// @brief Field _handShaderGlowPropertyIds, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____handShaderGlowPropertyIds;

/// @brief Field _fingerGlowColorPropertyId, offset: 0x60, size: 0x4, def value: None
 int32_t  ____fingerGlowColorPropertyId;

/// @brief Field _prevActive, offset: 0x64, size: 0x1, def value: None
 bool  ____prevActive;

/// @brief Field _started, offset: 0x65, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____activeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ___ActiveState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____fingersMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____handMaterialPropertyBlockEditor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____glowLerpSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____fingerGlowColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____handShaderGlowPropertyIds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____fingerGlowColorPropertyId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____prevActive) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual, ____started) == 0x65, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateFingerVisual) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateFingerVisual/<UpdateGlowValue>d__22
class CORDL_TYPE ActiveStateFingerVisual__UpdateGlowValue_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::ActiveStateFingerVisual>  __4__this;

/// @brief Field <currentGlow>5__4, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentGlow_5__4, put=__cordl_internal_set__currentGlow_5__4)) float_t  _currentGlow_5__4;

/// @brief Field <startGlow>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startGlow_5__2, put=__cordl_internal_set__startGlow_5__2)) float_t  _startGlow_5__2;

/// @brief Field <startTime>5__3, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__3, put=__cordl_internal_set__startTime_5__3)) float_t  _startTime_5__3;

/// @brief Field fingerIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fingerIndex, put=__cordl_internal_set_fingerIndex)) int32_t  fingerIndex;

/// @brief Field targetGlow, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetGlow, put=__cordl_internal_set_targetGlow)) float_t  targetGlow;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa453a94, size 0x160, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa453bf4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa453bfc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa453c34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa453a90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::ActiveStateFingerVisual> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::ActiveStateFingerVisual>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__currentGlow_5__4() const;

constexpr float_t& __cordl_internal_get__currentGlow_5__4() ;

constexpr float_t const& __cordl_internal_get__startGlow_5__2() const;

constexpr float_t& __cordl_internal_get__startGlow_5__2() ;

constexpr float_t const& __cordl_internal_get__startTime_5__3() const;

constexpr float_t& __cordl_internal_get__startTime_5__3() ;

constexpr int32_t const& __cordl_internal_get_fingerIndex() const;

constexpr int32_t& __cordl_internal_get_fingerIndex() ;

constexpr float_t const& __cordl_internal_get_targetGlow() const;

constexpr float_t& __cordl_internal_get_targetGlow() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::ActiveStateFingerVisual>  value) ;

constexpr void __cordl_internal_set__currentGlow_5__4(float_t  value) ;

constexpr void __cordl_internal_set__startGlow_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startTime_5__3(float_t  value) ;

constexpr void __cordl_internal_set_fingerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_targetGlow(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4537bc, size 0x28, virtual false, abstract: false, final false
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
constexpr ActiveStateFingerVisual__UpdateGlowValue_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateFingerVisual__UpdateGlowValue_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateFingerVisual__UpdateGlowValue_d__22(ActiveStateFingerVisual__UpdateGlowValue_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateFingerVisual__UpdateGlowValue_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateFingerVisual__UpdateGlowValue_d__22(ActiveStateFingerVisual__UpdateGlowValue_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15846};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::ActiveStateFingerVisual>  _____4__this;

/// @brief Field fingerIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___fingerIndex;

/// @brief Field targetGlow, offset: 0x2c, size: 0x4, def value: None
 float_t  ___targetGlow;

/// @brief Field <startGlow>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____startGlow_5__2;

/// @brief Field <startTime>5__3, offset: 0x34, size: 0x4, def value: None
 float_t  ____startTime_5__3;

/// @brief Field <currentGlow>5__4, offset: 0x38, size: 0x4, def value: None
 float_t  ____currentGlow_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, ___fingerIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, ___targetGlow) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, ____startGlow_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, ____startTime_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22, ____currentGlow_5__4) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateFingerVisual__UpdateGlowValue_d__22) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
