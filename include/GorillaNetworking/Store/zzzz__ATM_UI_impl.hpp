#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/ATM_UI.hpp"
#include "TMPro/zzzz__TMP_Text_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__ATM_UI_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "GorillaNetworking/Store/zzzz__ATM_UI__loadMemberCodeFromTitleDate_d__14_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.get_PurchaseLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::Store::ATM_UI::*)()>(&::GorillaNetworking::Store::ATM_UI::get_PurchaseLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"get_PurchaseLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)()>(&::GorillaNetworking::Store::ATM_UI::Start)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ca2dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.loadMemberCodeFromTitleDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)(::StringW)>(&::GorillaNetworking::Store::ATM_UI::loadMemberCodeFromTitleDate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ca2fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"loadMemberCodeFromTitleDate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.onTD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)(::StringW)>(&::GorillaNetworking::Store::ATM_UI::onTD)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5ca3074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.onTDError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::Store::ATM_UI::onTDError)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ca3560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.SetCustomMapScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)(::UnityEngine::SceneManagement::Scene)>(&::GorillaNetworking::Store::ATM_UI::SetCustomMapScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca364c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"SetCustomMapScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.IsFromCustomMapScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::Store::ATM_UI::*)(::UnityEngine::SceneManagement::Scene)>(&::GorillaNetworking::Store::ATM_UI::IsFromCustomMapScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca3654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"IsFromCustomMapScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.SetCreatorCodeTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)(::StringW)>(&::GorillaNetworking::Store::ATM_UI::SetCreatorCodeTitle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca3664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"SetCreatorCodeTitle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.SetCreatorCodeField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)(::StringW)>(&::GorillaNetworking::Store::ATM_UI::SetCreatorCodeField)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ca3704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"SetCreatorCodeField", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.HideCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)()>(&::GorillaNetworking::Store::ATM_UI::HideCreatorCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ca37a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"HideCreatorCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI.ShowCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)()>(&::GorillaNetworking::Store::ATM_UI::ShowCreatorCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ca382c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"ShowCreatorCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::ATM_UI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::ATM_UI::*)()>(&::GorillaNetworking::Store::ATM_UI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca38b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_atmText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_atmText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atmText;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_atmText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atmText = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_ATM_RightColumnButtonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ATM_RightColumnButtonText;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_ATM_RightColumnButtonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ATM_RightColumnButtonText;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_ATM_RightColumnButtonText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ATM_RightColumnButtonText = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_ATM_RightColumnArrowText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ATM_RightColumnArrowText;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_ATM_RightColumnArrowText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ATM_RightColumnArrowText;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_ATM_RightColumnArrowText(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ATM_RightColumnArrowText = value;
}
constexpr ::StringW& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_purchaseLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseLocation;
}
constexpr ::StringW const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_purchaseLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseLocation;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_purchaseLocation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseLocation = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_creatorCodeObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_creatorCodeObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeObject;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_creatorCodeObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCodeObject = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_creatorCodeTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeTitle;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_creatorCodeTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeTitle;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_creatorCodeTitle(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCodeTitle = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_creatorCodeField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_creatorCodeField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeField;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_creatorCodeField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCodeField = value;
}
constexpr ::StringW& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_memberCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memberCode;
}
constexpr ::StringW const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_memberCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memberCode;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_memberCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memberCode = value;
}
constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_groupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_groupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_groupId(::UnityW<::GlobalNamespace::NexusGroupId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupId = value;
}
constexpr ::StringW& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_memberCodeTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memberCodeTitleDataKey;
}
constexpr ::StringW const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_memberCodeTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___memberCodeTitleDataKey;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_memberCodeTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___memberCodeTitleDataKey = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_customMapScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapScene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& GorillaNetworking::Store::ATM_UI::__cordl_internal_get_customMapScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapScene;
}
constexpr void GorillaNetworking::Store::ATM_UI::__cordl_internal_set_customMapScene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapScene = value;
}
inline ::StringW GorillaNetworking::Store::ATM_UI::get_PurchaseLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"get_PurchaseLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::Store::ATM_UI::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::ATM_UI::loadMemberCodeFromTitleDate(::StringW  memberCodeTitleDataKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"loadMemberCodeFromTitleDate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberCodeTitleDataKey);
}
inline void GorillaNetworking::Store::ATM_UI::onTD(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::Store::ATM_UI::onTDError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaNetworking::Store::ATM_UI::SetCustomMapScene(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"SetCustomMapScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline bool GorillaNetworking::Store::ATM_UI::IsFromCustomMapScene(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"IsFromCustomMapScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scene);
}
inline void GorillaNetworking::Store::ATM_UI::SetCreatorCodeTitle(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"SetCreatorCodeTitle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaNetworking::Store::ATM_UI::SetCreatorCodeField(::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"SetCreatorCodeField", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void GorillaNetworking::Store::ATM_UI::HideCreatorCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"HideCreatorCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::ATM_UI::ShowCreatorCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {"ShowCreatorCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::ATM_UI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::ATM_UI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::ATM_UI* GorillaNetworking::Store::ATM_UI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::ATM_UI*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::ATM_UI::ATM_UI()   {
}
