#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/KeyEvent_ButtonsState.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_ButtonsState__buttons_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_ButtonsState_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_ButtonsState__buttons_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.ShouldBeProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::GlobalNamespace::KeyEvent_ButtonsState::ShouldBeProcessed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb65e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"ShouldBeProcessed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.GetUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KeyEvent_ButtonsState::*)(uint32_t)>(&::GlobalNamespace::KeyEvent_ButtonsState::GetUnchecked)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb65e5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"GetUnchecked", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.SetUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyEvent_ButtonsState::*)(uint32_t)>(&::GlobalNamespace::KeyEvent_ButtonsState::SetUnchecked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb65e5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"SetUnchecked", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.ClearUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyEvent_ButtonsState::*)(uint32_t)>(&::GlobalNamespace::KeyEvent_ButtonsState::ClearUnchecked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb65e5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"ClearUnchecked", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KeyEvent_ButtonsState::*)(::UnityEngine::KeyCode)>(&::GlobalNamespace::KeyEvent_ButtonsState::IsPressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb65e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"IsPressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.GetAllPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* (::GlobalNamespace::KeyEvent_ButtonsState::*)()>(&::GlobalNamespace::KeyEvent_ButtonsState::GetAllPressed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb65e63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"GetAllPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.SetPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyEvent_ButtonsState::*)(::UnityEngine::KeyCode, bool)>(&::GlobalNamespace::KeyEvent_ButtonsState::SetPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb65e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"SetPressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyEvent_ButtonsState::*)()>(&::GlobalNamespace::KeyEvent_ButtonsState::Reset)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb65e72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyEvent_ButtonsState.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::KeyEvent_ButtonsState::*)()>(&::GlobalNamespace::KeyEvent_ButtonsState::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb65e898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                    {::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::KeyEvent_ButtonsState::ShouldBeProcessed(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"ShouldBeProcessed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyCode);
}
inline bool GlobalNamespace::KeyEvent_ButtonsState::GetUnchecked(uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"GetUnchecked", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void GlobalNamespace::KeyEvent_ButtonsState::SetUnchecked(uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"SetUnchecked", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void GlobalNamespace::KeyEvent_ButtonsState::ClearUnchecked(uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"ClearUnchecked", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline bool GlobalNamespace::KeyEvent_ButtonsState::IsPressed(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"IsPressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, keyCode);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* GlobalNamespace::KeyEvent_ButtonsState::GetAllPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"GetAllPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*>(*this, ___internal_method);
}
inline void GlobalNamespace::KeyEvent_ButtonsState::SetPressed(::UnityEngine::KeyCode  keyCode, bool  pressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"SetPressed", {}, {::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyCode, pressed);
}
inline void GlobalNamespace::KeyEvent_ButtonsState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::KeyEvent_ButtonsState::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KeyEvent_ButtonsState>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "buttons", ty: "::GlobalNamespace::ButtonsState_KeyEvent__buttons_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KeyEvent_ButtonsState::KeyEvent_ButtonsState(::GlobalNamespace::ButtonsState_KeyEvent__buttons_e__FixedBuffer  buttons) noexcept  {
this->buttons = buttons;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyEvent_ButtonsState::KeyEvent_ButtonsState()   {
}
