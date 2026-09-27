#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSettings_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSettingsData_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettingsHolder_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettings.GetMeshBakerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings* (::DigitalOpus::MB::Core::MB3_MeshCombinerSettings::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettings::GetMeshBakerSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d866cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*>(),
                        {"GetMeshBakerSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettings.GetMeshBakerSettingsAsSerializedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettings::*)(::by_ref<::StringW>, ::by_ref<::UnityEngine::Object*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettings::GetMeshBakerSettingsAsSerializedProperty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d866d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*>(),
                        {"GetMeshBakerSettingsAsSerializedProperty", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettings::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*& DigitalOpus::MB::Core::MB3_MeshCombinerSettings::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* const& DigitalOpus::MB::Core::MB3_MeshCombinerSettings::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettings::__cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* DigitalOpus::MB::Core::MB3_MeshCombinerSettings::GetMeshBakerSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*>(),
                        {"GetMeshBakerSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettings::GetMeshBakerSettingsAsSerializedProperty(::by_ref<::StringW>  propertyName, ::by_ref<::UnityEngine::Object*>  targetObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*>(),
                        {"GetMeshBakerSettingsAsSerializedProperty", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::UnityEngine::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, targetObj);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSettings* DigitalOpus::MB::Core::MB3_MeshCombinerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSettings::operator ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* DigitalOpus::MB::Core::MB3_MeshCombinerSettings::i___DigitalOpus__MB__Core__MB_IMeshBakerSettingsHolder() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettings::MB3_MeshCombinerSettings()   {
}
