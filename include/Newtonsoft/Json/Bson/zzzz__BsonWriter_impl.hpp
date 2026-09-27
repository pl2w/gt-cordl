#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonWriter_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.AddValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::Object*, ::Newtonsoft::Json::Bson::BsonType)>(&::Newtonsoft::Json::Bson::BsonWriter::AddValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa3fe488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"AddValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.AddToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonWriter::AddToken)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa3fe508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"AddToken", {}, {::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteObjectId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::ArrayW<uint8_t>)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteObjectId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa3ea180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"WriteObjectId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW, ::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteRegex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa3f0490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"WriteRegex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__root(::Newtonsoft::Json::Bson::BsonToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__parent(::Newtonsoft::Json::Bson::BsonToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::StringW& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr ::StringW const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertyName = value;
}
inline void Newtonsoft::Json::Bson::BsonWriter::AddValue(::System::Object*  value, ::Newtonsoft::Json::Bson::BsonType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"AddValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Bson::BsonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, type);
}
inline void Newtonsoft::Json::Bson::BsonWriter::AddToken(::Newtonsoft::Json::Bson::BsonToken*  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"AddToken", {}, {::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteObjectId(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"WriteObjectId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteRegex(::StringW  pattern, ::StringW  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Bson::BsonWriter*>(),
                        {"WriteRegex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pattern, options);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonWriter::BsonWriter()   {
}
