#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructure_BuildSettings.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_BuildSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings.set_buildFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::*)(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags)>(&::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::set_buildFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb60809c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings>(),
                        {"set_buildFlags", {}, {::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings.set_relativeOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::set_relativeOrigin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb6080a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings>(),
                        {"set_relativeOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::*)()>(&::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb6080b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::set_buildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings>(),
                        {"set_buildFlags", {}, {::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::set_relativeOrigin(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings>(),
                        {"set_relativeOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buildFlags_k__BackingField", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_relativeOrigin_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::RayTracingAccelerationStructure_BuildSettings(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags  _buildFlags_k__BackingField, ::UnityEngine::Vector3  _relativeOrigin_k__BackingField) noexcept  {
this->_buildFlags_k__BackingField = _buildFlags_k__BackingField;
this->_relativeOrigin_k__BackingField = _relativeOrigin_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings::RayTracingAccelerationStructure_BuildSettings()   {
}
