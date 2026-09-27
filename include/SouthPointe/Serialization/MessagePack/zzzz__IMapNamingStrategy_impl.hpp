#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/IMapNamingStrategy.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__IMapNamingStrategy_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MapDefinition_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy.OnPack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::IMapNamingStrategy::*)(::StringW, ::SouthPointe::Serialization::MessagePack::MapDefinition*)>(&::SouthPointe::Serialization::MessagePack::IMapNamingStrategy::OnPack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(),
                    {::i2c::class_of<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy.OnUnpack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::IMapNamingStrategy::*)(::StringW, ::SouthPointe::Serialization::MessagePack::MapDefinition*)>(&::SouthPointe::Serialization::MessagePack::IMapNamingStrategy::OnUnpack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(),
                    {::i2c::class_of<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW SouthPointe::Serialization::MessagePack::IMapNamingStrategy::OnPack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, definition);
}
inline ::StringW SouthPointe::Serialization::MessagePack::IMapNamingStrategy::OnUnpack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, definition);
}
