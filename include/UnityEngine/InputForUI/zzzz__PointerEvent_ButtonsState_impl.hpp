#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent_ButtonsState.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_ButtonsState_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PointerEvent_ButtonsState.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerEvent_ButtonsState::*)(::GlobalNamespace::PointerEvent_Button, bool)>(&::GlobalNamespace::PointerEvent_ButtonsState::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb65fbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::PointerEvent_Button>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerEvent_ButtonsState.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PointerEvent_ButtonsState::*)(::GlobalNamespace::PointerEvent_Button)>(&::GlobalNamespace::PointerEvent_ButtonsState::Get)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb65fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::PointerEvent_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerEvent_ButtonsState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerEvent_ButtonsState::*)()>(&::GlobalNamespace::PointerEvent_ButtonsState::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65fbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerEvent_ButtonsState.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PointerEvent_ButtonsState::*)()>(&::GlobalNamespace::PointerEvent_ButtonsState::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb65fbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(),
                    {::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PointerEvent_ButtonsState::Set(::GlobalNamespace::PointerEvent_Button  button, bool  pressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(),
                        {"Set", {}, {::i2c::type_of<::GlobalNamespace::PointerEvent_Button>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, button, pressed);
}
inline bool GlobalNamespace::PointerEvent_ButtonsState::Get(::GlobalNamespace::PointerEvent_Button  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::PointerEvent_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, button);
}
inline void GlobalNamespace::PointerEvent_ButtonsState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::PointerEvent_ButtonsState::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PointerEvent_ButtonsState>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PointerEvent_ButtonsState::PointerEvent_ButtonsState(uint32_t  _state) noexcept  {
this->_state = _state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointerEvent_ButtonsState::PointerEvent_ButtonsState()   {
}
