#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsLoadRoomMapButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsLoadRoomMapButton_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsLoadRoomMapButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsLoadRoomMapButton::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton::ButtonActivation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59a9258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton.ButtonPressed_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CustomMapsLoadRoomMapButton::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton::ButtonPressed_Local)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59a92f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton*>(),
                        {"ButtonPressed_Local", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsLoadRoomMapButton::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59a938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CustomMapsLoadRoomMapButton::__cordl_internal_get_pressedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedTime;
}
constexpr float_t const& GlobalNamespace::CustomMapsLoadRoomMapButton::__cordl_internal_get_pressedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedTime;
}
constexpr void GlobalNamespace::CustomMapsLoadRoomMapButton::__cordl_internal_set_pressedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressedTime = value;
}
inline void GlobalNamespace::CustomMapsLoadRoomMapButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CustomMapsLoadRoomMapButton::ButtonPressed_Local()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton*>(),
                        {"ButtonPressed_Local", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsLoadRoomMapButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsLoadRoomMapButton* GlobalNamespace::CustomMapsLoadRoomMapButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsLoadRoomMapButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsLoadRoomMapButton::CustomMapsLoadRoomMapButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::*)(int32_t)>(&::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59a9364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a93a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59a93a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a948c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59a9494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::*)()>(&::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsLoadRoomMapButton>& GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsLoadRoomMapButton> const& GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CustomMapsLoadRoomMapButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2* GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2::CustomMapsLoadRoomMapButton__ButtonPressed_Local_d__2()   {
}
