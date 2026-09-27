#pragma once
// IWYU pragma private; include "GameObjectScheduling/DeepLinks/DeepLinkButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GameObjectScheduling/DeepLinks/zzzz__DeepLinkButton_def.hpp"
#include "GameObjectScheduling/DeepLinks/zzzz__DeepLinkButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::DeepLinks::DeepLinkButton::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton::ButtonActivation)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5de0e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(),
                    {::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton.OnDeepLinkSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::DeepLinks::DeepLinkButton::*)(::StringW)>(&::GameObjectScheduling::DeepLinks::DeepLinkButton::OnDeepLinkSent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5de0f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(),
                        {"OnDeepLinkSent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton.ButtonPressed_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GameObjectScheduling::DeepLinks::DeepLinkButton::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton::ButtonPressed_Local)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5de0ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(),
                        {"ButtonPressed_Local", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::DeepLinks::DeepLinkButton::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5de0f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_deepLinkAppID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deepLinkAppID;
}
constexpr uint64_t const& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_deepLinkAppID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deepLinkAppID;
}
constexpr void GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_set_deepLinkAppID(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deepLinkAppID = value;
}
constexpr ::StringW& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_deepLinkPayload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deepLinkPayload;
}
constexpr ::StringW const& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_deepLinkPayload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deepLinkPayload;
}
constexpr void GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_set_deepLinkPayload(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deepLinkPayload = value;
}
constexpr float_t& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_pressedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedTime;
}
constexpr float_t const& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_pressedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedTime;
}
constexpr void GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_set_pressedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressedTime = value;
}
constexpr bool& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_sendingDeepLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendingDeepLink;
}
constexpr bool const& GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_get_sendingDeepLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendingDeepLink;
}
constexpr void GameObjectScheduling::DeepLinks::DeepLinkButton::__cordl_internal_set_sendingDeepLink(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendingDeepLink = value;
}
inline void GameObjectScheduling::DeepLinks::DeepLinkButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::DeepLinks::DeepLinkButton::OnDeepLinkSent(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(),
                        {"OnDeepLinkSent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Collections::IEnumerator* GameObjectScheduling::DeepLinks::DeepLinkButton::ButtonPressed_Local()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(),
                        {"ButtonPressed_Local", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GameObjectScheduling::DeepLinks::DeepLinkButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::DeepLinks::DeepLinkButton* GameObjectScheduling::DeepLinks::DeepLinkButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::DeepLinks::DeepLinkButton*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::DeepLinks::DeepLinkButton::DeepLinkButton()   {
}
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::*)(int32_t)>(&::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5de0f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5de0ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::MoveNext)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5de0ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de10ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5de10f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::*)()>(&::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5de112c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GameObjectScheduling::DeepLinks::DeepLinkButton>& GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GameObjectScheduling::DeepLinks::DeepLinkButton> const& GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::__cordl_internal_set___4__this(::UnityW<::GameObjectScheduling::DeepLinks::DeepLinkButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6* GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::DeepLinks::DeepLinkButton__ButtonPressed_Local_d__6::DeepLinkButton__ButtonPressed_Local_d__6()   {
}
