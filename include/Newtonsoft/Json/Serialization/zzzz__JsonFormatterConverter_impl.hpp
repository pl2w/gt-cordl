#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonFormatterConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonFormatterConverter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonFormatterConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonFormatterConverter::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa3b5f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonFormatterConverter.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::System::Object*, ::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonFormatterConverter::Convert)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa3b6008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"Convert", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonFormatterConverter.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonFormatterConverter::ToBoolean)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3b6244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonFormatterConverter.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt32)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3b629c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonFormatterConverter.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt64)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3b62f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonFormatterConverter.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonFormatterConverter::ToSingle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3b634c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonFormatterConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonFormatterConverter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonFormatterConverter::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3b63a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*& Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_get__reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* const& Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_get__reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reader;
}
constexpr void Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_set__reader(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reader = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonISerializableContract*& Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_get__contract()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contract;
}
constexpr ::Newtonsoft::Json::Serialization::JsonISerializableContract* const& Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_get__contract() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contract;
}
constexpr void Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_set__contract(::Newtonsoft::Json::Serialization::JsonISerializableContract*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contract = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_get__member()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____member;
}
constexpr ::Newtonsoft::Json::Serialization::JsonProperty* const& Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_get__member() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____member;
}
constexpr void Newtonsoft::Json::Serialization::JsonFormatterConverter::__cordl_internal_set__member(::Newtonsoft::Json::Serialization::JsonProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____member = value;
}
inline void Newtonsoft::Json::Serialization::JsonFormatterConverter::_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, contract, member);
}
template<typename T>
inline T Newtonsoft::Json::Serialization::JsonFormatterConverter::GetTokenValue(::System::Object*  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                    {"GetTokenValue", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonFormatterConverter::Convert(::System::Object*  value, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"Convert", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type);
}
inline bool Newtonsoft::Json::Serialization::JsonFormatterConverter::ToBoolean(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt32(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline int64_t Newtonsoft::Json::Serialization::JsonFormatterConverter::ToInt64(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value);
}
inline float_t Newtonsoft::Json::Serialization::JsonFormatterConverter::ToSingle(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonFormatterConverter::ToString(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::JsonFormatterConverter* Newtonsoft::Json::Serialization::JsonFormatterConverter::New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, /* [Nullable(2)] */ ::Newtonsoft::Json::Serialization::JsonProperty*  member)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonFormatterConverter*>(reader, contract, member));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IFormatterConverter"
constexpr  Newtonsoft::Json::Serialization::JsonFormatterConverter::operator ::System::Runtime::Serialization::IFormatterConverter*() noexcept {
return static_cast<::System::Runtime::Serialization::IFormatterConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IFormatterConverter"
constexpr ::System::Runtime::Serialization::IFormatterConverter* Newtonsoft::Json::Serialization::JsonFormatterConverter::i___System__Runtime__Serialization__IFormatterConverter() noexcept {
return static_cast<::System::Runtime::Serialization::IFormatterConverter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonFormatterConverter::JsonFormatterConverter()   {
}
