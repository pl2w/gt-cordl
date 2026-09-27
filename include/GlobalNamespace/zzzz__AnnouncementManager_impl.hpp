#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnouncementManager.hpp"
#include "GlobalNamespace/zzzz__SAnnouncementData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnnouncementManager_def.hpp"
#include "GlobalNamespace/zzzz__MessageBox_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.ShowAnnouncement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AnnouncementManager::*)()>(&::GlobalNamespace::AnnouncementManager::ShowAnnouncement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"ShowAnnouncement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.get__completedSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AnnouncementManager::*)()>(&::GlobalNamespace::AnnouncementManager::get__completedSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get__completedSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.set__completedSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)(bool)>(&::GlobalNamespace::AnnouncementManager::set__completedSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"set__completedSetup", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.get__announcementActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AnnouncementManager::*)()>(&::GlobalNamespace::AnnouncementManager::get__announcementActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get__announcementActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.set__announcementActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)(bool)>(&::GlobalNamespace::AnnouncementManager::set__announcementActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a24da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"set__announcementActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AnnouncementManager> (*)()>(&::GlobalNamespace::AnnouncementManager::get_Instance)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a24dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.get_AnnouncementDPlayerPref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::AnnouncementManager::get_AnnouncementDPlayerPref)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a24ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get_AnnouncementDPlayerPref", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)()>(&::GlobalNamespace::AnnouncementManager::Awake)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a24f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)()>(&::GlobalNamespace::AnnouncementManager::Start)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5a25104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.OnContinuePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)()>(&::GlobalNamespace::AnnouncementManager::OnContinuePressed)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a252c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"OnContinuePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::AnnouncementManager::OnError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a253e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"OnError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager.ConfigureAnnouncement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)(::StringW)>(&::GlobalNamespace::AnnouncementManager::ConfigureAnnouncement)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5a25480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"ConfigureAnnouncement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnouncementManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnouncementManager::*)()>(&::GlobalNamespace::AnnouncementManager::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a25710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MessageBox>& GlobalNamespace::AnnouncementManager::__cordl_internal_get__announcementMessageBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____announcementMessageBox;
}
constexpr ::UnityW<::GlobalNamespace::MessageBox> const& GlobalNamespace::AnnouncementManager::__cordl_internal_get__announcementMessageBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____announcementMessageBox;
}
constexpr void GlobalNamespace::AnnouncementManager::__cordl_internal_set__announcementMessageBox(::UnityW<::GlobalNamespace::MessageBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____announcementMessageBox = value;
}
constexpr ::StringW& GlobalNamespace::AnnouncementManager::__cordl_internal_get__announcementString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____announcementString;
}
constexpr ::StringW const& GlobalNamespace::AnnouncementManager::__cordl_internal_get__announcementString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____announcementString;
}
constexpr void GlobalNamespace::AnnouncementManager::__cordl_internal_set__announcementString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____announcementString = value;
}
constexpr ::GlobalNamespace::SAnnouncementData& GlobalNamespace::AnnouncementManager::__cordl_internal_get__announcementData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____announcementData;
}
constexpr ::GlobalNamespace::SAnnouncementData const& GlobalNamespace::AnnouncementManager::__cordl_internal_get__announcementData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____announcementData;
}
constexpr void GlobalNamespace::AnnouncementManager::__cordl_internal_set__announcementData(::GlobalNamespace::SAnnouncementData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____announcementData = value;
}
constexpr bool& GlobalNamespace::AnnouncementManager::__cordl_internal_get__showAnnouncement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showAnnouncement;
}
constexpr bool const& GlobalNamespace::AnnouncementManager::__cordl_internal_get__showAnnouncement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showAnnouncement;
}
constexpr void GlobalNamespace::AnnouncementManager::__cordl_internal_set__showAnnouncement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showAnnouncement = value;
}
constexpr bool& GlobalNamespace::AnnouncementManager::__cordl_internal_get___completedSetup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____completedSetup_k__BackingField;
}
constexpr bool const& GlobalNamespace::AnnouncementManager::__cordl_internal_get___completedSetup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____completedSetup_k__BackingField;
}
constexpr void GlobalNamespace::AnnouncementManager::__cordl_internal_set___completedSetup_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____completedSetup_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AnnouncementManager::__cordl_internal_get___announcementActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____announcementActive_k__BackingField;
}
constexpr bool const& GlobalNamespace::AnnouncementManager::__cordl_internal_get___announcementActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____announcementActive_k__BackingField;
}
constexpr void GlobalNamespace::AnnouncementManager::__cordl_internal_set___announcementActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____announcementActive_k__BackingField = value;
}
inline void GlobalNamespace::AnnouncementManager::setStaticF__instance(::UnityW<::GlobalNamespace::AnnouncementManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AnnouncementManager>, "_instance", ::GlobalNamespace::AnnouncementManager*>(std::forward<::UnityW<::GlobalNamespace::AnnouncementManager>>(value));
}
inline ::UnityW<::GlobalNamespace::AnnouncementManager> GlobalNamespace::AnnouncementManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AnnouncementManager>, "_instance", ::GlobalNamespace::AnnouncementManager*>();
}
inline void GlobalNamespace::AnnouncementManager::setStaticF__announcementIDPref(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_announcementIDPref", ::GlobalNamespace::AnnouncementManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AnnouncementManager::getStaticF__announcementIDPref()  {
return ::cordl_internals::getStaticField<::StringW, "_announcementIDPref", ::GlobalNamespace::AnnouncementManager*>();
}
inline bool GlobalNamespace::AnnouncementManager::ShowAnnouncement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"ShowAnnouncement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AnnouncementManager::get__completedSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get__completedSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AnnouncementManager::set__completedSetup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"set__completedSetup", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AnnouncementManager::get__announcementActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get__announcementActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AnnouncementManager::set__announcementActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"set__announcementActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AnnouncementManager> GlobalNamespace::AnnouncementManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AnnouncementManager>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::AnnouncementManager::get_AnnouncementDPlayerPref()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"get_AnnouncementDPlayerPref", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AnnouncementManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnouncementManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnouncementManager::OnContinuePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"OnContinuePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnouncementManager::OnError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"OnError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::AnnouncementManager::ConfigureAnnouncement(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {"ConfigureAnnouncement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::AnnouncementManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnnouncementManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnnouncementManager* GlobalNamespace::AnnouncementManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnnouncementManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnnouncementManager::AnnouncementManager()   {
}
