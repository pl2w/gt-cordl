#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreements.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIButton_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__GetAcceptedAgreements_d__37_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__GetTitleDataAsync_d__36_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__StartLegalAgreements_d__24_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__SubmitAcceptedAgreements_d__38_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__UpdateTextFromPlayFabTitleData_d__33_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__UpdateText_d__28_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__WaitForAcknowledgement_d__27_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LegalAgreements> (*)()>(&::GlobalNamespace::LegalAgreements::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a5fa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LegalAgreements*)>(&::GlobalNamespace::LegalAgreements::set_instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a5fa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::LegalAgreements*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements::*)()>(&::GlobalNamespace::LegalAgreements::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5a5faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                    {::i2c::class_of<::GlobalNamespace::LegalAgreements*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements::*)()>(&::GlobalNamespace::LegalAgreements::Update)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5a5fc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.StartLegalAgreements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LegalAgreements::*)()>(&::GlobalNamespace::LegalAgreements::StartLegalAgreements)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a60068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                    {::i2c::class_of<::GlobalNamespace::LegalAgreements*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.OnAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements::*)(int32_t)>(&::GlobalNamespace::LegalAgreements::OnAccepted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a6014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnAccepted", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.WaitForAcknowledgement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LegalAgreements::*)()>(&::GlobalNamespace::LegalAgreements::WaitForAcknowledgement)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a60158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"WaitForAcknowledgement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.UpdateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::LegalAgreements::*)(::GlobalNamespace::LegalAgreementTextAsset*, ::StringW)>(&::GlobalNamespace::LegalAgreements::UpdateText)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a60230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"UpdateText", {}, {::i2c::type_of<::GlobalNamespace::LegalAgreementTextAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.UpdateTextFromPlayFabTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::LegalAgreements::*)(::StringW, ::StringW, ::TMPro::TMP_Text*)>(&::GlobalNamespace::LegalAgreements::UpdateTextFromPlayFabTitleData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a60368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"UpdateTextFromPlayFabTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.OnPlayFabError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::LegalAgreements::OnPlayFabError)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a604b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.OnTitleDataReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements::*)(::StringW)>(&::GlobalNamespace::LegalAgreements::OnTitleDataReceived)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a604c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnTitleDataReceived", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.GetTitleDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::LegalAgreements::*)(::StringW)>(&::GlobalNamespace::LegalAgreements::GetTitleDataAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a604e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"GetTitleDataAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.GetAcceptedAgreements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* (::GlobalNamespace::LegalAgreements::*)(::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>)>(&::GlobalNamespace::LegalAgreements::GetAcceptedAgreements)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a605f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"GetAcceptedAgreements", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.SubmitAcceptedAgreements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LegalAgreements::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::GlobalNamespace::LegalAgreements::SubmitAcceptedAgreements)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a60700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"SubmitAcceptedAgreements", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements::*)()>(&::GlobalNamespace::LegalAgreements::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a607dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements::*)()>(&::GlobalNamespace::LegalAgreements::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a60804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get__minScrollSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minScrollSpeed;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get__minScrollSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minScrollSpeed;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__minScrollSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minScrollSpeed = value;
}
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get__maxScrollSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxScrollSpeed;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get__maxScrollSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxScrollSpeed;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__maxScrollSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxScrollSpeed = value;
}
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get__scrollInterpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollInterpTime;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get__scrollInterpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollInterpTime;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__scrollInterpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scrollInterpTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::LegalAgreements::__cordl_internal_get__scrollInterpCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollInterpCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::LegalAgreements::__cordl_internal_get__scrollInterpCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollInterpCurve;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__scrollInterpCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scrollInterpCurve = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LegalAgreements::__cordl_internal_get_uiParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LegalAgreements::__cordl_internal_get_uiParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiParent;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_uiParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uiParent = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::LegalAgreements::__cordl_internal_get_tmpBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpBody;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::LegalAgreements::__cordl_internal_get_tmpBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpBody;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_tmpBody(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmpBody = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::LegalAgreements::__cordl_internal_get_tmpTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpTitle;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::LegalAgreements::__cordl_internal_get_tmpTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpTitle;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_tmpTitle(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmpTitle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar>& GlobalNamespace::LegalAgreements::__cordl_internal_get_scrollBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollBar;
}
constexpr ::UnityW<::UnityEngine::UI::Scrollbar> const& GlobalNamespace::LegalAgreements::__cordl_internal_get_scrollBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollBar;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_scrollBar(::UnityW<::UnityEngine::UI::Scrollbar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollBar = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>& GlobalNamespace::LegalAgreements::__cordl_internal_get_legalAgreementScreens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalAgreementScreens;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>> const& GlobalNamespace::LegalAgreements::__cordl_internal_get_legalAgreementScreens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalAgreementScreens;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_legalAgreementScreens(::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legalAgreementScreens = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::LegalAgreements::__cordl_internal_get__pressAndHoldToConfirmButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressAndHoldToConfirmButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::LegalAgreements::__cordl_internal_get__pressAndHoldToConfirmButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressAndHoldToConfirmButton;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__pressAndHoldToConfirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressAndHoldToConfirmButton = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::LegalAgreements::__cordl_internal_get__scrollToBottomText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollToBottomText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::LegalAgreements::__cordl_internal_get__scrollToBottomText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollToBottomText;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__scrollToBottomText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scrollToBottomText = value;
}
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get__stickVibrationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickVibrationStrength;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get__stickVibrationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickVibrationStrength;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__stickVibrationStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stickVibrationStrength = value;
}
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get__stickVibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickVibrationDuration;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get__stickVibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stickVibrationDuration;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__stickVibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stickVibrationDuration = value;
}
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get_stickHeldDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickHeldDuration;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get_stickHeldDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickHeldDuration;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_stickHeldDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickHeldDuration = value;
}
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get_scrollSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollSpeed;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get_scrollSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollSpeed;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_scrollSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollSpeed = value;
}
constexpr float_t& GlobalNamespace::LegalAgreements::__cordl_internal_get_scrollTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollTime;
}
constexpr float_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get_scrollTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollTime;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_scrollTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollTime = value;
}
constexpr bool& GlobalNamespace::LegalAgreements::__cordl_internal_get_legalAgreementsStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalAgreementsStarted;
}
constexpr bool const& GlobalNamespace::LegalAgreements::__cordl_internal_get_legalAgreementsStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalAgreementsStarted;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_legalAgreementsStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legalAgreementsStarted = value;
}
constexpr bool& GlobalNamespace::LegalAgreements::__cordl_internal_get__accepted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accepted;
}
constexpr bool const& GlobalNamespace::LegalAgreements::__cordl_internal_get__accepted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accepted;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set__accepted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accepted = value;
}
constexpr ::StringW& GlobalNamespace::LegalAgreements::__cordl_internal_get_cachedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedText;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreements::__cordl_internal_get_cachedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedText;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_cachedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedText = value;
}
constexpr int32_t& GlobalNamespace::LegalAgreements::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::LegalAgreements::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr bool& GlobalNamespace::LegalAgreements::__cordl_internal_get_optIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optIn;
}
constexpr bool const& GlobalNamespace::LegalAgreements::__cordl_internal_get_optIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optIn;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_optIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optIn = value;
}
constexpr bool& GlobalNamespace::LegalAgreements::__cordl_internal_get_optional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optional;
}
constexpr bool const& GlobalNamespace::LegalAgreements::__cordl_internal_get_optional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optional;
}
constexpr void GlobalNamespace::LegalAgreements::__cordl_internal_set_optional(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optional = value;
}
inline void GlobalNamespace::LegalAgreements::setStaticF_SCROLL_TO_END_MESSAGE(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SCROLL_TO_END_MESSAGE", ::GlobalNamespace::LegalAgreements*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::LegalAgreements::getStaticF_SCROLL_TO_END_MESSAGE()  {
return ::cordl_internals::getStaticField<::StringW, "SCROLL_TO_END_MESSAGE", ::GlobalNamespace::LegalAgreements*>();
}
inline void GlobalNamespace::LegalAgreements::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::LegalAgreements>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::LegalAgreements>, "<instance>k__BackingField", ::GlobalNamespace::LegalAgreements*>(std::forward<::UnityW<::GlobalNamespace::LegalAgreements>>(value));
}
inline ::UnityW<::GlobalNamespace::LegalAgreements> GlobalNamespace::LegalAgreements::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::LegalAgreements>, "<instance>k__BackingField", ::GlobalNamespace::LegalAgreements*>();
}
inline ::UnityW<::GlobalNamespace::LegalAgreements> GlobalNamespace::LegalAgreements::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LegalAgreements>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements::set_instance(::GlobalNamespace::LegalAgreements*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::LegalAgreements*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::LegalAgreements::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LegalAgreements*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LegalAgreements::StartLegalAgreements()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LegalAgreements*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements::OnAccepted(int32_t  currentAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnAccepted", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentAge);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LegalAgreements::WaitForAcknowledgement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"WaitForAcknowledgement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::LegalAgreements::UpdateText(::GlobalNamespace::LegalAgreementTextAsset*  asset, ::StringW  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"UpdateText", {}, {::i2c::type_of<::GlobalNamespace::LegalAgreementTextAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, asset, version);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::LegalAgreements::UpdateTextFromPlayFabTitleData(::StringW  key, ::StringW  version, ::TMPro::TMP_Text*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"UpdateTextFromPlayFabTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, key, version, target);
}
inline void GlobalNamespace::LegalAgreements::OnPlayFabError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::LegalAgreements::OnTitleDataReceived(::StringW  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnTitleDataReceived", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::LegalAgreements::GetTitleDataAsync(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"GetTitleDataAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, key);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* GlobalNamespace::LegalAgreements::GetAcceptedAgreements(::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>  agreements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"GetAcceptedAgreements", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(this, ___internal_method, agreements);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LegalAgreements::SubmitAcceptedAgreements(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  agreements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"SubmitAcceptedAgreements", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, agreements);
}
inline void GlobalNamespace::LegalAgreements::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LegalAgreements* GlobalNamespace::LegalAgreements::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreements*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreements::LegalAgreements()   {
}
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass38_0::*)()>(&::GlobalNamespace::LegalAgreements___c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a60ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0._SubmitAcceptedAgreements_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass38_0::*)(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)>(&::GlobalNamespace::LegalAgreements___c__DisplayClass38_0::_SubmitAcceptedAgreements_b__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a60ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*>(),
                        {"<SubmitAcceptedAgreements>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0._SubmitAcceptedAgreements_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass38_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::LegalAgreements___c__DisplayClass38_0::_SubmitAcceptedAgreements_b__1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a60ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*>(),
                        {"<SubmitAcceptedAgreements>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LegalAgreements___c__DisplayClass38_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::LegalAgreements___c__DisplayClass38_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::LegalAgreements___c__DisplayClass38_0::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass38_0::_SubmitAcceptedAgreements_b__0(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*>(),
                        {"<SubmitAcceptedAgreements>b__0", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass38_0::_SubmitAcceptedAgreements_b__1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*>(),
                        {"<SubmitAcceptedAgreements>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0* GlobalNamespace::LegalAgreements___c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0::LegalAgreements___c__DisplayClass38_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass37_0::*)()>(&::GlobalNamespace::LegalAgreements___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a60a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass37_0._GetAcceptedAgreements_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass37_0::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::GlobalNamespace::LegalAgreements___c__DisplayClass37_0::_GetAcceptedAgreements_b__1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a60a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*>(),
                        {"<GetAcceptedAgreements>b__1", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass37_0._GetAcceptedAgreements_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass37_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::LegalAgreements___c__DisplayClass37_0::_GetAcceptedAgreements_b__2)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a60a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*>(),
                        {"<GetAcceptedAgreements>b__2", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LegalAgreements___c__DisplayClass37_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::LegalAgreements___c__DisplayClass37_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::LegalAgreements___c__DisplayClass37_0::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GlobalNamespace::LegalAgreements___c__DisplayClass37_0::__cordl_internal_get_returnValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnValue;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GlobalNamespace::LegalAgreements___c__DisplayClass37_0::__cordl_internal_get_returnValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnValue;
}
constexpr void GlobalNamespace::LegalAgreements___c__DisplayClass37_0::__cordl_internal_set_returnValue(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnValue = value;
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass37_0::_GetAcceptedAgreements_b__1(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*>(),
                        {"<GetAcceptedAgreements>b__1", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass37_0::_GetAcceptedAgreements_b__2(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*>(),
                        {"<GetAcceptedAgreements>b__2", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::LegalAgreements___c__DisplayClass37_0* GlobalNamespace::LegalAgreements___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreements___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreements___c__DisplayClass37_0::LegalAgreements___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass36_0::*)()>(&::GlobalNamespace::LegalAgreements___c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a60950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0._GetTitleDataAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass36_0::*)(::StringW)>(&::GlobalNamespace::LegalAgreements___c__DisplayClass36_0::_GetTitleDataAsync_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a60958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*>(),
                        {"<GetTitleDataAsync>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0._GetTitleDataAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c__DisplayClass36_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::LegalAgreements___c__DisplayClass36_0::_GetTitleDataAsync_b__1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a6097c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*>(),
                        {"<GetTitleDataAsync>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LegalAgreements___c__DisplayClass36_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::StringW const& GlobalNamespace::LegalAgreements___c__DisplayClass36_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::LegalAgreements___c__DisplayClass36_0::__cordl_internal_set_result(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr int32_t& GlobalNamespace::LegalAgreements___c__DisplayClass36_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::LegalAgreements___c__DisplayClass36_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::LegalAgreements___c__DisplayClass36_0::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass36_0::_GetTitleDataAsync_b__0(::StringW  res)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*>(),
                        {"<GetTitleDataAsync>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void GlobalNamespace::LegalAgreements___c__DisplayClass36_0::_GetTitleDataAsync_b__1(::PlayFab::PlayFabError*  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*>(),
                        {"<GetTitleDataAsync>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0* GlobalNamespace::LegalAgreements___c__DisplayClass36_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0::LegalAgreements___c__DisplayClass36_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements___c::*)()>(&::GlobalNamespace::LegalAgreements___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a60934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements___c._GetAcceptedAgreements_b__37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LegalAgreements___c::*)(::GlobalNamespace::LegalAgreementTextAsset*)>(&::GlobalNamespace::LegalAgreements___c::_GetAcceptedAgreements_b__37_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a6093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c*>(),
                        {"<GetAcceptedAgreements>b__37_0", {}, {::i2c::type_of<::GlobalNamespace::LegalAgreementTextAsset*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LegalAgreements___c::setStaticF___9(::GlobalNamespace::LegalAgreements___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::LegalAgreements___c*, "<>9", ::GlobalNamespace::LegalAgreements___c*>(std::forward<::GlobalNamespace::LegalAgreements___c*>(value));
}
inline ::GlobalNamespace::LegalAgreements___c* GlobalNamespace::LegalAgreements___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::LegalAgreements___c*, "<>9", ::GlobalNamespace::LegalAgreements___c*>();
}
inline void GlobalNamespace::LegalAgreements___c::setStaticF___9__37_0(::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>*, "<>9__37_0", ::GlobalNamespace::LegalAgreements___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>* GlobalNamespace::LegalAgreements___c::getStaticF___9__37_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>,::StringW>*, "<>9__37_0", ::GlobalNamespace::LegalAgreements___c*>();
}
inline void GlobalNamespace::LegalAgreements___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LegalAgreements___c::_GetAcceptedAgreements_b__37_0(::GlobalNamespace::LegalAgreementTextAsset*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements___c*>(),
                        {"<GetAcceptedAgreements>b__37_0", {}, {::i2c::type_of<::GlobalNamespace::LegalAgreementTextAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::LegalAgreements___c* GlobalNamespace::LegalAgreements___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LegalAgreements___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreements___c::LegalAgreements___c()   {
}
