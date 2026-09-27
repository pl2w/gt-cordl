#pragma once
// IWYU pragma private; include "PlayFab/ISerializerPlugin.hpp"
#include "PlayFab/zzzz__ISerializerPlugin_def.hpp"
#include "PlayFab/zzzz__IPlayFabPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ISerializerPlugin.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::ISerializerPlugin::*)(::StringW)>(&::PlayFab::ISerializerPlugin::DeserializeObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ISerializerPlugin*>(),
                    {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ISerializerPlugin.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::ISerializerPlugin::*)(::System::Object*)>(&::PlayFab::ISerializerPlugin::SerializeObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ISerializerPlugin*>(),
                    {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ISerializerPlugin.SerializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::ISerializerPlugin::*)(::System::Object*, ::System::Object*)>(&::PlayFab::ISerializerPlugin::SerializeObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ISerializerPlugin*>(),
                    {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 4}
                ));
    return ___internal_method;
  }
};
template<typename T>
inline T PlayFab::ISerializerPlugin::DeserializeObject(::StringW  serialized)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, serialized);
}
template<typename T>
inline T PlayFab::ISerializerPlugin::DeserializeObject(::StringW  serialized, ::System::Object*  serializerStrategy)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 1}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, serialized, serializerStrategy);
}
inline ::System::Object* PlayFab::ISerializerPlugin::DeserializeObject(::StringW  serialized)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serialized);
}
inline ::StringW PlayFab::ISerializerPlugin::SerializeObject(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, obj);
}
inline ::StringW PlayFab::ISerializerPlugin::SerializeObject(::System::Object*  obj, ::System::Object*  serializerStrategy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ISerializerPlugin*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, obj, serializerStrategy);
}
/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr  PlayFab::ISerializerPlugin::operator ::PlayFab::IPlayFabPlugin*() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* PlayFab::ISerializerPlugin::i___PlayFab__IPlayFabPlugin() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
