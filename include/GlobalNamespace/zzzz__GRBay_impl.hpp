#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBay.hpp"
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRBay_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttle_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBay::*)()>(&::GlobalNamespace::GRBay::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5872704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBay.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBay::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRBay::Setup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58727d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBay.SetOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBay::*)(bool)>(&::GlobalNamespace::GRBay::SetOpen)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x5872bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"SetOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBay.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBay::*)()>(&::GlobalNamespace::GRBay::Refresh)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x58728cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBay::*)()>(&::GlobalNamespace::GRBay::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5873150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRBay::__cordl_internal_get_hideWhenOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideWhenOpen;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRBay::__cordl_internal_get_hideWhenOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideWhenOpen;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_hideWhenOpen(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideWhenOpen = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRBay::__cordl_internal_get_hideWhenClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideWhenClosed;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRBay::__cordl_internal_get_hideWhenClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideWhenClosed;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_hideWhenClosed(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideWhenClosed = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GRBay::__cordl_internal_get_bayDoorAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bayDoorAnimation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GRBay::__cordl_internal_get_bayDoorAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bayDoorAnimation;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_bayDoorAnimation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bayDoorAnimation = value;
}
constexpr bool& GlobalNamespace::GRBay::__cordl_internal_get_isOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr bool const& GlobalNamespace::GRBay::__cordl_internal_get_isOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_isOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOpen = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRBay::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRBay::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRBay::__cordl_internal_get_maxDropText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDropText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRBay::__cordl_internal_get_maxDropText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDropText;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_maxDropText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDropText = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRBay::__cordl_internal_get_showWhenOwned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWhenOwned;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRBay::__cordl_internal_get_showWhenOwned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWhenOwned;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_showWhenOwned(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showWhenOwned = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRBay::__cordl_internal_get_showWhenNotOwned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWhenNotOwned;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRBay::__cordl_internal_get_showWhenNotOwned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWhenNotOwned;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_showWhenNotOwned(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showWhenNotOwned = value;
}
constexpr int32_t& GlobalNamespace::GRBay::__cordl_internal_get_unlockByDrillLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockByDrillLevel;
}
constexpr int32_t const& GlobalNamespace::GRBay::__cordl_internal_get_unlockByDrillLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockByDrillLevel;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_unlockByDrillLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockByDrillLevel = value;
}
constexpr ::GlobalNamespace::GRShuttleGroupLoc& GlobalNamespace::GRBay::__cordl_internal_get_shuttleLoc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleLoc;
}
constexpr ::GlobalNamespace::GRShuttleGroupLoc const& GlobalNamespace::GRBay::__cordl_internal_get_shuttleLoc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleLoc;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_shuttleLoc(::GlobalNamespace::GRShuttleGroupLoc  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleLoc = value;
}
constexpr int32_t& GlobalNamespace::GRBay::__cordl_internal_get_shuttleIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleIndex;
}
constexpr int32_t const& GlobalNamespace::GRBay::__cordl_internal_get_shuttleIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleIndex;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_shuttleIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleIndex = value;
}
constexpr bool& GlobalNamespace::GRBay::__cordl_internal_get_debugForceUnlockedByLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugForceUnlockedByLevel;
}
constexpr bool const& GlobalNamespace::GRBay::__cordl_internal_get_debugForceUnlockedByLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugForceUnlockedByLevel;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_debugForceUnlockedByLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugForceUnlockedByLevel = value;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle>& GlobalNamespace::GRBay::__cordl_internal_get_unlockShuttle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockShuttle;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& GlobalNamespace::GRBay::__cordl_internal_get_unlockShuttle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockShuttle;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_unlockShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockShuttle = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRBay::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRBay::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRBay::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
inline void GlobalNamespace::GRBay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBay::Setup(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline void GlobalNamespace::GRBay::SetOpen(bool  open)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"SetOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, open);
}
inline void GlobalNamespace::GRBay::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBay* GlobalNamespace::GRBay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBay::GRBay()   {
}
