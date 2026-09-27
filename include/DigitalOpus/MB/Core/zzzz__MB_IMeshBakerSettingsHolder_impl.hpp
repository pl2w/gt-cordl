#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_IMeshBakerSettingsHolder.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettingsHolder_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder.GetMeshBakerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings* (::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder::*)()>(&::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder::GetMeshBakerSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder.GetMeshBakerSettingsAsSerializedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder::*)(::by_ref<::StringW>, ::by_ref<::UnityEngine::Object*>)>(&::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder::GetMeshBakerSettingsAsSerializedProperty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder::GetMeshBakerSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder::GetMeshBakerSettingsAsSerializedProperty(::by_ref<::StringW>  propertyName, ::by_ref<::UnityEngine::Object*>  targetObj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, targetObj);
}
