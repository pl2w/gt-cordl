#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/TestRopePerf.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__TestRopePerf_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__TestRopePerf_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaLocomotion::Gameplay::TestRopePerf::*)()>(&::GorillaLocomotion::Gameplay::TestRopePerf::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cf1420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TestRopePerf::*)()>(&::GorillaLocomotion::Gameplay::TestRopePerf::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf14a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_get_ropesOld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropesOld;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_get_ropesOld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropesOld;
}
constexpr void GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_set_ropesOld(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropesOld = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_get_ropesCustom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropesCustom;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_get_ropesCustom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropesCustom;
}
constexpr void GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_set_ropesCustom(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropesCustom = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_get_ropesCustomVectorized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropesCustomVectorized;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_get_ropesCustomVectorized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropesCustomVectorized;
}
constexpr void GorillaLocomotion::Gameplay::TestRopePerf::__cordl_internal_set_ropesCustomVectorized(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropesCustomVectorized = value;
}
inline ::System::Collections::IEnumerator* GorillaLocomotion::Gameplay::TestRopePerf::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TestRopePerf::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::TestRopePerf* GorillaLocomotion::Gameplay::TestRopePerf::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::TestRopePerf*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::TestRopePerf::TestRopePerf()   {
}
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::*)(int32_t)>(&::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cf1478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::*)()>(&::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cf14a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::*)()>(&::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cf14ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::*)()>(&::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf14c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::*)()>(&::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cf14cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::*)()>(&::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf1504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3* GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::TestRopePerf__Start_d__3::TestRopePerf__Start_d__3()   {
}
