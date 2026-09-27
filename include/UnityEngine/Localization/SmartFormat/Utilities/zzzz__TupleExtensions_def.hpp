#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TupleExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TupleExtensions)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TupleExtensions__GetValueTupleItemObjectsFlattened_d__6;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TupleExtensions___c;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TupleExtensions___c__DisplayClass3_0;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TupleExtensions;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TupleExtensions__GetValueTupleItemObjectsFlattened_d__6;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TupleExtensions___c;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TupleExtensions___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*, "UnityEngine.Localization.SmartFormat.Utilities", "TupleExtensions");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*, "UnityEngine.Localization.SmartFormat.Utilities", "TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*, "UnityEngine.Localization.SmartFormat.Utilities", "TupleExtensions/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0*, "UnityEngine.Localization.SmartFormat.Utilities", "TupleExtensions/<>c__DisplayClass3_0");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions
class CORDL_TYPE TupleExtensions : public ::System::Object {
public:
// Declarations
using _GetValueTupleItemObjectsFlattened_d__6 = ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6;

using __c = ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c;

using __c__DisplayClass3_0 = ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0;

/// @brief Field ValueTupleTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ValueTupleTypes, put=setStaticF_ValueTupleTypes)) ::System::Collections::Generic::HashSet_1<::System::Type*>*  ValueTupleTypes;

/// [Extension]
/// @brief Method GetValueTupleItemFields, addr 0xb037b88, size 0x16c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* GetValueTupleItemFields(::System::Type*  tupleType) ;

/// [Extension]
/// @brief Method GetValueTupleItemObjects, addr 0xb037a58, size 0x128, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetValueTupleItemObjects(::System::Object*  tuple) ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions::<GetValueTupleItemObjectsFlattened>d__6))]
/// [Extension]
/// @brief Method GetValueTupleItemObjectsFlattened, addr 0xb037e24, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetValueTupleItemObjectsFlattened(::System::Object*  tuple) ;

/// [Extension]
/// @brief Method GetValueTupleItemTypes, addr 0xb037cf4, size 0x130, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetValueTupleItemTypes(::System::Type*  tupleType) ;

/// [Extension]
/// @brief Method IsValueTuple, addr 0xb037918, size 0x70, virtual false, abstract: false, final false
static inline bool IsValueTuple(::System::Object*  obj) ;

/// [Extension]
/// @brief Method IsValueTupleType, addr 0xb037988, size 0xd0, virtual false, abstract: false, final false
static inline bool IsValueTupleType(::System::Type*  type) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Type*>* getStaticF_ValueTupleTypes() ;

static inline void setStaticF_ValueTupleTypes(::System::Collections::Generic::HashSet_1<::System::Type*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TupleExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleExtensions(TupleExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleExtensions(TupleExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<GetValueTupleItemObjectsFlattened>d__6
class CORDL_TYPE TupleExtensions__GetValueTupleItemObjectsFlattened_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>3__tuple, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__tuple, put=__cordl_internal_set___3__tuple)) ::System::Object*  __3__tuple;

/// @brief Field <>7__wrap1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::System::Object*>*  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::System::Object*>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field tuple, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tuple, put=__cordl_internal_set_tuple)) ::System::Object*  tuple;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb0383f8, size 0x4c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0xb038a60, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb038a18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb038b04, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb038a20, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb038a58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb038348, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Object* const& __cordl_internal_get___3__tuple() const;

constexpr ::System::Object*& __cordl_internal_get___3__tuple() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Object* const& __cordl_internal_get_tuple() const;

constexpr ::System::Object*& __cordl_internal_get_tuple() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___3__tuple(::System::Object*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_tuple(::System::Object*  value) ;

/// @brief Method <>m__Finally1, addr 0xb038968, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0xb0388b8, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb037ea4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TupleExtensions__GetValueTupleItemObjectsFlattened_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions__GetValueTupleItemObjectsFlattened_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleExtensions__GetValueTupleItemObjectsFlattened_d__6(TupleExtensions__GetValueTupleItemObjectsFlattened_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions__GetValueTupleItemObjectsFlattened_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleExtensions__GetValueTupleItemObjectsFlattened_d__6(TupleExtensions__GetValueTupleItemObjectsFlattened_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25170};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field tuple, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___tuple;

/// @brief Field <>3__tuple, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  _____3__tuple;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Object*>*  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Object*>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6, ___tuple) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6, _____3__tuple) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c__DisplayClass3_0
class CORDL_TYPE TupleExtensions___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tuple, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tuple, put=__cordl_internal_set_tuple)) ::System::Object*  tuple;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <GetValueTupleItemObjects>b__0, addr 0xb038320, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* _GetValueTupleItemObjects_b__0(::System::Reflection::FieldInfo*  f) ;

constexpr ::System::Object* const& __cordl_internal_get_tuple() const;

constexpr ::System::Object*& __cordl_internal_get_tuple() ;

constexpr void __cordl_internal_set_tuple(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xb037b80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TupleExtensions___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleExtensions___c__DisplayClass3_0(TupleExtensions___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleExtensions___c__DisplayClass3_0(TupleExtensions___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25169};

/// @brief Field tuple, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___tuple;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0, ___tuple) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TupleExtensions/<>c
class CORDL_TYPE TupleExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>*  __9__4_0;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c* New_ctor() ;

/// @brief Method <GetValueTupleItemTypes>b__4_0, addr 0xb0382fc, size 0x24, virtual false, abstract: false, final false
inline ::System::Type* _GetValueTupleItemTypes_b__4_0(::System::Reflection::FieldInfo*  f) ;

/// @brief Method .ctor, addr 0xb0382f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TupleExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TupleExtensions___c(TupleExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TupleExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TupleExtensions___c(TupleExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25168};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
