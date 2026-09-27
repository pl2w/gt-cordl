#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DefaultNamingStrategy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DefaultNamingStrategy_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__IMapNamingStrategy_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MapDefinition_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy.OnPack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::*)(::StringW, ::SouthPointe::Serialization::MessagePack::MapDefinition*)>(&::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::OnPack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0ab7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*>(),
                        {"OnPack", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy.OnUnpack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::*)(::StringW, ::SouthPointe::Serialization::MessagePack::MapDefinition*)>(&::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::OnUnpack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0ab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*>(),
                        {"OnUnpack", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::*)()>(&::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0ab74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::OnPack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*>(),
                        {"OnPack", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, definition);
}
inline ::StringW SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::OnUnpack(::StringW  name, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*>(),
                        {"OnUnpack", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, definition);
}
inline void SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy* SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy*>());
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::IMapNamingStrategy"
constexpr  SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::operator ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::IMapNamingStrategy"
constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy* SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::i___SouthPointe__Serialization__MessagePack__IMapNamingStrategy() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::DefaultNamingStrategy::DefaultNamingStrategy()   {
}
