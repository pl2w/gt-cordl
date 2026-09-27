#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/CustomExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__CustomExtensions_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::CustomExtensions.IsNullable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::SouthPointe::Serialization::MessagePack::CustomExtensions::IsNullable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d0b9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::CustomExtensions*>(),
                        {"IsNullable", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool SouthPointe::Serialization::MessagePack::CustomExtensions::IsNullable(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::CustomExtensions*>(),
                        {"IsNullable", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::CustomExtensions::CustomExtensions()   {
}
