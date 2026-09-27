#pragma once
// IWYU pragma private; include "GlobalNamespace/SlowCameraUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SlowCameraUpdate)
namespace GlobalNamespace {
class SlowCameraUpdate__UpdateMirror_d__6;
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
class SlowCameraUpdate;
}
namespace GlobalNamespace {
class SlowCameraUpdate__UpdateMirror_d__6;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlowCameraUpdate*);
MARK_REF_T(::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlowCameraUpdate*, "", "SlowCameraUpdate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6*, "", "SlowCameraUpdate/<UpdateMirror>d__6");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlowCameraUpdate
class CORDL_TYPE SlowCameraUpdate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateMirror_d__6 = ::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6;

/// @brief Field frameRate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameRate, put=__cordl_internal_set_frameRate)) float_t  frameRate;

/// @brief Field myCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCamera, put=__cordl_internal_set_myCamera)) ::UnityW<::UnityEngine::Camera>  myCamera;

/// @brief Field timeToNextFrame, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToNextFrame, put=__cordl_internal_set_timeToNextFrame)) float_t  timeToNextFrame;

/// @brief Method Awake, addr 0x59855f8, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SlowCameraUpdate* New_ctor() ;

/// @brief Method OnDisable, addr 0x59856e8, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x598565c, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(SlowCameraUpdate::<UpdateMirror>d__6))]
/// @brief Method UpdateMirror, addr 0x598567c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateMirror() ;

constexpr float_t const& __cordl_internal_get_frameRate() const;

constexpr float_t& __cordl_internal_get_frameRate() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_myCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_myCamera() ;

constexpr float_t const& __cordl_internal_get_timeToNextFrame() const;

constexpr float_t& __cordl_internal_get_timeToNextFrame() ;

constexpr void __cordl_internal_set_frameRate(float_t  value) ;

constexpr void __cordl_internal_set_myCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_timeToNextFrame(float_t  value) ;

/// @brief Method .ctor, addr 0x5985718, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlowCameraUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlowCameraUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlowCameraUpdate(SlowCameraUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlowCameraUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlowCameraUpdate(SlowCameraUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2545};

/// @brief Field myCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___myCamera;

/// @brief Field frameRate, offset: 0x28, size: 0x4, def value: None
 float_t  ___frameRate;

/// @brief Field timeToNextFrame, offset: 0x2c, size: 0x4, def value: None
 float_t  ___timeToNextFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlowCameraUpdate, ___myCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlowCameraUpdate, ___frameRate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlowCameraUpdate, ___timeToNextFrame) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlowCameraUpdate) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlowCameraUpdate/<UpdateMirror>d__6
class CORDL_TYPE SlowCameraUpdate__UpdateMirror_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SlowCameraUpdate>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5985724, size 0x114, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5985838, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5985840, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5985878, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5985720, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::SlowCameraUpdate> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SlowCameraUpdate>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SlowCameraUpdate>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59856f0, size 0x28, virtual false, abstract: false, final false
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
constexpr SlowCameraUpdate__UpdateMirror_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlowCameraUpdate__UpdateMirror_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlowCameraUpdate__UpdateMirror_d__6(SlowCameraUpdate__UpdateMirror_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlowCameraUpdate__UpdateMirror_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlowCameraUpdate__UpdateMirror_d__6(SlowCameraUpdate__UpdateMirror_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2544};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlowCameraUpdate>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlowCameraUpdate__UpdateMirror_d__6) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
