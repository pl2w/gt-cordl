#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAgeGate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate_def.hpp"
#include "GlobalNamespace/zzzz__AgeSliderWithProgressBar_def.hpp"
#include "GlobalNamespace/zzzz__GetRequirementsData_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGateConfirmation_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__AppealAge_d__41_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__BeginAgeGate_d__31_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__InitialiseAgeGate_d__33_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__ProcessAgeGateConfirmation_d__35_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__ProcessAgeGate_d__34_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__StartAgeGate_d__32_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__Start_d__29_def.hpp"
#include "GlobalNamespace/zzzz__KIDAgeGate__WaitForAgeChoice_d__36_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AgeDiscrepancyScreen_def.hpp"
#include "GlobalNamespace/zzzz__PreGameMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.get_UserAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::KIDAgeGate::get_UserAge)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a2808c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"get_UserAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.get_DisplayedScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDAgeGate::get_DisplayedScreen)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a280d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"get_DisplayedScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.set_DisplayedScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::KIDAgeGate::set_DisplayedScreen)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a2811c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"set_DisplayedScreen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a2816c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a28290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a28320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.BeginAgeGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::GlobalNamespace::KIDAgeGate::BeginAgeGate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a28338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"BeginAgeGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.StartAgeGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::StartAgeGate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a283fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"StartAgeGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.InitialiseAgeGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::InitialiseAgeGate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a284d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"InitialiseAgeGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.ProcessAgeGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::ProcessAgeGate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a285b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"ProcessAgeGate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.ProcessAgeGateConfirmation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::ProcessAgeGateConfirmation)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a28688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"ProcessAgeGateConfirmation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.WaitForAgeChoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::WaitForAgeChoice)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a28790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"WaitForAgeChoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.OnConfirmAgePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::KIDAgeGate::OnConfirmAgePressed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a28868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnConfirmAgePressed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.OnAgeGateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::OnAgeGateCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a288b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnAgeGateCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.FinaliseAgeGateAndContinue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::FinaliseAgeGateAndContinue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a288b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"FinaliseAgeGateAndContinue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.QuitGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::QuitGame)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a2898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"QuitGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.AppealAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::AppealAge)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a28a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"AppealAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.AppealRejected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::AppealRejected)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5a28ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"AppealRejected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.RefreshChallengeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::RefreshChallengeStatus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a28c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"RefreshChallengeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.SetAgeGateConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GetRequirementsData*)>(&::GlobalNamespace::KIDAgeGate::SetAgeGateConfig)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a28c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"SetAgeGateConfig", {}, {::i2c::type_of<::GlobalNamespace::GetRequirementsData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.OnWhyAgeGateButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::OnWhyAgeGateButtonPressed)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5a28c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnWhyAgeGateButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.OnWhyAgeGateButtonBackPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::OnWhyAgeGateButtonBackPressed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a28ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnWhyAgeGateButtonBackPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate.OnLearnMoreAboutKIDPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::OnLearnMoreAboutKIDPressed)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5a28ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnLearnMoreAboutKIDPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAgeGate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAgeGate::*)()>(&::GlobalNamespace::KIDAgeGate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a29140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PreGameMessage>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__pregameMessageReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pregameMessageReference;
}
constexpr ::UnityW<::GlobalNamespace::PreGameMessage> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__pregameMessageReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pregameMessageReference;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__pregameMessageReference(::UnityW<::GlobalNamespace::PreGameMessage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pregameMessageReference = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__ageDiscrepancyScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageDiscrepancyScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__ageDiscrepancyScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageDiscrepancyScreen;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__ageDiscrepancyScreen(::UnityW<::GlobalNamespace::KIDUI_AgeDiscrepancyScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ageDiscrepancyScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__uiParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__uiParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiParent;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__uiParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uiParent = value;
}
constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__ageSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageSlider;
}
constexpr ::UnityW<::GlobalNamespace::AgeSliderWithProgressBar> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__ageSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ageSlider;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__ageSlider(::UnityW<::GlobalNamespace::AgeSliderWithProgressBar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ageSlider = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__confirmationUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__confirmationUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationUI;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__confirmationUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmationUI = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDAgeGateConfirmation>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__confirmationUIManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationUIManager;
}
constexpr ::UnityW<::GlobalNamespace::KIDAgeGateConfirmation> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__confirmationUIManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationUIManager;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__confirmationUIManager(::UnityW<::GlobalNamespace::KIDAgeGateConfirmation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmationUIManager = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__confirmationAgeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationAgeText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__confirmationAgeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmationAgeText;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__confirmationAgeText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmationAgeText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDAgeGate::__cordl_internal_get__whyAgeGateScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whyAgeGateScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__whyAgeGateScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whyAgeGateScreen;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__whyAgeGateScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whyAgeGateScreen = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::KIDAgeGate::__cordl_internal_get_requestCancellationSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestCancellationSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::KIDAgeGate::__cordl_internal_get_requestCancellationSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestCancellationSource;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set_requestCancellationSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestCancellationSource = value;
}
constexpr bool& GlobalNamespace::KIDAgeGate::__cordl_internal_get__metrics_LearnMorePressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metrics_LearnMorePressed;
}
constexpr bool const& GlobalNamespace::KIDAgeGate::__cordl_internal_get__metrics_LearnMorePressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metrics_LearnMorePressed;
}
constexpr void GlobalNamespace::KIDAgeGate::__cordl_internal_set__metrics_LearnMorePressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metrics_LearnMorePressed = value;
}
inline void GlobalNamespace::KIDAgeGate::setStaticF__activeReference(::UnityW<::GlobalNamespace::KIDAgeGate>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::KIDAgeGate>, "_activeReference", ::GlobalNamespace::KIDAgeGate*>(std::forward<::UnityW<::GlobalNamespace::KIDAgeGate>>(value));
}
inline ::UnityW<::GlobalNamespace::KIDAgeGate> GlobalNamespace::KIDAgeGate::getStaticF__activeReference()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::KIDAgeGate>, "_activeReference", ::GlobalNamespace::KIDAgeGate*>();
}
inline void GlobalNamespace::KIDAgeGate::setStaticF__ageGateConfig(::GlobalNamespace::GetRequirementsData*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GetRequirementsData*, "_ageGateConfig", ::GlobalNamespace::KIDAgeGate*>(std::forward<::GlobalNamespace::GetRequirementsData*>(value));
}
inline ::GlobalNamespace::GetRequirementsData* GlobalNamespace::KIDAgeGate::getStaticF__ageGateConfig()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GetRequirementsData*, "_ageGateConfig", ::GlobalNamespace::KIDAgeGate*>();
}
inline void GlobalNamespace::KIDAgeGate::setStaticF__ageValue(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ageValue", ::GlobalNamespace::KIDAgeGate*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KIDAgeGate::getStaticF__ageValue()  {
return ::cordl_internals::getStaticField<int32_t, "_ageValue", ::GlobalNamespace::KIDAgeGate*>();
}
inline void GlobalNamespace::KIDAgeGate::setStaticF__hasChosenAge(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasChosenAge", ::GlobalNamespace::KIDAgeGate*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDAgeGate::getStaticF__hasChosenAge()  {
return ::cordl_internals::getStaticField<bool, "_hasChosenAge", ::GlobalNamespace::KIDAgeGate*>();
}
inline void GlobalNamespace::KIDAgeGate::setStaticF__DisplayedScreen_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<DisplayedScreen>k__BackingField", ::GlobalNamespace::KIDAgeGate*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDAgeGate::getStaticF__DisplayedScreen_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<DisplayedScreen>k__BackingField", ::GlobalNamespace::KIDAgeGate*>();
}
inline int32_t GlobalNamespace::KIDAgeGate::get_UserAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"get_UserAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDAgeGate::get_DisplayedScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"get_DisplayedScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::set_DisplayedScreen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"set_DisplayedScreen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::KIDAgeGate::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDAgeGate::BeginAgeGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"BeginAgeGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDAgeGate::StartAgeGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"StartAgeGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDAgeGate::InitialiseAgeGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"InitialiseAgeGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDAgeGate::ProcessAgeGate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"ProcessAgeGate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDAgeGate::ProcessAgeGateConfirmation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"ProcessAgeGateConfirmation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDAgeGate::WaitForAgeChoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"WaitForAgeChoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::OnConfirmAgePressed(int32_t  currentAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnConfirmAgePressed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentAge);
}
inline void GlobalNamespace::KIDAgeGate::OnAgeGateCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnAgeGateCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::FinaliseAgeGateAndContinue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"FinaliseAgeGateAndContinue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::QuitGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"QuitGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::AppealAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"AppealAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::AppealRejected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"AppealRejected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::RefreshChallengeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"RefreshChallengeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::SetAgeGateConfig(::GlobalNamespace::GetRequirementsData*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"SetAgeGateConfig", {}, {::i2c::type_of<::GlobalNamespace::GetRequirementsData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::KIDAgeGate::OnWhyAgeGateButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnWhyAgeGateButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::OnWhyAgeGateButtonBackPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnWhyAgeGateButtonBackPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::OnLearnMoreAboutKIDPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {"OnLearnMoreAboutKIDPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAgeGate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAgeGate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDAgeGate* GlobalNamespace::KIDAgeGate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDAgeGate*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDAgeGate::KIDAgeGate()   {
}
