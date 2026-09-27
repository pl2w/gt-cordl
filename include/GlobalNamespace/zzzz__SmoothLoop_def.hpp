#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothLoop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SmoothLoop)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class SmoothLoop__DelayedStart_d__11;
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
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothLoop;
}
namespace GlobalNamespace {
class SmoothLoop__DelayedStart_d__11;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SmoothLoop*);
MARK_REF_T(::GlobalNamespace::SmoothLoop__DelayedStart_d__11*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SmoothLoop*, "", "SmoothLoop");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SmoothLoop__DelayedStart_d__11*, "", "SmoothLoop/<DelayedStart>d__11");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmoothLoop
class CORDL_TYPE SmoothLoop : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DelayedStart_d__11 = ::GlobalNamespace::SmoothLoop__DelayedStart_d__11;

/// @brief Field delay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field loopEnd, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopEnd, put=__cordl_internal_set_loopEnd)) float_t  loopEnd;

/// @brief Field loopStart, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopStart, put=__cordl_internal_set_loopStart)) float_t  loopStart;

/// @brief Field randomStart, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_randomStart, put=__cordl_internal_set_randomStart)) bool  randomStart;

/// @brief Field source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::AudioSource>  source;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x5778bec, size 0xd8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// [IteratorStateMachine(typeof(SmoothLoop::<DelayedStart>d__11))]
/// @brief Method DelayedStart, addr 0x5778d80, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedStart() ;

static inline ::GlobalNamespace::SmoothLoop* New_ctor() ;

/// @brief Method OnDisable, addr 0x5779080, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5778e70, size 0x98, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5778dec, size 0x84, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5778cc4, size 0xbc, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr float_t const& __cordl_internal_get_loopEnd() const;

constexpr float_t& __cordl_internal_get_loopEnd() ;

constexpr float_t const& __cordl_internal_get_loopStart() const;

constexpr float_t& __cordl_internal_get_loopStart() ;

constexpr bool const& __cordl_internal_get_randomStart() const;

constexpr bool& __cordl_internal_get_randomStart() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_loopEnd(float_t  value) ;

constexpr void __cordl_internal_set_loopStart(float_t  value) ;

constexpr void __cordl_internal_set_randomStart(bool  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x57790b4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method sourceCheck, addr 0x5778f08, size 0x178, virtual false, abstract: false, final false
inline bool sourceCheck() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmoothLoop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmoothLoop", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothLoop(SmoothLoop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothLoop", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothLoop(SmoothLoop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1388};

/// @brief Field source, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source;

/// @brief Field delay, offset: 0x28, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field randomStart, offset: 0x2c, size: 0x1, def value: None
 bool  ___randomStart;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field loopStart, offset: 0x30, size: 0x4, def value: None
 float_t  ___loopStart;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field loopEnd, offset: 0x34, size: 0x4, def value: None
 float_t  ___loopEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothLoop, ___source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothLoop, ___delay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothLoop, ___randomStart) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothLoop, ___loopStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothLoop, ___loopEnd) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SmoothLoop) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmoothLoop/<DelayedStart>d__11
class CORDL_TYPE SmoothLoop__DelayedStart_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SmoothLoop>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57790cc, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SmoothLoop__DelayedStart_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x577919c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57791a4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57791dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57790c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::SmoothLoop> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SmoothLoop>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SmoothLoop>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x577908c, size 0x28, virtual false, abstract: false, final false
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
constexpr SmoothLoop__DelayedStart_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmoothLoop__DelayedStart_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothLoop__DelayedStart_d__11(SmoothLoop__DelayedStart_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothLoop__DelayedStart_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothLoop__DelayedStart_d__11(SmoothLoop__DelayedStart_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1387};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SmoothLoop>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothLoop__DelayedStart_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothLoop__DelayedStart_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothLoop__DelayedStart_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SmoothLoop__DelayedStart_d__11) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
