#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentHoldButton_Feedback.hpp"
#include "GlobalNamespace/zzzz__ConsentHoldButton_Feedback_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConsentHoldButton_Feedback.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConsentHoldButton_Feedback (*)()>(&::GlobalNamespace::ConsentHoldButton_Feedback::get_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a6b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentHoldButton_Feedback>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ConsentHoldButton_Feedback GlobalNamespace::ConsentHoldButton_Feedback::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentHoldButton_Feedback>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConsentHoldButton_Feedback>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "completeSoundIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "completeSoundVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pressHapticScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "holdPulseHapticScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "completeHapticScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "retriggerCooldownSeconds", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConsentHoldButton_Feedback::ConsentHoldButton_Feedback(int32_t  completeSoundIndex, float_t  completeSoundVolume, float_t  pressHapticScale, float_t  holdPulseHapticScale, float_t  completeHapticScale, float_t  retriggerCooldownSeconds) noexcept  {
this->completeSoundIndex = completeSoundIndex;
this->completeSoundVolume = completeSoundVolume;
this->pressHapticScale = pressHapticScale;
this->holdPulseHapticScale = holdPulseHapticScale;
this->completeHapticScale = completeHapticScale;
this->retriggerCooldownSeconds = retriggerCooldownSeconds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsentHoldButton_Feedback::ConsentHoldButton_Feedback()   {
}
