#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TouchscreenState.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState__primaryTouchData_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState__touchData_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState__primaryTouchData_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState__touchData_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xafee754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_Format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_primaryTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::TouchState* (::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xafee784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_primaryTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_touches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::TouchState* (::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafee788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_touches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xafee790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_format", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_primaryTouchData()  {
return this->___primaryTouchData;
}
constexpr ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_primaryTouchData() const {
return this->___primaryTouchData;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_set_primaryTouchData(::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer  value)  {
this->___primaryTouchData = value;
}
constexpr ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_touchData()  {
return this->___touchData;
}
constexpr ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_get_touchData() const {
return this->___touchData;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchscreenState::__cordl_internal_set_touchData(::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer  value)  {
this->___touchData = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_Format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::TouchState* UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_primaryTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::TouchState*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::TouchState* UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_touches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::TouchState*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::TouchscreenState>(),
                        {"get_format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr  UnityEngine::InputSystem::LowLevel::TouchscreenState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::InputSystem::LowLevel::TouchscreenState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "primaryTouchData", ty: "::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "touchData", ty: "::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState::TouchscreenState(::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer  primaryTouchData, ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer  touchData) noexcept  {
this->primaryTouchData = primaryTouchData;
this->touchData = touchData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState::TouchscreenState()   {
}
