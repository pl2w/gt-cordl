#pragma once
// IWYU pragma private; include "Drawing/Examples/TimedSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimedSpawner)
namespace Drawing::Examples {
class TimedSpawner__DestroyAfter_d__4;
}
namespace Drawing::Examples {
class TimedSpawner__Start_d__3;
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
class GameObject;
}
// Forward declare root types
namespace Drawing::Examples {
class TimedSpawner;
}
namespace Drawing::Examples {
class TimedSpawner__DestroyAfter_d__4;
}
namespace Drawing::Examples {
class TimedSpawner__Start_d__3;
}
// Write type traits
MARK_REF_T(::Drawing::Examples::TimedSpawner*);
MARK_REF_T(::Drawing::Examples::TimedSpawner__DestroyAfter_d__4*);
MARK_REF_T(::Drawing::Examples::TimedSpawner__Start_d__3*);
DEFINE_IL2CPP_CLASS(::Drawing::Examples::TimedSpawner*, "Drawing.Examples", "TimedSpawner");
DEFINE_IL2CPP_CLASS(::Drawing::Examples::TimedSpawner__DestroyAfter_d__4*, "Drawing.Examples", "TimedSpawner/<DestroyAfter>d__4");
DEFINE_IL2CPP_CLASS(::Drawing::Examples::TimedSpawner__Start_d__3*, "Drawing.Examples", "TimedSpawner/<Start>d__3");
// Dependencies UnityEngine.MonoBehaviour
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.TimedSpawner
class CORDL_TYPE TimedSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DestroyAfter_d__4 = ::Drawing::Examples::TimedSpawner__DestroyAfter_d__4;

using _Start_d__3 = ::Drawing::Examples::TimedSpawner__Start_d__3;

/// @brief Field interval, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) float_t  interval;

/// @brief Field lifeTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifeTime, put=__cordl_internal_set_lifeTime)) float_t  lifeTime;

/// @brief Field prefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// [IteratorStateMachine(typeof(Drawing.Examples.TimedSpawner::<DestroyAfter>d__4))]
/// @brief Method DestroyAfter, addr 0x55e0e48, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DestroyAfter(::UnityEngine::GameObject*  go, float_t  delay) ;

static inline ::Drawing::Examples::TimedSpawner* New_ctor() ;

/// [IteratorStateMachine(typeof(Drawing.Examples.TimedSpawner::<Start>d__3))]
/// @brief Method Start, addr 0x55e0db4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

constexpr float_t const& __cordl_internal_get_interval() const;

constexpr float_t& __cordl_internal_get_interval() ;

constexpr float_t const& __cordl_internal_get_lifeTime() const;

constexpr float_t& __cordl_internal_get_lifeTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_interval(float_t  value) ;

constexpr void __cordl_internal_set_lifeTime(float_t  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x55e0eec, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimedSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimedSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimedSpawner(TimedSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimedSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimedSpawner(TimedSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27783};

/// @brief Field interval, offset: 0x20, size: 0x4, def value: None
 float_t  ___interval;

/// @brief Field lifeTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___lifeTime;

/// @brief Field prefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::TimedSpawner, ___interval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::TimedSpawner, ___lifeTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::TimedSpawner, ___prefab) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::TimedSpawner) == 0x30, "Size mismatch!");

} // namespace end def Drawing::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.TimedSpawner/<Start>d__3
class CORDL_TYPE TimedSpawner__Start_d__3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Drawing::Examples::TimedSpawner>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55e102c, size 0x1a8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Drawing::Examples::TimedSpawner__Start_d__3* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55e11d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55e11dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55e1214, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55e1028, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Drawing::Examples::TimedSpawner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Drawing::Examples::TimedSpawner>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Drawing::Examples::TimedSpawner>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55e0e20, size 0x28, virtual false, abstract: false, final false
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
constexpr TimedSpawner__Start_d__3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimedSpawner__Start_d__3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimedSpawner__Start_d__3(TimedSpawner__Start_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimedSpawner__Start_d__3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimedSpawner__Start_d__3(TimedSpawner__Start_d__3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27782};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Drawing::Examples::TimedSpawner>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::TimedSpawner__Start_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::TimedSpawner__Start_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::TimedSpawner__Start_d__3, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::TimedSpawner__Start_d__3) == 0x28, "Size mismatch!");

} // namespace end def Drawing::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.TimedSpawner/<DestroyAfter>d__4
class CORDL_TYPE TimedSpawner__DestroyAfter_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field go, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_go, put=__cordl_internal_set_go)) ::UnityW<::UnityEngine::GameObject>  go;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55e0f04, size 0xdc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Drawing::Examples::TimedSpawner__DestroyAfter_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55e0fe0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55e0fe8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55e1020, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55e0f00, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_go() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_go() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_go(::UnityW<::UnityEngine::GameObject>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55e0ec4, size 0x28, virtual false, abstract: false, final false
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
constexpr TimedSpawner__DestroyAfter_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimedSpawner__DestroyAfter_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimedSpawner__DestroyAfter_d__4(TimedSpawner__DestroyAfter_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimedSpawner__DestroyAfter_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimedSpawner__DestroyAfter_d__4(TimedSpawner__DestroyAfter_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27781};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field go, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___go;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::TimedSpawner__DestroyAfter_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::TimedSpawner__DestroyAfter_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::TimedSpawner__DestroyAfter_d__4, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::TimedSpawner__DestroyAfter_d__4, ___go) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::TimedSpawner__DestroyAfter_d__4) == 0x30, "Size mismatch!");

} // namespace end def Drawing::Examples
