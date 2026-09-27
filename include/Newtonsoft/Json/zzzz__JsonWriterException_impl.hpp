#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonWriterException.hpp"
#include "Newtonsoft/Json/zzzz__JsonException_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriterException_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriterException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriterException::*)()>(&::Newtonsoft::Json::JsonWriterException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa390180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriterException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriterException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::JsonWriterException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa390188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriterException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonWriterException::*)(::StringW, ::StringW, ::System::Exception*)>(&::Newtonsoft::Json::JsonWriterException::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa390190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriterException.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonWriterException* (*)(::Newtonsoft::Json::JsonWriter*, ::StringW, ::System::Exception*)>(&::Newtonsoft::Json::JsonWriterException::Create)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa38a0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {"Create", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriterException.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonWriterException* (*)(::StringW, ::StringW, ::System::Exception*)>(&::Newtonsoft::Json::JsonWriterException::Create)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3901c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::JsonWriterException::__cordl_internal_get__Path_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Path_k__BackingField;
}
constexpr ::StringW const& Newtonsoft::Json::JsonWriterException::__cordl_internal_get__Path_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Path_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonWriterException::__cordl_internal_set__Path_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Path_k__BackingField = value;
}
inline void Newtonsoft::Json::JsonWriterException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriterException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void Newtonsoft::Json::JsonWriterException::_ctor(::StringW  message, ::StringW  path, /* [Nullable(2)] */ ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, path, innerException);
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriterException::Create(::Newtonsoft::Json::JsonWriter*  writer, ::StringW  message, /* [Nullable(2)] */ ::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {"Create", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonWriterException*>(nullptr, ___internal_method, writer, message, ex);
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriterException::Create(::StringW  path, ::StringW  message, /* [Nullable(2)] */ ::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonWriterException*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonWriterException*>(nullptr, ___internal_method, path, message, ex);
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriterException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonWriterException*>());
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriterException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonWriterException*>(info, context));
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriterException::New_ctor(::StringW  message, ::StringW  path, /* [Nullable(2)] */ ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonWriterException*>(message, path, innerException));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriterException::JsonWriterException()   {
}
