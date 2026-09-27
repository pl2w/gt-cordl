#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/GraphSerializationContext.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphMeta_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::GraphSerializationContext::*)(::System::IO::BinaryReader*, ::ArrayW<::Pathfinding::GraphNode*>, uint32_t, ::Pathfinding::Serialization::GraphMeta*)>(&::Pathfinding::Serialization::GraphSerializationContext::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ecd314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Pathfinding::Serialization::GraphMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::GraphSerializationContext::*)(::System::IO::BinaryWriter*)>(&::Pathfinding::Serialization::GraphSerializationContext::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ecd37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.SerializeNodeReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::GraphSerializationContext::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Serialization::GraphSerializationContext::SerializeNodeReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ecd3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"SerializeNodeReference", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.DeserializeNodeReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::Serialization::GraphSerializationContext::*)()>(&::Pathfinding::Serialization::GraphSerializationContext::DeserializeNodeReference)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ecd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeNodeReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.SerializeVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::GraphSerializationContext::*)(::UnityEngine::Vector3)>(&::Pathfinding::Serialization::GraphSerializationContext::SerializeVector3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ecd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.DeserializeVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Serialization::GraphSerializationContext::*)()>(&::Pathfinding::Serialization::GraphSerializationContext::DeserializeVector3)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ecd590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeVector3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.SerializeInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::GraphSerializationContext::*)(::Pathfinding::Int3)>(&::Pathfinding::Serialization::GraphSerializationContext::SerializeInt3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ecd608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"SerializeInt3", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.DeserializeInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::Serialization::GraphSerializationContext::*)()>(&::Pathfinding::Serialization::GraphSerializationContext::DeserializeInt3)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ecd678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeInt3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.DeserializeInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Serialization::GraphSerializationContext::*)(int32_t)>(&::Pathfinding::Serialization::GraphSerializationContext::DeserializeInt)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ecd71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.DeserializeFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::Serialization::GraphSerializationContext::*)(float_t)>(&::Pathfinding::Serialization::GraphSerializationContext::DeserializeFloat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ecd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeFloat", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphSerializationContext.DeserializeUnityObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Pathfinding::Serialization::GraphSerializationContext::*)()>(&::Pathfinding::Serialization::GraphSerializationContext::DeserializeUnityObject)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5ecd870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeUnityObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Pathfinding::GraphNode*>& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_id2NodeMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id2NodeMapping;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*> const& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_id2NodeMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id2NodeMapping;
}
constexpr void Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_set_id2NodeMapping(::ArrayW<::Pathfinding::GraphNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id2NodeMapping = value;
}
constexpr ::System::IO::BinaryReader*& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::System::IO::BinaryReader* const& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_set_reader(::System::IO::BinaryReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr ::System::IO::BinaryWriter*& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr ::System::IO::BinaryWriter* const& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr void Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_set_writer(::System::IO::BinaryWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writer = value;
}
constexpr uint32_t& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_graphIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr uint32_t const& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_graphIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr void Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_set_graphIndex(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphIndex = value;
}
constexpr ::Pathfinding::Serialization::GraphMeta*& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_meta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meta;
}
constexpr ::Pathfinding::Serialization::GraphMeta* const& Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_get_meta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meta;
}
constexpr void Pathfinding::Serialization::GraphSerializationContext::__cordl_internal_set_meta(::Pathfinding::Serialization::GraphMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meta = value;
}
inline void Pathfinding::Serialization::GraphSerializationContext::_ctor(::System::IO::BinaryReader*  reader, ::ArrayW<::Pathfinding::GraphNode*>  id2NodeMapping, uint32_t  graphIndex, ::Pathfinding::Serialization::GraphMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::ArrayW<::Pathfinding::GraphNode*>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Pathfinding::Serialization::GraphMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, id2NodeMapping, graphIndex, meta);
}
inline void Pathfinding::Serialization::GraphSerializationContext::_ctor(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void Pathfinding::Serialization::GraphSerializationContext::SerializeNodeReference(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"SerializeNodeReference", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::GraphNode* Pathfinding::Serialization::GraphSerializationContext::DeserializeNodeReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeNodeReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method);
}
inline void Pathfinding::Serialization::GraphSerializationContext::SerializeVector3(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"SerializeVector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::UnityEngine::Vector3 Pathfinding::Serialization::GraphSerializationContext::DeserializeVector3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeVector3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::Serialization::GraphSerializationContext::SerializeInt3(::Pathfinding::Int3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"SerializeInt3", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Pathfinding::Int3 Pathfinding::Serialization::GraphSerializationContext::DeserializeInt3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeInt3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method);
}
inline int32_t Pathfinding::Serialization::GraphSerializationContext::DeserializeInt(int32_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, defaultValue);
}
inline float_t Pathfinding::Serialization::GraphSerializationContext::DeserializeFloat(float_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeFloat", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, defaultValue);
}
inline ::UnityW<::UnityEngine::Object> Pathfinding::Serialization::GraphSerializationContext::DeserializeUnityObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphSerializationContext*>(),
                        {"DeserializeUnityObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::Pathfinding::Serialization::GraphSerializationContext* Pathfinding::Serialization::GraphSerializationContext::New_ctor(::System::IO::BinaryReader*  reader, ::ArrayW<::Pathfinding::GraphNode*>  id2NodeMapping, uint32_t  graphIndex, ::Pathfinding::Serialization::GraphMeta*  meta)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::GraphSerializationContext*>(reader, id2NodeMapping, graphIndex, meta));
}
inline ::Pathfinding::Serialization::GraphSerializationContext* Pathfinding::Serialization::GraphSerializationContext::New_ctor(::System::IO::BinaryWriter*  writer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::GraphSerializationContext*>(writer));
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::GraphSerializationContext::GraphSerializationContext()   {
}
