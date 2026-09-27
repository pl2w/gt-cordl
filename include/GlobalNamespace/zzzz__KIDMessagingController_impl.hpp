#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDMessagingController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDMessagingController_def.hpp"
#include "GlobalNamespace/zzzz__KIDMessagingController__GetSetupConfirmationMessage_d__21_def.hpp"
#include "GlobalNamespace/zzzz__KIDMessagingController__StartKIDConfirmationScreenInternal_d__18_def.hpp"
#include "GlobalNamespace/zzzz__KIDMessagingController__StartKIDConfirmationScreen_d__20_def.hpp"
#include "GlobalNamespace/zzzz__KIDMessagingController_def.hpp"
#include "GlobalNamespace/zzzz__MessageBox_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.get_HasShownConfirmationScreenPlayerPref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDMessagingController::get_HasShownConfirmationScreenPlayerPref)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a45b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"get_HasShownConfirmationScreenPlayerPref", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.OnConfirmPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingController::*)()>(&::GlobalNamespace::KIDMessagingController::OnConfirmPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a45b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"OnConfirmPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingController::*)()>(&::GlobalNamespace::KIDMessagingController::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a45b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.ShouldShowConfirmationScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDMessagingController::*)()>(&::GlobalNamespace::KIDMessagingController::ShouldShowConfirmationScreen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a45cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"ShouldShowConfirmationScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.StartKIDConfirmationScreenInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::KIDMessagingController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::KIDMessagingController::StartKIDConfirmationScreenInternal)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a45d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"StartKIDConfirmationScreenInternal", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingController::*)()>(&::GlobalNamespace::KIDMessagingController::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a45e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.StartKIDConfirmationScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::KIDMessagingController::StartKIDConfirmationScreen)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a35a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"StartKIDConfirmationScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.GetSetupConfirmationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)()>(&::GlobalNamespace::KIDMessagingController::GetSetupConfirmationMessage)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a45e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"GetSetupConfirmationMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.GetConfirmMessageFromTitleDataJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::KIDMessagingController::GetConfirmMessageFromTitleDataJson)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a45f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"GetConfirmMessageFromTitleDataJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController.ShowConnectionErrorScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::KIDMessagingController::ShowConnectionErrorScreen)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5a46098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"ShowConnectionErrorScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingController::*)()>(&::GlobalNamespace::KIDMessagingController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a46364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MessageBox>& GlobalNamespace::KIDMessagingController::__cordl_internal_get_messageBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageBox;
}
constexpr ::UnityW<::GlobalNamespace::MessageBox> const& GlobalNamespace::KIDMessagingController::__cordl_internal_get_messageBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageBox;
}
constexpr void GlobalNamespace::KIDMessagingController::__cordl_internal_set_messageBox(::UnityW<::GlobalNamespace::MessageBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___messageBox = value;
}
constexpr bool& GlobalNamespace::KIDMessagingController::__cordl_internal_get__closeMessageBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeMessageBox;
}
constexpr bool const& GlobalNamespace::KIDMessagingController::__cordl_internal_get__closeMessageBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeMessageBox;
}
constexpr void GlobalNamespace::KIDMessagingController::__cordl_internal_set__closeMessageBox(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeMessageBox = value;
}
inline void GlobalNamespace::KIDMessagingController::setStaticF_instance(::UnityW<::GlobalNamespace::KIDMessagingController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::KIDMessagingController>, "instance", ::GlobalNamespace::KIDMessagingController*>(std::forward<::UnityW<::GlobalNamespace::KIDMessagingController>>(value));
}
inline ::UnityW<::GlobalNamespace::KIDMessagingController> GlobalNamespace::KIDMessagingController::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::KIDMessagingController>, "instance", ::GlobalNamespace::KIDMessagingController*>();
}
inline ::StringW GlobalNamespace::KIDMessagingController::get_HasShownConfirmationScreenPlayerPref()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"get_HasShownConfirmationScreenPlayerPref", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDMessagingController::OnConfirmPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"OnConfirmPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDMessagingController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::KIDMessagingController::ShouldShowConfirmationScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"ShouldShowConfirmationScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDMessagingController::StartKIDConfirmationScreenInternal(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"StartKIDConfirmationScreenInternal", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, token);
}
inline void GlobalNamespace::KIDMessagingController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDMessagingController::StartKIDConfirmationScreen(::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"StartKIDConfirmationScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::KIDMessagingController::GetSetupConfirmationMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"GetSetupConfirmationMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDMessagingController::GetConfirmMessageFromTitleDataJson(::StringW  jsonTxt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"GetConfirmMessageFromTitleDataJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, jsonTxt);
}
inline void GlobalNamespace::KIDMessagingController::ShowConnectionErrorScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {"ShowConnectionErrorScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDMessagingController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDMessagingController* GlobalNamespace::KIDMessagingController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDMessagingController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDMessagingController::KIDMessagingController()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::*)()>(&::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0._GetSetupConfirmationMessage_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::*)(::StringW)>(&::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::_GetSetupConfirmationMessage_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a46374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*>(),
                        {"<GetSetupConfirmationMessage>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0._GetSetupConfirmationMessage_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::_GetSetupConfirmationMessage_b__1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a463a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*>(),
                        {"<GetSetupConfirmationMessage>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::StringW& GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::__cordl_internal_get_bodyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyText;
}
constexpr ::StringW const& GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::__cordl_internal_get_bodyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyText;
}
constexpr void GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::__cordl_internal_set_bodyText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyText = value;
}
inline void GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::_GetSetupConfirmationMessage_b__0(::StringW  res)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*>(),
                        {"<GetSetupConfirmationMessage>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::_GetSetupConfirmationMessage_b__1(::PlayFab::PlayFabError*  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*>(),
                        {"<GetSetupConfirmationMessage>b__1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline ::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0* GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDMessagingController___c__DisplayClass21_0::KIDMessagingController___c__DisplayClass21_0()   {
}
