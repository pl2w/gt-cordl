#pragma once
// IWYU pragma private; include "GlobalNamespace/TryOnPurchaseButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TryOnPurchaseButton_def.hpp"
#include "GlobalNamespace/zzzz__TryOnPurchaseButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton::*)()>(&::GlobalNamespace::TryOnPurchaseButton::Update)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x578295c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton::*)()>(&::GlobalNamespace::TryOnPurchaseButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5782ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                    {::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton.AlreadyOwn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton::*)()>(&::GlobalNamespace::TryOnPurchaseButton::AlreadyOwn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57820b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"AlreadyOwn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton.ResetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton::*)()>(&::GlobalNamespace::TryOnPurchaseButton::ResetButton)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5781410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"ResetButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton.ButtonColorUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::TryOnPurchaseButton::*)()>(&::GlobalNamespace::TryOnPurchaseButton::ButtonColorUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5782b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"ButtonColorUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton.ErrorHappened
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton::*)()>(&::GlobalNamespace::TryOnPurchaseButton::ErrorHappened)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57822d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"ErrorHappened", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton::*)()>(&::GlobalNamespace::TryOnPurchaseButton::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5782be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TryOnPurchaseButton::__cordl_internal_get_bError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bError;
}
constexpr bool const& GlobalNamespace::TryOnPurchaseButton::__cordl_internal_get_bError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bError;
}
constexpr void GlobalNamespace::TryOnPurchaseButton::__cordl_internal_set_bError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bError = value;
}
constexpr ::StringW& GlobalNamespace::TryOnPurchaseButton::__cordl_internal_get_ErrorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorText;
}
constexpr ::StringW const& GlobalNamespace::TryOnPurchaseButton::__cordl_internal_get_ErrorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorText;
}
constexpr void GlobalNamespace::TryOnPurchaseButton::__cordl_internal_set_ErrorText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorText = value;
}
constexpr ::StringW& GlobalNamespace::TryOnPurchaseButton::__cordl_internal_get_AlreadyOwnText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlreadyOwnText;
}
constexpr ::StringW const& GlobalNamespace::TryOnPurchaseButton::__cordl_internal_get_AlreadyOwnText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlreadyOwnText;
}
constexpr void GlobalNamespace::TryOnPurchaseButton::__cordl_internal_set_AlreadyOwnText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AlreadyOwnText = value;
}
inline void GlobalNamespace::TryOnPurchaseButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnPurchaseButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnPurchaseButton::AlreadyOwn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"AlreadyOwn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnPurchaseButton::ResetButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"ResetButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::TryOnPurchaseButton::ButtonColorUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"ButtonColorUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnPurchaseButton::ErrorHappened()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {"ErrorHappened", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnPurchaseButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TryOnPurchaseButton* GlobalNamespace::TryOnPurchaseButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TryOnPurchaseButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TryOnPurchaseButton::TryOnPurchaseButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::*)(int32_t)>(&::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5782bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::*)()>(&::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5782c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::*)()>(&::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::MoveNext)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5782c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::*)()>(&::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5782d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::*)()>(&::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5782d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::*)()>(&::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5782d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton>& GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton> const& GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TryOnPurchaseButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7* GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TryOnPurchaseButton__ButtonColorUpdate_d__7::TryOnPurchaseButton__ButtonColorUpdate_d__7()   {
}
