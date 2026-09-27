#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EyeGazeState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EyeGazeState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_EyeGazeState.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_EyeGazeState::*)()>(&::GlobalNamespace::OVRPlugin_EyeGazeState::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa60f6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_EyeGazeState>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRPlugin_EyeGazeState::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_EyeGazeState>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_EyeGazeState::OVRPlugin_EyeGazeState(::GlobalNamespace::OVRPlugin_Posef  Pose, float_t  Confidence, ::GlobalNamespace::OVRPlugin_Bool  _isValid) noexcept  {
this->Pose = Pose;
this->Confidence = Confidence;
this->_isValid = _isValid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_EyeGazeState::OVRPlugin_EyeGazeState()   {
}
