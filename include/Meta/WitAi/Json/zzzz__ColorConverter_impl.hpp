#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/ColorConverter.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_impl.hpp"
#include "Meta/WitAi/Json/zzzz__ColorConverter_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::ColorConverter.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::ColorConverter::*)()>(&::Meta::WitAi::Json::ColorConverter::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3f824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::ColorConverter.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::ColorConverter::*)()>(&::Meta::WitAi::Json::ColorConverter::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3f82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::ColorConverter.CanConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::ColorConverter::*)(::System::Type*)>(&::Meta::WitAi::Json::ColorConverter::CanConvert)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3f834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::ColorConverter.ReadJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Json::ColorConverter::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Type*, ::System::Object*)>(&::Meta::WitAi::Json::ColorConverter::ReadJson)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e3f8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::ColorConverter.WriteJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Json::ColorConverter::*)(::System::Object*)>(&::Meta::WitAi::Json::ColorConverter::WriteJson)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e3f938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::ColorConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::ColorConverter::*)()>(&::Meta::WitAi::Json::ColorConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3fa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::Json::ColorConverter::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::ColorConverter::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::ColorConverter::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline ::System::Object* Meta::WitAi::Json::ColorConverter::ReadJson(::Meta::WitAi::Json::WitResponseNode*  serializer, ::System::Type*  objectType, ::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serializer, objectType, existingValue);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::ColorConverter::WriteJson(::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method, existingValue);
}
inline void Meta::WitAi::Json::ColorConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::ColorConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::ColorConverter* Meta::WitAi::Json::ColorConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::ColorConverter*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::ColorConverter::ColorConverter()   {
}
