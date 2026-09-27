#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaObjectTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_EnumeratorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaObjectTable)
namespace GlobalNamespace {
struct XmlSchemaObjectTable_EnumeratorType;
}
namespace GlobalNamespace {
struct XmlSchemaObjectTable_XmlSchemaObjectEntry;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_ValuesCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSODictionaryEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSOEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_ValuesCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSODictionaryEnumerator;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable_XSOEnumerator;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlSchemaObjectTable*);
MARK_REF_T(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*);
MARK_REF_T(::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*);
MARK_REF_T(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlSchemaObjectTable*, "System.Xml.Schema", "XmlSchemaObjectTable");
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection*, "System.Xml.Schema", "XmlSchemaObjectTable/ValuesCollection");
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator*, "System.Xml.Schema", "XmlSchemaObjectTable/XSODictionaryEnumerator");
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator*, "System.Xml.Schema", "XmlSchemaObjectTable/XSOEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable
class CORDL_TYPE XmlSchemaObjectTable : public ::System::Object {
public:
// Declarations
using EnumeratorType = ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType;

using XmlSchemaObjectEntry = ::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry;

using ValuesCollection = ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection;

using XSODictionaryEnumerator = ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator;

using XSOEnumerator = ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::System::Xml::Schema::XmlSchemaObject*  Item[];

 __declspec(property(get=get_Values)) ::System::Collections::ICollection*  Values;

/// @brief Field entries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries;

/// @brief Field table, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::XmlSchemaObject*>*  table;

/// @brief Method Add, addr 0xab40480, size 0x110, virtual false, abstract: false, final false
inline void Add(::System::Xml::XmlQualifiedName*  name, ::System::Xml::Schema::XmlSchemaObject*  value) ;

/// @brief Method Clear, addr 0xab40888, size 0x94, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0xab40a3c, size 0x58, virtual false, abstract: false, final false
inline bool Contains(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method FindIndexByValue, addr 0xab406e0, size 0x9c, virtual false, abstract: false, final false
inline int32_t FindIndexByValue(::System::Xml::Schema::XmlSchemaObject*  xso) ;

/// @brief Method GetEnumerator, addr 0xab40be8, size 0xac, virtual false, abstract: false, final false
inline ::System::Collections::IDictionaryEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0xab405c0, size 0x120, virtual false, abstract: false, final false
inline void Insert(::System::Xml::XmlQualifiedName*  name, ::System::Xml::Schema::XmlSchemaObject*  value) ;

static inline ::System::Xml::Schema::XmlSchemaObjectTable* New_ctor() ;

/// @brief Method Remove, addr 0xab4091c, size 0xd0, virtual false, abstract: false, final false
inline void Remove(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method Replace, addr 0xab4077c, size 0x10c, virtual false, abstract: false, final false
inline void Replace(::System::Xml::XmlQualifiedName*  name, ::System::Xml::Schema::XmlSchemaObject*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*& __cordl_internal_get_entries() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::XmlSchemaObject*>* const& __cordl_internal_get_table() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::XmlSchemaObject*>*& __cordl_internal_get_table() ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  value) ;

constexpr void __cordl_internal_set_table(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::XmlSchemaObject*>*  value) ;

/// @brief Method .ctor, addr 0xab403a4, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0xab409ec, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xab40a94, size 0x78, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Xml::XmlQualifiedName*  name) ;

/// @brief Method get_Values, addr 0xab40b0c, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::ICollection* get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaObjectTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaObjectTable(XmlSchemaObjectTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaObjectTable(XmlSchemaObjectTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14534};

/// @brief Field table, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,::System::Xml::Schema::XmlSchemaObject*>*  ___table;

/// @brief Field entries, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  ___entries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable, ___table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable, ___entries) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectTable) == 0x20, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Dependencies System.Xml.Schema.XmlSchemaObjectTable::XSOEnumerator
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/XSODictionaryEnumerator
class CORDL_TYPE XmlSchemaObjectTable_XSODictionaryEnumerator : public ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator {
public:
// Declarations
 __declspec(property(get=get_Entry)) ::System::Collections::DictionaryEntry  Entry;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr operator  ::System::Collections::IDictionaryEnumerator*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

static inline ::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries, int32_t  size, ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType  enumType) ;

/// @brief Method .ctor, addr 0xab40c94, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries, int32_t  size, ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType  enumType) ;

/// @brief Method get_Entry, addr 0xab412d8, size 0x144, virtual true, abstract: false, final true
inline ::System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key, addr 0xab4141c, size 0x128, virtual true, abstract: false, final true
inline ::System::Object* get_Key() ;

/// @brief Method get_Value, addr 0xab41544, size 0x128, virtual true, abstract: false, final true
inline ::System::Object* get_Value() ;

/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaObjectTable_XSODictionaryEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSODictionaryEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaObjectTable_XSODictionaryEnumerator(XmlSchemaObjectTable_XSODictionaryEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSODictionaryEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaObjectTable_XSODictionaryEnumerator(XmlSchemaObjectTable_XSODictionaryEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectTable_XSODictionaryEnumerator) == 0x38, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Dependencies System.Object, System.Xml.Schema.XmlSchemaObjectTable::EnumeratorType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/XSOEnumerator
class CORDL_TYPE XmlSchemaObjectTable_XSOEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field currentIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentKey, put=__cordl_internal_set_currentKey)) ::System::Xml::XmlQualifiedName*  currentKey;

/// @brief Field currentValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentValue, put=__cordl_internal_set_currentValue)) ::System::Xml::Schema::XmlSchemaObject*  currentValue;

/// @brief Field entries, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries;

/// @brief Field enumType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_enumType, put=__cordl_internal_set_enumType)) ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType  enumType;

/// @brief Field size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0xab411d8, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries, int32_t  size, ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType  enumType) ;

/// @brief Method Reset, addr 0xab412a8, size 0x30, virtual true, abstract: false, final true
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_currentKey() const;

constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_currentKey() ;

constexpr ::System::Xml::Schema::XmlSchemaObject* const& __cordl_internal_get_currentValue() const;

constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_currentValue() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*& __cordl_internal_get_entries() ;

constexpr ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType const& __cordl_internal_get_enumType() const;

constexpr ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType& __cordl_internal_get_enumType() ;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentKey(::System::Xml::XmlQualifiedName*  value) ;

constexpr void __cordl_internal_set_currentValue(::System::Xml::Schema::XmlSchemaObject*  value) ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  value) ;

constexpr void __cordl_internal_set_enumType(::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

/// @brief Method .ctor, addr 0xab40fd8, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries, int32_t  size, ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType  enumType) ;

/// @brief Method get_Current, addr 0xab41028, size 0x1b0, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaObjectTable_XSOEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSOEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaObjectTable_XSOEnumerator(XmlSchemaObjectTable_XSOEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_XSOEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaObjectTable_XSOEnumerator(XmlSchemaObjectTable_XSOEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14532};

/// @brief Field entries, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  ___entries;

/// @brief Field enumType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::XmlSchemaObjectTable_EnumeratorType  ___enumType;

/// @brief Field currentIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field size, offset: 0x20, size: 0x4, def value: None
 int32_t  ___size;

/// @brief Field currentKey, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::XmlQualifiedName*  ___currentKey;

/// @brief Field currentValue, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaObject*  ___currentValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___enumType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___currentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___currentKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator, ___currentValue) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator) == 0x38, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaObjectTable/ValuesCollection
class CORDL_TYPE XmlSchemaObjectTable_ValuesCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Field entries, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries;

/// @brief Field size, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method CopyTo, addr 0xab40e34, size 0x11c, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0xab40f50, size 0x88, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries, int32_t  size) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>* const& __cordl_internal_get_entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*& __cordl_internal_get_entries() ;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_entries(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

/// @brief Method .ctor, addr 0xab40bac, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  entries, int32_t  size) ;

/// @brief Method get_Count, addr 0xab40ce4, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsSynchronized, addr 0xab40d90, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot, addr 0xab40cec, size 0xa4, virtual true, abstract: false, final true
inline ::System::Object* get_SyncRoot() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaObjectTable_ValuesCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_ValuesCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaObjectTable_ValuesCollection(XmlSchemaObjectTable_ValuesCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaObjectTable_ValuesCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaObjectTable_ValuesCollection(XmlSchemaObjectTable_ValuesCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14531};

/// @brief Field entries, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::XmlSchemaObjectTable_XmlSchemaObjectEntry>*  ___entries;

/// @brief Field size, offset: 0x18, size: 0x4, def value: None
 int32_t  ___size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection, ___size) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection) == 0x20, "Size mismatch!");

} // namespace end def System::Xml::Schema
