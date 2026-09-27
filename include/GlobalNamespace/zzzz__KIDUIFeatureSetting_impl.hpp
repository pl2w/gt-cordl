#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIFeatureSetting.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_FeatureToggleSetup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUIFeatureSetting_def.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIFeatureSetting_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIToggle_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_FeatureToggleSetup_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.get_AlwaysCheckFeatureSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUIFeatureSetting::*)()>(&::GlobalNamespace::KIDUIFeatureSetting::get_AlwaysCheckFeatureSetting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a489dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"get_AlwaysCheckFeatureSetting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.set_AlwaysCheckFeatureSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(bool)>(&::GlobalNamespace::KIDUIFeatureSetting::set_AlwaysCheckFeatureSetting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a489e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"set_AlwaysCheckFeatureSetting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.CreateNewFeatureSettingGuardianManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, bool)>(&::GlobalNamespace::KIDUIFeatureSetting::CreateNewFeatureSettingGuardianManaged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a489ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"CreateNewFeatureSettingGuardianManaged", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.CreateNewFeatureSettingWithToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::KIDUIToggle> (::GlobalNamespace::KIDUIFeatureSetting::*)(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, bool, bool)>(&::GlobalNamespace::KIDUIFeatureSetting::CreateNewFeatureSettingWithToggle)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a48a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"CreateNewFeatureSettingWithToggle", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.CreateNewFeatureSettingWithoutToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, bool)>(&::GlobalNamespace::KIDUIFeatureSetting::CreateNewFeatureSettingWithoutToggle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a48a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"CreateNewFeatureSettingWithoutToggle", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.SetFeatureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup, bool, bool)>(&::GlobalNamespace::KIDUIFeatureSetting::SetFeatureData)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5a48b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureData", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.RefreshTextOnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)()>(&::GlobalNamespace::KIDUIFeatureSetting::RefreshTextOnLanguageChanged)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5a48fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"RefreshTextOnLanguageChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.UnregisterOnToggleChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::System::Action*)>(&::GlobalNamespace::KIDUIFeatureSetting::UnregisterOnToggleChangeEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a492d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"UnregisterOnToggleChangeEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.RegisterToggleOnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::System::Action*)>(&::GlobalNamespace::KIDUIFeatureSetting::RegisterToggleOnEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a492ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"RegisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.UnregisterToggleOnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::System::Action*)>(&::GlobalNamespace::KIDUIFeatureSetting::UnregisterToggleOnEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a49304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"UnregisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.RegisterToggleOffEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::System::Action*)>(&::GlobalNamespace::KIDUIFeatureSetting::RegisterToggleOffEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a4931c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"RegisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.UnregisterToggleOffEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::System::Action*)>(&::GlobalNamespace::KIDUIFeatureSetting::UnregisterToggleOffEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a49334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"UnregisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.GetFeatureToggleState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUIFeatureSetting::*)()>(&::GlobalNamespace::KIDUIFeatureSetting::GetFeatureToggleState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a4934c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"GetFeatureToggleState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.GetHasToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUIFeatureSetting::*)()>(&::GlobalNamespace::KIDUIFeatureSetting::GetHasToggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4942c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"GetHasToggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.SetFeatureSettingVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(bool)>(&::GlobalNamespace::KIDUIFeatureSetting::SetFeatureSettingVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a49434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureSettingVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.SetFeatureToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(bool)>(&::GlobalNamespace::KIDUIFeatureSetting::SetFeatureToggle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4945c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureToggle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.SetGuardianManagedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(bool)>(&::GlobalNamespace::KIDUIFeatureSetting::SetGuardianManagedState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a49478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetGuardianManagedState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.SetPlayerManagedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(bool, bool)>(&::GlobalNamespace::KIDUIFeatureSetting::SetPlayerManagedState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a49520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetPlayerManagedState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.SetFeatureName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)()>(&::GlobalNamespace::KIDUIFeatureSetting::SetFeatureName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a48eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.SetupGuardianManagedClickHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)()>(&::GlobalNamespace::KIDUIFeatureSetting::SetupGuardianManagedClickHandlers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a49500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetupGuardianManagedClickHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.AddDeniedSoundHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::KIDUIFeatureSetting::AddDeniedSoundHandler)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5a495b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"AddDeniedSoundHandler", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting.EnsureRaycastTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::KIDUIFeatureSetting::EnsureRaycastTarget)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a4985c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"EnsureRaycastTarget", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting::*)()>(&::GlobalNamespace::KIDUIFeatureSetting::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a499a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureNameTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureNameTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureNameTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureNameTxt;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__featureNameTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureNameTxt = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureStatusTxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStatusTxt;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureStatusTxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureStatusTxt;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__featureStatusTxt(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureStatusTxt = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIToggle>& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToggle;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIToggle> const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToggle;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__featureToggle(::UnityW<::GlobalNamespace::KIDUIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureToggle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__tickIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__tickIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickIcon;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__tickIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tickIcon = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__crossIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crossIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__crossIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crossIcon;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__crossIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crossIcon = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__guardianManagedLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guardianManagedLocked;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__guardianManagedLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guardianManagedLocked;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__guardianManagedLocked(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guardianManagedLocked = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__guardianManagedEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guardianManagedEnabled;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__guardianManagedEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guardianManagedEnabled;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__guardianManagedEnabled(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guardianManagedEnabled = value;
}
constexpr bool& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__hasToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasToggle;
}
constexpr bool const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__hasToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasToggle;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__hasToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasToggle = value;
}
constexpr ::StringW& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureName;
}
constexpr ::StringW const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureName;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__featureName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureName = value;
}
constexpr ::StringW& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__permissionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionName;
}
constexpr ::StringW const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__permissionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionName;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__permissionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____permissionName = value;
}
constexpr ::StringW& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__enabledTextStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledTextStr;
}
constexpr ::StringW const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__enabledTextStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledTextStr;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__enabledTextStr(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabledTextStr = value;
}
constexpr ::StringW& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__disabledTextStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledTextStr;
}
constexpr ::StringW const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__disabledTextStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledTextStr;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__disabledTextStr(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledTextStr = value;
}
constexpr ::GlobalNamespace::EKIDFeatures& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureType;
}
constexpr ::GlobalNamespace::EKIDFeatures const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__featureType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureType;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__featureType(::GlobalNamespace::EKIDFeatures  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureType = value;
}
constexpr ::System::Action_1<::GlobalNamespace::EKIDFeatures>*& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__onChangeCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onChangeCallback;
}
constexpr ::System::Action_1<::GlobalNamespace::EKIDFeatures>* const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__onChangeCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onChangeCallback;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__onChangeCallback(::System::Action_1<::GlobalNamespace::EKIDFeatures>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onChangeCallback = value;
}
constexpr ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__feature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr ::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__feature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feature;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__feature(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feature = value;
}
constexpr bool& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__AlwaysCheckFeatureSetting_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlwaysCheckFeatureSetting_k__BackingField;
}
constexpr bool const& GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_get__AlwaysCheckFeatureSetting_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlwaysCheckFeatureSetting_k__BackingField;
}
constexpr void GlobalNamespace::KIDUIFeatureSetting::__cordl_internal_set__AlwaysCheckFeatureSetting_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AlwaysCheckFeatureSetting_k__BackingField = value;
}
inline bool GlobalNamespace::KIDUIFeatureSetting::get_AlwaysCheckFeatureSetting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"get_AlwaysCheckFeatureSetting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIFeatureSetting::set_AlwaysCheckFeatureSetting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"set_AlwaysCheckFeatureSetting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::KIDUIFeatureSetting::CreateNewFeatureSettingGuardianManaged(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"CreateNewFeatureSettingGuardianManaged", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, isEnabled);
}
inline ::UnityW<::GlobalNamespace::KIDUIToggle> GlobalNamespace::KIDUIFeatureSetting::CreateNewFeatureSettingWithToggle(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  initialState, bool  alwaysCheckFeatureSetting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"CreateNewFeatureSettingWithToggle", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::KIDUIToggle>>(this, ___internal_method, feature, initialState, alwaysCheckFeatureSetting);
}
inline void GlobalNamespace::KIDUIFeatureSetting::CreateNewFeatureSettingWithoutToggle(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  alwaysCheckFeatureSetting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"CreateNewFeatureSettingWithoutToggle", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, alwaysCheckFeatureSetting);
}
inline void GlobalNamespace::KIDUIFeatureSetting::SetFeatureData(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  feature, bool  alwaysCheckFeatureSetting, bool  featureToggleEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureData", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, alwaysCheckFeatureSetting, featureToggleEnabled);
}
inline void GlobalNamespace::KIDUIFeatureSetting::RefreshTextOnLanguageChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"RefreshTextOnLanguageChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIFeatureSetting::UnregisterOnToggleChangeEvent(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"UnregisterOnToggleChangeEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GlobalNamespace::KIDUIFeatureSetting::RegisterToggleOnEvent(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"RegisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GlobalNamespace::KIDUIFeatureSetting::UnregisterToggleOnEvent(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"UnregisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GlobalNamespace::KIDUIFeatureSetting::RegisterToggleOffEvent(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"RegisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GlobalNamespace::KIDUIFeatureSetting::UnregisterToggleOffEvent(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"UnregisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline bool GlobalNamespace::KIDUIFeatureSetting::GetFeatureToggleState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"GetFeatureToggleState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::KIDUIFeatureSetting::GetHasToggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"GetHasToggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIFeatureSetting::SetFeatureSettingVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureSettingVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::KIDUIFeatureSetting::SetFeatureToggle(bool  enableToggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureToggle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableToggle);
}
inline void GlobalNamespace::KIDUIFeatureSetting::SetGuardianManagedState(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetGuardianManagedState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline void GlobalNamespace::KIDUIFeatureSetting::SetPlayerManagedState(bool  isInteractable, bool  isOptedIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetPlayerManagedState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isInteractable, isOptedIn);
}
inline void GlobalNamespace::KIDUIFeatureSetting::SetFeatureName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetFeatureName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIFeatureSetting::SetupGuardianManagedClickHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"SetupGuardianManagedClickHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIFeatureSetting::AddDeniedSoundHandler(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"AddDeniedSoundHandler", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::KIDUIFeatureSetting::EnsureRaycastTarget(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {"EnsureRaycastTarget", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::KIDUIFeatureSetting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIFeatureSetting* GlobalNamespace::KIDUIFeatureSetting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIFeatureSetting*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIFeatureSetting::KIDUIFeatureSetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting___c::*)()>(&::GlobalNamespace::KIDUIFeatureSetting___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a49a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIFeatureSetting___c._AddDeniedSoundHandler_b__37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIFeatureSetting___c::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::KIDUIFeatureSetting___c::_AddDeniedSoundHandler_b__37_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a49a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting___c*>(),
                        {"<AddDeniedSoundHandler>b__37_0", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUIFeatureSetting___c::setStaticF___9(::GlobalNamespace::KIDUIFeatureSetting___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::KIDUIFeatureSetting___c*, "<>9", ::GlobalNamespace::KIDUIFeatureSetting___c*>(std::forward<::GlobalNamespace::KIDUIFeatureSetting___c*>(value));
}
inline ::GlobalNamespace::KIDUIFeatureSetting___c* GlobalNamespace::KIDUIFeatureSetting___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::KIDUIFeatureSetting___c*, "<>9", ::GlobalNamespace::KIDUIFeatureSetting___c*>();
}
inline void GlobalNamespace::KIDUIFeatureSetting___c::setStaticF___9__37_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*, "<>9__37_0", ::GlobalNamespace::KIDUIFeatureSetting___c*>(std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>* GlobalNamespace::KIDUIFeatureSetting___c::getStaticF___9__37_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*, "<>9__37_0", ::GlobalNamespace::KIDUIFeatureSetting___c*>();
}
inline void GlobalNamespace::KIDUIFeatureSetting___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIFeatureSetting___c::_AddDeniedSoundHandler_b__37_0(::UnityEngine::EventSystems::BaseEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIFeatureSetting___c*>(),
                        {"<AddDeniedSoundHandler>b__37_0", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::KIDUIFeatureSetting___c* GlobalNamespace::KIDUIFeatureSetting___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIFeatureSetting___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIFeatureSetting___c::KIDUIFeatureSetting___c()   {
}
