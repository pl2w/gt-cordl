#pragma once
// IWYU pragma private; include "GlobalNamespace/Gorillanalytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Gorillanalytics_def.hpp"
#include "GlobalNamespace/zzzz__Gorillanalytics_def.hpp"
#include "GorillaGameModes/zzzz__GameModeZoneMapping_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__PhotonNetworkController_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::Gorillanalytics::*)()>(&::GlobalNamespace::Gorillanalytics::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x591a87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics.UploadGorillanalytics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics::*)()>(&::GlobalNamespace::Gorillanalytics::UploadGorillanalytics)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x591a8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"UploadGorillanalytics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics.GetMapModeQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics::*)(::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::GlobalNamespace::Gorillanalytics::GetMapModeQueue)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x591af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"GetMapModeQueue", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics::*)()>(&::GlobalNamespace::Gorillanalytics::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x591b324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics._Start_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics::*)(::StringW)>(&::GlobalNamespace::Gorillanalytics::_Start_b__7_0)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x591b3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"<Start>b__7_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::Gorillanalytics::__cordl_internal_get_interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr float_t const& GlobalNamespace::Gorillanalytics::__cordl_internal_get_interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr void GlobalNamespace::Gorillanalytics::__cordl_internal_set_interval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interval = value;
}
constexpr double_t& GlobalNamespace::Gorillanalytics::__cordl_internal_get_oneOverChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneOverChance;
}
constexpr double_t const& GlobalNamespace::Gorillanalytics::__cordl_internal_get_oneOverChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneOverChance;
}
constexpr void GlobalNamespace::Gorillanalytics::__cordl_internal_set_oneOverChance(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneOverChance = value;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& GlobalNamespace::Gorillanalytics::__cordl_internal_get_photonNetworkController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& GlobalNamespace::Gorillanalytics::__cordl_internal_get_photonNetworkController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonNetworkController;
}
constexpr void GlobalNamespace::Gorillanalytics::__cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonNetworkController = value;
}
constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping>& GlobalNamespace::Gorillanalytics::__cordl_internal_get_gameModeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeData;
}
constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping> const& GlobalNamespace::Gorillanalytics::__cordl_internal_get_gameModeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeData;
}
constexpr void GlobalNamespace::Gorillanalytics::__cordl_internal_set_gameModeData(::UnityW<::GorillaGameModes::GameModeZoneMapping>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeData = value;
}
constexpr ::GlobalNamespace::Gorillanalytics_UploadData*& GlobalNamespace::Gorillanalytics::__cordl_internal_get_uploadData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uploadData;
}
constexpr ::GlobalNamespace::Gorillanalytics_UploadData* const& GlobalNamespace::Gorillanalytics::__cordl_internal_get_uploadData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uploadData;
}
constexpr void GlobalNamespace::Gorillanalytics::__cordl_internal_set_uploadData(::GlobalNamespace::Gorillanalytics_UploadData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uploadData = value;
}
inline ::System::Collections::IEnumerator* GlobalNamespace::Gorillanalytics::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::Gorillanalytics::UploadGorillanalytics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"UploadGorillanalytics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Gorillanalytics::GetMapModeQueue(::by_ref<::StringW>  map, ::by_ref<::StringW>  mode, ::by_ref<::StringW>  queue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"GetMapModeQueue", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, mode, queue);
}
inline void GlobalNamespace::Gorillanalytics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Gorillanalytics::_Start_b__7_0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics*>(),
                        {"<Start>b__7_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::GlobalNamespace::Gorillanalytics* GlobalNamespace::Gorillanalytics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Gorillanalytics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Gorillanalytics::Gorillanalytics()   {
}
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics__Start_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics__Start_d__7::*)(int32_t)>(&::GlobalNamespace::Gorillanalytics__Start_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x591b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics__Start_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics__Start_d__7::*)()>(&::GlobalNamespace::Gorillanalytics__Start_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591b678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics__Start_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Gorillanalytics__Start_d__7::*)()>(&::GlobalNamespace::Gorillanalytics__Start_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x591b67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics__Start_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Gorillanalytics__Start_d__7::*)()>(&::GlobalNamespace::Gorillanalytics__Start_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics__Start_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics__Start_d__7::*)()>(&::GlobalNamespace::Gorillanalytics__Start_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x591b90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics__Start_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::Gorillanalytics__Start_d__7::*)()>(&::GlobalNamespace::Gorillanalytics__Start_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::Gorillanalytics>& GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::Gorillanalytics> const& GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::Gorillanalytics__Start_d__7::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Gorillanalytics>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::Gorillanalytics__Start_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::Gorillanalytics__Start_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Gorillanalytics__Start_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::Gorillanalytics__Start_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::Gorillanalytics__Start_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::Gorillanalytics__Start_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics__Start_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::Gorillanalytics__Start_d__7* GlobalNamespace::Gorillanalytics__Start_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Gorillanalytics__Start_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::Gorillanalytics__Start_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::Gorillanalytics__Start_d__7::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::Gorillanalytics__Start_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::Gorillanalytics__Start_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::Gorillanalytics__Start_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::Gorillanalytics__Start_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Gorillanalytics__Start_d__7::Gorillanalytics__Start_d__7()   {
}
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics___c::*)()>(&::GlobalNamespace::Gorillanalytics___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics___c._Start_b__7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::Gorillanalytics___c::_Start_b__7_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591b63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {"<Start>b__7_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics___c._UploadGorillanalytics_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Gorillanalytics___c::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GlobalNamespace::Gorillanalytics___c::_UploadGorillanalytics_b__8_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {"<UploadGorillanalytics>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics___c._UploadGorillanalytics_b__8_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Gorillanalytics___c::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GlobalNamespace::Gorillanalytics___c::_UploadGorillanalytics_b__8_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {"<UploadGorillanalytics>b__8_1", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Gorillanalytics___c::setStaticF___9(::GlobalNamespace::Gorillanalytics___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Gorillanalytics___c*, "<>9", ::GlobalNamespace::Gorillanalytics___c*>(std::forward<::GlobalNamespace::Gorillanalytics___c*>(value));
}
inline ::GlobalNamespace::Gorillanalytics___c* GlobalNamespace::Gorillanalytics___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Gorillanalytics___c*, "<>9", ::GlobalNamespace::Gorillanalytics___c*>();
}
inline void GlobalNamespace::Gorillanalytics___c::setStaticF___9__7_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__7_1", ::GlobalNamespace::Gorillanalytics___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::Gorillanalytics___c::getStaticF___9__7_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__7_1", ::GlobalNamespace::Gorillanalytics___c*>();
}
inline void GlobalNamespace::Gorillanalytics___c::setStaticF___9__8_0(::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*, "<>9__8_0", ::GlobalNamespace::Gorillanalytics___c*>(std::forward<::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>* GlobalNamespace::Gorillanalytics___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*, "<>9__8_0", ::GlobalNamespace::Gorillanalytics___c*>();
}
inline void GlobalNamespace::Gorillanalytics___c::setStaticF___9__8_1(::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*, "<>9__8_1", ::GlobalNamespace::Gorillanalytics___c*>(std::forward<::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>* GlobalNamespace::Gorillanalytics___c::getStaticF___9__8_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::CosmeticsController_CosmeticItem,::StringW>*, "<>9__8_1", ::GlobalNamespace::Gorillanalytics___c*>();
}
inline void GlobalNamespace::Gorillanalytics___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Gorillanalytics___c::_Start_b__7_1(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {"<Start>b__7_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::StringW GlobalNamespace::Gorillanalytics___c::_UploadGorillanalytics_b__8_0(::GlobalNamespace::CosmeticsController_CosmeticItem  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {"<UploadGorillanalytics>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, c);
}
inline ::StringW GlobalNamespace::Gorillanalytics___c::_UploadGorillanalytics_b__8_1(::GlobalNamespace::CosmeticsController_CosmeticItem  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics___c*>(),
                        {"<UploadGorillanalytics>b__8_1", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, c);
}
inline ::GlobalNamespace::Gorillanalytics___c* GlobalNamespace::Gorillanalytics___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Gorillanalytics___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Gorillanalytics___c::Gorillanalytics___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::Gorillanalytics_UploadData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Gorillanalytics_UploadData::*)()>(&::GlobalNamespace::Gorillanalytics_UploadData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591b5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics_UploadData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr ::StringW const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr double_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_upload_chance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upload_chance;
}
constexpr double_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_upload_chance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upload_chance;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_upload_chance(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upload_chance = value;
}
constexpr ::StringW& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr ::StringW const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_map(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___map = value;
}
constexpr ::StringW& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::StringW const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_mode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::StringW& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::StringW const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_queue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
constexpr int32_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_player_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player_count;
}
constexpr int32_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_player_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player_count;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_player_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player_count = value;
}
constexpr float_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_pos_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos_x;
}
constexpr float_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_pos_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos_x;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_pos_x(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos_x = value;
}
constexpr float_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_pos_y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos_y;
}
constexpr float_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_pos_y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos_y;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_pos_y(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos_y = value;
}
constexpr float_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_pos_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos_z;
}
constexpr float_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_pos_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos_z;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_pos_z(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos_z = value;
}
constexpr float_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_vel_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vel_x;
}
constexpr float_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_vel_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vel_x;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_vel_x(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vel_x = value;
}
constexpr float_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_vel_y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vel_y;
}
constexpr float_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_vel_y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vel_y;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_vel_y(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vel_y = value;
}
constexpr float_t& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_vel_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vel_z;
}
constexpr float_t const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_vel_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vel_z;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_vel_z(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vel_z = value;
}
constexpr ::StringW& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_cosmetics_owned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics_owned;
}
constexpr ::StringW const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_cosmetics_owned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics_owned;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_cosmetics_owned(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmetics_owned = value;
}
constexpr ::StringW& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_cosmetics_worn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics_worn;
}
constexpr ::StringW const& GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_get_cosmetics_worn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics_worn;
}
constexpr void GlobalNamespace::Gorillanalytics_UploadData::__cordl_internal_set_cosmetics_worn(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmetics_worn = value;
}
inline void GlobalNamespace::Gorillanalytics_UploadData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Gorillanalytics_UploadData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Gorillanalytics_UploadData* GlobalNamespace::Gorillanalytics_UploadData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Gorillanalytics_UploadData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Gorillanalytics_UploadData::Gorillanalytics_UploadData()   {
}
