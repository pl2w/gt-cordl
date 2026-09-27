#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__JsonConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonConvert)
namespace GlobalNamespace {
template<typename IN_TYPE>
struct JsonConvert__DeserializeObjectAsync_d__8_1;
}
namespace Meta::WitAi::Json {
class IJsonVariableInfo;
}
namespace Meta::WitAi::Json {
class JsonConvert___c;
}
namespace Meta::WitAi::Json {
template<typename IN_TYPE>
class JsonConvert___c__DisplayClass8_0_1;
}
namespace Meta::WitAi::Json {
class JsonConverter;
}
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::WitAi::Json {
class JsonConvert;
}
namespace Meta::WitAi::Json {
class JsonConvert___c;
}
namespace Meta::WitAi::Json {
template<typename IN_TYPE>
class JsonConvert___c__DisplayClass8_0_1;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::JsonConvert*);
MARK_REF_T(::Meta::WitAi::Json::JsonConvert___c*);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JsonConvert*, "Meta.WitAi.Json", "JsonConvert");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JsonConvert___c*, "Meta.WitAi.Json", "JsonConvert/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1, "Meta.WitAi.Json", "JsonConvert/<>c__DisplayClass8_0`1");
// Dependencies Meta.WitAi.Json.JsonConverter, System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonConvert
class CORDL_TYPE JsonConvert : public ::System::Object {
public:
// Declarations
template<typename IN_TYPE>
using _DeserializeObjectAsync_d__8_1 = ::GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1<IN_TYPE>;

using __c = ::Meta::WitAi::Json::JsonConvert___c;

template<typename IN_TYPE>
using __c__DisplayClass8_0_1 = ::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>;

/// @brief Field _defaultConverters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultConverters, put=setStaticF__defaultConverters)) ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  _defaultConverters;

/// @brief Field _enumParseMethod, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__enumParseMethod, put=setStaticF__enumParseMethod)) ::System::Reflection::MethodInfo*  _enumParseMethod;

/// [Preserve]
/// @brief Method DeserializeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename ITEM_TYPE>
static inline ::ArrayW<ITEM_TYPE> DeserializeArray(::System::Object*  oldArray, ::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters) ;

/// @brief Method DeserializeClass, addr 0x9e41c84, size 0x82c, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeClass(::System::Type*  toType, ::System::Object*  oldObject, ::Meta::WitAi::Json::WitResponseClass*  jsonClass, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters) ;

/// @brief Method DeserializeDictionary, addr 0x9e41a64, size 0x220, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeDictionary(::System::Type*  toType, ::System::Object*  oldObject, ::Meta::WitAi::Json::WitResponseClass*  jsonClass, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters) ;

/// @brief Method DeserializeEnum, addr 0x9e4164c, size 0x418, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeEnum(::System::Type*  toType, ::System::Object*  oldValue, ::StringW  enumString, ::System::Text::StringBuilder*  log) ;

/// @brief Method DeserializeIntoObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename IN_TYPE>
static inline IN_TYPE DeserializeIntoObject(IN_TYPE  instance, ::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings) ;

/// @brief Method DeserializeIntoObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename IN_TYPE>
static inline IN_TYPE DeserializeIntoObject(IN_TYPE  instance, ::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename IN_TYPE>
static inline IN_TYPE DeserializeObject(::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename IN_TYPE>
static inline IN_TYPE DeserializeObject(::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.Json.JsonConvert::<DeserializeObjectAsync>d__8`1<IN_TYPE>))]
/// @brief Method DeserializeObjectAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename IN_TYPE>
static inline ::System::Threading::Tasks::Task_1<IN_TYPE>* DeserializeObjectAsync(::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings) ;

/// @brief Method DeserializeToken, addr 0x9e400b8, size 0x140, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* DeserializeToken(::StringW  jsonString) ;

/// @brief Method DeserializeToken, addr 0x9e4099c, size 0xcb0, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeToken(::System::Type*  toType, ::System::Object*  oldValue, ::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters) ;

/// @brief Method EnsureExists, addr 0x9e3ff44, size 0x174, virtual false, abstract: false, final false
static inline ::System::Object* EnsureExists(::System::Type*  objType, ::System::Object*  obj) ;

/// @brief Method GetVarDictionary, addr 0x9e42538, size 0x480, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::WitAi::Json::IJsonVariableInfo*>* GetVarDictionary(::System::Type*  forType, ::System::Text::StringBuilder*  log) ;

/// @brief Method GetVarInfos, addr 0x9e43cf4, size 0x2c4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Meta::WitAi::Json::IJsonVariableInfo*>* GetVarInfos(::System::Type*  forType) ;

/// @brief Method SerializeClass, addr 0x9e4370c, size 0x5e8, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseClass* SerializeClass(::System::Type*  inType, ::System::Object*  inObject, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters) ;

/// @brief Method SerializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFromType>
static inline ::StringW SerializeObject(TFromType  inObject, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings) ;

/// @brief Method SerializeToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFromType>
static inline ::Meta::WitAi::Json::WitResponseNode* SerializeToken(TFromType  inObject, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings) ;

/// @brief Method SerializeToken, addr 0x9e429b8, size 0xb64, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* SerializeToken(::System::Type*  inType, ::System::Object*  inObject, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters) ;

static inline ::ArrayW<::Meta::WitAi::Json::JsonConverter*> getStaticF__defaultConverters() ;

static inline ::System::Reflection::MethodInfo* getStaticF__enumParseMethod() ;

/// @brief Method get_DefaultConverters, addr 0x9e3feec, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::Meta::WitAi::Json::JsonConverter*> get_DefaultConverters() ;

static inline void setStaticF__defaultConverters(::ArrayW<::Meta::WitAi::Json::JsonConverter*>  value) ;

static inline void setStaticF__enumParseMethod(::System::Reflection::MethodInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConvert(JsonConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConvert(JsonConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::JsonConvert) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
// [CompilerGenerated]
// Dependencies Meta.WitAi.Json.JsonConverter, System.Object
namespace Meta::WitAi::Json {
// cpp template
template<typename IN_TYPE>
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonConvert/<>c__DisplayClass8_0`1<IN_TYPE>
class CORDL_TYPE JsonConvert___c__DisplayClass8_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field customConverters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_customConverters, put=__cordl_internal_set_customConverters)) ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters;

/// @brief Field jsonString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_jsonString, put=__cordl_internal_set_jsonString)) ::StringW  jsonString;

/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) IN_TYPE  result;

/// @brief Field suppressWarnings, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_suppressWarnings, put=__cordl_internal_set_suppressWarnings)) bool  suppressWarnings;

static inline ::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>* New_ctor() ;

/// @brief Method <DeserializeObjectAsync>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline IN_TYPE _DeserializeObjectAsync_b__0() ;

constexpr ::ArrayW<::Meta::WitAi::Json::JsonConverter*> const& __cordl_internal_get_customConverters() const;

constexpr ::ArrayW<::Meta::WitAi::Json::JsonConverter*>& __cordl_internal_get_customConverters() ;

constexpr ::StringW const& __cordl_internal_get_jsonString() const;

constexpr ::StringW& __cordl_internal_get_jsonString() ;

constexpr IN_TYPE const& __cordl_internal_get_result() const;

constexpr IN_TYPE& __cordl_internal_get_result() ;

constexpr bool const& __cordl_internal_get_suppressWarnings() const;

constexpr bool& __cordl_internal_get_suppressWarnings() ;

constexpr void __cordl_internal_set_customConverters(::ArrayW<::Meta::WitAi::Json::JsonConverter*>  value) ;

constexpr void __cordl_internal_set_jsonString(::StringW  value) ;

constexpr void __cordl_internal_set_result(IN_TYPE  value) ;

constexpr void __cordl_internal_set_suppressWarnings(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConvert___c__DisplayClass8_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert___c__DisplayClass8_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConvert___c__DisplayClass8_0_1(JsonConvert___c__DisplayClass8_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert___c__DisplayClass8_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConvert___c__DisplayClass8_0_1(JsonConvert___c__DisplayClass8_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31018};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 IN_TYPE  ___result;

/// @brief Field jsonString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___jsonString;

/// @brief Field customConverters, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  ___customConverters;

/// @brief Field suppressWarnings, offset: 0x28, size: 0x1, def value: None
 bool  ___suppressWarnings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JsonConvert/<>c
class CORDL_TYPE JsonConvert___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::WitAi::Json::JsonConvert___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Predicate_1<::System::Reflection::MethodInfo*>*  __9__17_0;

static inline ::Meta::WitAi::Json::JsonConvert___c* New_ctor() ;

/// @brief Method <DeserializeEnum>b__17_0, addr 0x9e441e8, size 0xac, virtual false, abstract: false, final false
inline bool _DeserializeEnum_b__17_0(::System::Reflection::MethodInfo*  method) ;

/// @brief Method .ctor, addr 0x9e441e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::WitAi::Json::JsonConvert___c* getStaticF___9() ;

static inline ::System::Predicate_1<::System::Reflection::MethodInfo*>* getStaticF___9__17_0() ;

static inline void setStaticF___9(::Meta::WitAi::Json::JsonConvert___c*  value) ;

static inline void setStaticF___9__17_0(::System::Predicate_1<::System::Reflection::MethodInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConvert___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConvert___c(JsonConvert___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConvert___c(JsonConvert___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::JsonConvert___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
