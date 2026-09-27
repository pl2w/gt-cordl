#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCamera_CameraData.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraState_impl.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckSocialCamera_CameraData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckSocialCamera_CameraData::*)(::GlobalNamespace::LckSocialCamera_CameraState)>(&::GlobalNamespace::LckSocialCamera_CameraData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56cb3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera_CameraData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LckSocialCamera_CameraState& GlobalNamespace::LckSocialCamera_CameraData::__cordl_internal_get_currentState()  {
return this->___currentState;
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraState const& GlobalNamespace::LckSocialCamera_CameraData::__cordl_internal_get_currentState() const {
return this->___currentState;
}
constexpr void GlobalNamespace::LckSocialCamera_CameraData::__cordl_internal_set_currentState(::GlobalNamespace::LckSocialCamera_CameraState  value)  {
this->___currentState = value;
}
inline void GlobalNamespace::LckSocialCamera_CameraData::_ctor(::GlobalNamespace::LckSocialCamera_CameraState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckSocialCamera_CameraData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LckSocialCamera_CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::LckSocialCamera_CameraData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::LckSocialCamera_CameraData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "currentState", ty: "::GlobalNamespace::LckSocialCamera_CameraState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckSocialCamera_CameraData::LckSocialCamera_CameraData(::GlobalNamespace::LckSocialCamera_CameraState  currentState) noexcept  {
this->currentState = currentState;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckSocialCamera_CameraData::LckSocialCamera_CameraData()   {
}
