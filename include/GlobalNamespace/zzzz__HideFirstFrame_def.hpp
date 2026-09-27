#pragma once
// IWYU pragma private; include "GlobalNamespace/HideFirstFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HideFirstFrame)
namespace GlobalNamespace {
class HideFirstFrame__Start_d__4;
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
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class HideFirstFrame;
}
namespace GlobalNamespace {
class HideFirstFrame__Start_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HideFirstFrame*);
MARK_REF_T(::GlobalNamespace::HideFirstFrame__Start_d__4*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HideFirstFrame*, "", "HideFirstFrame");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HideFirstFrame__Start_d__4*, "", "HideFirstFrame/<Start>d__4");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HideFirstFrame
class CORDL_TYPE HideFirstFrame : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__4 = ::GlobalNamespace::HideFirstFrame__Start_d__4;

/// @brief Field _cam, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cam, put=__cordl_internal_set__cam)) ::UnityW<::UnityEngine::Camera>  _cam;

/// @brief Field _farClipPlane, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__farClipPlane, put=__cordl_internal_set__farClipPlane)) float_t  _farClipPlane;

/// @brief Field _frameDelay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameDelay, put=__cordl_internal_set__frameDelay)) int32_t  _frameDelay;

/// @brief Method Awake, addr 0x55ebde0, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::HideFirstFrame* New_ctor() ;

/// [IteratorStateMachine(typeof(HideFirstFrame::<Start>d__4))]
/// @brief Method Start, addr 0x55ebe80, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__cam() ;

constexpr float_t const& __cordl_internal_get__farClipPlane() const;

constexpr float_t& __cordl_internal_get__farClipPlane() ;

constexpr int32_t const& __cordl_internal_get__frameDelay() const;

constexpr int32_t& __cordl_internal_get__frameDelay() ;

constexpr void __cordl_internal_set__cam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__farClipPlane(float_t  value) ;

constexpr void __cordl_internal_set__frameDelay(int32_t  value) ;

/// @brief Method .ctor, addr 0x55ebf14, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HideFirstFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideFirstFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HideFirstFrame(HideFirstFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideFirstFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideFirstFrame(HideFirstFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{47};

/// [SerializeField]
/// @brief Field _frameDelay, offset: 0x20, size: 0x4, def value: None
 int32_t  ____frameDelay;

/// @brief Field _cam, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____cam;

/// @brief Field _farClipPlane, offset: 0x30, size: 0x4, def value: None
 float_t  ____farClipPlane;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HideFirstFrame, ____frameDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HideFirstFrame, ____cam) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HideFirstFrame, ____farClipPlane) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HideFirstFrame) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HideFirstFrame/<Start>d__4
class CORDL_TYPE HideFirstFrame__Start_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HideFirstFrame>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55ebf28, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::HideFirstFrame__Start_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55ebfb8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55ebfc0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55ebff8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55ebf24, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HideFirstFrame> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HideFirstFrame>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HideFirstFrame>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55ebeec, size 0x28, virtual false, abstract: false, final false
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
constexpr HideFirstFrame__Start_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideFirstFrame__Start_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HideFirstFrame__Start_d__4(HideFirstFrame__Start_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideFirstFrame__Start_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideFirstFrame__Start_d__4(HideFirstFrame__Start_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{46};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HideFirstFrame>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HideFirstFrame__Start_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HideFirstFrame__Start_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HideFirstFrame__Start_d__4, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HideFirstFrame__Start_d__4, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HideFirstFrame__Start_d__4) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
