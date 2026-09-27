#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/JsonOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__JsonOptions_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::JsonOptions::*)()>(&::SouthPointe::Serialization::MessagePack::JsonOptions::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d0aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_get_PrettyPrint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrettyPrint;
}
constexpr bool const& SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_get_PrettyPrint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrettyPrint;
}
constexpr void SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_set_PrettyPrint(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrettyPrint = value;
}
constexpr ::StringW& SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_get_IndentationString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IndentationString;
}
constexpr ::StringW const& SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_get_IndentationString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IndentationString;
}
constexpr void SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_set_IndentationString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IndentationString = value;
}
constexpr ::StringW& SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_get_ValueSeparator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueSeparator;
}
constexpr ::StringW const& SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_get_ValueSeparator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueSeparator;
}
constexpr void SouthPointe::Serialization::MessagePack::JsonOptions::__cordl_internal_set_ValueSeparator(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValueSeparator = value;
}
inline void SouthPointe::Serialization::MessagePack::JsonOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::JsonOptions* SouthPointe::Serialization::MessagePack::JsonOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::JsonOptions*>());
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::JsonOptions::JsonOptions()   {
}
