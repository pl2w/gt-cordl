#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonString.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonString::*)(::System::Object*, bool)>(&::Newtonsoft::Json::Bson::BsonString::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3fe238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__IncludeLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeLength_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Bson::BsonString::__cordl_internal_get__IncludeLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeLength_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonString::__cordl_internal_set__IncludeLength_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IncludeLength_k__BackingField = value;
}
inline void Newtonsoft::Json::Bson::BsonString::_ctor(::System::Object*  value, bool  includeLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonString*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, includeLength);
}
inline ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonString::New_ctor(::System::Object*  value, bool  includeLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonString*>(value, includeLength));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonString::BsonString()   {
}
