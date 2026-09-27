#pragma once
// IWYU pragma private; include "PlayFab/Json/SimpleJsonInstance.hpp"
#include "PlayFab/Json/zzzz__PocoJsonSerializerStrategy_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Json/zzzz__SimpleJsonInstance_def.hpp"
#include "PlayFab/Json/zzzz__SimpleJsonInstance_def.hpp"
#include "PlayFab/zzzz__IPlayFabPlugin_def.hpp"
#include "PlayFab/zzzz__ISerializerPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayFab::Json::SimpleJsonInstance.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::SimpleJsonInstance::*)(::StringW)>(&::PlayFab::Json::SimpleJsonInstance::DeserializeObject)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa7def70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::SimpleJsonInstance.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::Json::SimpleJsonInstance::*)(::System::Object*)>(&::PlayFab::Json::SimpleJsonInstance::SerializeObject)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa7df1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::SimpleJsonInstance.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::Json::SimpleJsonInstance::*)(::System::Object*, ::System::Object*)>(&::PlayFab::Json::SimpleJsonInstance::SerializeObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa7df3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::SimpleJsonInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::SimpleJsonInstance::*)()>(&::PlayFab::Json::SimpleJsonInstance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7df474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::Json::SimpleJsonInstance::setStaticF_ApiSerializerStrategy(::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*  value)  {
::cordl_internals::setStaticField<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*, "ApiSerializerStrategy", ::PlayFab::Json::SimpleJsonInstance*>(std::forward<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(value));
}
inline ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* PlayFab::Json::SimpleJsonInstance::getStaticF_ApiSerializerStrategy()  {
return ::cordl_internals::getStaticField<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*, "ApiSerializerStrategy", ::PlayFab::Json::SimpleJsonInstance*>();
}
template<typename T>
inline T PlayFab::Json::SimpleJsonInstance::DeserializeObject(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                    {"DeserializeObject", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, json);
}
template<typename T>
inline T PlayFab::Json::SimpleJsonInstance::DeserializeObject(::StringW  json, ::System::Object*  jsonSerializerStrategy)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                    {"DeserializeObject", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, json, jsonSerializerStrategy);
}
inline ::System::Object* PlayFab::Json::SimpleJsonInstance::DeserializeObject(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {"DeserializeObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, json);
}
inline ::StringW PlayFab::Json::SimpleJsonInstance::SerializeObject(::System::Object*  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, json);
}
inline ::StringW PlayFab::Json::SimpleJsonInstance::SerializeObject(::System::Object*  json, ::System::Object*  jsonSerializerStrategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {"SerializeObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, json, jsonSerializerStrategy);
}
inline void PlayFab::Json::SimpleJsonInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Json::SimpleJsonInstance* PlayFab::Json::SimpleJsonInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::SimpleJsonInstance*>());
}
/// @brief Convert operator to "::PlayFab::ISerializerPlugin"
constexpr  PlayFab::Json::SimpleJsonInstance::operator ::PlayFab::ISerializerPlugin*() noexcept {
return static_cast<::PlayFab::ISerializerPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::ISerializerPlugin"
constexpr ::PlayFab::ISerializerPlugin* PlayFab::Json::SimpleJsonInstance::i___PlayFab__ISerializerPlugin() noexcept {
return static_cast<::PlayFab::ISerializerPlugin*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr  PlayFab::Json::SimpleJsonInstance::operator ::PlayFab::IPlayFabPlugin*() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* PlayFab::Json::SimpleJsonInstance::i___PlayFab__IPlayFabPlugin() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Json::SimpleJsonInstance::SimpleJsonInstance()   {
}
//  Writing Method size for method: ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::*)(::System::Object*, ::System::Type*)>(&::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::DeserializeObject)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0xa7df54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(),
                    {::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization.TrySerializeKnownTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::*)(::System::Object*, ::by_ref<::System::Object*>)>(&::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::TrySerializeKnownTypes)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa7df998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(),
                    {::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::*)()>(&::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7df4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::DeserializeObject(::System::Object*  value, ::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type);
}
inline bool PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::TrySerializeKnownTypes(::System::Object*  input, ::by_ref<::System::Object*>  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, output);
}
inline void PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization::SimpleJsonInstance_PlayFabSimpleJsonCuztomization()   {
}
