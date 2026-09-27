#pragma once
// IWYU pragma private; include "GlobalNamespace/TempMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TempMask)
namespace GlobalNamespace {
class TempMask__MaskOnDuringDate_d__10;
}
namespace GlobalNamespace {
class VRRig;
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
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class TempMask;
}
namespace GlobalNamespace {
class TempMask__MaskOnDuringDate_d__10;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TempMask*);
MARK_REF_T(::GlobalNamespace::TempMask__MaskOnDuringDate_d__10*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TempMask*, "", "TempMask");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TempMask__MaskOnDuringDate_d__10*, "", "TempMask/<MaskOnDuringDate>d__10");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TempMask
class CORDL_TYPE TempMask : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MaskOnDuringDate_d__10 = ::GlobalNamespace::TempMask__MaskOnDuringDate_d__10;

/// @brief Field day, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_day, put=__cordl_internal_set_day)) int32_t  day;

/// @brief Field dayOn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayOn, put=__cordl_internal_set_dayOn)) ::System::DateTime  dayOn;

/// @brief Field month, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_month, put=__cordl_internal_set_month)) int32_t  month;

/// @brief Field myDate, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myDate, put=__cordl_internal_set_myDate)) ::System::DateTime  myDate;

/// @brief Field myRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRenderer, put=__cordl_internal_set_myRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  myRenderer;

/// @brief Field myRig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field year, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_year, put=__cordl_internal_set_year)) int32_t  year;

/// @brief Method Awake, addr 0x5d0965c, size 0x124, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(TempMask::<MaskOnDuringDate>d__10))]
/// @brief Method MaskOnDuringDate, addr 0x5d097a0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MaskOnDuringDate() ;

static inline ::GlobalNamespace::TempMask* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d0980c, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d09780, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get_day() const;

constexpr int32_t& __cordl_internal_get_day() ;

constexpr ::System::DateTime const& __cordl_internal_get_dayOn() const;

constexpr ::System::DateTime& __cordl_internal_get_dayOn() ;

constexpr int32_t const& __cordl_internal_get_month() const;

constexpr int32_t& __cordl_internal_get_month() ;

constexpr ::System::DateTime const& __cordl_internal_get_myDate() const;

constexpr ::System::DateTime& __cordl_internal_get_myDate() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_myRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_myRenderer() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr int32_t const& __cordl_internal_get_year() const;

constexpr int32_t& __cordl_internal_get_year() ;

constexpr void __cordl_internal_set_day(int32_t  value) ;

constexpr void __cordl_internal_set_dayOn(::System::DateTime  value) ;

constexpr void __cordl_internal_set_month(int32_t  value) ;

constexpr void __cordl_internal_set_myDate(::System::DateTime  value) ;

constexpr void __cordl_internal_set_myRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_year(int32_t  value) ;

/// @brief Method .ctor, addr 0x5d0983c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TempMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TempMask(TempMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempMask(TempMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{452};

/// @brief Field year, offset: 0x20, size: 0x4, def value: None
 int32_t  ___year;

/// @brief Field month, offset: 0x24, size: 0x4, def value: None
 int32_t  ___month;

/// @brief Field day, offset: 0x28, size: 0x4, def value: None
 int32_t  ___day;

/// @brief Field dayOn, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___dayOn;

/// @brief Field myRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___myRenderer;

/// @brief Field myDate, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___myDate;

/// @brief Field myRig, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TempMask, ___year) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask, ___month) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask, ___day) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask, ___dayOn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask, ___myRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask, ___myDate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask, ___myRig) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TempMask) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TempMask/<MaskOnDuringDate>d__10
class CORDL_TYPE TempMask__MaskOnDuringDate_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TempMask>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d09848, size 0x2b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TempMask__MaskOnDuringDate_d__10* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d09af8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d09b00, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d09b38, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d09844, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TempMask> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TempMask>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TempMask>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d09814, size 0x28, virtual false, abstract: false, final false
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
constexpr TempMask__MaskOnDuringDate_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempMask__MaskOnDuringDate_d__10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TempMask__MaskOnDuringDate_d__10(TempMask__MaskOnDuringDate_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempMask__MaskOnDuringDate_d__10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempMask__MaskOnDuringDate_d__10(TempMask__MaskOnDuringDate_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{451};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TempMask>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TempMask__MaskOnDuringDate_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask__MaskOnDuringDate_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TempMask__MaskOnDuringDate_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TempMask__MaskOnDuringDate_d__10) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
