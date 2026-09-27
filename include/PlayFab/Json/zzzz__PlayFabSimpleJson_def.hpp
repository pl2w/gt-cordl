#pragma once
// IWYU pragma private; include "PlayFab/Json/PlayFabSimpleJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabSimpleJson)
namespace GlobalNamespace {
struct PlayFabSimpleJson_TokenType;
}
namespace PlayFab::Json {
class IJsonSerializerStrategy;
}
namespace PlayFab::Json {
class JsonArray;
}
namespace PlayFab::Json {
class PocoJsonSerializerStrategy;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayFab::Json {
class PlayFabSimpleJson;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::PlayFabSimpleJson*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::PlayFabSimpleJson*, "PlayFab.Json", "PlayFabSimpleJson");
// [GeneratedCode("simple-json", "1.0.0")]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.PlayFabSimpleJson
class CORDL_TYPE PlayFabSimpleJson : public ::System::Object {
public:
// Declarations
using TokenType = ::GlobalNamespace::PlayFabSimpleJson_TokenType;

/// @brief Field EscapeCharacters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EscapeCharacters, put=setStaticF_EscapeCharacters)) ::ArrayW<char16_t>  EscapeCharacters;

/// @brief Field EscapeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EscapeTable, put=setStaticF_EscapeTable)) ::ArrayW<char16_t>  EscapeTable;

/// @brief Field NumberTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NumberTypes, put=setStaticF_NumberTypes)) ::System::Collections::Generic::List_1<::System::Type*>*  NumberTypes;

/// @brief Field _currentJsonSerializerStrategy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__currentJsonSerializerStrategy, put=setStaticF__currentJsonSerializerStrategy)) ::PlayFab::Json::IJsonSerializerStrategy*  _currentJsonSerializerStrategy;

/// @brief Field _parseStringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__parseStringBuilder, put=setStaticF__parseStringBuilder)) ::System::Text::StringBuilder*  _parseStringBuilder;

/// @brief Field _pocoJsonSerializerStrategy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pocoJsonSerializerStrategy, put=setStaticF__pocoJsonSerializerStrategy)) ::PlayFab::Json::PocoJsonSerializerStrategy*  _pocoJsonSerializerStrategy;

/// @brief Field _serializeObjectBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__serializeObjectBuilder, put=setStaticF__serializeObjectBuilder)) ::System::Text::StringBuilder*  _serializeObjectBuilder;

/// @brief Method ConvertFromUtf32, addr 0xa7e2de8, size 0x158, virtual false, abstract: false, final false
static inline ::StringW ConvertFromUtf32(int32_t  utf32) ;

/// @brief Method DeserializeObject, addr 0xa7e1180, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  json) ;

/// @brief Method DeserializeObject, addr 0xa7df034, size 0x198, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  json, ::System::Type*  type, ::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  json, ::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy) ;

/// @brief Method EatWhitespace, addr 0xa7e2d48, size 0xa0, virtual false, abstract: false, final false
static inline void EatWhitespace(::StringW  json, ::by_ref<int32_t>  index) ;

/// @brief Method EscapeToJavascriptString, addr 0xa7e1bd4, size 0x1d0, virtual false, abstract: false, final false
static inline ::StringW EscapeToJavascriptString(::StringW  jsonString) ;

/// @brief Method GetLastIndexOfNumber, addr 0xa7e2f40, size 0x9c, virtual false, abstract: false, final false
static inline int32_t GetLastIndexOfNumber(::StringW  json, int32_t  index) ;

/// @brief Method IsNumeric, addr 0xa7e39b4, size 0xd4, virtual false, abstract: false, final false
static inline bool IsNumeric(::System::Object*  value) ;

/// @brief Method LookAhead, addr 0xa7e22c8, size 0x6c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayFabSimpleJson_TokenType LookAhead(::StringW  json, int32_t  index) ;

/// @brief Method NextToken, addr 0xa7e1fc0, size 0x308, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayFabSimpleJson_TokenType NextToken(::StringW  json, ::by_ref<int32_t>  index) ;

/// @brief Method ParseArray, addr 0xa7e2904, size 0x1b8, virtual false, abstract: false, final false
static inline ::PlayFab::Json::JsonArray* ParseArray(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success) ;

/// @brief Method ParseNumber, addr 0xa7e2abc, size 0x28c, virtual false, abstract: false, final false
static inline ::System::Object* ParseNumber(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success) ;

/// @brief Method ParseObject, addr 0xa7e1da4, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>* ParseObject(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success) ;

/// @brief Method ParseString, addr 0xa7e2334, size 0x5d0, virtual false, abstract: false, final false
static inline ::StringW ParseString(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success) ;

/// @brief Method ParseValue, addr 0xa7e12f0, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Object* ParseValue(::StringW  json, ::by_ref<int32_t>  index, ::by_ref<bool>  success) ;

/// @brief Method SerializeArray, addr 0xa7e3618, size 0x39c, virtual false, abstract: false, final false
static inline bool SerializeArray(::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy, ::System::Collections::IEnumerable*  anArray, ::System::Text::StringBuilder*  builder) ;

/// @brief Method SerializeNumber, addr 0xa7e3a88, size 0x288, virtual false, abstract: false, final false
static inline bool SerializeNumber(::System::Object*  number, ::System::Text::StringBuilder*  builder) ;

/// @brief Method SerializeObject, addr 0xa7df258, size 0x178, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  json, ::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy) ;

/// @brief Method SerializeObject, addr 0xa7e3204, size 0x414, virtual false, abstract: false, final false
static inline bool SerializeObject(::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy, ::System::Collections::IEnumerable*  keys, ::System::Collections::IEnumerable*  values, ::System::Text::StringBuilder*  builder) ;

/// @brief Method SerializeString, addr 0xa7e2fdc, size 0x228, virtual false, abstract: false, final false
static inline bool SerializeString(::StringW  aString, ::System::Text::StringBuilder*  builder) ;

/// @brief Method SerializeValue, addr 0xa7e1598, size 0x63c, virtual false, abstract: false, final false
static inline bool SerializeValue(::PlayFab::Json::IJsonSerializerStrategy*  jsonSerializerStrategy, ::System::Object*  value, ::System::Text::StringBuilder*  builder) ;

/// @brief Method TryDeserializeObject, addr 0xa7e1238, size 0xb8, virtual false, abstract: false, final false
static inline bool TryDeserializeObject(::StringW  json, ::by_ref<::System::Object*>  obj) ;

static inline ::ArrayW<char16_t> getStaticF_EscapeCharacters() ;

static inline ::ArrayW<char16_t> getStaticF_EscapeTable() ;

static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF_NumberTypes() ;

static inline ::PlayFab::Json::IJsonSerializerStrategy* getStaticF__currentJsonSerializerStrategy() ;

static inline ::System::Text::StringBuilder* getStaticF__parseStringBuilder() ;

static inline ::PlayFab::Json::PocoJsonSerializerStrategy* getStaticF__pocoJsonSerializerStrategy() ;

static inline ::System::Text::StringBuilder* getStaticF__serializeObjectBuilder() ;

/// @brief Method get_CurrentJsonSerializerStrategy, addr 0xa7e150c, size 0x8c, virtual false, abstract: false, final false
static inline ::PlayFab::Json::IJsonSerializerStrategy* get_CurrentJsonSerializerStrategy() ;

/// @brief Method get_PocoJsonSerializerStrategy, addr 0xa7e3d10, size 0xac, virtual false, abstract: false, final false
static inline ::PlayFab::Json::PocoJsonSerializerStrategy* get_PocoJsonSerializerStrategy() ;

static inline void setStaticF_EscapeCharacters(::ArrayW<char16_t>  value) ;

static inline void setStaticF_EscapeTable(::ArrayW<char16_t>  value) ;

static inline void setStaticF_NumberTypes(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

static inline void setStaticF__currentJsonSerializerStrategy(::PlayFab::Json::IJsonSerializerStrategy*  value) ;

static inline void setStaticF__parseStringBuilder(::System::Text::StringBuilder*  value) ;

static inline void setStaticF__pocoJsonSerializerStrategy(::PlayFab::Json::PocoJsonSerializerStrategy*  value) ;

static inline void setStaticF__serializeObjectBuilder(::System::Text::StringBuilder*  value) ;

/// @brief Method set_CurrentJsonSerializerStrategy, addr 0xa7e3dbc, size 0x60, virtual false, abstract: false, final false
static inline void set_CurrentJsonSerializerStrategy(::PlayFab::Json::IJsonSerializerStrategy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabSimpleJson() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSimpleJson", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabSimpleJson(PlayFabSimpleJson && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabSimpleJson", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabSimpleJson(PlayFabSimpleJson const& ) = delete;

/// @brief Field BUILDER_INIT offset 0xffffffff size 0x4
static constexpr int32_t  BUILDER_INIT{static_cast<int32_t>(0x7d0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19543};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::PlayFabSimpleJson) == 0x10, "Size mismatch!");

} // namespace end def PlayFab::Json
