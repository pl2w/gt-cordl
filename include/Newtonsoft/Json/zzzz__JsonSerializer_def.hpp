#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameAssemblyFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializer)
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace Newtonsoft::Json::Serialization {
class ISerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json::Serialization {
class TraceJsonReader;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
struct TypeNameAssemblyFormatHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
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
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonSerializer*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonSerializer*, "Newtonsoft.Json", "JsonSerializer");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.ConstructorHandling, Newtonsoft.Json.DateFormatHandling, Newtonsoft.Json.DateParseHandling, Newtonsoft.Json.DateTimeZoneHandling, Newtonsoft.Json.DefaultValueHandling, Newtonsoft.Json.FloatFormatHandling, Newtonsoft.Json.FloatParseHandling, Newtonsoft.Json.Formatting, Newtonsoft.Json.MetadataPropertyHandling, Newtonsoft.Json.MissingMemberHandling, Newtonsoft.Json.NullValueHandling, Newtonsoft.Json.ObjectCreationHandling, Newtonsoft.Json.PreserveReferencesHandling, Newtonsoft.Json.ReferenceLoopHandling, Newtonsoft.Json.StringEscapeHandling, Newtonsoft.Json.TypeNameAssemblyFormatHandling, Newtonsoft.Json.TypeNameHandling, System.Nullable`1<T>, System.Object, System.Runtime.Serialization.StreamingContext
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonSerializer
class CORDL_TYPE JsonSerializer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CheckAdditionalContent, put=set_CheckAdditionalContent)) bool  CheckAdditionalContent;

 __declspec(property(put=set_ConstructorHandling)) ::Newtonsoft::Json::ConstructorHandling  ConstructorHandling;

 __declspec(property(get=get_Context, put=set_Context)) ::System::Runtime::Serialization::StreamingContext  Context;

 __declspec(property(get=get_ContractResolver, put=set_ContractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver*  ContractResolver;

 __declspec(property(get=get_Converters)) ::Newtonsoft::Json::JsonConverterCollection*  Converters;

 __declspec(property(put=set_DefaultValueHandling)) ::Newtonsoft::Json::DefaultValueHandling  DefaultValueHandling;

/// @brief [Nullable(2)]
 __declspec(property(put=set_EqualityComparer)) ::System::Collections::IEqualityComparer*  EqualityComparer;

/// @brief Field Error, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  Error;

 __declspec(property(get=get_Formatting, put=set_Formatting)) ::Newtonsoft::Json::Formatting  Formatting;

 __declspec(property(get=get_MaxDepth)) ::System::Nullable_1<int32_t>  MaxDepth;

 __declspec(property(get=get_MetadataPropertyHandling, put=set_MetadataPropertyHandling)) ::Newtonsoft::Json::MetadataPropertyHandling  MetadataPropertyHandling;

 __declspec(property(put=set_MissingMemberHandling)) ::Newtonsoft::Json::MissingMemberHandling  MissingMemberHandling;

 __declspec(property(get=get_NullValueHandling, put=set_NullValueHandling)) ::Newtonsoft::Json::NullValueHandling  NullValueHandling;

 __declspec(property(put=set_ObjectCreationHandling)) ::Newtonsoft::Json::ObjectCreationHandling  ObjectCreationHandling;

 __declspec(property(put=set_PreserveReferencesHandling)) ::Newtonsoft::Json::PreserveReferencesHandling  PreserveReferencesHandling;

 __declspec(property(put=set_ReferenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling  ReferenceLoopHandling;

/// @brief [Nullable(2)]
 __declspec(property(put=set_ReferenceResolver)) ::Newtonsoft::Json::Serialization::IReferenceResolver*  ReferenceResolver;

 __declspec(property(put=set_SerializationBinder)) ::Newtonsoft::Json::Serialization::ISerializationBinder*  SerializationBinder;

/// @brief [Nullable(2)]
 __declspec(property(get=get_TraceWriter, put=set_TraceWriter)) ::Newtonsoft::Json::Serialization::ITraceWriter*  TraceWriter;

 __declspec(property(put=set_TypeNameAssemblyFormatHandling)) ::Newtonsoft::Json::TypeNameAssemblyFormatHandling  TypeNameAssemblyFormatHandling;

 __declspec(property(put=set_TypeNameHandling)) ::Newtonsoft::Json::TypeNameHandling  TypeNameHandling;

/// @brief Field _checkAdditionalContent, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get__checkAdditionalContent, put=__cordl_internal_set__checkAdditionalContent)) ::System::Nullable_1<bool>  _checkAdditionalContent;

/// @brief Field _constructorHandling, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__constructorHandling, put=__cordl_internal_set__constructorHandling)) ::Newtonsoft::Json::ConstructorHandling  _constructorHandling;

/// @brief Field _context, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::System::Runtime::Serialization::StreamingContext  _context;

/// @brief Field _contractResolver, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__contractResolver, put=__cordl_internal_set__contractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver*  _contractResolver;

/// @brief Field _converters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__converters, put=__cordl_internal_set__converters)) ::Newtonsoft::Json::JsonConverterCollection*  _converters;

/// @brief Field _culture, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__culture, put=__cordl_internal_set__culture)) ::System::Globalization::CultureInfo*  _culture;

/// @brief Field _dateFormatHandling, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__dateFormatHandling, put=__cordl_internal_set__dateFormatHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  _dateFormatHandling;

/// @brief Field _dateFormatString, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateFormatString, put=__cordl_internal_set__dateFormatString)) ::StringW  _dateFormatString;

/// @brief Field _dateFormatStringSet, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get__dateFormatStringSet, put=__cordl_internal_set__dateFormatStringSet)) bool  _dateFormatStringSet;

/// @brief Field _dateParseHandling, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get__dateParseHandling, put=__cordl_internal_set__dateParseHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  _dateParseHandling;

/// @brief Field _dateTimeZoneHandling, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__dateTimeZoneHandling, put=__cordl_internal_set__dateTimeZoneHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  _dateTimeZoneHandling;

/// @brief Field _defaultValueHandling, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultValueHandling, put=__cordl_internal_set__defaultValueHandling)) ::Newtonsoft::Json::DefaultValueHandling  _defaultValueHandling;

/// @brief Field _equalityComparer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__equalityComparer, put=__cordl_internal_set__equalityComparer)) ::System::Collections::IEqualityComparer*  _equalityComparer;

/// @brief Field _floatFormatHandling, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get__floatFormatHandling, put=__cordl_internal_set__floatFormatHandling)) ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  _floatFormatHandling;

/// @brief Field _floatParseHandling, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get__floatParseHandling, put=__cordl_internal_set__floatParseHandling)) ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  _floatParseHandling;

/// @brief Field _formatting, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__formatting, put=__cordl_internal_set__formatting)) ::System::Nullable_1<::Newtonsoft::Json::Formatting>  _formatting;

/// @brief Field _maxDepth, offset 0xf0, size 0x10 
 __declspec(property(get=__cordl_internal_get__maxDepth, put=__cordl_internal_set__maxDepth)) ::System::Nullable_1<int32_t>  _maxDepth;

/// @brief Field _maxDepthSet, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__maxDepthSet, put=__cordl_internal_set__maxDepthSet)) bool  _maxDepthSet;

/// @brief Field _metadataPropertyHandling, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__metadataPropertyHandling, put=__cordl_internal_set__metadataPropertyHandling)) ::Newtonsoft::Json::MetadataPropertyHandling  _metadataPropertyHandling;

/// @brief Field _missingMemberHandling, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__missingMemberHandling, put=__cordl_internal_set__missingMemberHandling)) ::Newtonsoft::Json::MissingMemberHandling  _missingMemberHandling;

/// @brief Field _nullValueHandling, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__nullValueHandling, put=__cordl_internal_set__nullValueHandling)) ::Newtonsoft::Json::NullValueHandling  _nullValueHandling;

/// @brief Field _objectCreationHandling, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__objectCreationHandling, put=__cordl_internal_set__objectCreationHandling)) ::Newtonsoft::Json::ObjectCreationHandling  _objectCreationHandling;

/// @brief Field _preserveReferencesHandling, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__preserveReferencesHandling, put=__cordl_internal_set__preserveReferencesHandling)) ::Newtonsoft::Json::PreserveReferencesHandling  _preserveReferencesHandling;

/// @brief Field _referenceLoopHandling, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__referenceLoopHandling, put=__cordl_internal_set__referenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling  _referenceLoopHandling;

/// @brief Field _referenceResolver, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__referenceResolver, put=__cordl_internal_set__referenceResolver)) ::Newtonsoft::Json::Serialization::IReferenceResolver*  _referenceResolver;

/// @brief Field _serializationBinder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializationBinder, put=__cordl_internal_set__serializationBinder)) ::Newtonsoft::Json::Serialization::ISerializationBinder*  _serializationBinder;

/// @brief Field _stringEscapeHandling, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get__stringEscapeHandling, put=__cordl_internal_set__stringEscapeHandling)) ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  _stringEscapeHandling;

/// @brief Field _traceWriter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__traceWriter, put=__cordl_internal_set__traceWriter)) ::Newtonsoft::Json::Serialization::ITraceWriter*  _traceWriter;

/// @brief Field _typeNameAssemblyFormatHandling, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__typeNameAssemblyFormatHandling, put=__cordl_internal_set__typeNameAssemblyFormatHandling)) ::Newtonsoft::Json::TypeNameAssemblyFormatHandling  _typeNameAssemblyFormatHandling;

/// @brief Field _typeNameHandling, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__typeNameHandling, put=__cordl_internal_set__typeNameHandling)) ::Newtonsoft::Json::TypeNameHandling  _typeNameHandling;

/// @brief Method ApplySerializerSettings, addr 0xa376934, size 0x738, virtual false, abstract: false, final false
static inline void ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer*  serializer, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method Create, addr 0xa3768b0, size 0x50, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* Create() ;

/// @brief Method Create, addr 0xa376900, size 0x34, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* Create(/* [Nullable(2)] */ ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method CreateDefault, addr 0xa37706c, size 0xa4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* CreateDefault() ;

/// @brief Method CreateDefault, addr 0xa36f498, size 0x34, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* CreateDefault(/* [Nullable(2)] */ ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method CreateTraceJsonReader, addr 0xa377a54, size 0x88, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::TraceJsonReader* CreateTraceJsonReader(::Newtonsoft::Json::JsonReader*  reader) ;

/// [NullableContext(2)]
/// [DebuggerStepThrough]
/// @brief Method Deserialize, addr 0xa36fb14, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType) ;

/// [NullableContext(2)]
/// [DebuggerStepThrough]
/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Deserialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader) ;

/// [NullableContext(2)]
/// @brief Method DeserializeInternal, addr 0xa377cec, size 0x280, virtual true, abstract: false, final false
inline ::System::Object* DeserializeInternal(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType) ;

/// @brief Method GetMatchingConverter, addr 0xa3785d4, size 0x15c, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonConverter* GetMatchingConverter(/* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*  converters, ::System::Type*  objectType) ;

/// @brief Method GetMatchingConverter, addr 0xa3785cc, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Type*  type) ;

/// @brief Method GetReferenceResolver, addr 0xa37855c, size 0x70, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* GetReferenceResolver() ;

/// @brief Method IsCheckAdditionalContentSet, addr 0xa36f9d4, size 0x3c, virtual false, abstract: false, final false
inline bool IsCheckAdditionalContentSet() ;

static inline ::Newtonsoft::Json::JsonSerializer* New_ctor() ;

/// @brief Method OnError, addr 0xa378730, size 0x28, virtual false, abstract: false, final false
inline void OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs*  e) ;

/// [DebuggerStepThrough]
/// @brief Method Populate, addr 0xa3773f8, size 0x10, virtual false, abstract: false, final false
inline void Populate(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target) ;

/// @brief Method PopulateInternal, addr 0xa377408, size 0x278, virtual true, abstract: false, final false
inline void PopulateInternal(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target) ;

/// [NullableContext(2)]
/// @brief Method ResetReader, addr 0xa377adc, size 0x210, virtual false, abstract: false, final false
inline void ResetReader(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Globalization::CultureInfo*  previousCulture, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  previousDateTimeZoneHandling, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  previousDateParseHandling, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  previousFloatParseHandling, ::System::Nullable_1<int32_t>  previousMaxDepth, ::StringW  previousDateFormatString) ;

/// @brief Method Serialize, addr 0xa377f6c, size 0x14, virtual false, abstract: false, final false
inline void Serialize(::Newtonsoft::Json::JsonWriter*  jsonWriter, /* [Nullable(2)] */ ::System::Object*  value) ;

/// [NullableContext(2)]
/// @brief Method Serialize, addr 0xa36f7b8, size 0x10, virtual false, abstract: false, final false
inline void Serialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType) ;

/// [NullableContext(2)]
/// @brief Method SerializeInternal, addr 0xa377f80, size 0x5dc, virtual true, abstract: false, final false
inline void SerializeInternal(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType) ;

/// [NullableContext(2)]
/// @brief Method SetupReader, addr 0xa377680, size 0x3d4, virtual false, abstract: false, final false
inline void SetupReader(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::Globalization::CultureInfo*>  previousCulture, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>  previousDateTimeZoneHandling, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>  previousDateParseHandling, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>  previousFloatParseHandling, ::by_ref<::System::Nullable_1<int32_t>>  previousMaxDepth, ::by_ref<::StringW>  previousDateFormatString) ;

constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* const& __cordl_internal_get_Error() const;

constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& __cordl_internal_get_Error() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__checkAdditionalContent() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__checkAdditionalContent() ;

constexpr ::Newtonsoft::Json::ConstructorHandling const& __cordl_internal_get__constructorHandling() const;

constexpr ::Newtonsoft::Json::ConstructorHandling& __cordl_internal_get__constructorHandling() ;

constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get__context() const;

constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get__context() ;

constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& __cordl_internal_get__contractResolver() const;

constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& __cordl_internal_get__contractResolver() ;

constexpr ::Newtonsoft::Json::JsonConverterCollection* const& __cordl_internal_get__converters() const;

constexpr ::Newtonsoft::Json::JsonConverterCollection*& __cordl_internal_get__converters() ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& __cordl_internal_get__dateFormatHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& __cordl_internal_get__dateFormatHandling() ;

constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

constexpr ::StringW& __cordl_internal_get__dateFormatString() ;

constexpr bool const& __cordl_internal_get__dateFormatStringSet() const;

constexpr bool& __cordl_internal_get__dateFormatStringSet() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& __cordl_internal_get__dateParseHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& __cordl_internal_get__dateParseHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& __cordl_internal_get__dateTimeZoneHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& __cordl_internal_get__dateTimeZoneHandling() ;

constexpr ::Newtonsoft::Json::DefaultValueHandling const& __cordl_internal_get__defaultValueHandling() const;

constexpr ::Newtonsoft::Json::DefaultValueHandling& __cordl_internal_get__defaultValueHandling() ;

constexpr ::System::Collections::IEqualityComparer* const& __cordl_internal_get__equalityComparer() const;

constexpr ::System::Collections::IEqualityComparer*& __cordl_internal_get__equalityComparer() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& __cordl_internal_get__floatFormatHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& __cordl_internal_get__floatFormatHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& __cordl_internal_get__floatParseHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& __cordl_internal_get__floatParseHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& __cordl_internal_get__formatting() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& __cordl_internal_get__formatting() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxDepth() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxDepth() ;

constexpr bool const& __cordl_internal_get__maxDepthSet() const;

constexpr bool& __cordl_internal_get__maxDepthSet() ;

constexpr ::Newtonsoft::Json::MetadataPropertyHandling const& __cordl_internal_get__metadataPropertyHandling() const;

constexpr ::Newtonsoft::Json::MetadataPropertyHandling& __cordl_internal_get__metadataPropertyHandling() ;

constexpr ::Newtonsoft::Json::MissingMemberHandling const& __cordl_internal_get__missingMemberHandling() const;

constexpr ::Newtonsoft::Json::MissingMemberHandling& __cordl_internal_get__missingMemberHandling() ;

constexpr ::Newtonsoft::Json::NullValueHandling const& __cordl_internal_get__nullValueHandling() const;

constexpr ::Newtonsoft::Json::NullValueHandling& __cordl_internal_get__nullValueHandling() ;

constexpr ::Newtonsoft::Json::ObjectCreationHandling const& __cordl_internal_get__objectCreationHandling() const;

constexpr ::Newtonsoft::Json::ObjectCreationHandling& __cordl_internal_get__objectCreationHandling() ;

constexpr ::Newtonsoft::Json::PreserveReferencesHandling const& __cordl_internal_get__preserveReferencesHandling() const;

constexpr ::Newtonsoft::Json::PreserveReferencesHandling& __cordl_internal_get__preserveReferencesHandling() ;

constexpr ::Newtonsoft::Json::ReferenceLoopHandling const& __cordl_internal_get__referenceLoopHandling() const;

constexpr ::Newtonsoft::Json::ReferenceLoopHandling& __cordl_internal_get__referenceLoopHandling() ;

constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver* const& __cordl_internal_get__referenceResolver() const;

constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& __cordl_internal_get__referenceResolver() ;

constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* const& __cordl_internal_get__serializationBinder() const;

constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder*& __cordl_internal_get__serializationBinder() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& __cordl_internal_get__stringEscapeHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& __cordl_internal_get__stringEscapeHandling() ;

constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* const& __cordl_internal_get__traceWriter() const;

constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& __cordl_internal_get__traceWriter() ;

constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling const& __cordl_internal_get__typeNameAssemblyFormatHandling() const;

constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling& __cordl_internal_get__typeNameAssemblyFormatHandling() ;

constexpr ::Newtonsoft::Json::TypeNameHandling const& __cordl_internal_get__typeNameHandling() const;

constexpr ::Newtonsoft::Json::TypeNameHandling& __cordl_internal_get__typeNameHandling() ;

constexpr void __cordl_internal_set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

constexpr void __cordl_internal_set__checkAdditionalContent(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__constructorHandling(::Newtonsoft::Json::ConstructorHandling  value) ;

constexpr void __cordl_internal_set__context(::System::Runtime::Serialization::StreamingContext  value) ;

constexpr void __cordl_internal_set__contractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value) ;

constexpr void __cordl_internal_set__converters(::Newtonsoft::Json::JsonConverterCollection*  value) ;

constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  value) ;

constexpr void __cordl_internal_set__dateFormatString(::StringW  value) ;

constexpr void __cordl_internal_set__dateFormatStringSet(bool  value) ;

constexpr void __cordl_internal_set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  value) ;

constexpr void __cordl_internal_set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  value) ;

constexpr void __cordl_internal_set__defaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value) ;

constexpr void __cordl_internal_set__equalityComparer(::System::Collections::IEqualityComparer*  value) ;

constexpr void __cordl_internal_set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  value) ;

constexpr void __cordl_internal_set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  value) ;

constexpr void __cordl_internal_set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting>  value) ;

constexpr void __cordl_internal_set__maxDepth(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__maxDepthSet(bool  value) ;

constexpr void __cordl_internal_set__metadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling  value) ;

constexpr void __cordl_internal_set__missingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value) ;

constexpr void __cordl_internal_set__nullValueHandling(::Newtonsoft::Json::NullValueHandling  value) ;

constexpr void __cordl_internal_set__objectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value) ;

constexpr void __cordl_internal_set__preserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling  value) ;

constexpr void __cordl_internal_set__referenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value) ;

constexpr void __cordl_internal_set__referenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver*  value) ;

constexpr void __cordl_internal_set__serializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder*  value) ;

constexpr void __cordl_internal_set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  value) ;

constexpr void __cordl_internal_set__traceWriter(::Newtonsoft::Json::Serialization::ITraceWriter*  value) ;

constexpr void __cordl_internal_set__typeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling  value) ;

constexpr void __cordl_internal_set__typeNameHandling(::Newtonsoft::Json::TypeNameHandling  value) ;

/// @brief Method .ctor, addr 0xa376764, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_Error, addr 0xa375ed8, size 0xb0, virtual true, abstract: false, final false
inline void add_Error(/* [Nullable(new[] { 2, 1 })] */ ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

/// @brief Method get_CheckAdditionalContent, addr 0xa3766c0, size 0x3c, virtual true, abstract: false, final false
inline bool get_CheckAdditionalContent() ;

/// @brief Method get_Context, addr 0xa3765fc, size 0xc, virtual true, abstract: false, final false
inline ::System::Runtime::Serialization::StreamingContext get_Context() ;

/// @brief Method get_ContractResolver, addr 0xa376544, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver() ;

/// @brief Method get_Converters, addr 0xa3764d8, size 0x6c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverterCollection* get_Converters() ;

/// @brief Method get_Formatting, addr 0xa376614, size 0x3c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method get_MaxDepth, addr 0xa3766b8, size 0x8, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method get_MetadataPropertyHandling, addr 0xa376474, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling() ;

/// @brief Method get_NullValueHandling, addr 0xa3762fc, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling() ;

/// [NullableContext(2)]
/// @brief Method get_TraceWriter, addr 0xa376118, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter() ;

/// [CompilerGenerated]
/// @brief Method remove_Error, addr 0xa375f88, size 0xb0, virtual true, abstract: false, final false
inline void remove_Error(/* [Nullable(new[] { 2, 1 })] */ ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

/// @brief Method set_CheckAdditionalContent, addr 0xa3766fc, size 0x68, virtual true, abstract: false, final false
inline void set_CheckAdditionalContent(bool  value) ;

/// @brief Method set_ConstructorHandling, addr 0xa376418, size 0x5c, virtual true, abstract: false, final false
inline void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling  value) ;

/// @brief Method set_Context, addr 0xa376608, size 0xc, virtual true, abstract: false, final false
inline void set_Context(::System::Runtime::Serialization::StreamingContext  value) ;

/// @brief Method set_ContractResolver, addr 0xa37654c, size 0xb0, virtual true, abstract: false, final false
inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value) ;

/// @brief Method set_DefaultValueHandling, addr 0xa376360, size 0x5c, virtual true, abstract: false, final false
inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value) ;

/// [NullableContext(2)]
/// @brief Method set_EqualityComparer, addr 0xa376128, size 0x8, virtual true, abstract: false, final false
inline void set_EqualityComparer(::System::Collections::IEqualityComparer*  value) ;

/// @brief Method set_Formatting, addr 0xa376650, size 0x68, virtual true, abstract: false, final false
inline void set_Formatting(::Newtonsoft::Json::Formatting  value) ;

/// @brief Method set_MetadataPropertyHandling, addr 0xa37647c, size 0x5c, virtual true, abstract: false, final false
inline void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling  value) ;

/// @brief Method set_MissingMemberHandling, addr 0xa3762a0, size 0x5c, virtual true, abstract: false, final false
inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value) ;

/// @brief Method set_NullValueHandling, addr 0xa376304, size 0x5c, virtual true, abstract: false, final false
inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling  value) ;

/// @brief Method set_ObjectCreationHandling, addr 0xa3763bc, size 0x5c, virtual true, abstract: false, final false
inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value) ;

/// @brief Method set_PreserveReferencesHandling, addr 0xa3761e8, size 0x5c, virtual true, abstract: false, final false
inline void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling  value) ;

/// @brief Method set_ReferenceLoopHandling, addr 0xa376244, size 0x5c, virtual true, abstract: false, final false
inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value) ;

/// [NullableContext(2)]
/// @brief Method set_ReferenceResolver, addr 0xa376038, size 0x70, virtual true, abstract: false, final false
inline void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver*  value) ;

/// @brief Method set_SerializationBinder, addr 0xa3760a8, size 0x70, virtual true, abstract: false, final false
inline void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder*  value) ;

/// [NullableContext(2)]
/// @brief Method set_TraceWriter, addr 0xa376120, size 0x8, virtual true, abstract: false, final false
inline void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter*  value) ;

/// @brief Method set_TypeNameAssemblyFormatHandling, addr 0xa37618c, size 0x5c, virtual true, abstract: false, final false
inline void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling  value) ;

/// @brief Method set_TypeNameHandling, addr 0xa376130, size 0x5c, virtual true, abstract: false, final false
inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializer(JsonSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializer(JsonSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23109};

/// @brief Field _typeNameHandling, offset: 0x10, size: 0x4, def value: None
 ::Newtonsoft::Json::TypeNameHandling  ____typeNameHandling;

/// @brief Field _typeNameAssemblyFormatHandling, offset: 0x14, size: 0x4, def value: None
 ::Newtonsoft::Json::TypeNameAssemblyFormatHandling  ____typeNameAssemblyFormatHandling;

/// @brief Field _preserveReferencesHandling, offset: 0x18, size: 0x4, def value: None
 ::Newtonsoft::Json::PreserveReferencesHandling  ____preserveReferencesHandling;

/// @brief Field _referenceLoopHandling, offset: 0x1c, size: 0x4, def value: None
 ::Newtonsoft::Json::ReferenceLoopHandling  ____referenceLoopHandling;

/// @brief Field _missingMemberHandling, offset: 0x20, size: 0x4, def value: None
 ::Newtonsoft::Json::MissingMemberHandling  ____missingMemberHandling;

/// @brief Field _objectCreationHandling, offset: 0x24, size: 0x4, def value: None
 ::Newtonsoft::Json::ObjectCreationHandling  ____objectCreationHandling;

/// @brief Field _nullValueHandling, offset: 0x28, size: 0x4, def value: None
 ::Newtonsoft::Json::NullValueHandling  ____nullValueHandling;

/// @brief Field _defaultValueHandling, offset: 0x2c, size: 0x4, def value: None
 ::Newtonsoft::Json::DefaultValueHandling  ____defaultValueHandling;

/// @brief Field _constructorHandling, offset: 0x30, size: 0x4, def value: None
 ::Newtonsoft::Json::ConstructorHandling  ____constructorHandling;

/// @brief Field _metadataPropertyHandling, offset: 0x34, size: 0x4, def value: None
 ::Newtonsoft::Json::MetadataPropertyHandling  ____metadataPropertyHandling;

/// [Nullable(2)]
/// @brief Field _converters, offset: 0x38, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonConverterCollection*  ____converters;

/// @brief Field _contractResolver, offset: 0x40, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::IContractResolver*  ____contractResolver;

/// [Nullable(2)]
/// @brief Field _traceWriter, offset: 0x48, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::ITraceWriter*  ____traceWriter;

/// [Nullable(2)]
/// @brief Field _equalityComparer, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::IEqualityComparer*  ____equalityComparer;

/// @brief Field _serializationBinder, offset: 0x58, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::ISerializationBinder*  ____serializationBinder;

/// @brief Field _context, offset: 0x60, size: 0x10, def value: None
 ::System::Runtime::Serialization::StreamingContext  ____context;

/// [Nullable(2)]
/// @brief Field _referenceResolver, offset: 0x70, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::IReferenceResolver*  ____referenceResolver;

/// @brief Field _formatting, offset: 0x78, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::Formatting>  ____formatting;

/// @brief Field _dateFormatHandling, offset: 0x88, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  ____dateFormatHandling;

/// @brief Field _dateTimeZoneHandling, offset: 0x98, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  ____dateTimeZoneHandling;

/// @brief Field _dateParseHandling, offset: 0xa8, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  ____dateParseHandling;

/// @brief Field _floatFormatHandling, offset: 0xb8, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  ____floatFormatHandling;

/// @brief Field _floatParseHandling, offset: 0xc8, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  ____floatParseHandling;

/// @brief Field _stringEscapeHandling, offset: 0xd8, size: 0x10, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  ____stringEscapeHandling;

/// @brief Size padding 0xe0 - 0x130 = 0x50, packed as 0x50
 uint8_t  _cordl_size_padding[0x50];

/// @brief Field _culture, offset: 0xe8, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____culture;

/// @brief Field _maxDepth, offset: 0xf0, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____maxDepth;

/// @brief Field _maxDepthSet, offset: 0x100, size: 0x1, def value: None
 bool  ____maxDepthSet;

/// @brief Field _checkAdditionalContent, offset: 0x108, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____checkAdditionalContent;

/// [Nullable(2)]
/// @brief Field _dateFormatString, offset: 0x118, size: 0x8, def value: None
 ::StringW  ____dateFormatString;

/// @brief Field _dateFormatStringSet, offset: 0x120, size: 0x1, def value: None
 bool  ____dateFormatStringSet;

/// [Nullable(new[] { 2, 1 })]
/// [CompilerGenerated]
/// @brief Field Error, offset: 0x128, size: 0x8, def value: None
 ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____typeNameHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____typeNameAssemblyFormatHandling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____preserveReferencesHandling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____referenceLoopHandling) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____missingMemberHandling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____objectCreationHandling) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____nullValueHandling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____defaultValueHandling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____constructorHandling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____metadataPropertyHandling) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____converters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____contractResolver) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____traceWriter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____equalityComparer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____serializationBinder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____context) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____referenceResolver) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____formatting) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatHandling) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateTimeZoneHandling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateParseHandling) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____floatFormatHandling) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____floatParseHandling) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____stringEscapeHandling) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____culture) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____maxDepth) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____maxDepthSet) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____checkAdditionalContent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatString) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatStringSet) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ___Error) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::JsonSerializer) == 0xe0, "Size mismatch!");

} // namespace end def Newtonsoft::Json
