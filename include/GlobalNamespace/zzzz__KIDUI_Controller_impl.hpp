#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_Controller.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller_Metrics_ShowReason_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller_def.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "GlobalNamespace/zzzz__EMainScreenStatus_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_ConfirmScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller_Metrics_ShowReason_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller__ShouldShowKIDScreen_d__25_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller__StartKIDScreens_d__20_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::KIDUI_Controller> (*)()>(&::GlobalNamespace::KIDUI_Controller::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a534d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.get_IsKIDUIActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::KIDUI_Controller::get_IsKIDUIActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a53520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"get_IsKIDUIActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.get_EtagOnCloseBlackScreenPlayerPrefRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDUI_Controller::get_EtagOnCloseBlackScreenPlayerPrefRef)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a535f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"get_EtagOnCloseBlackScreenPlayerPrefRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5a536c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a537d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.StartKIDScreens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::KIDUI_Controller::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::KIDUI_Controller::StartKIDScreens)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a538d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"StartKIDScreens", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.CloseKIDScreens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::CloseKIDScreens)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5a539cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"CloseKIDScreens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.UpdateScreenStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::UpdateScreenStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a53cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"UpdateScreenStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.NotifyOfEmailResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)(bool)>(&::GlobalNamespace::KIDUI_Controller::NotifyOfEmailResult)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5a545e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"NotifyOfEmailResult", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.GetScreenStatusFromSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EMainScreenStatus (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::GetScreenStatusFromSession)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5a53d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"GetScreenStatusFromSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.ShouldShowKIDScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::KIDUI_Controller::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::KIDUI_Controller::ShouldShowKIDScreen)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a54800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"ShouldShowKIDScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.ShouldShowScreenOnPermissionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::ShouldShowScreenOnPermissionChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a54734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"ShouldShowScreenOnPermissionChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.GetLastBlackScreenEtag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::GetLastBlackScreenEtag)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a54920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"GetLastBlackScreenEtag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.SaveEtagOnCloseScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::SaveEtagOnCloseScreen)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a53b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"SaveEtagOnCloseScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a54968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_Controller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_Controller::*)()>(&::GlobalNamespace::KIDUI_Controller::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a54990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__mainKIDScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainKIDScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__mainKIDScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainKIDScreen;
}
constexpr void GlobalNamespace::KIDUI_Controller::__cordl_internal_set__mainKIDScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainKIDScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__confirmScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen> const& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__confirmScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmScreen;
}
constexpr void GlobalNamespace::KIDUI_Controller::__cordl_internal_set__confirmScreen(::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____confirmScreen = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__PermissionsWithToggles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PermissionsWithToggles;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__PermissionsWithToggles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PermissionsWithToggles;
}
constexpr void GlobalNamespace::KIDUI_Controller::__cordl_internal_set__PermissionsWithToggles(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PermissionsWithToggles = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>*& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__inaccessibleSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inaccessibleSettings;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>* const& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__inaccessibleSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inaccessibleSettings;
}
constexpr void GlobalNamespace::KIDUI_Controller::__cordl_internal_set__inaccessibleSettings(::System::Collections::Generic::List_1<::GlobalNamespace::EKIDFeatures>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inaccessibleSettings = value;
}
constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__showReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showReason;
}
constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__showReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showReason;
}
constexpr void GlobalNamespace::KIDUI_Controller::__cordl_internal_set__showReason(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showReason = value;
}
constexpr bool& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__isKidUIActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isKidUIActive;
}
constexpr bool const& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__isKidUIActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isKidUIActive;
}
constexpr void GlobalNamespace::KIDUI_Controller::__cordl_internal_set__isKidUIActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isKidUIActive = value;
}
constexpr ::StringW& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__lastEtagOnClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEtagOnClose;
}
constexpr ::StringW const& GlobalNamespace::KIDUI_Controller::__cordl_internal_get__lastEtagOnClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEtagOnClose;
}
constexpr void GlobalNamespace::KIDUI_Controller::__cordl_internal_set__lastEtagOnClose(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastEtagOnClose = value;
}
inline void GlobalNamespace::KIDUI_Controller::setStaticF__instance(::UnityW<::GlobalNamespace::KIDUI_Controller>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::KIDUI_Controller>, "_instance", ::GlobalNamespace::KIDUI_Controller*>(std::forward<::UnityW<::GlobalNamespace::KIDUI_Controller>>(value));
}
inline ::UnityW<::GlobalNamespace::KIDUI_Controller> GlobalNamespace::KIDUI_Controller::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::KIDUI_Controller>, "_instance", ::GlobalNamespace::KIDUI_Controller*>();
}
inline void GlobalNamespace::KIDUI_Controller::setStaticF_etagOnCloseBlackScreenPlayerPrefStr(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "etagOnCloseBlackScreenPlayerPrefStr", ::GlobalNamespace::KIDUI_Controller*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::KIDUI_Controller::getStaticF_etagOnCloseBlackScreenPlayerPrefStr()  {
return ::cordl_internals::getStaticField<::StringW, "etagOnCloseBlackScreenPlayerPrefStr", ::GlobalNamespace::KIDUI_Controller*>();
}
inline ::UnityW<::GlobalNamespace::KIDUI_Controller> GlobalNamespace::KIDUI_Controller::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::KIDUI_Controller>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::KIDUI_Controller::get_IsKIDUIActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"get_IsKIDUIActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDUI_Controller::get_EtagOnCloseBlackScreenPlayerPrefRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"get_EtagOnCloseBlackScreenPlayerPrefRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDUI_Controller::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_Controller::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDUI_Controller::StartKIDScreens(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"StartKIDScreens", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::KIDUI_Controller::CloseKIDScreens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"CloseKIDScreens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_Controller::UpdateScreenStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"UpdateScreenStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_Controller::NotifyOfEmailResult(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"NotifyOfEmailResult", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline ::GlobalNamespace::EMainScreenStatus GlobalNamespace::KIDUI_Controller::GetScreenStatusFromSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"GetScreenStatusFromSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EMainScreenStatus>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDUI_Controller::ShouldShowKIDScreen(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"ShouldShowKIDScreen", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, cancellationToken);
}
inline bool GlobalNamespace::KIDUI_Controller::ShouldShowScreenOnPermissionChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"ShouldShowScreenOnPermissionChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDUI_Controller::GetLastBlackScreenEtag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"GetLastBlackScreenEtag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_Controller::SaveEtagOnCloseScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"SaveEtagOnCloseScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_Controller::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_Controller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_Controller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_Controller* GlobalNamespace::KIDUI_Controller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_Controller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_Controller::KIDUI_Controller()   {
}
