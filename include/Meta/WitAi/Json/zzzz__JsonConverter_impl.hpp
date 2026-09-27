#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConverter.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::JsonConverter::*)()>(&::Meta::WitAi::Json::JsonConverter::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e44294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConverter.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::JsonConverter::*)()>(&::Meta::WitAi::Json::JsonConverter::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4429c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConverter.CanConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::JsonConverter::*)(::System::Type*)>(&::Meta::WitAi::Json::JsonConverter::CanConvert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConverter.ReadJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Json::JsonConverter::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Type*, ::System::Object*)>(&::Meta::WitAi::Json::JsonConverter::ReadJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e442a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConverter.WriteJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Json::JsonConverter::*)(::System::Object*)>(&::Meta::WitAi::Json::JsonConverter::WriteJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e442ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JsonConverter::*)()>(&::Meta::WitAi::Json::JsonConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3fa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::WitAi::Json::JsonConverter::__cordl_internal_get__CanRead_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanRead_k__BackingField;
}
constexpr bool const& Meta::WitAi::Json::JsonConverter::__cordl_internal_get__CanRead_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanRead_k__BackingField;
}
constexpr void Meta::WitAi::Json::JsonConverter::__cordl_internal_set__CanRead_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CanRead_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Json::JsonConverter::__cordl_internal_get__CanWrite_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanWrite_k__BackingField;
}
constexpr bool const& Meta::WitAi::Json::JsonConverter::__cordl_internal_get__CanWrite_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CanWrite_k__BackingField;
}
constexpr void Meta::WitAi::Json::JsonConverter::__cordl_internal_set__CanWrite_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CanWrite_k__BackingField = value;
}
inline bool Meta::WitAi::Json::JsonConverter::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::JsonConverter::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::JsonConverter::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline ::System::Object* Meta::WitAi::Json::JsonConverter::ReadJson(::Meta::WitAi::Json::WitResponseNode*  serializer, ::System::Type*  objectType, ::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serializer, objectType, existingValue);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::JsonConverter::WriteJson(::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method, existingValue);
}
inline void Meta::WitAi::Json::JsonConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::JsonConverter* Meta::WitAi::Json::JsonConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::JsonConverter*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::JsonConverter::JsonConverter()   {
}
