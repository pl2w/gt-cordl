#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(YamlSerializer)
namespace GlobalNamespace {
template<typename T>
struct YamlSerializer__DeserializeAsync_d__14_1;
}
namespace GlobalNamespace {
template<typename T>
struct YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1;
}
namespace System::Buffers {
template<typename T>
class IBufferWriter_1;
}
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace VYaml::Emitter {
struct Utf8YamlEmitter;
}
namespace VYaml::Parser {
struct YamlParser;
}
namespace VYaml::Serialization {
class YamlDeserializationContext;
}
namespace VYaml::Serialization {
class YamlSerializationContext;
}
namespace VYaml::Serialization {
class YamlSerializerOptions;
}
// Forward declare root types
namespace VYaml::Serialization {
class YamlSerializer;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::YamlSerializer*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::YamlSerializer*, "VYaml.Serialization", "YamlSerializer");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.YamlSerializer
class CORDL_TYPE YamlSerializer : public ::System::Object {
public:
// Declarations
template<typename T>
using _DeserializeAsync_d__14_1 = ::GlobalNamespace::YamlSerializer__DeserializeAsync_d__14_1<T>;

template<typename T>
using _DeserializeMultipleDocumentsAsync_d__16_1 = ::GlobalNamespace::YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1<T>;

/// @brief Field defaultOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultOptions, put=setStaticF_defaultOptions)) ::VYaml::Serialization::YamlSerializerOptions*  defaultOptions;

/// @brief Field deserializationContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deserializationContext, put=setStaticF_deserializationContext)) ::VYaml::Serialization::YamlDeserializationContext*  deserializationContext;

/// @brief Field serializationContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_serializationContext, put=setStaticF_serializationContext)) ::VYaml::Serialization::YamlSerializationContext*  serializationContext;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Deserialize(/* [Nullable(0)] */ ::System::ReadOnlyMemory_1<uint8_t>  memory, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Deserialize(/* [IsReadOnly] [Nullable(0)] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>  sequence, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [AsyncStateMachine(typeof(VYaml.Serialization.YamlSerializer::<DeserializeAsync>d__14`1<T>))]
/// @brief Method DeserializeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::ValueTask_1<T> DeserializeAsync(/* [Nullable(1)] */ ::System::IO::Stream*  stream, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method DeserializeMultipleDocuments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* DeserializeMultipleDocuments(/* [Nullable(0)] */ ::System::ReadOnlyMemory_1<uint8_t>  memory, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method DeserializeMultipleDocuments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* DeserializeMultipleDocuments(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method DeserializeMultipleDocuments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* DeserializeMultipleDocuments(/* [IsReadOnly] [Nullable(0)] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>  sequence, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [AsyncStateMachine(typeof(VYaml.Serialization.YamlSerializer::<DeserializeMultipleDocumentsAsync>d__16`1<T>))]
/// @brief Method DeserializeMultipleDocumentsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::ValueTask_1<::System::Collections::Generic::IEnumerable_1<T>*> DeserializeMultipleDocumentsAsync(/* [Nullable(1)] */ ::System::IO::Stream*  stream, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [NullableContext(1)]
/// @brief Method GetThreadLocalDeserializationContext, addr 0xb95873c, size 0xc0, virtual false, abstract: false, final false
static inline ::VYaml::Serialization::YamlDeserializationContext* GetThreadLocalDeserializationContext(/* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [NullableContext(1)]
/// @brief Method GetThreadLocalSerializationContext, addr 0xb958870, size 0xd8, virtual false, abstract: false, final false
static inline ::VYaml::Serialization::YamlSerializationContext* GetThreadLocalSerializationContext(/* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::ReadOnlyMemory_1<uint8_t> Serialize(/* [Nullable(1)] */ T  value, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(1)] */ T  value, ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [NullableContext(1)]
/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Serialize(::System::Buffers::IBufferWriter_1<uint8_t>*  writer, T  value, /* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options) ;

/// [NullableContext(1)]
/// @brief Method SerializeToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW SerializeToString(T  value, /* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options) ;

static inline ::VYaml::Serialization::YamlSerializerOptions* getStaticF_defaultOptions() ;

static inline ::VYaml::Serialization::YamlDeserializationContext* getStaticF_deserializationContext() ;

static inline ::VYaml::Serialization::YamlSerializationContext* getStaticF_serializationContext() ;

/// [NullableContext(1)]
/// @brief Method get_DefaultOptions, addr 0xb9587fc, size 0x74, virtual false, abstract: false, final false
static inline ::VYaml::Serialization::YamlSerializerOptions* get_DefaultOptions() ;

static inline void setStaticF_defaultOptions(::VYaml::Serialization::YamlSerializerOptions*  value) ;

static inline void setStaticF_deserializationContext(::VYaml::Serialization::YamlDeserializationContext*  value) ;

static inline void setStaticF_serializationContext(::VYaml::Serialization::YamlSerializationContext*  value) ;

/// [NullableContext(1)]
/// @brief Method set_DefaultOptions, addr 0xb9589dc, size 0x58, virtual false, abstract: false, final false
static inline void set_DefaultOptions(::VYaml::Serialization::YamlSerializerOptions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlSerializer(YamlSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlSerializer(YamlSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::YamlSerializer) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
