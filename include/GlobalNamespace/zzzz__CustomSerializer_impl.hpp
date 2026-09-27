#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomSerializer_def.hpp"
#include "GlobalNamespace/zzzz__NetEventOptions_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.ByteSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::CustomSerializer::ByteSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d3f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"ByteSerialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.ByteDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::CustomSerializer::ByteDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d41ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"ByteDeserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Object*)>(&::GlobalNamespace::CustomSerializer::Serialize)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x56d3f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::CustomSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x56d41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::System::Object*)>(&::GlobalNamespace::CustomSerializer::SerializeObject)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x56d4410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.SerializeObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::CustomSerializer::SerializeObjectArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56d4dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"SerializeObjectArray", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.SerializeNetEventOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryWriter*, ::GlobalNamespace::NetEventOptions*)>(&::GlobalNamespace::CustomSerializer::SerializeNetEventOptions)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56d4e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"SerializeNetEventOptions", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetEventOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::CustomSerializer::DeserializeObject)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x56d49e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.DeserializeObjectArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::CustomSerializer::DeserializeObjectArray)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56d4f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"DeserializeObjectArray", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomSerializer.DeserializeNetEventOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetEventOptions* (*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::CustomSerializer::DeserializeNetEventOptions)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x56d5050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"DeserializeNetEventOptions", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> GlobalNamespace::CustomSerializer::ByteSerialize(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"ByteSerialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, obj);
}
inline ::System::Object* GlobalNamespace::CustomSerializer::ByteDeserialize(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"ByteDeserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, bytes);
}
inline ::ArrayW<uint8_t> GlobalNamespace::CustomSerializer::Serialize(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, obj);
}
inline ::System::Object* GlobalNamespace::CustomSerializer::Deserialize(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::CustomSerializer::SerializeObject(::System::IO::BinaryWriter*  writer, ::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, obj);
}
inline void GlobalNamespace::CustomSerializer::SerializeObjectArray(::System::IO::BinaryWriter*  writer, ::ArrayW<::System::Object*>  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"SerializeObjectArray", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, objects);
}
inline void GlobalNamespace::CustomSerializer::SerializeNetEventOptions(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetEventOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"SerializeNetEventOptions", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetEventOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, options);
}
inline ::System::Object* GlobalNamespace::CustomSerializer::DeserializeObject(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, reader);
}
inline ::ArrayW<::System::Object*> GlobalNamespace::CustomSerializer::DeserializeObjectArray(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"DeserializeObjectArray", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::NetEventOptions* GlobalNamespace::CustomSerializer::DeserializeNetEventOptions(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomSerializer*>(),
                        {"DeserializeNetEventOptions", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetEventOptions*>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomSerializer::CustomSerializer()   {
}
