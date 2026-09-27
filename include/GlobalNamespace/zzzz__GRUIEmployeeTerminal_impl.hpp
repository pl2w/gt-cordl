#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIEmployeeTerminal.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRUIEmployeeTerminal_def.hpp"
#include "GlobalNamespace/zzzz__GRUIStationEmployeeBadges_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateUserDataResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)()>(&::GlobalNamespace::GRUIEmployeeTerminal::Setup)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x58d1af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.OnSignup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)()>(&::GlobalNamespace::GRUIEmployeeTerminal::OnSignup)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x58d1e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnSignup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.GetSpawnMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GRUIEmployeeTerminal::*)()>(&::GlobalNamespace::GRUIEmployeeTerminal::GetSpawnMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d20e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)()>(&::GlobalNamespace::GRUIEmployeeTerminal::Refresh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58d1dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.OnGetUserDataInitialState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)(::PlayFab::ClientModels::GetUserDataResult*)>(&::GlobalNamespace::GRUIEmployeeTerminal::OnGetUserDataInitialState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58d20f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnGetUserDataInitialState", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.OnGetUserDataInitialStateFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::GRUIEmployeeTerminal::OnGetUserDataInitialStateFail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d219c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnGetUserDataInitialStateFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.OnSaveTableSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)(::PlayFab::ClientModels::UpdateUserDataResult*)>(&::GlobalNamespace::GRUIEmployeeTerminal::OnSaveTableSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58d21a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnSaveTableSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::UpdateUserDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal.OnSaveTableFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::GRUIEmployeeTerminal::OnSaveTableFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d21b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnSaveTableFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeTerminal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeTerminal::*)()>(&::GlobalNamespace::GRUIEmployeeTerminal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d21b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_signupButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signupButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_signupButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signupButton;
}
constexpr void GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_set_signupButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signupButton = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_signupButtonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signupButtonText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_signupButtonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signupButtonText;
}
constexpr void GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_set_signupButtonText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signupButtonText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_spawnMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_spawnMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMarker;
}
constexpr void GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_set_spawnMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnMarker = value;
}
constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_badgeStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeStation;
}
constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges> const& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_badgeStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeStation;
}
constexpr void GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_set_badgeStation(::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeStation = value;
}
constexpr int32_t& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_entityTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeId;
}
constexpr int32_t const& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_entityTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeId;
}
constexpr void GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_set_entityTypeId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityTypeId = value;
}
constexpr bool& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_isEmployee()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmployee;
}
constexpr bool const& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_isEmployee() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmployee;
}
constexpr void GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_set_isEmployee(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEmployee = value;
}
constexpr bool& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_isSigningUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSigningUp;
}
constexpr bool const& GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_get_isSigningUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSigningUp;
}
constexpr void GlobalNamespace::GRUIEmployeeTerminal::__cordl_internal_set_isSigningUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSigningUp = value;
}
inline void GlobalNamespace::GRUIEmployeeTerminal::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIEmployeeTerminal::OnSignup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnSignup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GRUIEmployeeTerminal::GetSpawnMarker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIEmployeeTerminal::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIEmployeeTerminal::OnGetUserDataInitialState(::PlayFab::ClientModels::GetUserDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnGetUserDataInitialState", {}, {::i2c::type_of<::PlayFab::ClientModels::GetUserDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::GRUIEmployeeTerminal::OnGetUserDataInitialStateFail(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnGetUserDataInitialStateFail", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::GRUIEmployeeTerminal::OnSaveTableSuccess(::PlayFab::ClientModels::UpdateUserDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnSaveTableSuccess", {}, {::i2c::type_of<::PlayFab::ClientModels::UpdateUserDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::GRUIEmployeeTerminal::OnSaveTableFailure(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {"OnSaveTableFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::GRUIEmployeeTerminal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeTerminal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRUIEmployeeTerminal* GlobalNamespace::GRUIEmployeeTerminal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRUIEmployeeTerminal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUIEmployeeTerminal::GRUIEmployeeTerminal()   {
}
