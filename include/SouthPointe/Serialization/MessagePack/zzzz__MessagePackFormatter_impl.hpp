#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/MessagePackFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MessagePackFormatter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MessagePackFormatter.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::SerializationContext* (::SouthPointe::Serialization::MessagePack::MessagePackFormatter::*)()>(&::SouthPointe::Serialization::MessagePack::MessagePackFormatter::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0a4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MessagePackFormatter.set_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::MessagePackFormatter::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::MessagePackFormatter::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0a4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"set_Context", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MessagePackFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::MessagePackFormatter::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::MessagePackFormatter::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d0a4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MessagePackFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::MessagePackFormatter::*)(::System::Type*, ::ArrayW<uint8_t>)>(&::SouthPointe::Serialization::MessagePack::MessagePackFormatter::Deserialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d0a528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MessagePackFormatter.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::MessagePackFormatter::*)(::System::Type*, ::System::IO::Stream*)>(&::SouthPointe::Serialization::MessagePack::MessagePackFormatter::Deserialize)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x9d0a5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MessagePackFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::SouthPointe::Serialization::MessagePack::MessagePackFormatter::*)(::System::Type*, ::System::Object*)>(&::SouthPointe::Serialization::MessagePack::MessagePackFormatter::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d0a8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MessagePackFormatter.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::MessagePackFormatter::*)(::System::IO::Stream*, ::System::Type*, ::System::Object*)>(&::SouthPointe::Serialization::MessagePack::MessagePackFormatter::Serialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d0a94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::MessagePackFormatter::__cordl_internal_get__Context_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Context_k__BackingField;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::MessagePackFormatter::__cordl_internal_get__Context_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Context_k__BackingField;
}
constexpr void SouthPointe::Serialization::MessagePack::MessagePackFormatter::__cordl_internal_set__Context_k__BackingField(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Context_k__BackingField = value;
}
inline ::SouthPointe::Serialization::MessagePack::SerializationContext* SouthPointe::Serialization::MessagePack::MessagePackFormatter::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::SerializationContext*>(this, ___internal_method);
}
inline void SouthPointe::Serialization::MessagePack::MessagePackFormatter::set_Context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"set_Context", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::MessagePackFormatter::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
template<typename T>
inline T SouthPointe::Serialization::MessagePack::MessagePackFormatter::Deserialize(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                    {"Deserialize", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, bytes);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::MessagePackFormatter::Deserialize(::System::Type*  type, ::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, bytes);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::MessagePackFormatter::Deserialize(::System::Type*  type, ::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Deserialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, stream);
}
template<typename T>
inline ::ArrayW<uint8_t> SouthPointe::Serialization::MessagePack::MessagePackFormatter::Serialize(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                    {"Serialize", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, obj);
}
inline ::ArrayW<uint8_t> SouthPointe::Serialization::MessagePack::MessagePackFormatter::Serialize(::System::Type*  type, ::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, type, obj);
}
inline void SouthPointe::Serialization::MessagePack::MessagePackFormatter::Serialize(::System::IO::Stream*  stream, ::System::Type*  type, ::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, type, obj);
}
inline ::SouthPointe::Serialization::MessagePack::MessagePackFormatter* SouthPointe::Serialization::MessagePack::MessagePackFormatter::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::MessagePackFormatter*>(context));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::MessagePackFormatter::MessagePackFormatter()   {
}
