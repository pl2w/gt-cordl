#pragma once
// IWYU pragma private; include "GlobalNamespace/VotingCard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VotingCard_def.hpp"
#include "GlobalNamespace/zzzz__VotingCard_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VotingCard.MoveToOffPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VotingCard::*)()>(&::GlobalNamespace::VotingCard::MoveToOffPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5623e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"MoveToOffPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard.MoveToOnPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VotingCard::*)()>(&::GlobalNamespace::VotingCard::MoveToOnPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5623e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"MoveToOnPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard.SetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VotingCard::*)(bool, bool)>(&::GlobalNamespace::VotingCard::SetVisible)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5623ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard.DoActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::VotingCard::*)()>(&::GlobalNamespace::VotingCard::DoActivate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5623fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"DoActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VotingCard::*)()>(&::GlobalNamespace::VotingCard::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x562405c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VotingCard::__cordl_internal_get__card()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____card;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VotingCard::__cordl_internal_get__card() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____card;
}
constexpr void GlobalNamespace::VotingCard::__cordl_internal_set__card(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____card = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VotingCard::__cordl_internal_get__offPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VotingCard::__cordl_internal_get__offPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offPosition;
}
constexpr void GlobalNamespace::VotingCard::__cordl_internal_set__offPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VotingCard::__cordl_internal_get__onPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VotingCard::__cordl_internal_get__onPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPosition;
}
constexpr void GlobalNamespace::VotingCard::__cordl_internal_set__onPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPosition = value;
}
constexpr float_t& GlobalNamespace::VotingCard::__cordl_internal_get_activationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr float_t const& GlobalNamespace::VotingCard::__cordl_internal_get_activationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr void GlobalNamespace::VotingCard::__cordl_internal_set_activationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationTime = value;
}
constexpr bool& GlobalNamespace::VotingCard::__cordl_internal_get__isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible;
}
constexpr bool const& GlobalNamespace::VotingCard::__cordl_internal_get__isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible;
}
constexpr void GlobalNamespace::VotingCard::__cordl_internal_set__isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVisible = value;
}
inline void GlobalNamespace::VotingCard::MoveToOffPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"MoveToOffPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VotingCard::MoveToOnPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"MoveToOnPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VotingCard::SetVisible(bool  showVote, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showVote, instant);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::VotingCard::DoActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {"DoActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::VotingCard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VotingCard* GlobalNamespace::VotingCard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VotingCard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VotingCard::VotingCard()   {
}
//  Writing Method size for method: ::GlobalNamespace::VotingCard__DoActivate_d__8._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VotingCard__DoActivate_d__8::*)(int32_t)>(&::GlobalNamespace::VotingCard__DoActivate_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5624034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard__DoActivate_d__8.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VotingCard__DoActivate_d__8::*)()>(&::GlobalNamespace::VotingCard__DoActivate_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x562406c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard__DoActivate_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VotingCard__DoActivate_d__8::*)()>(&::GlobalNamespace::VotingCard__DoActivate_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5624070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard__DoActivate_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VotingCard__DoActivate_d__8::*)()>(&::GlobalNamespace::VotingCard__DoActivate_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56241e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard__DoActivate_d__8.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VotingCard__DoActivate_d__8::*)()>(&::GlobalNamespace::VotingCard__DoActivate_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56241f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VotingCard__DoActivate_d__8.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VotingCard__DoActivate_d__8::*)()>(&::GlobalNamespace::VotingCard__DoActivate_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5624228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::VotingCard>& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::VotingCard> const& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VotingCard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get__from_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from_5__2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get__from_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from_5__2;
}
constexpr void GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_set__from_5__2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____from_5__2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get__to_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to_5__3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get__to_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to_5__3;
}
constexpr void GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_set__to_5__3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____to_5__3 = value;
}
constexpr float_t& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get__lerpVal_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpVal_5__4;
}
constexpr float_t const& GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_get__lerpVal_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpVal_5__4;
}
constexpr void GlobalNamespace::VotingCard__DoActivate_d__8::__cordl_internal_set__lerpVal_5__4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpVal_5__4 = value;
}
inline void GlobalNamespace::VotingCard__DoActivate_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::VotingCard__DoActivate_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VotingCard__DoActivate_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VotingCard__DoActivate_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::VotingCard__DoActivate_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VotingCard__DoActivate_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VotingCard__DoActivate_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::VotingCard__DoActivate_d__8* GlobalNamespace::VotingCard__DoActivate_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VotingCard__DoActivate_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::VotingCard__DoActivate_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::VotingCard__DoActivate_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::VotingCard__DoActivate_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::VotingCard__DoActivate_d__8::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::VotingCard__DoActivate_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::VotingCard__DoActivate_d__8::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VotingCard__DoActivate_d__8::VotingCard__DoActivate_d__8()   {
}
