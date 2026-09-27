#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleKeyboard.hpp"
#include "GlobalNamespace/zzzz__ObservableBehavior_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_def.hpp"
#include "GlobalNamespace/zzzz__TypingTarget_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ac2c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.UnityOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::UnityOnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ac2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.buttonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)(::GlobalNamespace::SimpleKeyboardButton*, bool)>(&::GlobalNamespace::SimpleKeyboard::buttonPress)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5ac2e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {"buttonPress", {}, {::i2c::type_of<::GlobalNamespace::SimpleKeyboardButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.UnityOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::UnityOnDisable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ac308c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.OnLostObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::OnLostObservable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ac31b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.OnBecameObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::OnBecameObservable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ac327c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.ObservableSliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::ObservableSliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac3348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::LateUpdate)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5ac334c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleKeyboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleKeyboard::*)()>(&::GlobalNamespace::SimpleKeyboard::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ac34e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SimpleKeyboardButton>& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_lastButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastButton;
}
constexpr ::UnityW<::GlobalNamespace::SimpleKeyboardButton> const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_lastButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastButton;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_lastButton(::UnityW<::GlobalNamespace::SimpleKeyboardButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastButton = value;
}
constexpr float_t& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_pressTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
constexpr float_t const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_pressTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_pressTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressTime = value;
}
constexpr float_t& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr float_t const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDown = value;
}
constexpr ::UnityW<::GlobalNamespace::TypingTarget>& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_typingTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typingTarget;
}
constexpr ::UnityW<::GlobalNamespace::TypingTarget> const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_typingTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typingTarget;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_typingTarget(::UnityW<::GlobalNamespace::TypingTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typingTarget = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>>& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>> const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::SimpleKeyboardButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
constexpr int32_t& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_audioClipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClipIndex;
}
constexpr int32_t const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_audioClipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClipIndex;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_audioClipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClipIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>*& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_btnPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___btnPos;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>* const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_btnPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___btnPos;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_btnPos(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SimpleKeyboardButton>,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___btnPos = value;
}
constexpr float_t& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_keyTravel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyTravel;
}
constexpr float_t const& GlobalNamespace::SimpleKeyboard::__cordl_internal_get_keyTravel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyTravel;
}
constexpr void GlobalNamespace::SimpleKeyboard::__cordl_internal_set_keyTravel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyTravel = value;
}
inline void GlobalNamespace::SimpleKeyboard::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboard::UnityOnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboard::buttonPress(::GlobalNamespace::SimpleKeyboardButton*  b, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {"buttonPress", {}, {::i2c::type_of<::GlobalNamespace::SimpleKeyboardButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, isLeft);
}
inline void GlobalNamespace::SimpleKeyboard::UnityOnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboard::OnLostObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboard::OnBecameObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboard::ObservableSliceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboard::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleKeyboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleKeyboard* GlobalNamespace::SimpleKeyboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleKeyboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleKeyboard::SimpleKeyboard()   {
}
