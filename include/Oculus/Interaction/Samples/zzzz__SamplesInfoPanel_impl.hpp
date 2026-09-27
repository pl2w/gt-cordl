#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SamplesInfoPanel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__SamplesInfoPanel_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::SamplesInfoPanel.HandleUrlButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SamplesInfoPanel::*)(::StringW)>(&::Oculus::Interaction::Samples::SamplesInfoPanel::HandleUrlButton)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa43ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SamplesInfoPanel*>(),
                        {"HandleUrlButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SamplesInfoPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SamplesInfoPanel::*)()>(&::Oculus::Interaction::Samples::SamplesInfoPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43eb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SamplesInfoPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Samples::SamplesInfoPanel::HandleUrlButton(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SamplesInfoPanel*>(),
                        {"HandleUrlButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url);
}
inline void Oculus::Interaction::Samples::SamplesInfoPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SamplesInfoPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SamplesInfoPanel* Oculus::Interaction::Samples::SamplesInfoPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SamplesInfoPanel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SamplesInfoPanel::SamplesInfoPanel()   {
}
