#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializer_def.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "VYaml/Serialization/zzzz__YamlDeserializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializerOptions_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializer__DeserializeAsync_d__14_1_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializer.GetThreadLocalDeserializationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::YamlDeserializationContext* (*)(::VYaml::Serialization::YamlSerializerOptions*)>(&::VYaml::Serialization::YamlSerializer::GetThreadLocalDeserializationContext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb95873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"GetThreadLocalDeserializationContext", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializer.GetThreadLocalSerializationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::YamlSerializationContext* (*)(::VYaml::Serialization::YamlSerializerOptions*)>(&::VYaml::Serialization::YamlSerializer::GetThreadLocalSerializationContext)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb958870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"GetThreadLocalSerializationContext", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializer.get_DefaultOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::YamlSerializerOptions* (*)()>(&::VYaml::Serialization::YamlSerializer::get_DefaultOptions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb9587fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"get_DefaultOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializer.set_DefaultOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::VYaml::Serialization::YamlSerializerOptions*)>(&::VYaml::Serialization::YamlSerializer::set_DefaultOptions)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb9589dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"set_DefaultOptions", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::YamlSerializer::setStaticF_deserializationContext(::VYaml::Serialization::YamlDeserializationContext*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::YamlDeserializationContext*, "deserializationContext", ::VYaml::Serialization::YamlSerializer*>(std::forward<::VYaml::Serialization::YamlDeserializationContext*>(value));
}
inline ::VYaml::Serialization::YamlDeserializationContext* VYaml::Serialization::YamlSerializer::getStaticF_deserializationContext()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::YamlDeserializationContext*, "deserializationContext", ::VYaml::Serialization::YamlSerializer*>();
}
inline void VYaml::Serialization::YamlSerializer::setStaticF_serializationContext(::VYaml::Serialization::YamlSerializationContext*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::YamlSerializationContext*, "serializationContext", ::VYaml::Serialization::YamlSerializer*>(std::forward<::VYaml::Serialization::YamlSerializationContext*>(value));
}
inline ::VYaml::Serialization::YamlSerializationContext* VYaml::Serialization::YamlSerializer::getStaticF_serializationContext()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::YamlSerializationContext*, "serializationContext", ::VYaml::Serialization::YamlSerializer*>();
}
inline void VYaml::Serialization::YamlSerializer::setStaticF_defaultOptions(::VYaml::Serialization::YamlSerializerOptions*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::YamlSerializerOptions*, "defaultOptions", ::VYaml::Serialization::YamlSerializer*>(std::forward<::VYaml::Serialization::YamlSerializerOptions*>(value));
}
inline ::VYaml::Serialization::YamlSerializerOptions* VYaml::Serialization::YamlSerializer::getStaticF_defaultOptions()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::YamlSerializerOptions*, "defaultOptions", ::VYaml::Serialization::YamlSerializer*>();
}
inline ::VYaml::Serialization::YamlDeserializationContext* VYaml::Serialization::YamlSerializer::GetThreadLocalDeserializationContext(/* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"GetThreadLocalDeserializationContext", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::YamlDeserializationContext*>(nullptr, ___internal_method, options);
}
inline ::VYaml::Serialization::YamlSerializationContext* VYaml::Serialization::YamlSerializer::GetThreadLocalSerializationContext(/* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"GetThreadLocalSerializationContext", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::YamlSerializationContext*>(nullptr, ___internal_method, options);
}
inline ::VYaml::Serialization::YamlSerializerOptions* VYaml::Serialization::YamlSerializer::get_DefaultOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"get_DefaultOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::YamlSerializerOptions*>(nullptr, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializer::set_DefaultOptions(::VYaml::Serialization::YamlSerializerOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                        {"set_DefaultOptions", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline ::System::ReadOnlyMemory_1<uint8_t> VYaml::Serialization::YamlSerializer::Serialize(/* [Nullable(1)] */ T  value, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"Serialize", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<uint8_t>>(nullptr, ___internal_method, value, options);
}
template<typename T>
inline void VYaml::Serialization::YamlSerializer::Serialize(::System::Buffers::IBufferWriter_1<uint8_t>*  writer, T  value, /* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"Serialize", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Buffers::IBufferWriter_1<uint8_t>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value, options);
}
template<typename T>
inline void VYaml::Serialization::YamlSerializer::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, /* [Nullable(1)] */ T  value, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"Serialize", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<T>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, emitter, value, options);
}
template<typename T>
inline ::StringW VYaml::Serialization::YamlSerializer::SerializeToString(T  value, /* [Nullable(2)] */ ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"SerializeToString", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, options);
}
template<typename T>
inline T VYaml::Serialization::YamlSerializer::Deserialize(/* [Nullable(0)] */ ::System::ReadOnlyMemory_1<uint8_t>  memory, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"Deserialize", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, memory, options);
}
template<typename T>
inline T VYaml::Serialization::YamlSerializer::Deserialize(/* [IsReadOnly] [Nullable(0)] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>  sequence, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"Deserialize", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, sequence, options);
}
template<typename T>
inline ::System::Threading::Tasks::ValueTask_1<T> VYaml::Serialization::YamlSerializer::DeserializeAsync(/* [Nullable(1)] */ ::System::IO::Stream*  stream, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"DeserializeAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<T>>(nullptr, ___internal_method, stream, options);
}
template<typename T>
inline T VYaml::Serialization::YamlSerializer::Deserialize(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"Deserialize", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, parser, options);
}
template<typename T>
inline ::System::Threading::Tasks::ValueTask_1<::System::Collections::Generic::IEnumerable_1<T>*> VYaml::Serialization::YamlSerializer::DeserializeMultipleDocumentsAsync(/* [Nullable(1)] */ ::System::IO::Stream*  stream, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"DeserializeMultipleDocumentsAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<::System::Collections::Generic::IEnumerable_1<T>*>>(nullptr, ___internal_method, stream, options);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* VYaml::Serialization::YamlSerializer::DeserializeMultipleDocuments(/* [Nullable(0)] */ ::System::ReadOnlyMemory_1<uint8_t>  memory, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"DeserializeMultipleDocuments", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, memory, options);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* VYaml::Serialization::YamlSerializer::DeserializeMultipleDocuments(/* [IsReadOnly] [Nullable(0)] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>  sequence, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"DeserializeMultipleDocuments", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, sequence, options);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* VYaml::Serialization::YamlSerializer::DeserializeMultipleDocuments(::by_ref<::VYaml::Parser::YamlParser>  parser, ::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializer*>(),
                    {"DeserializeMultipleDocuments", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::VYaml::Parser::YamlParser>>(), ::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, parser, options);
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::YamlSerializer::YamlSerializer()   {
}
