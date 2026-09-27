#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerProxy)
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
class JsonSerializerInternalBase;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalWriter;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
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
namespace System::Collections {
class IEqualityComparer;
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
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::JsonSerializerProxy*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::JsonSerializerProxy*, "Newtonsoft.Json.Serialization", "JsonSerializerProxy");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonSerializer
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerProxy
class CORDL_TYPE JsonSerializerProxy : public ::Newtonsoft::Json::JsonSerializer {
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

/// @brief Field _serializer, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializer, put=__cordl_internal_set__serializer)) ::Newtonsoft::Json::JsonSerializer*  _serializer;

/// @brief Field _serializerReader, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializerReader, put=__cordl_internal_set__serializerReader)) ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  _serializerReader;

/// @brief Field _serializerWriter, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializerWriter, put=__cordl_internal_set__serializerWriter)) ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*  _serializerWriter;

/// [NullableContext(2)]
/// @brief Method DeserializeInternal, addr 0xa3ca684, size 0x30, virtual true, abstract: false, final false
inline ::System::Object* DeserializeInternal(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType) ;

/// @brief Method GetInternalSerializer, addr 0xa3ca550, size 0x1c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* GetInternalSerializer() ;

static inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  serializerReader) ;

static inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*  serializerWriter) ;

/// @brief Method PopulateInternal, addr 0xa3ca6b4, size 0x2c, virtual true, abstract: false, final false
inline void PopulateInternal(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target) ;

/// [NullableContext(2)]
/// @brief Method SerializeInternal, addr 0xa3ca6e0, size 0x2c, virtual true, abstract: false, final false
inline void SerializeInternal(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  rootType) ;

constexpr ::Newtonsoft::Json::JsonSerializer* const& __cordl_internal_get__serializer() const;

constexpr ::Newtonsoft::Json::JsonSerializer*& __cordl_internal_get__serializer() ;

constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* const& __cordl_internal_get__serializerReader() const;

constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*& __cordl_internal_get__serializerReader() ;

constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* const& __cordl_internal_get__serializerWriter() const;

constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*& __cordl_internal_get__serializerWriter() ;

constexpr void __cordl_internal_set__serializer(::Newtonsoft::Json::JsonSerializer*  value) ;

constexpr void __cordl_internal_set__serializerReader(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  value) ;

constexpr void __cordl_internal_set__serializerWriter(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*  value) ;

/// @brief Method .ctor, addr 0xa3ca56c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  serializerReader) ;

/// @brief Method .ctor, addr 0xa3ca5f8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*  serializerWriter) ;

/// @brief Method add_Error, addr 0xa3ca1d0, size 0x1c, virtual true, abstract: false, final false
inline void add_Error(/* [Nullable(new[] { 2, 1 })] */ ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

/// @brief Method get_CheckAdditionalContent, addr 0xa3ca50c, size 0x20, virtual true, abstract: false, final false
inline bool get_CheckAdditionalContent() ;

/// @brief Method get_Context, addr 0xa3ca46c, size 0x20, virtual true, abstract: false, final false
inline ::System::Runtime::Serialization::StreamingContext get_Context() ;

/// @brief Method get_ContractResolver, addr 0xa3ca2b8, size 0x20, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver() ;

/// @brief Method get_Converters, addr 0xa3ca278, size 0x20, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverterCollection* get_Converters() ;

/// @brief Method get_Formatting, addr 0xa3ca4ac, size 0x20, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method get_MaxDepth, addr 0xa3ca4ec, size 0x20, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method get_MetadataPropertyHandling, addr 0xa3ca3d4, size 0x20, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling() ;

/// @brief Method get_NullValueHandling, addr 0xa3ca318, size 0x20, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling() ;

/// [NullableContext(2)]
/// @brief Method get_TraceWriter, addr 0xa3ca224, size 0x1c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter() ;

/// @brief Method remove_Error, addr 0xa3ca1ec, size 0x1c, virtual true, abstract: false, final false
inline void remove_Error(/* [Nullable(new[] { 2, 1 })] */ ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

/// @brief Method set_CheckAdditionalContent, addr 0xa3ca52c, size 0x24, virtual true, abstract: false, final false
inline void set_CheckAdditionalContent(bool  value) ;

/// @brief Method set_ConstructorHandling, addr 0xa3ca430, size 0x20, virtual true, abstract: false, final false
inline void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling  value) ;

/// @brief Method set_Context, addr 0xa3ca48c, size 0x20, virtual true, abstract: false, final false
inline void set_Context(::System::Runtime::Serialization::StreamingContext  value) ;

/// @brief Method set_ContractResolver, addr 0xa3ca2d8, size 0x20, virtual true, abstract: false, final false
inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value) ;

/// @brief Method set_DefaultValueHandling, addr 0xa3ca298, size 0x20, virtual true, abstract: false, final false
inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value) ;

/// [NullableContext(2)]
/// @brief Method set_EqualityComparer, addr 0xa3ca25c, size 0x1c, virtual true, abstract: false, final false
inline void set_EqualityComparer(::System::Collections::IEqualityComparer*  value) ;

/// @brief Method set_Formatting, addr 0xa3ca4cc, size 0x20, virtual true, abstract: false, final false
inline void set_Formatting(::Newtonsoft::Json::Formatting  value) ;

/// @brief Method set_MetadataPropertyHandling, addr 0xa3ca3f4, size 0x20, virtual true, abstract: false, final false
inline void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling  value) ;

/// @brief Method set_MissingMemberHandling, addr 0xa3ca2f8, size 0x20, virtual true, abstract: false, final false
inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value) ;

/// @brief Method set_NullValueHandling, addr 0xa3ca338, size 0x20, virtual true, abstract: false, final false
inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling  value) ;

/// @brief Method set_ObjectCreationHandling, addr 0xa3ca358, size 0x20, virtual true, abstract: false, final false
inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value) ;

/// @brief Method set_PreserveReferencesHandling, addr 0xa3ca398, size 0x20, virtual true, abstract: false, final false
inline void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling  value) ;

/// @brief Method set_ReferenceLoopHandling, addr 0xa3ca378, size 0x20, virtual true, abstract: false, final false
inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value) ;

/// [NullableContext(2)]
/// @brief Method set_ReferenceResolver, addr 0xa3ca208, size 0x1c, virtual true, abstract: false, final false
inline void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver*  value) ;

/// @brief Method set_SerializationBinder, addr 0xa3ca450, size 0x1c, virtual true, abstract: false, final false
inline void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder*  value) ;

/// [NullableContext(2)]
/// @brief Method set_TraceWriter, addr 0xa3ca240, size 0x1c, virtual true, abstract: false, final false
inline void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter*  value) ;

/// @brief Method set_TypeNameAssemblyFormatHandling, addr 0xa3ca414, size 0x1c, virtual true, abstract: false, final false
inline void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling  value) ;

/// @brief Method set_TypeNameHandling, addr 0xa3ca3b8, size 0x1c, virtual true, abstract: false, final false
inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializerProxy(JsonSerializerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializerProxy(JsonSerializerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23301};

/// @brief Size padding 0xf8 - 0x148 = 0x50, packed as 0x50
 uint8_t  _cordl_size_padding[0x50];

/// [Nullable(2)]
/// @brief Field _serializerReader, offset: 0x130, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  ____serializerReader;

/// [Nullable(2)]
/// @brief Field _serializerWriter, offset: 0x138, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*  ____serializerWriter;

/// @brief Field _serializer, offset: 0x140, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonSerializer*  ____serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerProxy, ____serializerReader) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerProxy, ____serializerWriter) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerProxy, ____serializer) == 0x140, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Serialization::JsonSerializerProxy) == 0xf8, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
