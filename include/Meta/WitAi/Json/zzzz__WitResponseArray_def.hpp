#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/WitResponseArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitResponseArray)
namespace Meta::WitAi::Json {
class WitResponseArray__GetEnumerator_d__14;
}
namespace Meta::WitAi::Json {
class WitResponseArray__get_Childs_d__13;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
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
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class WitResponseArray;
}
namespace Meta::WitAi::Json {
class WitResponseArray__GetEnumerator_d__14;
}
namespace Meta::WitAi::Json {
class WitResponseArray__get_Childs_d__13;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::WitResponseArray*);
MARK_REF_T(::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14*);
MARK_REF_T(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseArray*, "Meta.WitAi.Json", "WitResponseArray");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14*, "Meta.WitAi.Json", "WitResponseArray/<GetEnumerator>d__14");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13*, "Meta.WitAi.Json", "WitResponseArray/<get_Childs>d__13");
// [DefaultMember("Item")]
// Dependencies Meta.WitAi.Json.WitResponseNode
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseArray
class CORDL_TYPE WitResponseArray : public ::Meta::WitAi::Json::WitResponseNode {
public:
// Declarations
using _GetEnumerator_d__14 = ::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14;

using _get_Childs_d__13 = ::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13;

 __declspec(property(get=get_Childs)) ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*  Childs;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

/// @brief Field m_List, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_List, put=__cordl_internal_set_m_List)) ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  m_List;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x9e45618, size 0xc8, virtual true, abstract: false, final false
inline void Add(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  aItem) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Json.WitResponseArray::<GetEnumerator>d__14))]
/// @brief Method GetEnumerator, addr 0x9e45794, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::Meta::WitAi::Json::WitResponseArray* New_ctor() ;

/// @brief Method ToString, addr 0x9e45828, size 0x1f8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get_m_List() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get_m_List() ;

constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

/// @brief Method .ctor, addr 0x9e43684, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Json.WitResponseArray::<get_Childs>d__13))]
/// @brief Method get_Childs, addr 0x9e456e0, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* get_Childs() ;

/// @brief Method get_Count, addr 0x9e455d0, size 0x48, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x9e452d0, size 0xac, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(int32_t  aIndex) ;

/// @brief Method get_Item, addr 0x9e454cc, size 0x58, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(::StringW  aKey) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x9e453bc, size 0x110, virtual true, abstract: false, final false
inline void set_Item(int32_t  aIndex, ::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method set_Item, addr 0x9e45524, size 0xac, virtual true, abstract: false, final false
inline void set_Item(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseArray(WitResponseArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseArray(WitResponseArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31028};

/// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  ___m_List;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray, ___m_List) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseArray) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13
class CORDL_TYPE WitResponseArray__get_Childs_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current)) ::Meta::WitAi::Json::WitResponseNode*  System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Meta::WitAi::Json::WitResponseNode*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Json::WitResponseArray*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e45c94, size 0x1a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator, addr 0x9e45ed0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* System_Collections_Generic_IEnumerable_Meta_WitAi_Json_WitResponseNode__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current, addr 0x9e45e88, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Json::WitResponseNode* System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x9e45f74, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e45e90, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e45ec8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e45c78, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get___2__current() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get___2__current() ;

constexpr ::Meta::WitAi::Json::WitResponseArray* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Json::WitResponseArray*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Json::WitResponseArray*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0x9e45e38, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e45760, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* i___System__Collections__Generic__IEnumerable_1___Meta__WitAi__Json__WitResponseNode__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* i___System__Collections__Generic__IEnumerator_1___Meta__WitAi__Json__WitResponseNode__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseArray__get_Childs_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseArray__get_Childs_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseArray__get_Childs_d__13(WitResponseArray__get_Childs_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseArray__get_Childs_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseArray__get_Childs_d__13(WitResponseArray__get_Childs_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31027};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseArray*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseArray__get_Childs_d__13) == 0x48, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14
class CORDL_TYPE WitResponseArray__GetEnumerator_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Json::WitResponseArray*  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e45a3c, size 0x1a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e45c30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e45c38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e45c70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e45a20, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Meta::WitAi::Json::WitResponseArray* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Json::WitResponseArray*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Json::WitResponseArray*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>  value) ;

/// @brief Method <>m__Finally1, addr 0x9e45be0, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e45800, size 0x28, virtual false, abstract: false, final false
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
constexpr WitResponseArray__GetEnumerator_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseArray__GetEnumerator_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseArray__GetEnumerator_d__14(WitResponseArray__GetEnumerator_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseArray__GetEnumerator_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseArray__GetEnumerator_d__14(WitResponseArray__GetEnumerator_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31026};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseArray*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::Meta::WitAi::Json::WitResponseNode*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseArray__GetEnumerator_d__14) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
