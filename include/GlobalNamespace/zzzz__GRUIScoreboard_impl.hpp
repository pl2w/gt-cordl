#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIScoreboard.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboard_ScoreboardScreen_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboard_def.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboardEntry_def.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboard_ScoreboardScreen_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboard::*)()>(&::GlobalNamespace::GRUIScoreboard::SliceUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58ec680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboard::*)()>(&::GlobalNamespace::GRUIScoreboard::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ec988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboard::*)()>(&::GlobalNamespace::GRUIScoreboard::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ec994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboard::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::GRUIScoreboard::Refresh)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x58ec704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard.SwitchToScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboard::*)(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen)>(&::GlobalNamespace::GRUIScoreboard::SwitchToScreen)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58ec9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"SwitchToScreen", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard.SwitchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboard::*)()>(&::GlobalNamespace::GRUIScoreboard::SwitchState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58eca9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"SwitchState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard.ValidPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen)>(&::GlobalNamespace::GRUIScoreboard::ValidPage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ecb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"ValidPage", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIScoreboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIScoreboard::*)()>(&::GlobalNamespace::GRUIScoreboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ecb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>*& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>* const& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void GlobalNamespace::GRUIScoreboard::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboardEntry>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_total()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___total;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_total() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___total;
}
constexpr void GlobalNamespace::GRUIScoreboard::__cordl_internal_set_total(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___total = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_buttonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_buttonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr void GlobalNamespace::GRUIScoreboard::__cordl_internal_set_buttonText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonText = value;
}
constexpr ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_currentScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreen;
}
constexpr ::GlobalNamespace::GRUIScoreboard_ScoreboardScreen const& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_currentScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreen;
}
constexpr void GlobalNamespace::GRUIScoreboard::__cordl_internal_set_currentScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_infoTextParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoTextParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_infoTextParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoTextParent;
}
constexpr void GlobalNamespace::GRUIScoreboard::__cordl_internal_set_infoTextParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infoTextParent = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_calcTextParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calcTextParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRUIScoreboard::__cordl_internal_get_calcTextParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calcTextParent;
}
constexpr void GlobalNamespace::GRUIScoreboard::__cordl_internal_set_calcTextParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calcTextParent = value;
}
inline void GlobalNamespace::GRUIScoreboard::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIScoreboard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIScoreboard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIScoreboard::Refresh(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  vrRigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRigs);
}
inline void GlobalNamespace::GRUIScoreboard::SwitchToScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screenType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"SwitchToScreen", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenType);
}
inline void GlobalNamespace::GRUIScoreboard::SwitchState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"SwitchState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRUIScoreboard::ValidPage(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  screen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {"ValidPage", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, screen);
}
inline void GlobalNamespace::GRUIScoreboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRUIScoreboard* GlobalNamespace::GRUIScoreboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRUIScoreboard*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GRUIScoreboard::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GRUIScoreboard::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUIScoreboard::GRUIScoreboard()   {
}
