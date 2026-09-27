#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalWriter)
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
class JsonPrimitiveContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json::Serialization {
class JsonStringContract;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Dynamic {
class IDynamicMetaObjectProvider;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Array;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalWriter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.Serialization.JsonSerializerInternalBase
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
class CORDL_TYPE JsonSerializerInternalWriter : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
// Declarations
/// @brief Field _rootLevel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__rootLevel, put=__cordl_internal_set__rootLevel)) int32_t  _rootLevel;

/// @brief Field _rootType, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rootType, put=__cordl_internal_set__rootType)) ::System::Type*  _rootType;

/// @brief Field _serializeStack, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializeStack, put=__cordl_internal_set__serializeStack)) ::System::Collections::Generic::List_1<::System::Object*>*  _serializeStack;

/// @brief Method CalculatePropertyValues, addr 0xa3c89fc, size 0x458, virtual false, abstract: false, final false
inline bool CalculatePropertyValues(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContainerContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonProperty*  property, /* [Nullable(2)] [NotNullWhen(true)] */ ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>  memberContract, /* [Nullable(2)] */ ::by_ref<::System::Object*>  memberValue) ;

/// [NullableContext(2)]
/// @brief Method CheckForCircularReference, addr 0xa3c7d68, size 0x44c, virtual false, abstract: false, final false
inline bool CheckForCircularReference(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method GetContract, addr 0xa3c4b14, size 0xc4, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonContract* GetContract(::System::Object*  value) ;

/// [NullableContext(2)]
/// @brief Method GetContractSafe, addr 0xa3c3f70, size 0x10, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Object*  value) ;

/// @brief Method GetInternalSerializer, addr 0xa3c4a9c, size 0x78, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer() ;

/// @brief Method GetPropertyName, addr 0xa3c8e54, size 0x508, virtual false, abstract: false, final false
inline ::StringW GetPropertyName(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  name, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::by_ref<bool>  escape) ;

/// @brief Method GetReference, addr 0xa3c81b4, size 0x1ec, virtual false, abstract: false, final false
inline ::StringW GetReference(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value) ;

/// @brief Method HandleError, addr 0xa3c4a28, size 0x74, virtual false, abstract: false, final false
inline void HandleError(::Newtonsoft::Json::JsonWriter*  writer, int32_t  initialDepth) ;

/// @brief Method HasCreatorParameter, addr 0xa3c9804, size 0xb4, virtual false, abstract: false, final false
inline bool HasCreatorParameter(/* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  property) ;

/// @brief Method HasFlag, addr 0xa3c7d5c, size 0xc, virtual false, abstract: false, final false
inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling  value, ::Newtonsoft::Json::DefaultValueHandling  flag) ;

/// @brief Method HasFlag, addr 0xa3c7c80, size 0xc, virtual false, abstract: false, final false
inline bool HasFlag(::Newtonsoft::Json::PreserveReferencesHandling  value, ::Newtonsoft::Json::PreserveReferencesHandling  flag) ;

/// @brief Method HasFlag, addr 0xa3c9b04, size 0xc, virtual false, abstract: false, final false
inline bool HasFlag(::Newtonsoft::Json::TypeNameHandling  value, ::Newtonsoft::Json::TypeNameHandling  flag) ;

/// @brief Method IsSpecified, addr 0xa3c95b0, size 0x254, virtual false, abstract: false, final false
inline bool IsSpecified(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::System::Object*  target) ;

static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* New_ctor(::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method OnSerialized, addr 0xa3c86b4, size 0x204, virtual false, abstract: false, final false
inline void OnSerialized(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::System::Object*  value) ;

/// @brief Method OnSerializing, addr 0xa3c84b0, size 0x204, virtual false, abstract: false, final false
inline void OnSerializing(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::System::Object*  value) ;

/// [NullableContext(2)]
/// @brief Method ResolveIsReference, addr 0xa3c7bd0, size 0xb0, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> ResolveIsReference(/* [Nullable(1)] */ ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// [NullableContext(2)]
/// @brief Method Serialize, addr 0xa3c3cb4, size 0x2bc, virtual false, abstract: false, final false
inline void Serialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType) ;

/// @brief Method SerializeConvertable, addr 0xa3c5194, size 0x524, virtual false, abstract: false, final false
inline void SerializeConvertable(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::JsonConverter*  converter, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializeDictionary, addr 0xa3c6748, size 0x868, virtual false, abstract: false, final false
inline void SerializeDictionary(::Newtonsoft::Json::JsonWriter*  writer, ::System::Collections::IDictionary*  values, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializeDynamic, addr 0xa3c6fb0, size 0x7a8, virtual false, abstract: false, final false
inline void SerializeDynamic(::Newtonsoft::Json::JsonWriter*  writer, ::System::Dynamic::IDynamicMetaObjectProvider*  value, ::Newtonsoft::Json::Serialization::JsonDynamicContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializeISerializable, addr 0xa3c7758, size 0x478, virtual false, abstract: false, final false
inline void SerializeISerializable(::Newtonsoft::Json::JsonWriter*  writer, ::System::Runtime::Serialization::ISerializable*  value, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializeList, addr 0xa3c5de8, size 0x6d4, virtual false, abstract: false, final false
inline void SerializeList(::Newtonsoft::Json::JsonWriter*  writer, ::System::Collections::IEnumerable*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializeMultidimensionalArray, addr 0xa3c64bc, size 0x208, virtual false, abstract: false, final false
inline void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter*  writer, ::System::Array*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializeMultidimensionalArray, addr 0xa3c9d90, size 0x384, virtual false, abstract: false, final false
inline void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter*  writer, ::System::Array*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, int32_t  initialDepth, ::ArrayW<int32_t>  indices) ;

/// @brief Method SerializeObject, addr 0xa3c56b8, size 0x730, virtual false, abstract: false, final false
inline void SerializeObject(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializePrimitive, addr 0xa3c4bd8, size 0x168, virtual false, abstract: false, final false
inline void SerializePrimitive(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method SerializeString, addr 0xa3c66c4, size 0x84, virtual false, abstract: false, final false
inline void SerializeString(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonStringContract*  contract) ;

/// [NullableContext(2)]
/// @brief Method SerializeValue, addr 0xa3c43a0, size 0x688, virtual false, abstract: false, final false
inline void SerializeValue(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContract*  valueContract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method ShouldSerialize, addr 0xa3c935c, size 0x254, virtual false, abstract: false, final false
inline bool ShouldSerialize(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::System::Object*  target) ;

/// [NullableContext(2)]
/// @brief Method ShouldWriteDynamicProperty, addr 0xa3ca114, size 0xbc, virtual false, abstract: false, final false
inline bool ShouldWriteDynamicProperty(::System::Object*  memberValue) ;

/// [NullableContext(2)]
/// @brief Method ShouldWriteProperty, addr 0xa3c7c8c, size 0xd0, virtual false, abstract: false, final false
inline bool ShouldWriteProperty(::System::Object*  memberValue, ::Newtonsoft::Json::Serialization::JsonObjectContract*  containerContract, /* [Nullable(1)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  property) ;

/// [NullableContext(2)]
/// @brief Method ShouldWriteReference, addr 0xa3c3f80, size 0x1a4, virtual false, abstract: false, final false
inline bool ShouldWriteReference(::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::Newtonsoft::Json::Serialization::JsonContract*  valueContract, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// [NullableContext(2)]
/// @brief Method ShouldWriteType, addr 0xa3c4d40, size 0x1d4, virtual false, abstract: false, final false
inline bool ShouldWriteType(::Newtonsoft::Json::TypeNameHandling  typeNameHandlingFlag, /* [Nullable(1)] */ ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method TryConvertToString, addr 0xa3c83a0, size 0x110, virtual false, abstract: false, final false
static inline bool TryConvertToString(::System::Object*  value, ::System::Type*  type, /* [Nullable(2)] [NotNullWhen(true)] */ ::by_ref<::StringW>  s) ;

/// @brief Method WriteObjectStart, addr 0xa3c88b8, size 0x144, virtual false, abstract: false, final false
inline void WriteObjectStart(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method WriteReference, addr 0xa3c4124, size 0x27c, virtual false, abstract: false, final false
inline void WriteReference(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value) ;

/// @brief Method WriteReferenceIdProperty, addr 0xa3c98b8, size 0x24c, virtual false, abstract: false, final false
inline void WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter*  writer, ::System::Type*  type, ::System::Object*  value) ;

/// @brief Method WriteStartArray, addr 0xa3c9b10, size 0x280, virtual false, abstract: false, final false
inline bool WriteStartArray(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty) ;

/// @brief Method WriteTypeProperty, addr 0xa3c4f14, size 0x280, virtual false, abstract: false, final false
inline void WriteTypeProperty(::Newtonsoft::Json::JsonWriter*  writer, ::System::Type*  type) ;

constexpr int32_t const& __cordl_internal_get__rootLevel() const;

constexpr int32_t& __cordl_internal_get__rootLevel() ;

constexpr ::System::Type* const& __cordl_internal_get__rootType() const;

constexpr ::System::Type*& __cordl_internal_get__rootType() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__serializeStack() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__serializeStack() ;

constexpr void __cordl_internal_set__rootLevel(int32_t  value) ;

constexpr void __cordl_internal_set__rootType(::System::Type*  value) ;

constexpr void __cordl_internal_set__serializeStack(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xa3c3c28, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonSerializer*  serializer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerInternalWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializerInternalWriter(JsonSerializerInternalWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializerInternalWriter(JsonSerializerInternalWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23300};

/// [Nullable(2)]
/// @brief Field _rootType, offset: 0x38, size: 0x8, def value: None
 ::System::Type*  ____rootType;

/// @brief Field _rootLevel, offset: 0x40, size: 0x4, def value: None
 int32_t  ____rootLevel;

/// @brief Field _serializeStack, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____serializeStack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____rootType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____rootLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____serializeStack) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter) == 0x50, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
