#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugBeaconActivation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThrowableBugBeaconActivation_ActivationMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableBugBeaconActivation)
namespace GlobalNamespace {
struct ThrowableBugBeaconActivation_ActivationMode;
}
namespace GlobalNamespace {
class ThrowableBugBeaconActivation__SendSignals_d__9;
}
namespace GlobalNamespace {
class ThrowableBugBeacon;
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
// Forward declare root types
namespace GlobalNamespace {
class ThrowableBugBeaconActivation;
}
namespace GlobalNamespace {
class ThrowableBugBeaconActivation__SendSignals_d__9;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThrowableBugBeaconActivation*);
MARK_REF_T(::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugBeaconActivation*, "", "ThrowableBugBeaconActivation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*, "", "ThrowableBugBeaconActivation/<SendSignals>d__9");
// Dependencies ThrowableBugBeaconActivation::ActivationMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableBugBeaconActivation
class CORDL_TYPE ThrowableBugBeaconActivation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActivationMode = ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode;

using _SendSignals_d__9 = ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9;

/// @brief Field maxCallTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCallTime, put=__cordl_internal_set_maxCallTime)) float_t  maxCallTime;

/// @brief Field minCallTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minCallTime, put=__cordl_internal_set_minCallTime)) float_t  minCallTime;

/// @brief Field mode, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode  mode;

/// @brief Field signalCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_signalCount, put=__cordl_internal_set_signalCount)) uint32_t  signalCount;

/// @brief Field tbb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tbb, put=__cordl_internal_set_tbb)) ::UnityW<::GlobalNamespace::ThrowableBugBeacon>  tbb;

/// @brief Method Awake, addr 0x5b33ef0, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ThrowableBugBeaconActivation* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b33fd4, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b33f48, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(ThrowableBugBeaconActivation::<SendSignals>d__9))]
/// @brief Method SendSignals, addr 0x5b33f68, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendSignals() ;

constexpr float_t const& __cordl_internal_get_maxCallTime() const;

constexpr float_t& __cordl_internal_get_maxCallTime() ;

constexpr float_t const& __cordl_internal_get_minCallTime() const;

constexpr float_t& __cordl_internal_get_minCallTime() ;

constexpr ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode& __cordl_internal_get_mode() ;

constexpr uint32_t const& __cordl_internal_get_signalCount() const;

constexpr uint32_t& __cordl_internal_get_signalCount() ;

constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeacon> const& __cordl_internal_get_tbb() const;

constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeacon>& __cordl_internal_get_tbb() ;

constexpr void __cordl_internal_set_maxCallTime(float_t  value) ;

constexpr void __cordl_internal_set_minCallTime(float_t  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode  value) ;

constexpr void __cordl_internal_set_signalCount(uint32_t  value) ;

constexpr void __cordl_internal_set_tbb(::UnityW<::GlobalNamespace::ThrowableBugBeacon>  value) ;

/// @brief Method .ctor, addr 0x5b34004, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBugBeaconActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeaconActivation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableBugBeaconActivation(ThrowableBugBeaconActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeaconActivation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableBugBeaconActivation(ThrowableBugBeaconActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3668};

/// [SerializeField]
/// @brief Field minCallTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___minCallTime;

/// [SerializeField]
/// @brief Field maxCallTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxCallTime;

/// [SerializeField]
/// @brief Field signalCount, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___signalCount;

/// [SerializeField]
/// @brief Field mode, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode  ___mode;

/// @brief Field tbb, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThrowableBugBeacon>  ___tbb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation, ___minCallTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation, ___maxCallTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation, ___signalCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation, ___mode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation, ___tbb) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBugBeaconActivation) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableBugBeaconActivation/<SendSignals>d__9
class CORDL_TYPE ThrowableBugBeaconActivation__SendSignals_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation>  __4__this;

/// @brief Field <count>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__count_5__2, put=__cordl_internal_set__count_5__2)) uint32_t  _count_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b3401c, size 0x124, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b34140, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b34148, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b34180, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b34018, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation>& __cordl_internal_get___4__this() ;

constexpr uint32_t const& __cordl_internal_get__count_5__2() const;

constexpr uint32_t& __cordl_internal_get__count_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation>  value) ;

constexpr void __cordl_internal_set__count_5__2(uint32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b33fdc, size 0x28, virtual false, abstract: false, final false
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
constexpr ThrowableBugBeaconActivation__SendSignals_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeaconActivation__SendSignals_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableBugBeaconActivation__SendSignals_d__9(ThrowableBugBeaconActivation__SendSignals_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBugBeaconActivation__SendSignals_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableBugBeaconActivation__SendSignals_d__9(ThrowableBugBeaconActivation__SendSignals_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3667};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation>  _____4__this;

/// @brief Field <count>5__2, offset: 0x28, size: 0x4, def value: None
 uint32_t  ____count_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9, ____count_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
