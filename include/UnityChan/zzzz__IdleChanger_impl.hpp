#pragma once
// IWYU pragma private; include "UnityChan/IdleChanger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityChan/zzzz__IdleChanger_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityChan/zzzz__IdleChanger_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Keyboard_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::UnityChan::IdleChanger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityChan::IdleChanger::*)()>(&::UnityChan::IdleChanger::Start)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e0fc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityChan::IdleChanger::*)()>(&::UnityChan::IdleChanger::Update)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5e0fd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityChan::IdleChanger::*)()>(&::UnityChan::IdleChanger::OnGUI)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5e0ffbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger.RandomChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityChan::IdleChanger::*)()>(&::UnityChan::IdleChanger::RandomChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e1018c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"RandomChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityChan::IdleChanger::*)()>(&::UnityChan::IdleChanger::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e10220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimatorStateInfo& UnityChan::IdleChanger::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::UnityEngine::AnimatorStateInfo const& UnityChan::IdleChanger::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set_currentState(::UnityEngine::AnimatorStateInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityEngine::AnimatorStateInfo& UnityChan::IdleChanger::__cordl_internal_get_previousState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr ::UnityEngine::AnimatorStateInfo const& UnityChan::IdleChanger::__cordl_internal_get_previousState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set_previousState(::UnityEngine::AnimatorStateInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousState = value;
}
constexpr bool& UnityChan::IdleChanger::__cordl_internal_get__random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr bool const& UnityChan::IdleChanger::__cordl_internal_get__random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set__random(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____random = value;
}
constexpr float_t& UnityChan::IdleChanger::__cordl_internal_get__threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr float_t const& UnityChan::IdleChanger::__cordl_internal_get__threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set__threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold = value;
}
constexpr float_t& UnityChan::IdleChanger::__cordl_internal_get__interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interval;
}
constexpr float_t const& UnityChan::IdleChanger::__cordl_internal_get__interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interval;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set__interval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interval = value;
}
constexpr bool& UnityChan::IdleChanger::__cordl_internal_get_isGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGUI;
}
constexpr bool const& UnityChan::IdleChanger::__cordl_internal_get_isGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGUI;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set_isGUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGUI = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& UnityChan::IdleChanger::__cordl_internal_get_UnityChanA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityChanA;
}
constexpr ::UnityW<::UnityEngine::Animator> const& UnityChan::IdleChanger::__cordl_internal_get_UnityChanA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityChanA;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set_UnityChanA(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnityChanA = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& UnityChan::IdleChanger::__cordl_internal_get_UnityChanB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityChanB;
}
constexpr ::UnityW<::UnityEngine::Animator> const& UnityChan::IdleChanger::__cordl_internal_get_UnityChanB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnityChanB;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set_UnityChanB(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnityChanB = value;
}
constexpr ::UnityEngine::InputSystem::Keyboard*& UnityChan::IdleChanger::__cordl_internal_get_kb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kb;
}
constexpr ::UnityEngine::InputSystem::Keyboard* const& UnityChan::IdleChanger::__cordl_internal_get_kb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kb;
}
constexpr void UnityChan::IdleChanger::__cordl_internal_set_kb(::UnityEngine::InputSystem::Keyboard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kb = value;
}
inline void UnityChan::IdleChanger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityChan::IdleChanger::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityChan::IdleChanger::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityChan::IdleChanger::RandomChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {"RandomChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityChan::IdleChanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityChan::IdleChanger* UnityChan::IdleChanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityChan::IdleChanger*>());
}
// Ctor Parameters []
constexpr ::UnityChan::IdleChanger::IdleChanger()   {
}
//  Writing Method size for method: ::UnityChan::IdleChanger__RandomChange_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityChan::IdleChanger__RandomChange_d__12::*)(int32_t)>(&::UnityChan::IdleChanger__RandomChange_d__12::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e101f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger__RandomChange_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityChan::IdleChanger__RandomChange_d__12::*)()>(&::UnityChan::IdleChanger__RandomChange_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1023c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger__RandomChange_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityChan::IdleChanger__RandomChange_d__12::*)()>(&::UnityChan::IdleChanger__RandomChange_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e10240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger__RandomChange_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityChan::IdleChanger__RandomChange_d__12::*)()>(&::UnityChan::IdleChanger__RandomChange_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e10378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger__RandomChange_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityChan::IdleChanger__RandomChange_d__12::*)()>(&::UnityChan::IdleChanger__RandomChange_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e10380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityChan::IdleChanger__RandomChange_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityChan::IdleChanger__RandomChange_d__12::*)()>(&::UnityChan::IdleChanger__RandomChange_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e103b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityChan::IdleChanger>& UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityChan::IdleChanger> const& UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityChan::IdleChanger__RandomChange_d__12::__cordl_internal_set___4__this(::UnityW<::UnityChan::IdleChanger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void UnityChan::IdleChanger__RandomChange_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityChan::IdleChanger__RandomChange_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityChan::IdleChanger__RandomChange_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityChan::IdleChanger__RandomChange_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityChan::IdleChanger__RandomChange_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityChan::IdleChanger__RandomChange_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityChan::IdleChanger__RandomChange_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityChan::IdleChanger__RandomChange_d__12* UnityChan::IdleChanger__RandomChange_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityChan::IdleChanger__RandomChange_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityChan::IdleChanger__RandomChange_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityChan::IdleChanger__RandomChange_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityChan::IdleChanger__RandomChange_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityChan::IdleChanger__RandomChange_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityChan::IdleChanger__RandomChange_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityChan::IdleChanger__RandomChange_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityChan::IdleChanger__RandomChange_d__12::IdleChanger__RandomChange_d__12()   {
}
