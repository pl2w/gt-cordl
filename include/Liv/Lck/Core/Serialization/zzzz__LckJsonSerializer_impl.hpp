#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Serialization/LckJsonSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__LckJsonSerializer_def.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__ILckSerializer_def.hpp"
#include "Liv/Lck/Core/zzzz__SerializationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::LckJsonSerializer.get_SerializationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::SerializationType (::Liv::Lck::Core::Serialization::LckJsonSerializer::*)()>(&::Liv::Lck::Core::Serialization::LckJsonSerializer::get_SerializationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d01ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckJsonSerializer*>(),
                        {"get_SerializationType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::LckJsonSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::Serialization::LckJsonSerializer::*)()>(&::Liv::Lck::Core::Serialization::LckJsonSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d01ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckJsonSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::LckJsonSerializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Liv::Lck::Core::Serialization::LckJsonSerializer::*)(::System::Object*)>(&::Liv::Lck::Core::Serialization::LckJsonSerializer::Serialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d01edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckJsonSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::Core::SerializationType Liv::Lck::Core::Serialization::LckJsonSerializer::get_SerializationType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckJsonSerializer*>(),
                        {"get_SerializationType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::SerializationType>(this, ___internal_method);
}
inline void Liv::Lck::Core::Serialization::LckJsonSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckJsonSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Liv::Lck::Core::Serialization::LckJsonSerializer::Serialize(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Serialization::LckJsonSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data);
}
template<typename T>
inline T Liv::Lck::Core::Serialization::LckJsonSerializer::Deserialize(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Serialization::LckJsonSerializer*>(),
                    {"Deserialize", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, data);
}
/// @brief [Preserve]
inline ::Liv::Lck::Core::Serialization::LckJsonSerializer* Liv::Lck::Core::Serialization::LckJsonSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Serialization::LckJsonSerializer*>());
}
/// @brief Convert operator to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr  Liv::Lck::Core::Serialization::LckJsonSerializer::operator ::Liv::Lck::Core::Serialization::ILckSerializer*() noexcept {
return static_cast<::Liv::Lck::Core::Serialization::ILckSerializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Core::Serialization::ILckSerializer"
constexpr ::Liv::Lck::Core::Serialization::ILckSerializer* Liv::Lck::Core::Serialization::LckJsonSerializer::i___Liv__Lck__Core__Serialization__ILckSerializer() noexcept {
return static_cast<::Liv::Lck::Core::Serialization::ILckSerializer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::Serialization::LckJsonSerializer::LckJsonSerializer()   {
}
