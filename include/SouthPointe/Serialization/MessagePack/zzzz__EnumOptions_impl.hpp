#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/EnumOptions.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__EnumPackingFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__EnumOptions_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::EnumOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::EnumOptions::*)()>(&::SouthPointe::Serialization::MessagePack::EnumOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0aa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::EnumOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat& SouthPointe::Serialization::MessagePack::EnumOptions::__cordl_internal_get_PackingFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PackingFormat;
}
constexpr ::SouthPointe::Serialization::MessagePack::EnumPackingFormat const& SouthPointe::Serialization::MessagePack::EnumOptions::__cordl_internal_get_PackingFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PackingFormat;
}
constexpr void SouthPointe::Serialization::MessagePack::EnumOptions::__cordl_internal_set_PackingFormat(::SouthPointe::Serialization::MessagePack::EnumPackingFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PackingFormat = value;
}
inline void SouthPointe::Serialization::MessagePack::EnumOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::EnumOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::EnumOptions* SouthPointe::Serialization::MessagePack::EnumOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::EnumOptions*>());
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::EnumOptions::EnumOptions()   {
}
