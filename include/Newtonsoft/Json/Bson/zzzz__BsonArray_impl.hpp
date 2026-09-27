#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonArray.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonArray_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonArray::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonArray::Add)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa3fe284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(),
                        {"Add", {}, {::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonArray::*)()>(&::Newtonsoft::Json::Bson::BsonArray::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3fe340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*& Newtonsoft::Json::Bson::BsonArray::__cordl_internal_get__children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____children;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* const& Newtonsoft::Json::Bson::BsonArray::__cordl_internal_get__children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____children;
}
constexpr void Newtonsoft::Json::Bson::BsonArray::__cordl_internal_set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____children = value;
}
inline void Newtonsoft::Json::Bson::BsonArray::Add(::Newtonsoft::Json::Bson::BsonToken*  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(),
                        {"Add", {}, {::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonArray::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonArray::BsonArray()   {
}
