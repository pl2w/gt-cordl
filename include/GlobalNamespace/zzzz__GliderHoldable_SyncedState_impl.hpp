#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderHoldable_SyncedState.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_SyncedState_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable_SyncedState.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable_SyncedState::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GliderHoldable_SyncedState::Init)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ab3590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_SyncedState>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable_SyncedState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable_SyncedState::*)(int32_t)>(&::GlobalNamespace::GliderHoldable_SyncedState::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5abb71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_SyncedState>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_riderId()  {
return this->___riderId;
}
constexpr int32_t const& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_riderId() const {
return this->___riderId;
}
constexpr void GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_set_riderId(int32_t  value)  {
this->___riderId = value;
}
constexpr uint8_t& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_materialIndex()  {
return this->___materialIndex;
}
constexpr uint8_t const& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_materialIndex() const {
return this->___materialIndex;
}
constexpr void GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_set_materialIndex(uint8_t  value)  {
this->___materialIndex = value;
}
constexpr uint8_t& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_audioLevel()  {
return this->___audioLevel;
}
constexpr uint8_t const& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_audioLevel() const {
return this->___audioLevel;
}
constexpr void GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_set_audioLevel(uint8_t  value)  {
this->___audioLevel = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_tagged()  {
return this->___tagged;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_tagged() const {
return this->___tagged;
}
constexpr void GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_set_tagged(::Fusion::NetworkBool  value)  {
this->___tagged = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_position()  {
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_position() const {
return this->___position;
}
constexpr void GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
this->___position = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_rotation()  {
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_get_rotation() const {
return this->___rotation;
}
constexpr void GlobalNamespace::GliderHoldable_SyncedState::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
this->___rotation = value;
}
inline void GlobalNamespace::GliderHoldable_SyncedState::Init(::UnityEngine::Vector3  defaultPosition, ::UnityEngine::Quaternion  defaultRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_SyncedState>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, defaultPosition, defaultRotation);
}
inline void GlobalNamespace::GliderHoldable_SyncedState::_ctor(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_SyncedState>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::GliderHoldable_SyncedState::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::GliderHoldable_SyncedState::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "riderId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "audioLevel", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tagged", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GliderHoldable_SyncedState::GliderHoldable_SyncedState(int32_t  riderId, uint8_t  materialIndex, uint8_t  audioLevel, ::Fusion::NetworkBool  tagged, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept  {
this->riderId = riderId;
this->materialIndex = materialIndex;
this->audioLevel = audioLevel;
this->tagged = tagged;
this->position = position;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GliderHoldable_SyncedState::GliderHoldable_SyncedState()   {
}
