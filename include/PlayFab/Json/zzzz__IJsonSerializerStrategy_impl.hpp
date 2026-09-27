#pragma once
// IWYU pragma private; include "PlayFab/Json/IJsonSerializerStrategy.hpp"
#include "PlayFab/Json/zzzz__IJsonSerializerStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayFab::Json::IJsonSerializerStrategy.TrySerializeNonPrimitiveObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Json::IJsonSerializerStrategy::*)(::System::Object*, ::by_ref<::System::Object*>)>(&::PlayFab::Json::IJsonSerializerStrategy::TrySerializeNonPrimitiveObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::IJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::IJsonSerializerStrategy*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::IJsonSerializerStrategy.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::IJsonSerializerStrategy::*)(::System::Object*, ::System::Type*)>(&::PlayFab::Json::IJsonSerializerStrategy::DeserializeObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::IJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::IJsonSerializerStrategy*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool PlayFab::Json::IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(::System::Object*  input, ::by_ref<::System::Object*>  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::IJsonSerializerStrategy*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, output);
}
inline ::System::Object* PlayFab::Json::IJsonSerializerStrategy::DeserializeObject(::System::Object*  value, ::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::IJsonSerializerStrategy*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type);
}
