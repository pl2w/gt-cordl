#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioViewportRestraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioViewportRestraint)
namespace Modio::Unity::UI::Navigation {
class ModioViewportRestraint__Transition_d__12;
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
class Coroutine;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Modio::Unity::UI::Navigation {
class ModioViewportRestraint;
}
namespace Modio::Unity::UI::Navigation {
class ModioViewportRestraint__Transition_d__12;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioViewportRestraint*);
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioViewportRestraint*, "Modio.Unity.UI.Navigation", "ModioViewportRestraint");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*, "Modio.Unity.UI.Navigation", "ModioViewportRestraint/<Transition>d__12");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioViewportRestraint
class CORDL_TYPE ModioViewportRestraint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Transition_d__12 = ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12;

/// @brief Field CachedFourCornersArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CachedFourCornersArray, put=setStaticF_CachedFourCornersArray)) ::ArrayW<::UnityEngine::Vector3>  CachedFourCornersArray;

/// @brief Field DefaultViewportContainer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultViewportContainer, put=__cordl_internal_set_DefaultViewportContainer)) ::UnityW<::UnityEngine::RectTransform>  DefaultViewportContainer;

/// @brief Field HorizontalViewportContainer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_HorizontalViewportContainer, put=__cordl_internal_set_HorizontalViewportContainer)) ::UnityW<::UnityEngine::RectTransform>  HorizontalViewportContainer;

/// @brief Field PercentPaddingHorizontal, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PercentPaddingHorizontal, put=__cordl_internal_set_PercentPaddingHorizontal)) float_t  PercentPaddingHorizontal;

/// @brief Field PercentPaddingVertical, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_PercentPaddingVertical, put=__cordl_internal_set_PercentPaddingVertical)) float_t  PercentPaddingVertical;

/// @brief Field Viewport, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Viewport, put=__cordl_internal_set_Viewport)) ::UnityW<::UnityEngine::RectTransform>  Viewport;

/// @brief Field _animCoroutine, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__animCoroutine, put=__cordl_internal_set__animCoroutine)) ::UnityEngine::Coroutine*  _animCoroutine;

/// @brief Field _targetPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Field adjustHorizontally, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_adjustHorizontally, put=__cordl_internal_set_adjustHorizontally)) bool  adjustHorizontally;

/// @brief Field adjustVertically, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_adjustVertically, put=__cordl_internal_set_adjustVertically)) bool  adjustVertically;

/// @brief Field transitionTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_transitionTime, put=setStaticF_transitionTime)) float_t  transitionTime;

/// @brief Method ChildSelected, addr 0x9fb3bf4, size 0x224, virtual false, abstract: false, final false
inline void ChildSelected(::UnityEngine::RectTransform*  ensureFits) ;

static inline ::Modio::Unity::UI::Navigation::ModioViewportRestraint* New_ctor() ;

/// [IteratorStateMachine(typeof(Modio.Unity.UI.Navigation.ModioViewportRestraint::<Transition>d__12))]
/// @brief Method Transition, addr 0x9fb3fa8, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Transition(::UnityEngine::Transform*  parent) ;

/// [CompilerGenerated]
/// @brief Method <ChildSelected>g__GetWorldAABB|11_0, addr 0x9fb3e18, size 0x190, virtual false, abstract: false, final false
static inline void _ChildSelected_g__GetWorldAABB_11_0(::UnityEngine::RectTransform*  rectTransform, ::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_DefaultViewportContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_DefaultViewportContainer() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_HorizontalViewportContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_HorizontalViewportContainer() ;

constexpr float_t const& __cordl_internal_get_PercentPaddingHorizontal() const;

constexpr float_t& __cordl_internal_get_PercentPaddingHorizontal() ;

constexpr float_t const& __cordl_internal_get_PercentPaddingVertical() const;

constexpr float_t& __cordl_internal_get_PercentPaddingVertical() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_Viewport() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_Viewport() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__animCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__animCoroutine() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr bool const& __cordl_internal_get_adjustHorizontally() const;

constexpr bool& __cordl_internal_get_adjustHorizontally() ;

constexpr bool const& __cordl_internal_get_adjustVertically() const;

constexpr bool& __cordl_internal_get_adjustVertically() ;

constexpr void __cordl_internal_set_DefaultViewportContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_HorizontalViewportContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_PercentPaddingHorizontal(float_t  value) ;

constexpr void __cordl_internal_set_PercentPaddingVertical(float_t  value) ;

constexpr void __cordl_internal_set_Viewport(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__animCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_adjustHorizontally(bool  value) ;

constexpr void __cordl_internal_set_adjustVertically(bool  value) ;

/// @brief Method .ctor, addr 0x9fb4058, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_CachedFourCornersArray() ;

static inline float_t getStaticF_transitionTime() ;

static inline void setStaticF_CachedFourCornersArray(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF_transitionTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioViewportRestraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioViewportRestraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioViewportRestraint(ModioViewportRestraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioViewportRestraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioViewportRestraint(ModioViewportRestraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27120};

/// @brief Field PercentPaddingHorizontal, offset: 0x20, size: 0x4, def value: None
 float_t  ___PercentPaddingHorizontal;

/// @brief Field PercentPaddingVertical, offset: 0x24, size: 0x4, def value: None
 float_t  ___PercentPaddingVertical;

/// @brief Field adjustHorizontally, offset: 0x28, size: 0x1, def value: None
 bool  ___adjustHorizontally;

/// @brief Field adjustVertically, offset: 0x29, size: 0x1, def value: None
 bool  ___adjustVertically;

/// @brief Field Viewport, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___Viewport;

/// @brief Field DefaultViewportContainer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___DefaultViewportContainer;

/// @brief Field HorizontalViewportContainer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___HorizontalViewportContainer;

/// @brief Field _targetPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _animCoroutine, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____animCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ___PercentPaddingHorizontal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ___PercentPaddingVertical) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ___adjustHorizontally) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ___adjustVertically) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ___Viewport) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ___DefaultViewportContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ___HorizontalViewportContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ____targetPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint, ____animCoroutine) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioViewportRestraint) == 0x60, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector2
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioViewportRestraint/<Transition>d__12
class CORDL_TYPE ModioViewportRestraint__Transition_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  __4__this;

/// @brief Field <startPos>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__startPos_5__2, put=__cordl_internal_set__startPos_5__2)) ::UnityEngine::Vector2  _startPos_5__2;

/// @brief Field <t>5__3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__t_5__3, put=__cordl_internal_set__t_5__3)) float_t  _t_5__3;

/// @brief Field parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9fb40fc, size 0x190, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9fb428c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9fb4294, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9fb42cc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9fb40f8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__startPos_5__2() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__startPos_5__2() ;

constexpr float_t const& __cordl_internal_get__t_5__3() const;

constexpr float_t& __cordl_internal_get__t_5__3() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  value) ;

constexpr void __cordl_internal_set__startPos_5__2(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__t_5__3(float_t  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9fb4030, size 0x28, virtual false, abstract: false, final false
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
constexpr ModioViewportRestraint__Transition_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioViewportRestraint__Transition_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioViewportRestraint__Transition_d__12(ModioViewportRestraint__Transition_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioViewportRestraint__Transition_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioViewportRestraint__Transition_d__12(ModioViewportRestraint__Transition_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27119};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field parent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parent;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  _____4__this;

/// @brief Field <startPos>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____startPos_5__2;

/// @brief Field <t>5__3, offset: 0x38, size: 0x4, def value: None
 float_t  ____t_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12, ___parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12, ____startPos_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12, ____t_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
