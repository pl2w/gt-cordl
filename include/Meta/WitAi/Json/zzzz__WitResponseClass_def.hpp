#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/WitResponseClass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitResponseClass)
namespace Meta::WitAi::Json {
class WitResponseClass__GetEnumerator_d__18;
}
namespace Meta::WitAi::Json {
class WitResponseClass__get_Childs_d__17;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
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
template<typename TKey,typename TValue>
struct KeyValuePair_2;
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
class WitResponseClass;
}
namespace Meta::WitAi::Json {
class WitResponseClass__GetEnumerator_d__18;
}
namespace Meta::WitAi::Json {
class WitResponseClass__get_Childs_d__17;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::WitResponseClass*);
MARK_REF_T(::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*);
MARK_REF_T(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseClass*, "Meta.WitAi.Json", "WitResponseClass");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*, "Meta.WitAi.Json", "WitResponseClass/<GetEnumerator>d__18");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*, "Meta.WitAi.Json", "WitResponseClass/<get_Childs>d__17");
// [DefaultMember("Item")]
// Dependencies Meta.WitAi.Json.WitResponseNode
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseClass
class CORDL_TYPE WitResponseClass : public ::Meta::WitAi::Json::WitResponseNode {
public:
// Declarations
using _GetEnumerator_d__18 = ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18;

using _get_Childs_d__17 = ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17;

 __declspec(property(get=get_ChildNodeNames)) ::ArrayW<::StringW>  ChildNodeNames;

 __declspec(property(get=get_Childs)) ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*  Childs;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

/// @brief Field m_Dict, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Dict, put=__cordl_internal_set_m_Dict)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>*  m_Dict;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x9e463f8, size 0x13c, virtual true, abstract: false, final false
inline void Add(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  aItem) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Json.WitResponseClass::<GetEnumerator>d__18))]
/// @brief Method GetEnumerator, addr 0x9e465e8, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method HasChild, addr 0x9e45fe4, size 0x58, virtual false, abstract: false, final false
inline bool HasChild(::StringW  child) ;

static inline ::Meta::WitAi::Json::WitResponseClass* New_ctor() ;

/// @brief Method ToFilteredString, addr 0x9e46684, size 0x2a4, virtual false, abstract: false, final false
inline ::StringW ToFilteredString(bool  ignoreEmptyFields) ;

/// @brief Method ToString, addr 0x9e4667c, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get_m_Dict() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get_m_Dict() ;

constexpr void __cordl_internal_set_m_Dict(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>*  value) ;

/// @brief Method .ctor, addr 0x9e435fc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ChildNodeNames, addr 0x9e45f78, size 0x6c, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_ChildNodeNames() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Json.WitResponseClass::<get_Childs>d__17))]
/// @brief Method get_Childs, addr 0x9e46534, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* get_Childs() ;

/// @brief Method get_Count, addr 0x9e463a8, size 0x50, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x9e4622c, size 0xa0, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(int32_t  aIndex) ;

/// @brief Method get_Item, addr 0x9e4603c, size 0xc0, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(::StringW  aKey) ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x9e462cc, size 0xdc, virtual true, abstract: false, final false
inline void set_Item(int32_t  aIndex, ::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method set_Item, addr 0x9e46140, size 0xec, virtual true, abstract: false, final false
inline void set_Item(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseClass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseClass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseClass(WitResponseClass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseClass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseClass(WitResponseClass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31031};

/// @brief Field m_Dict, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>*  ___m_Dict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass, ___m_Dict) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseClass) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17
class CORDL_TYPE WitResponseClass__get_Childs_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current)) ::Meta::WitAi::Json::WitResponseNode*  System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Meta::WitAi::Json::WitResponseNode*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Json::WitResponseClass*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  __7__wrap1;

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

/// @brief Method MoveNext, addr 0x9e46cc8, size 0x250, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator, addr 0x9e47010, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* System_Collections_Generic_IEnumerable_Meta_WitAi_Json_WitResponseNode__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current, addr 0x9e46fc8, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Json::WitResponseNode* System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x9e470b4, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e46fd0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e47008, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e46cac, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get___2__current() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get___2__current() ;

constexpr ::Meta::WitAi::Json::WitResponseClass* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Json::WitResponseClass*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Json::WitResponseClass*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0x9e46f18, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e465b4, size 0x34, virtual false, abstract: false, final false
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
constexpr WitResponseClass__get_Childs_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseClass__get_Childs_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseClass__get_Childs_d__17(WitResponseClass__get_Childs_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseClass__get_Childs_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseClass__get_Childs_d__17(WitResponseClass__get_Childs_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31030};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseClass*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18
class CORDL_TYPE WitResponseClass__GetEnumerator_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::WitAi::Json::WitResponseClass*  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e46944, size 0x270, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e46c64, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e46c6c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e46ca4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e46928, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Meta::WitAi::Json::WitResponseClass* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::WitAi::Json::WitResponseClass*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Meta::WitAi::Json::WitResponseClass*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  value) ;

/// @brief Method <>m__Finally1, addr 0x9e46bb4, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e46654, size 0x28, virtual false, abstract: false, final false
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
constexpr WitResponseClass__GetEnumerator_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseClass__GetEnumerator_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseClass__GetEnumerator_d__18(WitResponseClass__GetEnumerator_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseClass__GetEnumerator_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseClass__GetEnumerator_d__18(WitResponseClass__GetEnumerator_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31029};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseClass*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
