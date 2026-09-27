#pragma once
// IWYU pragma private; include "Fusion/NetworkTRSPData.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_impl.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__Vector3Compressed_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__NetworkTRSPData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkTRSPData.get_NonNetworkedParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (*)()>(&::Fusion::NetworkTRSPData::get_NonNetworkedParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8b654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSPData>(),
                        {"get_NonNetworkedParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkBehaviourId& Fusion::NetworkTRSPData::__cordl_internal_get_Parent()  {
return this->___Parent;
}
constexpr ::Fusion::NetworkBehaviourId const& Fusion::NetworkTRSPData::__cordl_internal_get_Parent() const {
return this->___Parent;
}
constexpr void Fusion::NetworkTRSPData::__cordl_internal_set_Parent(::Fusion::NetworkBehaviourId  value)  {
this->___Parent = value;
}
constexpr ::UnityEngine::Vector3& Fusion::NetworkTRSPData::__cordl_internal_get_Position()  {
return this->___Position;
}
constexpr ::UnityEngine::Vector3 const& Fusion::NetworkTRSPData::__cordl_internal_get_Position() const {
return this->___Position;
}
constexpr void Fusion::NetworkTRSPData::__cordl_internal_set_Position(::UnityEngine::Vector3  value)  {
this->___Position = value;
}
constexpr ::UnityEngine::Quaternion& Fusion::NetworkTRSPData::__cordl_internal_get_Rotation()  {
return this->___Rotation;
}
constexpr ::UnityEngine::Quaternion const& Fusion::NetworkTRSPData::__cordl_internal_get_Rotation() const {
return this->___Rotation;
}
constexpr void Fusion::NetworkTRSPData::__cordl_internal_set_Rotation(::UnityEngine::Quaternion  value)  {
this->___Rotation = value;
}
constexpr ::Fusion::Vector3Compressed& Fusion::NetworkTRSPData::__cordl_internal_get_Scale()  {
return this->___Scale;
}
constexpr ::Fusion::Vector3Compressed const& Fusion::NetworkTRSPData::__cordl_internal_get_Scale() const {
return this->___Scale;
}
constexpr void Fusion::NetworkTRSPData::__cordl_internal_set_Scale(::Fusion::Vector3Compressed  value)  {
this->___Scale = value;
}
constexpr int32_t& Fusion::NetworkTRSPData::__cordl_internal_get_TeleportKey()  {
return this->___TeleportKey;
}
constexpr int32_t const& Fusion::NetworkTRSPData::__cordl_internal_get_TeleportKey() const {
return this->___TeleportKey;
}
constexpr void Fusion::NetworkTRSPData::__cordl_internal_set_TeleportKey(int32_t  value)  {
this->___TeleportKey = value;
}
constexpr ::Fusion::NetworkId& Fusion::NetworkTRSPData::__cordl_internal_get_AreaOfInterestOverride()  {
return this->___AreaOfInterestOverride;
}
constexpr ::Fusion::NetworkId const& Fusion::NetworkTRSPData::__cordl_internal_get_AreaOfInterestOverride() const {
return this->___AreaOfInterestOverride;
}
constexpr void Fusion::NetworkTRSPData::__cordl_internal_set_AreaOfInterestOverride(::Fusion::NetworkId  value)  {
this->___AreaOfInterestOverride = value;
}
inline ::Fusion::NetworkBehaviourId Fusion::NetworkTRSPData::get_NonNetworkedParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkTRSPData>(),
                        {"get_NonNetworkedParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkTRSPData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkTRSPData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Parent", ty: "::Fusion::NetworkBehaviourId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Scale", ty: "::Fusion::Vector3Compressed", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TeleportKey", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AreaOfInterestOverride", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkTRSPData::NetworkTRSPData(::Fusion::NetworkBehaviourId  Parent, ::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, ::Fusion::Vector3Compressed  Scale, int32_t  TeleportKey, ::Fusion::NetworkId  AreaOfInterestOverride) noexcept  {
this->Parent = Parent;
this->Position = Position;
this->Rotation = Rotation;
this->Scale = Scale;
this->TeleportKey = TeleportKey;
this->AreaOfInterestOverride = AreaOfInterestOverride;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkTRSPData::NetworkTRSPData()   {
}
