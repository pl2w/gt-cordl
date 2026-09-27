#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/ArrayOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ArrayOptions_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::ArrayOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::ArrayOptions::*)()>(&::SouthPointe::Serialization::MessagePack::ArrayOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d0aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::ArrayOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& SouthPointe::Serialization::MessagePack::ArrayOptions::__cordl_internal_get_NullAsEmptyOnUnpack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NullAsEmptyOnUnpack;
}
constexpr bool const& SouthPointe::Serialization::MessagePack::ArrayOptions::__cordl_internal_get_NullAsEmptyOnUnpack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NullAsEmptyOnUnpack;
}
constexpr void SouthPointe::Serialization::MessagePack::ArrayOptions::__cordl_internal_set_NullAsEmptyOnUnpack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NullAsEmptyOnUnpack = value;
}
inline void SouthPointe::Serialization::MessagePack::ArrayOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::ArrayOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::ArrayOptions* SouthPointe::Serialization::MessagePack::ArrayOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::ArrayOptions*>());
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::ArrayOptions::ArrayOptions()   {
}
