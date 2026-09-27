#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_PropertyPresence_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalReader)
namespace GlobalNamespace {
struct JsonSerializerInternalReader_PropertyPresence;
}
namespace Newtonsoft::Json::Linq {
class JTokenReader;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonDynamicContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader_CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c__DisplayClass38_0;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
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
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader_CreatorPropertyContext;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader___c__DisplayClass38_0;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*);
MARK_REF_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*);
MARK_REF_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*);
MARK_REF_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/CreatorPropertyContext");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c");
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/<>c__DisplayClass38_0");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.Serialization.JsonSerializerInternalBase
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader
class CORDL_TYPE JsonSerializerInternalReader : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
// Declarations
using PropertyPresence = ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence;

using CreatorPropertyContext = ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext;

using __c = ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c;

using __c__DisplayClass38_0 = ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0;

/// @brief Method AddReference, addr 0xa3c0858, size 0x3c4, virtual false, abstract: false, final false
inline void AddReference(::Newtonsoft::Json::JsonReader*  reader, ::StringW  id, ::System::Object*  value) ;

/// [NullableContext(2)]
/// @brief Method CalculatePropertyDetails, addr 0xa3c01cc, size 0x584, virtual false, abstract: false, final false
inline bool CalculatePropertyDetails(/* [Nullable(1)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::by_ref<::Newtonsoft::Json::JsonConverter*>  propertyConverter, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, /* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(1)] */ ::System::Object*  target, ::by_ref<bool>  useExistingValue, ::by_ref<::System::Object*>  currentValue, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>  propertyContract, ::by_ref<bool>  gottenCurrentValue, ::by_ref<bool>  ignoredValue) ;

/// @brief Method CheckPropertyName, addr 0xa3bb440, size 0x11c, virtual false, abstract: false, final false
inline bool CheckPropertyName(::Newtonsoft::Json::JsonReader*  reader, ::StringW  memberName) ;

/// [NullableContext(2)]
/// @brief Method CoerceEmptyStringToNull, addr 0xa3bcb84, size 0xe8, virtual false, abstract: false, final false
static inline bool CoerceEmptyStringToNull(::System::Type*  objectType, ::Newtonsoft::Json::Serialization::JsonContract*  contract, /* [Nullable(1)] */ ::StringW  s) ;

/// @brief Method CreateDynamic, addr 0xa3bdf60, size 0x640, virtual false, abstract: false, final false
inline ::System::Object* CreateDynamic(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonDynamicContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::StringW  id) ;

/// @brief Method CreateISerializable, addr 0xa3be5a0, size 0x6a0, virtual false, abstract: false, final false
inline ::System::Object* CreateISerializable(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::StringW  id) ;

/// @brief Method CreateISerializableItem, addr 0xa3b6120, size 0x124, virtual false, abstract: false, final false
inline ::System::Object* CreateISerializableItem(::Newtonsoft::Json::Linq::JToken*  token, ::System::Type*  type, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member) ;

/// @brief Method CreateJObject, addr 0xa3bb120, size 0x320, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CreateJObject(::Newtonsoft::Json::JsonReader*  reader) ;

/// [NullableContext(2)]
/// @brief Method CreateJToken, addr 0xa3bad4c, size 0x3d4, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CreateJToken(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonContract*  contract) ;

/// [NullableContext(2)]
/// @brief Method CreateList, addr 0xa3bbf64, size 0x67c, virtual false, abstract: false, final false
inline ::System::Object* CreateList(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::System::Object*  existingValue, ::StringW  id) ;

/// @brief Method CreateNewDictionary, addr 0xa3bdd2c, size 0x234, virtual false, abstract: false, final false
inline ::System::Collections::IDictionary* CreateNewDictionary(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*  contract, ::by_ref<bool>  createdFromNonDefaultCreator) ;

/// @brief Method CreateNewList, addr 0xa3bf3d8, size 0x290, virtual false, abstract: false, final false
inline ::System::Collections::IList* CreateNewList(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, ::by_ref<bool>  createdFromNonDefaultCreator) ;

/// @brief Method CreateNewObject, addr 0xa3bdb00, size 0x22c, virtual false, abstract: false, final false
inline ::System::Object* CreateNewObject(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonObjectContract*  objectContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerMember, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, /* [Nullable(2)] */ ::StringW  id, ::by_ref<bool>  createdFromNonDefaultCreator) ;

/// [NullableContext(2)]
/// @brief Method CreateObject, addr 0xa3bb55c, size 0xa08, virtual false, abstract: false, final false
inline ::System::Object* CreateObject(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerMember, ::System::Object*  existingValue) ;

/// @brief Method CreateObjectUsingCreatorWithParameters, addr 0xa3c11a8, size 0x18dc, virtual false, abstract: false, final false
inline ::System::Object* CreateObjectUsingCreatorWithParameters(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*  creator, /* [Nullable(2)] */ ::StringW  id) ;

/// [NullableContext(2)]
/// @brief Method CreateValueInternal, addr 0xa3ba7b8, size 0x4b4, virtual false, abstract: false, final false
inline ::System::Object* CreateValueInternal(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerMember, ::System::Object*  existingValue) ;

/// [NullableContext(2)]
/// @brief Method Deserialize, addr 0xa3ba004, size 0x330, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, bool  checkAdditionalContent) ;

/// @brief Method DeserializeConvertable, addr 0xa3ba3a0, size 0x418, virtual false, abstract: false, final false
inline ::System::Object* DeserializeConvertable(::Newtonsoft::Json::JsonConverter*  converter, ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, /* [Nullable(2)] */ ::System::Object*  existingValue) ;

/// @brief Method EndProcessProperty, addr 0xa3c3164, size 0x478, virtual false, abstract: false, final false
inline void EndProcessProperty(::System::Object*  newObject, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, int32_t  initialDepth, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence  presence, bool  setDefaultValue) ;

/// @brief Method EnsureArrayContract, addr 0xa3bf258, size 0x180, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonArrayContract* EnsureArrayContract(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::Newtonsoft::Json::Serialization::JsonContract*  contract) ;

/// [NullableContext(2)]
/// @brief Method EnsureType, addr 0xa3bc5e0, size 0x5a4, virtual false, abstract: false, final false
inline ::System::Object* EnsureType(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  value, /* [Nullable(1)] */ ::System::Globalization::CultureInfo*  culture, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::System::Type*  targetType) ;

/// @brief Method GetContract, addr 0xa3b9f54, size 0xb0, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonContract* GetContract(::System::Type*  type) ;

/// [NullableContext(2)]
/// @brief Method GetContractSafe, addr 0xa3b9ef0, size 0x64, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Type*  type) ;

/// [NullableContext(2)]
/// @brief Method GetConverter, addr 0xa3ba334, size 0x6c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverter* GetConverter(::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::JsonConverter*  memberConverter, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method GetExpectedDescription, addr 0xa3bcc6c, size 0xb8, virtual false, abstract: false, final false
inline ::StringW GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract*  contract) ;

/// @brief Method GetInternalSerializer, addr 0xa3bacd4, size 0x78, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer() ;

/// @brief Method HandleError, addr 0xa3bac6c, size 0x68, virtual false, abstract: false, final false
inline void HandleError(::Newtonsoft::Json::JsonReader*  reader, bool  readPastError, int32_t  initialDepth) ;

/// @brief Method HasFlag, addr 0xa3c084c, size 0xc, virtual false, abstract: false, final false
inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling  value, ::Newtonsoft::Json::DefaultValueHandling  flag) ;

/// [NullableContext(2)]
/// @brief Method HasNoDefinedType, addr 0xa3bda24, size 0xdc, virtual false, abstract: false, final false
inline bool HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract*  contract) ;

static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* New_ctor(::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method OnDeserialized, addr 0xa3c0e48, size 0x22c, virtual false, abstract: false, final false
inline void OnDeserialized(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::System::Object*  value) ;

/// @brief Method OnDeserializing, addr 0xa3c0c1c, size 0x22c, virtual false, abstract: false, final false
inline void OnDeserializing(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::System::Object*  value) ;

/// @brief Method Populate, addr 0xa3b7fe8, size 0x520, virtual false, abstract: false, final false
inline void Populate(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target) ;

/// @brief Method PopulateDictionary, addr 0xa3b8a54, size 0xa20, virtual false, abstract: false, final false
inline ::System::Object* PopulateDictionary(::System::Collections::IDictionary*  dictionary, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, /* [Nullable(2)] */ ::StringW  id) ;

/// @brief Method PopulateList, addr 0xa3b8508, size 0x54c, virtual false, abstract: false, final false
inline ::System::Object* PopulateList(::System::Collections::IList*  list, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, /* [Nullable(2)] */ ::StringW  id) ;

/// @brief Method PopulateMultidimensionalArray, addr 0xa3bf668, size 0x6f0, virtual false, abstract: false, final false
inline ::System::Object* PopulateMultidimensionalArray(::System::Collections::IList*  list, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, /* [Nullable(2)] */ ::StringW  id) ;

/// @brief Method PopulateObject, addr 0xa3b9474, size 0xa7c, virtual false, abstract: false, final false
inline ::System::Object* PopulateObject(::System::Object*  newObject, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::StringW  id) ;

/// @brief Method ReadExtensionDataValue, addr 0xa3c35dc, size 0xbc, virtual false, abstract: false, final false
inline ::System::Object* ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::JsonReader*  reader) ;

/// [NullableContext(2)]
/// @brief Method ReadMetadataProperties, addr 0xa3bd478, size 0x5ac, virtual false, abstract: false, final false
inline bool ReadMetadataProperties(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::Type*>  objectType, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerMember, ::System::Object*  existingValue, ::by_ref<::System::Object*>  newValue, ::by_ref<::StringW>  id) ;

/// [NullableContext(2)]
/// @brief Method ReadMetadataPropertiesToken, addr 0xa3bcd24, size 0x754, virtual false, abstract: false, final false
inline bool ReadMetadataPropertiesToken(/* [Nullable(1)] */ ::Newtonsoft::Json::Linq::JTokenReader*  reader, ::by_ref<::System::Type*>  objectType, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerMember, ::System::Object*  existingValue, ::by_ref<::System::Object*>  newValue, ::by_ref<::StringW>  id) ;

/// @brief Method ResolvePropertyAndCreatorValues, addr 0xa3c2a84, size 0x6a8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>* ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType) ;

/// [NullableContext(2)]
/// @brief Method ResolveTypeName, addr 0xa3bec40, size 0x618, virtual false, abstract: false, final false
inline void ResolveTypeName(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::Type*>  objectType, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerMember, /* [Nullable(1)] */ ::StringW  qualifiedTypeName) ;

/// @brief Method SetExtensionData, addr 0xa3c3698, size 0x174, virtual false, abstract: false, final false
inline void SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::JsonReader*  reader, ::StringW  memberName, ::System::Object*  o) ;

/// @brief Method SetPropertyPresence, addr 0xa3c3a64, size 0xfc, virtual false, abstract: false, final false
inline void SetPropertyPresence(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonProperty*  property, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*,::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>*  requiredProperties) ;

/// @brief Method SetPropertyValue, addr 0xa3bfd58, size 0x474, virtual false, abstract: false, final false
inline bool SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty*  property, /* [Nullable(2)] */ ::Newtonsoft::Json::JsonConverter*  propertyConverter, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty, ::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target) ;

/// @brief Method ShouldDeserialize, addr 0xa3c380c, size 0x258, virtual false, abstract: false, final false
inline bool ShouldDeserialize(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::System::Object*  target) ;

/// [NullableContext(2)]
/// @brief Method ShouldSetPropertyValue, addr 0xa3c0750, size 0xfc, virtual false, abstract: false, final false
inline bool ShouldSetPropertyValue(/* [Nullable(1)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, ::System::Object*  value) ;

/// @brief Method ThrowUnexpectedEndException, addr 0xa3c1074, size 0x134, virtual false, abstract: false, final false
inline void ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Serialization::JsonContract*  contract, /* [Nullable(2)] */ ::System::Object*  currentObject, ::StringW  message) ;

/// @brief Method .ctor, addr 0xa3b7fe4, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonSerializer*  serializer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerInternalReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializerInternalReader(JsonSerializerInternalReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializerInternalReader(JsonSerializerInternalReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader) == 0x38, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0
class CORDL_TYPE JsonSerializerInternalReader___c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field property, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_property, put=__cordl_internal_set_property)) ::Newtonsoft::Json::Serialization::JsonProperty*  property;

static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <CreateObjectUsingCreatorWithParameters>b__1, addr 0xa3c3c08, size 0x20, virtual false, abstract: false, final false
inline bool _CreateObjectUsingCreatorWithParameters_b__1(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*  p) ;

constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& __cordl_internal_get_property() const;

constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_property() ;

constexpr void __cordl_internal_set_property(::Newtonsoft::Json::Serialization::JsonProperty*  value) ;

/// @brief Method .ctor, addr 0xa3c312c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerInternalReader___c__DisplayClass38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c__DisplayClass38_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializerInternalReader___c__DisplayClass38_0(JsonSerializerInternalReader___c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c__DisplayClass38_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializerInternalReader___c__DisplayClass38_0(JsonSerializerInternalReader___c__DisplayClass38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23298};

/// [Nullable(0)]
/// @brief Field property, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonProperty*  ___property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0, ___property) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c__DisplayClass38_0) == 0x18, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
// [CompilerGenerated]
// Dependencies System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
class CORDL_TYPE JsonSerializerInternalReader___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*  __9;

/// @brief Field <>9__38_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__38_0, put=setStaticF___9__38_0)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::StringW>*  __9__38_0;

/// @brief Field <>9__38_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__38_2, put=setStaticF___9__38_2)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::StringW>*  __9__38_2;

/// @brief Field <>9__42_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_0, put=setStaticF___9__42_0)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::Newtonsoft::Json::Serialization::JsonProperty*>*  __9__42_0;

/// @brief Field <>9__42_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_1, put=setStaticF___9__42_1)) ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>*  __9__42_1;

static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <CreateObjectUsingCreatorWithParameters>b__38_0, addr 0xa3c3bd0, size 0x14, virtual false, abstract: false, final false
inline ::StringW _CreateObjectUsingCreatorWithParameters_b__38_0(::Newtonsoft::Json::Serialization::JsonProperty*  p) ;

/// [NullableContext(0)]
/// @brief Method <CreateObjectUsingCreatorWithParameters>b__38_2, addr 0xa3c3be4, size 0x14, virtual false, abstract: false, final false
inline ::StringW _CreateObjectUsingCreatorWithParameters_b__38_2(::Newtonsoft::Json::Serialization::JsonProperty*  p) ;

/// [NullableContext(0)]
/// @brief Method <PopulateObject>b__42_0, addr 0xa3c3bf8, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonProperty* _PopulateObject_b__42_0(::Newtonsoft::Json::Serialization::JsonProperty*  m) ;

/// [NullableContext(0)]
/// @brief Method <PopulateObject>b__42_1, addr 0xa3c3c00, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence _PopulateObject_b__42_1(::Newtonsoft::Json::Serialization::JsonProperty*  m) ;

/// @brief Method .ctor, addr 0xa3c3bc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c* getStaticF___9() ;

static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::StringW>* getStaticF___9__38_0() ;

static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::StringW>* getStaticF___9__38_2() ;

static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::Newtonsoft::Json::Serialization::JsonProperty*>* getStaticF___9__42_0() ;

static inline ::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>* getStaticF___9__42_1() ;

static inline void setStaticF___9(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c*  value) ;

static inline void setStaticF___9__38_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::StringW>*  value) ;

static inline void setStaticF___9__38_2(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::StringW>*  value) ;

static inline void setStaticF___9__42_0(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::Newtonsoft::Json::Serialization::JsonProperty*>*  value) ;

static inline void setStaticF___9__42_1(::System::Func_2<::Newtonsoft::Json::Serialization::JsonProperty*,::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerInternalReader___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializerInternalReader___c(JsonSerializerInternalReader___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializerInternalReader___c(JsonSerializerInternalReader___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23297};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PropertyPresence, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
class CORDL_TYPE JsonSerializerInternalReader_CreatorPropertyContext : public ::System::Object {
public:
// Declarations
/// @brief Field ConstructorProperty, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConstructorProperty, put=__cordl_internal_set_ConstructorProperty)) ::Newtonsoft::Json::Serialization::JsonProperty*  ConstructorProperty;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Presence, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Presence, put=__cordl_internal_set_Presence)) ::System::Nullable_1<::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>  Presence;

/// @brief Field Property, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Property, put=__cordl_internal_set_Property)) ::Newtonsoft::Json::Serialization::JsonProperty*  Property;

/// @brief Field Used, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_Used, put=__cordl_internal_set_Used)) bool  Used;

/// @brief Field Value, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) ::System::Object*  Value;

/// @brief [NullableContext(1)]
static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext* New_ctor(::StringW  name) ;

constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& __cordl_internal_get_ConstructorProperty() const;

constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_ConstructorProperty() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::System::Nullable_1<::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence> const& __cordl_internal_get_Presence() const;

constexpr ::System::Nullable_1<::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>& __cordl_internal_get_Presence() ;

constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& __cordl_internal_get_Property() const;

constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get_Property() ;

constexpr bool const& __cordl_internal_get_Used() const;

constexpr bool& __cordl_internal_get_Used() ;

constexpr ::System::Object* const& __cordl_internal_get_Value() const;

constexpr ::System::Object*& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_ConstructorProperty(::Newtonsoft::Json::Serialization::JsonProperty*  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Presence(::System::Nullable_1<::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>  value) ;

constexpr void __cordl_internal_set_Property(::Newtonsoft::Json::Serialization::JsonProperty*  value) ;

constexpr void __cordl_internal_set_Used(bool  value) ;

constexpr void __cordl_internal_set_Value(::System::Object*  value) ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0xa3c3134, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerInternalReader_CreatorPropertyContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader_CreatorPropertyContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializerInternalReader_CreatorPropertyContext(JsonSerializerInternalReader_CreatorPropertyContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalReader_CreatorPropertyContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializerInternalReader_CreatorPropertyContext(JsonSerializerInternalReader_CreatorPropertyContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23296};

/// [Nullable(1)]
/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Property, offset: 0x18, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonProperty*  ___Property;

/// @brief Field ConstructorProperty, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonProperty*  ___ConstructorProperty;

/// @brief Field Presence, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence>  ___Presence;

/// @brief Field Value, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___Value;

/// @brief Field Used, offset: 0x40, size: 0x1, def value: None
 bool  ___Used;

/// @brief Size padding 0x40 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Property) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___ConstructorProperty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Presence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Value) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext, ___Used) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext) == 0x40, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
