#pragma once
// IWYU pragma private; include "GlobalNamespace/ChestHeartbeat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ChestHeartbeat_def.hpp"
#include "GlobalNamespace/zzzz__ChestHeartbeat_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestHeartbeat::*)()>(&::GlobalNamespace::ChestHeartbeat::Update)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x57e78d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat.HeartBeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ChestHeartbeat::*)()>(&::GlobalNamespace::ChestHeartbeat::HeartBeat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57e7b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat*>(),
                        {"HeartBeat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestHeartbeat::*)()>(&::GlobalNamespace::ChestHeartbeat::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57e7b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_millisToWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___millisToWait;
}
constexpr int32_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_millisToWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___millisToWait;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_millisToWait(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___millisToWait = value;
}
constexpr int32_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_millisMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___millisMin;
}
constexpr int32_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_millisMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___millisMin;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_millisMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___millisMin = value;
}
constexpr int32_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_lastShot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShot;
}
constexpr int32_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_lastShot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShot;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_lastShot(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastShot = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_scaleTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_scaleTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTransform;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_scaleTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleTransform = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_heartMinSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heartMinSize;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_heartMinSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heartMinSize;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_heartMinSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heartMinSize = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_heartMaxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heartMaxSize;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_heartMaxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heartMaxSize;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_heartMaxSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heartMaxSize = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_minTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTime;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_minTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTime;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_minTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTime = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_maxTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTime;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_maxTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTime;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_maxTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTime = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_endtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endtime;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_endtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endtime;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_endtime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endtime = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat::__cordl_internal_get_currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr void GlobalNamespace::ChestHeartbeat::__cordl_internal_set_currentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTime = value;
}
inline void GlobalNamespace::ChestHeartbeat::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ChestHeartbeat::HeartBeat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat*>(),
                        {"HeartBeat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::ChestHeartbeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChestHeartbeat* GlobalNamespace::ChestHeartbeat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChestHeartbeat*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChestHeartbeat::ChestHeartbeat()   {
}
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::*)(int32_t)>(&::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57e7b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::*)()>(&::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e7bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::*)()>(&::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x57e7bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::*)()>(&::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::*)()>(&::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57e7ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::*)()>(&::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ChestHeartbeat>& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ChestHeartbeat> const& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ChestHeartbeat>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
inline void GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13* GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChestHeartbeat__HeartBeat_d__13::ChestHeartbeat__HeartBeat_d__13()   {
}
