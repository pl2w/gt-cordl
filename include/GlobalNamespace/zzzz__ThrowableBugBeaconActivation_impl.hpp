#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugBeaconActivation.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugBeaconActivation_ActivationMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugBeaconActivation_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugBeaconActivation_ActivationMode_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugBeaconActivation_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugBeacon_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugBeaconActivation::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b33ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugBeaconActivation::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b33f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugBeaconActivation::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b33fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation.SendSignals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ThrowableBugBeaconActivation::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation::SendSignals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b33f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"SendSignals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugBeaconActivation::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b34004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_minCallTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCallTime;
}
constexpr float_t const& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_minCallTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCallTime;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_set_minCallTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minCallTime = value;
}
constexpr float_t& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_maxCallTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCallTime;
}
constexpr float_t const& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_maxCallTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCallTime;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_set_maxCallTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCallTime = value;
}
constexpr uint32_t& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_signalCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signalCount;
}
constexpr uint32_t const& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_signalCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signalCount;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_set_signalCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signalCount = value;
}
constexpr ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode const& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_set_mode(::GlobalNamespace::ThrowableBugBeaconActivation_ActivationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeacon>& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_tbb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tbb;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeacon> const& GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_get_tbb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tbb;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation::__cordl_internal_set_tbb(::UnityW<::GlobalNamespace::ThrowableBugBeacon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tbb = value;
}
inline void GlobalNamespace::ThrowableBugBeaconActivation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugBeaconActivation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugBeaconActivation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ThrowableBugBeaconActivation::SendSignals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {"SendSignals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugBeaconActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ThrowableBugBeaconActivation* GlobalNamespace::ThrowableBugBeaconActivation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThrowableBugBeaconActivation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableBugBeaconActivation::ThrowableBugBeaconActivation()   {
}
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::*)(int32_t)>(&::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b33fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b34018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b3401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b34140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b34148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::*)()>(&::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b34180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation>& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation> const& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ThrowableBugBeaconActivation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr uint32_t& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get__count_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count_5__2;
}
constexpr uint32_t const& GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_get__count_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count_5__2;
}
constexpr void GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::__cordl_internal_set__count_5__2(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count_5__2 = value;
}
inline void GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9* GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableBugBeaconActivation__SendSignals_d__9::ThrowableBugBeaconActivation__SendSignals_d__9()   {
}
