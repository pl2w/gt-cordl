#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/WitResponseNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitResponseNode)
namespace Meta::WitAi::Json {
class WitResponseArray;
}
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace Meta::WitAi::Json {
class WitResponseNode__get_Childs_d__19;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class WitResponseNode;
}
namespace Meta::WitAi::Json {
class WitResponseNode__get_Childs_d__19;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::WitResponseNode*);
MARK_REF_T(::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseNode*, "Meta.WitAi.Json", "WitResponseNode");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19*, "Meta.WitAi.Json", "WitResponseNode/<get_Childs>d__19");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseNode
class CORDL_TYPE WitResponseNode : public ::System::Object {
public:
// Declarations
using _get_Childs_d__19 = ::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19;

 __declspec(property(get=get_AsArray)) ::Meta::WitAi::Json::WitResponseArray*  AsArray;

 __declspec(property(get=get_AsBool, put=set_AsBool)) bool  AsBool;

 __declspec(property(get=get_AsDouble, put=set_AsDouble)) double_t  AsDouble;

 __declspec(property(get=get_AsFloat, put=set_AsFloat)) float_t  AsFloat;

 __declspec(property(get=get_AsInt, put=set_AsInt)) int32_t  AsInt;

 __declspec(property(get=get_AsObject)) ::Meta::WitAi::Json::WitResponseClass*  AsObject;

 __declspec(property(get=get_AsStringArray)) ::ArrayW<::StringW>  AsStringArray;

 __declspec(property(get=get_ChildNodeNames)) ::ArrayW<::StringW>  ChildNodeNames;

 __declspec(property(get=get_Childs)) ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*  Childs;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::Meta::WitAi::Json::WitResponseNode*  Item[];

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Method Add, addr 0x9e44444, size 0x60, virtual true, abstract: false, final false
inline void Add(::Meta::WitAi::Json::WitResponseNode*  aItem) ;

/// @brief Method Add, addr 0x9e44348, size 0x4, virtual true, abstract: false, final false
inline void Add(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  aItem) ;

/// @brief Method Cast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline T Cast(T  defaultValue) ;

/// @brief Method Equals, addr 0x9e44a94, size 0xf4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e44b88, size 0x3c8, virtual false, abstract: false, final false
static inline bool Equals(::Meta::WitAi::Json::WitResponseNode*  oldNode, ::Meta::WitAi::Json::WitResponseNode*  newNode) ;

/// @brief Method Escape, addr 0x9e44f58, size 0x210, virtual false, abstract: false, final false
static inline ::StringW Escape(::StringW  aText) ;

/// @brief Method GetHashCode, addr 0x9e44f50, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Meta::WitAi::Json::WitResponseNode* New_ctor() ;

/// @brief Method Parse, addr 0x9e401f8, size 0x7a4, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* Parse(::StringW  aJSON) ;

/// @brief Method ToString, addr 0x9e44544, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x9e451d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AsArray, addr 0x9e447dc, size 0x78, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseArray* get_AsArray() ;

/// @brief Method get_AsBool, addr 0x9e446d8, size 0x8c, virtual true, abstract: false, final false
inline bool get_AsBool() ;

/// @brief Method get_AsDouble, addr 0x9e44668, size 0x34, virtual true, abstract: false, final false
inline double_t get_AsDouble() ;

/// @brief Method get_AsFloat, addr 0x9e445f4, size 0x38, virtual true, abstract: false, final false
inline float_t get_AsFloat() ;

/// @brief Method get_AsInt, addr 0x9e44584, size 0x34, virtual true, abstract: false, final false
inline int32_t get_AsInt() ;

/// @brief Method get_AsObject, addr 0x9e449a0, size 0x78, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseClass* get_AsObject() ;

/// @brief Method get_AsStringArray, addr 0x9e44854, size 0x134, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_AsStringArray() ;

/// @brief Method get_ChildNodeNames, addr 0x9e443a8, size 0x94, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_ChildNodeNames() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Json.WitResponseNode::<get_Childs>d__19))]
/// @brief Method get_Childs, addr 0x9e444a4, size 0x6c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* get_Childs() ;

/// @brief Method get_Count, addr 0x9e4443c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x9e4434c, size 0x8, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(int32_t  aIndex) ;

/// @brief Method get_Item, addr 0x9e44358, size 0x8, virtual true, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseNode* get_Item(::StringW  aKey) ;

/// @brief Method get_Value, addr 0x9e44364, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method op_Equality, addr 0x9e424b0, size 0x88, virtual false, abstract: false, final false
static inline bool op_Equality(::Meta::WitAi::Json::WitResponseNode*  a, ::System::Object*  b) ;

/// @brief Method op_Implicit, addr 0x9e44a18, size 0x68, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* op_Implicit___Meta__WitAi__Json__WitResponseNode_(::StringW  s) ;

/// @brief Method op_Implicit, addr 0x9e44a80, size 0x14, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::Meta::WitAi::Json::WitResponseNode*  d) ;

/// @brief Method op_Inequality, addr 0x9e44988, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(::Meta::WitAi::Json::WitResponseNode*  a, ::System::Object*  b) ;

/// @brief Method set_AsBool, addr 0x9e44764, size 0x78, virtual true, abstract: false, final false
inline void set_AsBool(bool  value) ;

/// @brief Method set_AsDouble, addr 0x9e4469c, size 0x3c, virtual true, abstract: false, final false
inline void set_AsDouble(double_t  value) ;

/// @brief Method set_AsFloat, addr 0x9e4462c, size 0x3c, virtual true, abstract: false, final false
inline void set_AsFloat(float_t  value) ;

/// @brief Method set_AsInt, addr 0x9e445b8, size 0x3c, virtual true, abstract: false, final false
inline void set_AsInt(int32_t  value) ;

/// @brief Method set_Item, addr 0x9e44354, size 0x4, virtual true, abstract: false, final false
inline void set_Item(int32_t  aIndex, ::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method set_Item, addr 0x9e44360, size 0x4, virtual true, abstract: false, final false
inline void set_Item(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method set_Value, addr 0x9e443a4, size 0x4, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseNode(WitResponseNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseNode(WitResponseNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::WitResponseNode) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseNode/<get_Childs>d__19
class CORDL_TYPE WitResponseNode__get_Childs_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current)) ::Meta::WitAi::Json::WitResponseNode*  System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Meta::WitAi::Json::WitResponseNode*  __2__current;

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

/// @brief Method MoveNext, addr 0x9e451dc, size 0x18, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator, addr 0x9e4523c, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* System_Collections_Generic_IEnumerable_Meta_WitAi_Json_WitResponseNode__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current, addr 0x9e451f4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Json::WitResponseNode* System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x9e452cc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e451fc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e45234, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e451d8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get___2__current() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e44510, size 0x34, virtual false, abstract: false, final false
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
constexpr WitResponseNode__get_Childs_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseNode__get_Childs_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseNode__get_Childs_d__19(WitResponseNode__get_Childs_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseNode__get_Childs_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseNode__get_Childs_d__19(WitResponseNode__get_Childs_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31024};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseNode__get_Childs_d__19) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
