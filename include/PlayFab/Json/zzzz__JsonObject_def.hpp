#pragma once
// IWYU pragma private; include "PlayFab/Json/JsonObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonObject)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
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
class IEqualityComparer_1;
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
class Object;
}
// Forward declare root types
namespace PlayFab::Json {
class JsonObject;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::JsonObject*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::JsonObject*, "PlayFab.Json", "JsonObject");
// [DefaultMember("Item")]
// [GeneratedCode("simple-json", "1.0.0")]
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.JsonObject
class CORDL_TYPE JsonObject : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item)) ::System::Object*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<::System::Object*>*  Values;

/// @brief Field _members, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__members, put=__cordl_internal_set__members)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _members;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0xa7e0574, size 0x80, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  item) ;

/// @brief Method Add, addr 0xa7e0294, size 0x68, virtual true, abstract: false, final true
inline void Add(::StringW  key, ::System::Object*  value) ;

/// @brief Method Clear, addr 0xa7e05f4, size 0x50, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xa7e0644, size 0x98, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  item) ;

/// @brief Method ContainsKey, addr 0xa7e02fc, size 0x58, virtual true, abstract: false, final true
inline bool ContainsKey(::StringW  key) ;

/// @brief Method CopyTo, addr 0xa7e06dc, size 0x1cc, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>  array, int32_t  arrayIndex) ;

/// @brief Method GetAtIndex, addr 0xa7dfee0, size 0x3b4, virtual false, abstract: false, final false
static inline ::System::Object* GetAtIndex(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  obj, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0xa7e0964, size 0x94, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>* GetEnumerator() ;

static inline ::PlayFab::Json::JsonObject* New_ctor() ;

static inline ::PlayFab::Json::JsonObject* New_ctor(::System::Collections::Generic::IEqualityComparer_1<::StringW>*  comparer) ;

/// @brief Method Remove, addr 0xa7e0900, size 0x64, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  item) ;

/// @brief Method Remove, addr 0xa7e03a4, size 0x58, virtual true, abstract: false, final true
inline bool Remove(::StringW  key) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa7e09f8, size 0x94, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0xa7e0a8c, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetValue, addr 0xa7e03fc, size 0x68, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  key, ::by_ref<::System::Object*>  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__members() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__members() ;

constexpr void __cordl_internal_set__members(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xa7dfdbc, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa7dfe48, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<::StringW>*  comparer) ;

/// @brief Method get_Count, addr 0xa7e08a8, size 0x50, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0xa7e08f8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0xa7dfed8, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xa7e04b4, size 0x58, virtual true, abstract: false, final true
inline ::System::Object* get_Item(::StringW  key) ;

/// @brief Method get_Keys, addr 0xa7e0354, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys() ;

/// @brief Method get_Values, addr 0xa7e0464, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::System::Object*>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>* i___System__Collections__Generic__IDictionary_2___StringW___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___System__Object___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0xa7e050c, size 0x68, virtual true, abstract: false, final true
inline void set_Item(::StringW  key, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonObject(JsonObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonObject(JsonObject const& ) = delete;

/// @brief Field DICTIONARY_DEFAULT_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  DICTIONARY_DEFAULT_SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19541};

/// @brief Field _members, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____members;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::JsonObject, ____members) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::JsonObject) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Json
