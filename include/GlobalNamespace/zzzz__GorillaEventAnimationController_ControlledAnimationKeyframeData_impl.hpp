#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimationController_ControlledAnimationKeyframeData.hpp"
#include "GlobalNamespace/zzzz__GorillaEventAnimationController_ControlledAnimationKeyframeData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData::*)(int32_t, float_t, float_t, bool)>(&::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57f6208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData::_ctor(int32_t  _index, float_t  _time, float_t  _startOffset, bool  _animEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _index, _time, _startOffset, _animEnabled);
}
// Ctor Parameters [CppParam { name: "animationClipIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startOffset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "animEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData::GorillaEventAnimationController_ControlledAnimationKeyframeData(int32_t  animationClipIndex, float_t  startTime, float_t  startOffset, bool  animEnabled) noexcept  {
this->animationClipIndex = animationClipIndex;
this->startTime = startTime;
this->startOffset = startOffset;
this->animEnabled = animEnabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData::GorillaEventAnimationController_ControlledAnimationKeyframeData()   {
}
