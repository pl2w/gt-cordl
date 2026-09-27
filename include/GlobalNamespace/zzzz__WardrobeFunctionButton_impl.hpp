#pragma once
// IWYU pragma private; include "GlobalNamespace/WardrobeFunctionButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__WardrobeFunctionButton_def.hpp"
#include "GlobalNamespace/zzzz__WardrobeFunctionButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeFunctionButton::*)()>(&::GlobalNamespace::WardrobeFunctionButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57890f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(),
                    {::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeFunctionButton::*)()>(&::GlobalNamespace::WardrobeFunctionButton::UpdateColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57891f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(),
                    {::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton.ButtonColorUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::WardrobeFunctionButton::*)()>(&::GlobalNamespace::WardrobeFunctionButton::ButtonColorUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5789188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(),
                        {"ButtonColorUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeFunctionButton::*)()>(&::GlobalNamespace::WardrobeFunctionButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5789220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::WardrobeFunctionButton::__cordl_internal_get_function()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr ::StringW const& GlobalNamespace::WardrobeFunctionButton::__cordl_internal_get_function() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr void GlobalNamespace::WardrobeFunctionButton::__cordl_internal_set_function(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___function = value;
}
constexpr float_t& GlobalNamespace::WardrobeFunctionButton::__cordl_internal_get_buttonFadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFadeTime;
}
constexpr float_t const& GlobalNamespace::WardrobeFunctionButton::__cordl_internal_get_buttonFadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonFadeTime;
}
constexpr void GlobalNamespace::WardrobeFunctionButton::__cordl_internal_set_buttonFadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonFadeTime = value;
}
inline void GlobalNamespace::WardrobeFunctionButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WardrobeFunctionButton::UpdateColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::WardrobeFunctionButton::ButtonColorUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(),
                        {"ButtonColorUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::WardrobeFunctionButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WardrobeFunctionButton* GlobalNamespace::WardrobeFunctionButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WardrobeFunctionButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WardrobeFunctionButton::WardrobeFunctionButton()   {
}
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::*)(int32_t)>(&::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57891f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::*)()>(&::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5789230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::*)()>(&::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5789234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::*)()>(&::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5789314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::*)()>(&::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x578931c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::*)()>(&::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5789354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::WardrobeFunctionButton>& GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::WardrobeFunctionButton> const& GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::WardrobeFunctionButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4* GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WardrobeFunctionButton__ButtonColorUpdate_d__4::WardrobeFunctionButton__ButtonColorUpdate_d__4()   {
}
