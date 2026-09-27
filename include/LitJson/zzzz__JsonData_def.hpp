#pragma once
// IWYU pragma private; include "LitJson/JsonData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LitJson/zzzz__JsonType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonData)
namespace LitJson {
class IJsonWrapper;
}
namespace LitJson {
struct JsonType;
}
namespace LitJson {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Specialized {
class IOrderedDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LitJson {
class JsonData;
}
// Write type traits
MARK_REF_T(::LitJson::JsonData*);
DEFINE_IL2CPP_CLASS(::LitJson::JsonData*, "LitJson", "JsonData");
// [DefaultMember("Item")]
// Dependencies LitJson.JsonType, System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.JsonData
class CORDL_TYPE JsonData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsArray)) bool  IsArray;

 __declspec(property(get=get_IsBoolean)) bool  IsBoolean;

 __declspec(property(get=get_IsDouble)) bool  IsDouble;

 __declspec(property(get=get_IsInt)) bool  IsInt;

 __declspec(property(get=get_IsLong)) bool  IsLong;

 __declspec(property(get=get_IsObject)) bool  IsObject;

 __declspec(property(get=get_IsString)) bool  IsString;

 __declspec(property(get=get_Item, put=set_Item)) ::LitJson::JsonData*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::LitJson::JsonData*  Item[];

 __declspec(property(get=LitJson_IJsonWrapper_get_IsArray)) bool  LitJson_IJsonWrapper_IsArray;

 __declspec(property(get=LitJson_IJsonWrapper_get_IsBoolean)) bool  LitJson_IJsonWrapper_IsBoolean;

 __declspec(property(get=LitJson_IJsonWrapper_get_IsDouble)) bool  LitJson_IJsonWrapper_IsDouble;

 __declspec(property(get=LitJson_IJsonWrapper_get_IsInt)) bool  LitJson_IJsonWrapper_IsInt;

 __declspec(property(get=LitJson_IJsonWrapper_get_IsLong)) bool  LitJson_IJsonWrapper_IsLong;

 __declspec(property(get=LitJson_IJsonWrapper_get_IsObject)) bool  LitJson_IJsonWrapper_IsObject;

 __declspec(property(get=LitJson_IJsonWrapper_get_IsString)) bool  LitJson_IJsonWrapper_IsString;

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IDictionary_get_IsFixedSize)) bool  System_Collections_IDictionary_IsFixedSize;

 __declspec(property(get=System_Collections_IDictionary_get_IsReadOnly)) bool  System_Collections_IDictionary_IsReadOnly;

 __declspec(property(get=System_Collections_IDictionary_get_Item, put=System_Collections_IDictionary_set_Item)) ::System::Object*  System_Collections_IDictionary_Item[];

 __declspec(property(get=System_Collections_IDictionary_get_Keys)) ::System::Collections::ICollection*  System_Collections_IDictionary_Keys;

 __declspec(property(get=System_Collections_IDictionary_get_Values)) ::System::Collections::ICollection*  System_Collections_IDictionary_Values;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

 __declspec(property(get=System_Collections_Specialized_IOrderedDictionary_get_Item, put=System_Collections_Specialized_IOrderedDictionary_set_Item)) ::System::Object*  System_Collections_Specialized_IOrderedDictionary_Item[];

/// @brief Field inst_array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inst_array, put=__cordl_internal_set_inst_array)) ::System::Collections::Generic::IList_1<::LitJson::JsonData*>*  inst_array;

/// @brief Field inst_boolean, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_inst_boolean, put=__cordl_internal_set_inst_boolean)) bool  inst_boolean;

/// @brief Field inst_double, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inst_double, put=__cordl_internal_set_inst_double)) double_t  inst_double;

/// @brief Field inst_int, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_inst_int, put=__cordl_internal_set_inst_int)) int32_t  inst_int;

/// @brief Field inst_long, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_inst_long, put=__cordl_internal_set_inst_long)) int64_t  inst_long;

/// @brief Field inst_object, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_inst_object, put=__cordl_internal_set_inst_object)) ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>*  inst_object;

/// @brief Field inst_string, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_inst_string, put=__cordl_internal_set_inst_string)) ::StringW  inst_string;

/// @brief Field json, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_json, put=__cordl_internal_set_json)) ::StringW  json;

/// @brief Field object_list, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_object_list, put=__cordl_internal_set_object_list)) ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  object_list;

/// @brief Field type, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::LitJson::JsonType  type;

/// @brief Convert operator to "::LitJson::IJsonWrapper"
constexpr operator  ::LitJson::IJsonWrapper*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr operator  ::System::Collections::IDictionary*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Convert operator to "::System::Collections::Specialized::IOrderedDictionary"
constexpr operator  ::System::Collections::Specialized::IOrderedDictionary*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::LitJson::JsonData*>"
constexpr operator  ::System::IEquatable_1<::LitJson::JsonData*>*() noexcept;

/// @brief Method Add, addr 0x5b5d980, size 0xd0, virtual false, abstract: false, final false
inline int32_t Add(::System::Object*  value) ;

/// @brief Method Clear, addr 0x5b5ebe8, size 0x114, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method EnsureCollection, addr 0x5b5ab88, size 0xd4, virtual false, abstract: false, final false
inline ::System::Collections::ICollection* EnsureCollection() ;

/// @brief Method EnsureDictionary, addr 0x5b5aea4, size 0x174, virtual false, abstract: false, final false
inline ::System::Collections::IDictionary* EnsureDictionary() ;

/// @brief Method EnsureList, addr 0x5b5b938, size 0x124, virtual false, abstract: false, final false
inline ::System::Collections::IList* EnsureList() ;

/// @brief Method Equals, addr 0x5b5ecfc, size 0x164, virtual true, abstract: false, final true
inline bool Equals(::LitJson::JsonData*  x) ;

/// @brief Method GetJsonType, addr 0x5b5ee60, size 0x8, virtual true, abstract: false, final true
inline ::LitJson::JsonType GetJsonType() ;

/// @brief Method LitJson.IJsonWrapper.GetBoolean, addr 0x5b5d5f8, size 0x60, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_GetBoolean() ;

/// @brief Method LitJson.IJsonWrapper.GetDouble, addr 0x5b5d658, size 0x60, virtual true, abstract: false, final true
inline double_t LitJson_IJsonWrapper_GetDouble() ;

/// @brief Method LitJson.IJsonWrapper.GetInt, addr 0x5b5d6b8, size 0x60, virtual true, abstract: false, final true
inline int32_t LitJson_IJsonWrapper_GetInt() ;

/// @brief Method LitJson.IJsonWrapper.GetLong, addr 0x5b5d718, size 0x60, virtual true, abstract: false, final true
inline int64_t LitJson_IJsonWrapper_GetLong() ;

/// @brief Method LitJson.IJsonWrapper.GetString, addr 0x5b5d778, size 0x60, virtual true, abstract: false, final true
inline ::StringW LitJson_IJsonWrapper_GetString() ;

/// @brief Method LitJson.IJsonWrapper.SetBoolean, addr 0x5b5d7d8, size 0x1c, virtual true, abstract: false, final true
inline void LitJson_IJsonWrapper_SetBoolean(bool  val) ;

/// @brief Method LitJson.IJsonWrapper.SetDouble, addr 0x5b5d7f4, size 0x18, virtual true, abstract: false, final true
inline void LitJson_IJsonWrapper_SetDouble(double_t  val) ;

/// @brief Method LitJson.IJsonWrapper.SetInt, addr 0x5b5d80c, size 0x1c, virtual true, abstract: false, final true
inline void LitJson_IJsonWrapper_SetInt(int32_t  val) ;

/// @brief Method LitJson.IJsonWrapper.SetLong, addr 0x5b5d828, size 0x1c, virtual true, abstract: false, final true
inline void LitJson_IJsonWrapper_SetLong(int64_t  val) ;

/// @brief Method LitJson.IJsonWrapper.SetString, addr 0x5b5d844, size 0x2c, virtual true, abstract: false, final true
inline void LitJson_IJsonWrapper_SetString(::StringW  val) ;

/// @brief Method LitJson.IJsonWrapper.ToJson, addr 0x5b5d870, size 0x4, virtual true, abstract: false, final true
inline ::StringW LitJson_IJsonWrapper_ToJson() ;

/// @brief Method LitJson.IJsonWrapper.ToJson, addr 0x5b5d948, size 0x4, virtual true, abstract: false, final true
inline void LitJson_IJsonWrapper_ToJson(::LitJson::JsonWriter*  writer) ;

/// @brief Method LitJson.IJsonWrapper.get_IsArray, addr 0x5b5b81c, size 0x10, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_get_IsArray() ;

/// @brief Method LitJson.IJsonWrapper.get_IsBoolean, addr 0x5b5b82c, size 0x10, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_get_IsBoolean() ;

/// @brief Method LitJson.IJsonWrapper.get_IsDouble, addr 0x5b5b83c, size 0x10, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_get_IsDouble() ;

/// @brief Method LitJson.IJsonWrapper.get_IsInt, addr 0x5b5b84c, size 0x10, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_get_IsInt() ;

/// @brief Method LitJson.IJsonWrapper.get_IsLong, addr 0x5b5b85c, size 0x10, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_get_IsLong() ;

/// @brief Method LitJson.IJsonWrapper.get_IsObject, addr 0x5b5b86c, size 0x10, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_get_IsObject() ;

/// @brief Method LitJson.IJsonWrapper.get_IsString, addr 0x5b5b87c, size 0x10, virtual true, abstract: false, final true
inline bool LitJson_IJsonWrapper_get_IsString() ;

static inline ::LitJson::JsonData* New_ctor() ;

static inline ::LitJson::JsonData* New_ctor(bool  boolean) ;

static inline ::LitJson::JsonData* New_ctor(double_t  number) ;

static inline ::LitJson::JsonData* New_ctor(int32_t  number) ;

static inline ::LitJson::JsonData* New_ctor(int64_t  number) ;

static inline ::LitJson::JsonData* New_ctor(::System::Object*  obj) ;

static inline ::LitJson::JsonData* New_ctor(::StringW  str) ;

/// @brief Method SetJsonType, addr 0x5b5ee68, size 0x198, virtual true, abstract: false, final true
inline void SetJsonType(::LitJson::JsonType  type) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x5b5cdd0, size 0xc0, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_Count, addr 0x5b5ac9c, size 0x4, virtual true, abstract: false, final true
inline int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x5b5aca0, size 0xac, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x5b5ad4c, size 0xac, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IDictionary.Add, addr 0x5b5ce90, size 0x1c0, virtual true, abstract: false, final true
inline void System_Collections_IDictionary_Add(::System::Object*  key, ::System::Object*  value) ;

/// @brief Method System.Collections.IDictionary.Clear, addr 0x5b5d050, size 0x134, virtual true, abstract: false, final true
inline void System_Collections_IDictionary_Clear() ;

/// @brief Method System.Collections.IDictionary.Contains, addr 0x5b5d184, size 0xb4, virtual true, abstract: false, final true
inline bool System_Collections_IDictionary_Contains(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x5b5d238, size 0x98, virtual true, abstract: false, final true
inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator() ;

/// @brief Method System.Collections.IDictionary.Remove, addr 0x5b5d2d0, size 0x280, virtual true, abstract: false, final true
inline void System_Collections_IDictionary_Remove(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x5b5adf8, size 0xac, virtual true, abstract: false, final true
inline bool System_Collections_IDictionary_get_IsFixedSize() ;

/// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x5b5b018, size 0xac, virtual true, abstract: false, final true
inline bool System_Collections_IDictionary_get_IsReadOnly() ;

/// @brief Method System.Collections.IDictionary.get_Item, addr 0x5b5bb08, size 0xb0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object*  key) ;

/// @brief Method System.Collections.IDictionary.get_Keys, addr 0x5b5b0c4, size 0x3ac, virtual true, abstract: false, final true
inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys() ;

/// @brief Method System.Collections.IDictionary.get_Values, addr 0x5b5b470, size 0x3ac, virtual true, abstract: false, final true
inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values() ;

/// @brief Method System.Collections.IDictionary.set_Item, addr 0x5b5bbb8, size 0xac, virtual true, abstract: false, final true
inline void System_Collections_IDictionary_set_Item(::System::Object*  key, ::System::Object*  value) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5b5d550, size 0xa8, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.Add, addr 0x5b5d97c, size 0x4, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Clear, addr 0x5b5da50, size 0xbc, virtual true, abstract: false, final true
inline void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains, addr 0x5b5db0c, size 0xb4, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0x5b5dbc0, size 0xb4, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0x5b5dc74, size 0xd4, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0x5b5dd48, size 0xc4, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.RemoveAt, addr 0x5b5de0c, size 0xc4, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x5b5b88c, size 0xac, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x5b5ba5c, size 0xac, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0x5b5c350, size 0xb0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0x5b5c400, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.Specialized.IOrderedDictionary.GetEnumerator, addr 0x5b5ded0, size 0xe4, virtual true, abstract: false, final true
inline ::System::Collections::IDictionaryEnumerator* System_Collections_Specialized_IOrderedDictionary_GetEnumerator() ;

/// @brief Method System.Collections.Specialized.IOrderedDictionary.Insert, addr 0x5b5dfb4, size 0x140, virtual true, abstract: false, final true
inline void System_Collections_Specialized_IOrderedDictionary_Insert(int32_t  idx, ::System::Object*  key, ::System::Object*  value) ;

/// @brief Method System.Collections.Specialized.IOrderedDictionary.RemoveAt, addr 0x5b5e0f4, size 0x1ac, virtual true, abstract: false, final true
inline void System_Collections_Specialized_IOrderedDictionary_RemoveAt(int32_t  idx) ;

/// @brief Method System.Collections.Specialized.IOrderedDictionary.get_Item, addr 0x5b5c080, size 0xc4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Specialized_IOrderedDictionary_get_Item(int32_t  idx) ;

/// @brief Method System.Collections.Specialized.IOrderedDictionary.set_Item, addr 0x5b5c144, size 0x20c, virtual true, abstract: false, final true
inline void System_Collections_Specialized_IOrderedDictionary_set_Item(int32_t  idx, ::System::Object*  value) ;

/// @brief Method ToJson, addr 0x5b5d874, size 0xd4, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToJson, addr 0x5b5d94c, size 0x30, virtual false, abstract: false, final false
inline void ToJson(::LitJson::JsonWriter*  writer) ;

/// @brief Method ToJsonData, addr 0x5b5bc64, size 0x88, virtual false, abstract: false, final false
inline ::LitJson::JsonData* ToJsonData(::System::Object*  obj) ;

/// @brief Method ToString, addr 0x5b5f000, size 0x130, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteJson, addr 0x5b5e2a0, size 0x948, virtual false, abstract: false, final false
static inline void WriteJson(::LitJson::IJsonWrapper*  obj, ::LitJson::JsonWriter*  writer) ;

constexpr ::System::Collections::Generic::IList_1<::LitJson::JsonData*>* const& __cordl_internal_get_inst_array() const;

constexpr ::System::Collections::Generic::IList_1<::LitJson::JsonData*>*& __cordl_internal_get_inst_array() ;

constexpr bool const& __cordl_internal_get_inst_boolean() const;

constexpr bool& __cordl_internal_get_inst_boolean() ;

constexpr double_t const& __cordl_internal_get_inst_double() const;

constexpr double_t& __cordl_internal_get_inst_double() ;

constexpr int32_t const& __cordl_internal_get_inst_int() const;

constexpr int32_t& __cordl_internal_get_inst_int() ;

constexpr int64_t const& __cordl_internal_get_inst_long() const;

constexpr int64_t& __cordl_internal_get_inst_long() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>* const& __cordl_internal_get_inst_object() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>*& __cordl_internal_get_inst_object() ;

constexpr ::StringW const& __cordl_internal_get_inst_string() const;

constexpr ::StringW& __cordl_internal_get_inst_string() ;

constexpr ::StringW const& __cordl_internal_get_json() const;

constexpr ::StringW& __cordl_internal_get_json() ;

constexpr ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>* const& __cordl_internal_get_object_list() const;

constexpr ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*& __cordl_internal_get_object_list() ;

constexpr ::LitJson::JsonType const& __cordl_internal_get_type() const;

constexpr ::LitJson::JsonType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_inst_array(::System::Collections::Generic::IList_1<::LitJson::JsonData*>*  value) ;

constexpr void __cordl_internal_set_inst_boolean(bool  value) ;

constexpr void __cordl_internal_set_inst_double(double_t  value) ;

constexpr void __cordl_internal_set_inst_int(int32_t  value) ;

constexpr void __cordl_internal_set_inst_long(int64_t  value) ;

constexpr void __cordl_internal_set_inst_object(::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>*  value) ;

constexpr void __cordl_internal_set_inst_string(::StringW  value) ;

constexpr void __cordl_internal_set_json(::StringW  value) ;

constexpr void __cordl_internal_set_object_list(::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  value) ;

constexpr void __cordl_internal_set_type(::LitJson::JsonType  value) ;

/// @brief Method .ctor, addr 0x5b5c830, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5b5c838, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  boolean) ;

/// @brief Method .ctor, addr 0x5b5c868, size 0x30, virtual false, abstract: false, final false
inline void _ctor(double_t  number) ;

/// @brief Method .ctor, addr 0x5b5c898, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  number) ;

/// @brief Method .ctor, addr 0x5b5c8c8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int64_t  number) ;

/// @brief Method .ctor, addr 0x5b5c8f8, size 0x1bc, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  obj) ;

/// @brief Method .ctor, addr 0x5b5cab4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  str) ;

/// @brief Method get_Count, addr 0x5b5aadc, size 0xac, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsArray, addr 0x5b55114, size 0x10, virtual false, abstract: false, final false
inline bool get_IsArray() ;

/// @brief Method get_IsBoolean, addr 0x5b5ac5c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBoolean() ;

/// @brief Method get_IsDouble, addr 0x5b5ac6c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDouble() ;

/// @brief Method get_IsInt, addr 0x5b5513c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInt() ;

/// @brief Method get_IsLong, addr 0x5b5512c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLong() ;

/// @brief Method get_IsObject, addr 0x5b5ac7c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsObject() ;

/// @brief Method get_IsString, addr 0x5b5ac8c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsString() ;

/// @brief Method get_Item, addr 0x5b5c6e0, size 0x150, virtual false, abstract: false, final false
inline ::LitJson::JsonData* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0x5b52d30, size 0xb0, virtual false, abstract: false, final false
inline ::LitJson::JsonData* get_Item(::StringW  prop_name) ;

/// @brief Convert to "::LitJson::IJsonWrapper"
constexpr ::LitJson::IJsonWrapper* i___LitJson__IJsonWrapper() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

/// @brief Convert to "::System::Collections::Specialized::IOrderedDictionary"
constexpr ::System::Collections::Specialized::IOrderedDictionary* i___System__Collections__Specialized__IOrderedDictionary() noexcept;

/// @brief Convert to "::System::IEquatable_1<::LitJson::JsonData*>"
constexpr ::System::IEquatable_1<::LitJson::JsonData*>* i___System__IEquatable_1___LitJson__JsonData__() noexcept;

/// @brief Method op_Explicit, addr 0x5b52e4c, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW op_Explicit___StringW(::LitJson::JsonData*  data) ;

/// @brief Method op_Explicit, addr 0x5b5ccf8, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Explicit_bool(::LitJson::JsonData*  data) ;

/// @brief Method op_Explicit, addr 0x5b5cd64, size 0x6c, virtual false, abstract: false, final false
static inline double_t op_Explicit_double_t(::LitJson::JsonData*  data) ;

/// @brief Method op_Explicit, addr 0x5b52de0, size 0x6c, virtual false, abstract: false, final false
static inline int32_t op_Explicit_int32_t(::LitJson::JsonData*  data) ;

/// @brief Method op_Explicit, addr 0x5b5388c, size 0x6c, virtual false, abstract: false, final false
static inline int64_t op_Explicit_int64_t(::LitJson::JsonData*  data) ;

/// @brief Method op_Implicit, addr 0x5b5cc88, size 0x70, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* op_Implicit___LitJson__JsonData_(::StringW  data) ;

/// @brief Method op_Implicit, addr 0x5b5caec, size 0x68, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* op_Implicit___LitJson__JsonData_(bool  data) ;

/// @brief Method op_Implicit, addr 0x5b5cb54, size 0x6c, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* op_Implicit___LitJson__JsonData_(double_t  data) ;

/// @brief Method op_Implicit, addr 0x5b5cbc0, size 0x64, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* op_Implicit___LitJson__JsonData_(int32_t  data) ;

/// @brief Method op_Implicit, addr 0x5b5cc24, size 0x64, virtual false, abstract: false, final false
static inline ::LitJson::JsonData* op_Implicit___LitJson__JsonData_(int64_t  data) ;

/// @brief Method set_Item, addr 0x5b5c438, size 0x2a8, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::LitJson::JsonData*  value) ;

/// @brief Method set_Item, addr 0x5b5bcec, size 0x394, virtual false, abstract: false, final false
inline void set_Item(::StringW  prop_name, ::LitJson::JsonData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonData(JsonData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonData(JsonData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3819};

/// @brief Field inst_array, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::LitJson::JsonData*>*  ___inst_array;

/// @brief Field inst_boolean, offset: 0x18, size: 0x1, def value: None
 bool  ___inst_boolean;

/// @brief Field inst_double, offset: 0x20, size: 0x8, def value: None
 double_t  ___inst_double;

/// @brief Field inst_int, offset: 0x28, size: 0x4, def value: None
 int32_t  ___inst_int;

/// @brief Field inst_long, offset: 0x30, size: 0x8, def value: None
 int64_t  ___inst_long;

/// @brief Field inst_object, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>*  ___inst_object;

/// @brief Field inst_string, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___inst_string;

/// @brief Field json, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___json;

/// @brief Field type, offset: 0x50, size: 0x4, def value: None
 ::LitJson::JsonType  ___type;

/// @brief Field object_list, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  ___object_list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LitJson::JsonData, ___inst_array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___inst_boolean) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___inst_double) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___inst_int) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___inst_long) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___inst_object) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___inst_string) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___json) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___type) == 0x50, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonData, ___object_list) == 0x58, "Offset mismatch!");

static_assert(sizeof(::LitJson::JsonData) == 0x60, "Size mismatch!");

} // namespace end def LitJson
