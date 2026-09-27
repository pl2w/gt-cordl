#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/MapOptions.hpp"
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MapOptions_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__IMapNamingStrategy_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MapOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::MapOptions::*)()>(&::SouthPointe::Serialization::MessagePack::MapOptions::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d0aaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_RequireSerializableAttribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequireSerializableAttribute;
}
constexpr bool const& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_RequireSerializableAttribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequireSerializableAttribute;
}
constexpr void SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_set_RequireSerializableAttribute(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequireSerializableAttribute = value;
}
constexpr bool& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_IgnoreAutoPropertyValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreAutoPropertyValues;
}
constexpr bool const& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_IgnoreAutoPropertyValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreAutoPropertyValues;
}
constexpr void SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_set_IgnoreAutoPropertyValues(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreAutoPropertyValues = value;
}
constexpr bool& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_IgnoreNullOnPack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreNullOnPack;
}
constexpr bool const& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_IgnoreNullOnPack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreNullOnPack;
}
constexpr void SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_set_IgnoreNullOnPack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreNullOnPack = value;
}
constexpr bool& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_IgnoreUnknownFieldOnUnpack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreUnknownFieldOnUnpack;
}
constexpr bool const& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_IgnoreUnknownFieldOnUnpack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreUnknownFieldOnUnpack;
}
constexpr void SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_set_IgnoreUnknownFieldOnUnpack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreUnknownFieldOnUnpack = value;
}
constexpr bool& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_AllowEmptyArrayOnUnpack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowEmptyArrayOnUnpack;
}
constexpr bool const& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_AllowEmptyArrayOnUnpack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowEmptyArrayOnUnpack;
}
constexpr void SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_set_AllowEmptyArrayOnUnpack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowEmptyArrayOnUnpack = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_NamingStrategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NamingStrategy;
}
constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy* const& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_NamingStrategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NamingStrategy;
}
constexpr void SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_set_NamingStrategy(::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NamingStrategy = value;
}
constexpr ::System::Reflection::BindingFlags& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_FieldFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldFlags;
}
constexpr ::System::Reflection::BindingFlags const& SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_get_FieldFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldFlags;
}
constexpr void SouthPointe::Serialization::MessagePack::MapOptions::__cordl_internal_set_FieldFlags(::System::Reflection::BindingFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FieldFlags = value;
}
inline void SouthPointe::Serialization::MessagePack::MapOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::MapOptions* SouthPointe::Serialization::MessagePack::MapOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::MapOptions*>());
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::MapOptions::MapOptions()   {
}
