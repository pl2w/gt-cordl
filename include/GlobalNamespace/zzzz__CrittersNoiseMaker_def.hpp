#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersNoiseMaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersToolThrowable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersNoiseMaker)
namespace GlobalNamespace {
class CrittersNoiseMaker__PlayRepeatNoise_d__12;
}
namespace GlobalNamespace {
class CrittersPawn;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersNoiseMaker;
}
namespace GlobalNamespace {
class CrittersNoiseMaker__PlayRepeatNoise_d__12;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersNoiseMaker*);
MARK_REF_T(::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersNoiseMaker*, "", "CrittersNoiseMaker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12*, "", "CrittersNoiseMaker/<PlayRepeatNoise>d__12");
// Dependencies CrittersToolThrowable
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersNoiseMaker
class CORDL_TYPE CrittersNoiseMaker : public ::GlobalNamespace::CrittersToolThrowable {
public:
// Declarations
using _PlayRepeatNoise_d__12 = ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12;

/// @brief Field destroyAfterPlayingRepeatNoise, offset 0x1b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyAfterPlayingRepeatNoise, put=__cordl_internal_set_destroyAfterPlayingRepeatNoise)) bool  destroyAfterPlayingRepeatNoise;

/// @brief Field playOnce, offset 0x1ac, size 0x1 
 __declspec(property(get=__cordl_internal_get_playOnce, put=__cordl_internal_set_playOnce)) bool  playOnce;

/// @brief Field repeatNoiseDuration, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatNoiseDuration, put=__cordl_internal_set_repeatNoiseDuration)) float_t  repeatNoiseDuration;

/// @brief Field repeatNoiseRate, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatNoiseRate, put=__cordl_internal_set_repeatNoiseRate)) float_t  repeatNoiseRate;

/// @brief Field repeatPlayNoise, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_repeatPlayNoise, put=__cordl_internal_set_repeatPlayNoise)) ::UnityEngine::Coroutine*  repeatPlayNoise;

/// @brief Field soundSubIndex, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundSubIndex, put=__cordl_internal_set_soundSubIndex)) int32_t  soundSubIndex;

static inline ::GlobalNamespace::CrittersNoiseMaker* New_ctor() ;

/// @brief Method OnImpact, addr 0x5609a2c, size 0x94, virtual true, abstract: false, final false
inline void OnImpact(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal) ;

/// @brief Method OnImpactCritter, addr 0x5609d28, size 0x98, virtual true, abstract: false, final false
inline void OnImpactCritter(::GlobalNamespace::CrittersPawn*  impactedCritter) ;

/// @brief Method OnPickedUp, addr 0x5609dc0, size 0x4, virtual true, abstract: false, final false
inline void OnPickedUp() ;

/// [IteratorStateMachine(typeof(CrittersNoiseMaker::<PlayRepeatNoise>d__12))]
/// @brief Method PlayRepeatNoise, addr 0x5609df4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayRepeatNoise() ;

/// @brief Method PlaySingleNoise, addr 0x5609ac0, size 0x230, virtual false, abstract: false, final false
inline void PlaySingleNoise() ;

/// @brief Method StartPlayingRepeatNoise, addr 0x5609cf0, size 0x38, virtual false, abstract: false, final false
inline void StartPlayingRepeatNoise() ;

/// @brief Method StopPlayRepeatNoise, addr 0x5609dc4, size 0x30, virtual false, abstract: false, final false
inline void StopPlayRepeatNoise() ;

constexpr bool const& __cordl_internal_get_destroyAfterPlayingRepeatNoise() const;

constexpr bool& __cordl_internal_get_destroyAfterPlayingRepeatNoise() ;

constexpr bool const& __cordl_internal_get_playOnce() const;

constexpr bool& __cordl_internal_get_playOnce() ;

constexpr float_t const& __cordl_internal_get_repeatNoiseDuration() const;

constexpr float_t& __cordl_internal_get_repeatNoiseDuration() ;

constexpr float_t const& __cordl_internal_get_repeatNoiseRate() const;

constexpr float_t& __cordl_internal_get_repeatNoiseRate() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_repeatPlayNoise() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_repeatPlayNoise() ;

constexpr int32_t const& __cordl_internal_get_soundSubIndex() const;

constexpr int32_t& __cordl_internal_get_soundSubIndex() ;

constexpr void __cordl_internal_set_destroyAfterPlayingRepeatNoise(bool  value) ;

constexpr void __cordl_internal_set_playOnce(bool  value) ;

constexpr void __cordl_internal_set_repeatNoiseDuration(float_t  value) ;

constexpr void __cordl_internal_set_repeatNoiseRate(float_t  value) ;

constexpr void __cordl_internal_set_repeatPlayNoise(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_soundSubIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5609e88, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersNoiseMaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersNoiseMaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersNoiseMaker(CrittersNoiseMaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersNoiseMaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersNoiseMaker(CrittersNoiseMaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{110};

/// [Header("Noise Maker")]
/// @brief Field soundSubIndex, offset: 0x1a8, size: 0x4, def value: None
 int32_t  ___soundSubIndex;

/// @brief Field playOnce, offset: 0x1ac, size: 0x1, def value: None
 bool  ___playOnce;

/// @brief Field repeatNoiseDuration, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___repeatNoiseDuration;

/// @brief Field repeatNoiseRate, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___repeatNoiseRate;

/// @brief Field destroyAfterPlayingRepeatNoise, offset: 0x1b8, size: 0x1, def value: None
 bool  ___destroyAfterPlayingRepeatNoise;

/// @brief Field repeatPlayNoise, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___repeatPlayNoise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker, ___soundSubIndex) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker, ___playOnce) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker, ___repeatNoiseDuration) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker, ___repeatNoiseRate) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker, ___destroyAfterPlayingRepeatNoise) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker, ___repeatPlayNoise) == 0x1c0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersNoiseMaker) == 0x1c8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersNoiseMaker/<PlayRepeatNoise>d__12
class CORDL_TYPE CrittersNoiseMaker__PlayRepeatNoise_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CrittersNoiseMaker>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5609ea8, size 0x150, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5609ff8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x560a000, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x560a038, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5609ea4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CrittersNoiseMaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CrittersNoiseMaker>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersNoiseMaker>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5609e60, size 0x28, virtual false, abstract: false, final false
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
constexpr CrittersNoiseMaker__PlayRepeatNoise_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersNoiseMaker__PlayRepeatNoise_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersNoiseMaker__PlayRepeatNoise_d__12(CrittersNoiseMaker__PlayRepeatNoise_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersNoiseMaker__PlayRepeatNoise_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersNoiseMaker__PlayRepeatNoise_d__12(CrittersNoiseMaker__PlayRepeatNoise_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{109};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersNoiseMaker>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersNoiseMaker__PlayRepeatNoise_d__12) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
