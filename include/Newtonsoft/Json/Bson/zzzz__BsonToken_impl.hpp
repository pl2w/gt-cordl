#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonToken.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonToken.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonToken::*)()>(&::Newtonsoft::Json::Bson::BsonToken::get_Type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Bson::BsonToken*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Bson::BsonToken*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonToken.set_Parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonToken::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonToken::set_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3fe0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonToken*>(),
                        {"set_Parent", {}, {::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonToken::*)()>(&::Newtonsoft::Json::Bson::BsonToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3fe0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonToken*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonToken::__cordl_internal_get__Parent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonToken::__cordl_internal_get__Parent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parent_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonToken::__cordl_internal_set__Parent_k__BackingField(::Newtonsoft::Json::Bson::BsonToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parent_k__BackingField = value;
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonToken::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Bson::BsonToken*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonToken::set_Parent(::Newtonsoft::Json::Bson::BsonToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonToken*>(),
                        {"set_Parent", {}, {::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonToken::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonToken*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonToken* Newtonsoft::Json::Bson::BsonToken::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonToken*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonToken::BsonToken()   {
}
