#pragma once
// IWYU pragma private; include "GlobalNamespace/Vector3Converter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Converter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector3Converter.WriteJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector3Converter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::GlobalNamespace::Vector3Converter::WriteJson)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b084a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vector3Converter*>(),
                    {::i2c::class_of<::GlobalNamespace::Vector3Converter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Converter.ReadJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Vector3Converter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::GlobalNamespace::Vector3Converter::ReadJson)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b0861c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vector3Converter*>(),
                    {::i2c::class_of<::GlobalNamespace::Vector3Converter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Converter.CanConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Vector3Converter::*)(::System::Type*)>(&::GlobalNamespace::Vector3Converter::CanConvert)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b08758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Vector3Converter*>(),
                    {::i2c::class_of<::GlobalNamespace::Vector3Converter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Converter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector3Converter::*)()>(&::GlobalNamespace::Vector3Converter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b087cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vector3Converter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vector3Converter::WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vector3Converter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* GlobalNamespace::Vector3Converter::ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vector3Converter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool GlobalNamespace::Vector3Converter::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Vector3Converter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline void GlobalNamespace::Vector3Converter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Vector3Converter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Vector3Converter* GlobalNamespace::Vector3Converter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Vector3Converter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector3Converter::Vector3Converter()   {
}
