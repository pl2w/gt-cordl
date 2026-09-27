#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Serialization/LckMsgPackSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__LckMsgPackSerializer_def.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__ILckSerializer_def.hpp"
#include "Liv/Lck/Core/zzzz__SerializationType_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MessagePackFormatter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::LckMsgPackSerializer.get_SerializationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::SerializationType (::Liv::Lck::Core::Serialization::LckMsgPackSerializer::*)()>(&::Liv::Lck::Core::Serialization::LckMsgPackSerializer::get_SerializationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d01f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>(),
                        {"get_SerializationType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::LckMsgPackSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Serialization::LckMsgPackSerializer::*)()>(&::Liv::Lck::Core::Serialization::LckMsgPackSerializer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d019a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::LckMsgPackSerializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Liv::Lck::Core::Serialization::LckMsgPackSerializer::*)(::System::Object*)>(&::Liv::Lck::Core::Serialization::LckMsgPackSerializer::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d01f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::MessagePackFormatter*& Liv::Lck::Core::Serialization::LckMsgPackSerializer::__cordl_internal_get__formatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatter;
}
constexpr ::SouthPointe::Serialization::MessagePack::MessagePackFormatter* const& Liv::Lck::Core::Serialization::LckMsgPackSerializer::__cordl_internal_get__formatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatter;
}
constexpr void Liv::Lck::Core::Serialization::LckMsgPackSerializer::__cordl_internal_set__formatter(::SouthPointe::Serialization::MessagePack::MessagePackFormatter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____formatter = value;
}
inline ::Liv::Lck::Core::SerializationType Liv::Lck::Core::Serialization::LckMsgPackSerializer::get_SerializationType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>(),
                        {"get_SerializationType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::SerializationType>(this, ___internal_method);
}
inline void Liv::Lck::Core::Serialization::LckMsgPackSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Liv::Lck::Core::Serialization::LckMsgPackSerializer::Serialize(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data);
}
template<typename T>
inline T Liv::Lck::Core::Serialization::LckMsgPackSerializer::Deserialize(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>(),
                    {"Deserialize", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, data);
}
/// @brief [Preserve]
inline ::Liv::Lck::Core::Serialization::LckMsgPackSerializer* Liv::Lck::Core::Serialization::LckMsgPackSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Serialization::LckMsgPackSerializer*>());
}
/// @brief Convert operator to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr  Liv::Lck::Core::Serialization::LckMsgPackSerializer::operator ::Liv::Lck::Core::Serialization::ILckSerializer*() noexcept {
return static_cast<::Liv::Lck::Core::Serialization::ILckSerializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* Liv::Lck::Core::Serialization::LckMsgPackSerializer::i___Liv__Lck__Core__Serialization__ILckSerializer() noexcept {
return static_cast<::Liv::Lck::Core::Serialization::ILckSerializer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Serialization::LckMsgPackSerializer::LckMsgPackSerializer()   {
}
