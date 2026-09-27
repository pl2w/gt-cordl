#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbSettingsDatum.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbSettingsDatum_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb458418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum::ClimbSettingsDatum()   {
}
