#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkTransform_NetTransformData.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkTransform_NetTransformData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_position()  {
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_position() const {
return this->___position;
}
constexpr void GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
this->___position = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_velocity()  {
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_velocity() const {
return this->___velocity;
}
constexpr void GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
this->___velocity = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_rotation()  {
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_rotation() const {
return this->___rotation;
}
constexpr void GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
this->___rotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_scale()  {
return this->___scale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_scale() const {
return this->___scale;
}
constexpr void GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_set_scale(::UnityEngine::Vector3  value)  {
this->___scale = value;
}
constexpr double_t& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_SentTime()  {
return this->___SentTime;
}
constexpr double_t const& GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_get_SentTime() const {
return this->___SentTime;
}
constexpr void GlobalNamespace::GorillaNetworkTransform_NetTransformData::__cordl_internal_set_SentTime(double_t  value)  {
this->___SentTime = value;
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::GorillaNetworkTransform_NetTransformData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::GorillaNetworkTransform_NetTransformData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SentTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaNetworkTransform_NetTransformData::GorillaNetworkTransform_NetTransformData(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, double_t  SentTime) noexcept  {
this->position = position;
this->velocity = velocity;
this->rotation = rotation;
this->scale = scale;
this->SentTime = SentTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaNetworkTransform_NetTransformData::GorillaNetworkTransform_NetTransformData()   {
}
