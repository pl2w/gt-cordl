#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JProperty)
namespace GlobalNamespace {
struct JProperty__LoadAsync_d__4;
}
namespace Newtonsoft::Json::Linq {
class JPropertyList_JProperty__GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty_JPropertyList;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JPropertyList_JProperty__GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty_JPropertyList;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Linq::JProperty*);
MARK_REF_T(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*);
MARK_REF_T(::Newtonsoft::Json::Linq::JProperty_JPropertyList*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JProperty*, "Newtonsoft.Json.Linq", "JProperty");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList/<GetEnumerator>d__1");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JProperty_JPropertyList*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.Linq.JContainer
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty
class CORDL_TYPE JProperty : public ::Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
using _LoadAsync_d__4 = ::GlobalNamespace::JProperty__LoadAsync_d__4;

using JPropertyList = ::Newtonsoft::Json::Linq::JProperty_JPropertyList;

 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

 __declspec(property(get=get_Value, put=set_Value)) ::Newtonsoft::Json::Linq::JToken*  Value;

/// @brief Field _content, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__content, put=__cordl_internal_set__content)) ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  _content;

/// @brief Field _name, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Method ClearItems, addr 0xa3d99a4, size 0xb0, virtual true, abstract: false, final false
inline void ClearItems() ;

/// @brief Method CloneToken, addr 0xa3d9a54, size 0x68, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// [NullableContext(2)]
/// @brief Method ContainsItem, addr 0xa3d9984, size 0x20, virtual true, abstract: false, final false
inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method GetItem, addr 0xa3d9534, size 0x54, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t  index) ;

/// [NullableContext(2)]
/// @brief Method IndexOfItem, addr 0xa3d982c, size 0x2c, virtual true, abstract: false, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// [NullableContext(2)]
/// @brief Method InsertItem, addr 0xa3d9868, size 0x11c, virtual true, abstract: false, final false
inline bool InsertItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations) ;

/// @brief Method Load, addr 0xa3d9b44, size 0x1e4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.Linq.JProperty::<LoadAsync>d__4))]
/// @brief Method LoadAsync, addr 0xa3d9348, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JProperty*>* LoadAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW  name) ;

static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW  name, /* [Nullable(2)] */ ::System::Object*  content) ;

static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::Newtonsoft::Json::Linq::JProperty*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// [NullableContext(2)]
/// @brief Method RemoveItem, addr 0xa3d96cc, size 0xb0, virtual true, abstract: false, final false
inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method RemoveItemAt, addr 0xa3d977c, size 0xb0, virtual true, abstract: false, final false
inline void RemoveItemAt(int32_t  index) ;

/// [NullableContext(2)]
/// @brief Method SetItem, addr 0xa3d9588, size 0x144, virtual true, abstract: false, final false
inline void SetItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method WriteTo, addr 0xa3d9ac4, size 0x80, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters) ;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& __cordl_internal_get__content() const;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& __cordl_internal_get__content() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__content(::Newtonsoft::Json::Linq::JProperty_JPropertyList*  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa3d4658, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0xa3d7274, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, /* [Nullable(2)] */ ::System::Object*  content) ;

/// @brief Method .ctor, addr 0xa3d9494, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JProperty*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method get_ChildrenTokens, addr 0xa3d9484, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// [DebuggerStepThrough]
/// @brief Method get_Name, addr 0xa3d948c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [DebuggerStepThrough]
/// @brief Method get_Type, addr 0xa3d9abc, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// [DebuggerStepThrough]
/// @brief Method get_Value, addr 0xa3d4280, size 0x18, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Value() ;

/// @brief Method set_Value, addr 0xa3d6d0c, size 0x84, virtual false, abstract: false, final false
inline void set_Value(::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JProperty(JProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JProperty(JProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23333};

/// @brief Field _content, offset: 0x58, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  ____content;

/// @brief Field _name, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____content) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____name) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Linq::JProperty) == 0x68, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// [Nullable(0)]
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty/JPropertyList
class CORDL_TYPE JProperty_JPropertyList : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

/// @brief Field _token, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__token, put=__cordl_internal_set__token)) ::Newtonsoft::Json::Linq::JToken*  _token;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xa3d9dc0, size 0x8, virtual true, abstract: false, final true
inline void Add(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Clear, addr 0xa3d9dc8, size 0xc, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xa3d9dd4, size 0x10, virtual true, abstract: false, final true
inline bool Contains(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method CopyTo, addr 0xa3d9de4, size 0x74, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*>  array, int32_t  arrayIndex) ;

/// [IteratorStateMachine(typeof(Newtonsoft.Json.Linq.JProperty::JPropertyList::<GetEnumerator>d__1))]
/// @brief Method GetEnumerator, addr 0xa3d9d28, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0xa3d9858, size 0x10, virtual true, abstract: false, final true
inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Insert, addr 0xa3d9ea8, size 0x14, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

static inline ::Newtonsoft::Json::Linq::JProperty_JPropertyList* New_ctor() ;

/// @brief Method Remove, addr 0xa3d9e58, size 0x38, virtual true, abstract: false, final true
inline bool Remove(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method RemoveAt, addr 0xa3d9ebc, size 0x14, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa3d9dbc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__token() const;

constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__token() ;

constexpr void __cordl_internal_set__token(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method .ctor, addr 0xa3d952c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0xa3d9e90, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0xa3d9ea0, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0xa3d9ed0, size 0x44, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0xa3d9f14, size 0x48, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JProperty_JPropertyList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JProperty_JPropertyList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JProperty_JPropertyList(JProperty_JPropertyList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JProperty_JPropertyList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JProperty_JPropertyList(JProperty_JPropertyList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23331};

/// [Nullable(2)]
/// @brief Field _token, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  ____token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty_JPropertyList, ____token) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Linq::JProperty_JPropertyList) == 0x18, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// [CompilerGenerated]
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
class CORDL_TYPE JPropertyList_JProperty__GetEnumerator_d__1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa3d9f60, size 0x68, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0xa3d9fc8, size 0x8, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa3d9fd0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa3da008, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa3d9f5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current() ;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& __cordl_internal_get___4__this() const;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JProperty_JPropertyList*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa3d9d94, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JPropertyList_JProperty__GetEnumerator_d__1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JPropertyList_JProperty__GetEnumerator_d__1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JPropertyList_JProperty__GetEnumerator_d__1(JPropertyList_JProperty__GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyList_JProperty__GetEnumerator_d__1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JPropertyList_JProperty__GetEnumerator_d__1(JPropertyList_JProperty__GetEnumerator_d__1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23330};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  _____2__current;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1) == 0x28, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
