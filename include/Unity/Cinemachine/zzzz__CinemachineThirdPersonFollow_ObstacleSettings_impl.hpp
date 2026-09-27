#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineThirdPersonFollow_ObstacleSettings.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineThirdPersonFollow_ObstacleSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings (*)()>(&::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings::get_Default)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaea7584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CollisionFilter", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IgnoreTag", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CameraRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DampingIntoCollision", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DampingFromCollision", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings::CinemachineThirdPersonFollow_ObstacleSettings(bool  Enabled, ::UnityEngine::LayerMask  CollisionFilter, ::StringW  IgnoreTag, float_t  CameraRadius, float_t  DampingIntoCollision, float_t  DampingFromCollision) noexcept  {
this->Enabled = Enabled;
this->CollisionFilter = CollisionFilter;
this->IgnoreTag = IgnoreTag;
this->CameraRadius = CameraRadius;
this->DampingIntoCollision = DampingIntoCollision;
this->DampingFromCollision = DampingFromCollision;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings::CinemachineThirdPersonFollow_ObstacleSettings()   {
}
