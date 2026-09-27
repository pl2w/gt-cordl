#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Serialization/ILckSerializer.hpp"
#include "Liv/Lck/Core/Serialization/zzzz__ILckSerializer_def.hpp"
#include "Liv/Lck/Core/zzzz__SerializationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::ILckSerializer.get_SerializationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::SerializationType (::Liv::Lck::Core::Serialization::ILckSerializer::*)()>(&::Liv::Lck::Core::Serialization::ILckSerializer::get_SerializationType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(),
                    {::i2c::class_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::Serialization::ILckSerializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Liv::Lck::Core::Serialization::ILckSerializer::*)(::System::Object*)>(&::Liv::Lck::Core::Serialization::ILckSerializer::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(),
                    {::i2c::class_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Liv::Lck::Core::SerializationType Liv::Lck::Core::Serialization::ILckSerializer::get_SerializationType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::SerializationType>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Liv::Lck::Core::Serialization::ILckSerializer::Serialize(::System::Object*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data);
}
template<typename T>
inline T Liv::Lck::Core::Serialization::ILckSerializer::Deserialize(::ArrayW<uint8_t>  data)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Liv::Lck::Core::Serialization::ILckSerializer*>(), 2}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, data);
}
