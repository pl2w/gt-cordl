#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyGameModeWarning.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PartyGameModeWarning_def.hpp"
#include "GlobalNamespace/zzzz__PartyGameModeWarning_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning.get_ShouldShowWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PartyGameModeWarning::*)()>(&::GlobalNamespace::PartyGameModeWarning::get_ShouldShowWarning)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x567cdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"get_ShouldShowWarning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyGameModeWarning::*)()>(&::GlobalNamespace::PartyGameModeWarning::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x567cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyGameModeWarning::*)()>(&::GlobalNamespace::PartyGameModeWarning::Show)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x567cf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"Show", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning.HideCo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PartyGameModeWarning::*)()>(&::GlobalNamespace::PartyGameModeWarning::HideCo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x567cf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"HideCo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyGameModeWarning::*)()>(&::GlobalNamespace::PartyGameModeWarning::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_showParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_showParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showParts;
}
constexpr void GlobalNamespace::PartyGameModeWarning::__cordl_internal_set_showParts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showParts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_hideParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideParts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_hideParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideParts;
}
constexpr void GlobalNamespace::PartyGameModeWarning::__cordl_internal_set_hideParts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideParts = value;
}
constexpr float_t& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_visibleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleDuration;
}
constexpr float_t const& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_visibleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleDuration;
}
constexpr void GlobalNamespace::PartyGameModeWarning::__cordl_internal_set_visibleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleDuration = value;
}
constexpr float_t& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_visibleUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_visibleUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleUntilTimestamp;
}
constexpr void GlobalNamespace::PartyGameModeWarning::__cordl_internal_set_visibleUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleUntilTimestamp = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_hideCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::PartyGameModeWarning::__cordl_internal_get_hideCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideCoroutine;
}
constexpr void GlobalNamespace::PartyGameModeWarning::__cordl_internal_set_hideCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideCoroutine = value;
}
inline bool GlobalNamespace::PartyGameModeWarning::get_ShouldShowWarning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"get_ShouldShowWarning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PartyGameModeWarning::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PartyGameModeWarning::Show()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"Show", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PartyGameModeWarning::HideCo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {"HideCo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PartyGameModeWarning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PartyGameModeWarning* GlobalNamespace::PartyGameModeWarning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PartyGameModeWarning*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyGameModeWarning::PartyGameModeWarning()   {
}
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::*)(int32_t)>(&::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x567cff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::*)()>(&::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x567d028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::*)()>(&::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x567d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::*)()>(&::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::*)()>(&::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x567d248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::*)()>(&::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567d280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning>& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning> const& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyGameModeWarning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get__lastVisible_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastVisible_5__2;
}
constexpr float_t const& GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_get__lastVisible_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastVisible_5__2;
}
constexpr void GlobalNamespace::PartyGameModeWarning__HideCo_d__9::__cordl_internal_set__lastVisible_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastVisible_5__2 = value;
}
inline void GlobalNamespace::PartyGameModeWarning__HideCo_d__9::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PartyGameModeWarning__HideCo_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PartyGameModeWarning__HideCo_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9* GlobalNamespace::PartyGameModeWarning__HideCo_d__9::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PartyGameModeWarning__HideCo_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::PartyGameModeWarning__HideCo_d__9::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::PartyGameModeWarning__HideCo_d__9::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PartyGameModeWarning__HideCo_d__9::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PartyGameModeWarning__HideCo_d__9::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PartyGameModeWarning__HideCo_d__9::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PartyGameModeWarning__HideCo_d__9::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyGameModeWarning__HideCo_d__9::PartyGameModeWarning__HideCo_d__9()   {
}
