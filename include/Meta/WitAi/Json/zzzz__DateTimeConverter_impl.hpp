#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/DateTimeConverter.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_impl.hpp"
#include "Meta/WitAi/Json/zzzz__DateTimeConverter_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::DateTimeConverter.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::DateTimeConverter::*)()>(&::Meta::WitAi::Json::DateTimeConverter::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3fa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::DateTimeConverter.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::DateTimeConverter::*)()>(&::Meta::WitAi::Json::DateTimeConverter::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::DateTimeConverter.CanConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::DateTimeConverter::*)(::System::Type*)>(&::Meta::WitAi::Json::DateTimeConverter::CanConvert)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::DateTimeConverter.ReadJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Json::DateTimeConverter::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Type*, ::System::Object*)>(&::Meta::WitAi::Json::DateTimeConverter::ReadJson)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e3fabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::DateTimeConverter.WriteJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Json::DateTimeConverter::*)(::System::Object*)>(&::Meta::WitAi::Json::DateTimeConverter::WriteJson)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e3fb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::DateTimeConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::DateTimeConverter::*)()>(&::Meta::WitAi::Json::DateTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3fc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::Json::DateTimeConverter::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::DateTimeConverter::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::DateTimeConverter::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline ::System::Object* Meta::WitAi::Json::DateTimeConverter::ReadJson(::Meta::WitAi::Json::WitResponseNode*  serializer, ::System::Type*  objectType, ::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serializer, objectType, existingValue);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::DateTimeConverter::WriteJson(::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method, existingValue);
}
inline void Meta::WitAi::Json::DateTimeConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::DateTimeConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::DateTimeConverter* Meta::WitAi::Json::DateTimeConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::DateTimeConverter*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::DateTimeConverter::DateTimeConverter()   {
}
