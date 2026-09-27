#pragma once
// IWYU pragma private; include "UnityChan/AutoBlink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityChan/zzzz__AutoBlink_Status_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoBlink)
namespace GlobalNamespace {
struct AutoBlink_Status;
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
namespace UnityChan {
class AutoBlink__RandomChange_d__22;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace UnityChan {
class AutoBlink;
}
namespace UnityChan {
class AutoBlink__RandomChange_d__22;
}
// Write type traits
MARK_REF_T(::UnityChan::AutoBlink*);
MARK_REF_T(::UnityChan::AutoBlink__RandomChange_d__22*);
DEFINE_IL2CPP_CLASS(::UnityChan::AutoBlink*, "UnityChan", "AutoBlink");
DEFINE_IL2CPP_CLASS(::UnityChan::AutoBlink__RandomChange_d__22*, "UnityChan", "AutoBlink/<RandomChange>d__22");
// Dependencies UnityChan.AutoBlink::Status, UnityEngine.MonoBehaviour
namespace UnityChan {
// Is value type: false
// CS Name: UnityChan.AutoBlink
class CORDL_TYPE AutoBlink : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Status = ::GlobalNamespace::AutoBlink_Status;

using _RandomChange_d__22 = ::UnityChan::AutoBlink__RandomChange_d__22;

/// @brief Field eyeStatus, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeStatus, put=__cordl_internal_set_eyeStatus)) ::GlobalNamespace::AutoBlink_Status  eyeStatus;

/// @brief Field interval, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) float_t  interval;

/// @brief Field isActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field isBlink, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBlink, put=__cordl_internal_set_isBlink)) bool  isBlink;

/// @brief Field ratio_Close, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ratio_Close, put=__cordl_internal_set_ratio_Close)) float_t  ratio_Close;

/// @brief Field ratio_HalfClose, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ratio_HalfClose, put=__cordl_internal_set_ratio_HalfClose)) float_t  ratio_HalfClose;

/// @brief Field ratio_Open, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ratio_Open, put=__cordl_internal_set_ratio_Open)) float_t  ratio_Open;

/// @brief Field ref_SMR_EL_DEF, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ref_SMR_EL_DEF, put=__cordl_internal_set_ref_SMR_EL_DEF)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ref_SMR_EL_DEF;

/// @brief Field ref_SMR_EYE_DEF, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ref_SMR_EYE_DEF, put=__cordl_internal_set_ref_SMR_EYE_DEF)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ref_SMR_EYE_DEF;

/// @brief Field threshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) float_t  threshold;

/// @brief Field timeBlink, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBlink, put=__cordl_internal_set_timeBlink)) float_t  timeBlink;

/// @brief Field timeRemining, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeRemining, put=__cordl_internal_set_timeRemining)) float_t  timeRemining;

/// @brief Field timerStarted, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_timerStarted, put=__cordl_internal_set_timerStarted)) bool  timerStarted;

/// @brief Method Awake, addr 0x5e0f87c, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5e0f968, size 0x5c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityChan::AutoBlink* New_ctor() ;

/// [IteratorStateMachine(typeof(UnityChan.AutoBlink::<RandomChange>d__22))]
/// @brief Method RandomChange, addr 0x5e0fa84, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RandomChange() ;

/// @brief Method ResetTimer, addr 0x5e0f8d8, size 0x10, virtual false, abstract: false, final false
inline void ResetTimer() ;

/// @brief Method SetCloseEyes, addr 0x5e0f9c4, size 0x40, virtual false, abstract: false, final false
inline void SetCloseEyes() ;

/// @brief Method SetHalfCloseEyes, addr 0x5e0fa04, size 0x40, virtual false, abstract: false, final false
inline void SetHalfCloseEyes() ;

/// @brief Method SetOpenEyes, addr 0x5e0fa44, size 0x40, virtual false, abstract: false, final false
inline void SetOpenEyes() ;

/// @brief Method Start, addr 0x5e0f880, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5e0f8e8, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::AutoBlink_Status const& __cordl_internal_get_eyeStatus() const;

constexpr ::GlobalNamespace::AutoBlink_Status& __cordl_internal_get_eyeStatus() ;

constexpr float_t const& __cordl_internal_get_interval() const;

constexpr float_t& __cordl_internal_get_interval() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr bool const& __cordl_internal_get_isBlink() const;

constexpr bool& __cordl_internal_get_isBlink() ;

constexpr float_t const& __cordl_internal_get_ratio_Close() const;

constexpr float_t& __cordl_internal_get_ratio_Close() ;

constexpr float_t const& __cordl_internal_get_ratio_HalfClose() const;

constexpr float_t& __cordl_internal_get_ratio_HalfClose() ;

constexpr float_t const& __cordl_internal_get_ratio_Open() const;

constexpr float_t& __cordl_internal_get_ratio_Open() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_ref_SMR_EL_DEF() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_ref_SMR_EL_DEF() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_ref_SMR_EYE_DEF() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_ref_SMR_EYE_DEF() ;

constexpr float_t const& __cordl_internal_get_threshold() const;

constexpr float_t& __cordl_internal_get_threshold() ;

constexpr float_t const& __cordl_internal_get_timeBlink() const;

constexpr float_t& __cordl_internal_get_timeBlink() ;

constexpr float_t const& __cordl_internal_get_timeRemining() const;

constexpr float_t& __cordl_internal_get_timeRemining() ;

constexpr bool const& __cordl_internal_get_timerStarted() const;

constexpr bool& __cordl_internal_get_timerStarted() ;

constexpr void __cordl_internal_set_eyeStatus(::GlobalNamespace::AutoBlink_Status  value) ;

constexpr void __cordl_internal_set_interval(float_t  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_isBlink(bool  value) ;

constexpr void __cordl_internal_set_ratio_Close(float_t  value) ;

constexpr void __cordl_internal_set_ratio_HalfClose(float_t  value) ;

constexpr void __cordl_internal_set_ratio_Open(float_t  value) ;

constexpr void __cordl_internal_set_ref_SMR_EL_DEF(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_ref_SMR_EYE_DEF(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_threshold(float_t  value) ;

constexpr void __cordl_internal_set_timeBlink(float_t  value) ;

constexpr void __cordl_internal_set_timeRemining(float_t  value) ;

constexpr void __cordl_internal_set_timerStarted(bool  value) ;

/// @brief Method .ctor, addr 0x5e0fb18, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoBlink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoBlink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoBlink(AutoBlink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoBlink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoBlink(AutoBlink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5158};

/// @brief Field isActive, offset: 0x20, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field ref_SMR_EYE_DEF, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___ref_SMR_EYE_DEF;

/// @brief Field ref_SMR_EL_DEF, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___ref_SMR_EL_DEF;

/// @brief Field ratio_Close, offset: 0x38, size: 0x4, def value: None
 float_t  ___ratio_Close;

/// @brief Field ratio_HalfClose, offset: 0x3c, size: 0x4, def value: None
 float_t  ___ratio_HalfClose;

/// [HideInInspector]
/// @brief Field ratio_Open, offset: 0x40, size: 0x4, def value: None
 float_t  ___ratio_Open;

/// @brief Field timerStarted, offset: 0x44, size: 0x1, def value: None
 bool  ___timerStarted;

/// @brief Field isBlink, offset: 0x45, size: 0x1, def value: None
 bool  ___isBlink;

/// @brief Field timeBlink, offset: 0x48, size: 0x4, def value: None
 float_t  ___timeBlink;

/// @brief Field timeRemining, offset: 0x4c, size: 0x4, def value: None
 float_t  ___timeRemining;

/// @brief Field threshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___threshold;

/// @brief Field interval, offset: 0x54, size: 0x4, def value: None
 float_t  ___interval;

/// @brief Field eyeStatus, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::AutoBlink_Status  ___eyeStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityChan::AutoBlink, ___isActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___ref_SMR_EYE_DEF) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___ref_SMR_EL_DEF) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___ratio_Close) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___ratio_HalfClose) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___ratio_Open) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___timerStarted) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___isBlink) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___timeBlink) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___timeRemining) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___threshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___interval) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink, ___eyeStatus) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityChan::AutoBlink) == 0x60, "Size mismatch!");

} // namespace end def UnityChan
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityChan {
// Is value type: false
// CS Name: UnityChan.AutoBlink/<RandomChange>d__22
class CORDL_TYPE AutoBlink__RandomChange_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityChan::AutoBlink>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e0fb50, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityChan::AutoBlink__RandomChange_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e0fc20, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e0fc28, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e0fc60, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e0fb4c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityChan::AutoBlink> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityChan::AutoBlink>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityChan::AutoBlink>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e0faf0, size 0x28, virtual false, abstract: false, final false
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
constexpr AutoBlink__RandomChange_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoBlink__RandomChange_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoBlink__RandomChange_d__22(AutoBlink__RandomChange_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoBlink__RandomChange_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoBlink__RandomChange_d__22(AutoBlink__RandomChange_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5157};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityChan::AutoBlink>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityChan::AutoBlink__RandomChange_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink__RandomChange_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityChan::AutoBlink__RandomChange_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityChan::AutoBlink__RandomChange_d__22) == 0x28, "Size mismatch!");

} // namespace end def UnityChan
