#pragma once
// IWYU pragma private; include "GlobalNamespace/PurchaseCurrencyButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PurchaseCurrencyButton_def.hpp"
#include "GlobalNamespace/zzzz__PurchaseCurrencyButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseCurrencyButton::*)()>(&::GlobalNamespace::PurchaseCurrencyButton::ButtonActivation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57783cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton*>(),
                    {::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton.ButtonColorUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PurchaseCurrencyButton::*)()>(&::GlobalNamespace::PurchaseCurrencyButton::ButtonColorUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5778480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton*>(),
                        {"ButtonColorUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseCurrencyButton::*)()>(&::GlobalNamespace::PurchaseCurrencyButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5778514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PurchaseCurrencyButton::__cordl_internal_get_purchaseCurrencySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseCurrencySize;
}
constexpr ::StringW const& GlobalNamespace::PurchaseCurrencyButton::__cordl_internal_get_purchaseCurrencySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseCurrencySize;
}
constexpr void GlobalNamespace::PurchaseCurrencyButton::__cordl_internal_set_purchaseCurrencySize(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseCurrencySize = value;
}
constexpr float_t& GlobalNamespace::PurchaseCurrencyButton::__cordl_internal_get_buttonFadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFadeTime;
}
constexpr float_t const& GlobalNamespace::PurchaseCurrencyButton::__cordl_internal_get_buttonFadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFadeTime;
}
constexpr void GlobalNamespace::PurchaseCurrencyButton::__cordl_internal_set_buttonFadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonFadeTime = value;
}
inline void GlobalNamespace::PurchaseCurrencyButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PurchaseCurrencyButton::ButtonColorUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton*>(),
                        {"ButtonColorUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseCurrencyButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PurchaseCurrencyButton* GlobalNamespace::PurchaseCurrencyButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PurchaseCurrencyButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PurchaseCurrencyButton::PurchaseCurrencyButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::*)(int32_t)>(&::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57784ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::*)()>(&::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5778524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::*)()>(&::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5778528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::*)()>(&::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5778608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::*)()>(&::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5778610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::*)()>(&::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5778648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::PurchaseCurrencyButton>& GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PurchaseCurrencyButton> const& GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PurchaseCurrencyButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3* GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PurchaseCurrencyButton__ButtonColorUpdate_d__3::PurchaseCurrencyButton__ButtonColorUpdate_d__3()   {
}
