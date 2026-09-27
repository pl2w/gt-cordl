#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DateTimeOptions.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DateTimePackingFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DateTimeOptions_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DateTimeOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DateTimeOptions::*)()>(&::SouthPointe::Serialization::MessagePack::DateTimeOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat& SouthPointe::Serialization::MessagePack::DateTimeOptions::__cordl_internal_get_PackingFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PackingFormat;
}
constexpr ::SouthPointe::Serialization::MessagePack::DateTimePackingFormat const& SouthPointe::Serialization::MessagePack::DateTimeOptions::__cordl_internal_get_PackingFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PackingFormat;
}
constexpr void SouthPointe::Serialization::MessagePack::DateTimeOptions::__cordl_internal_set_PackingFormat(::SouthPointe::Serialization::MessagePack::DateTimePackingFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PackingFormat = value;
}
inline void SouthPointe::Serialization::MessagePack::DateTimeOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::DateTimeOptions* SouthPointe::Serialization::MessagePack::DateTimeOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::DateTimeOptions*>());
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::DateTimeOptions::DateTimeOptions()   {
}
