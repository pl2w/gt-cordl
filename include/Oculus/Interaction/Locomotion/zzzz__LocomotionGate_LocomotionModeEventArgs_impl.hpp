#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionGate_LocomotionModeEventArgs.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionMode_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionModeEventArgs_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs.get_PreviousMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocomotionGate_LocomotionMode (::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::*)()>(&::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::get_PreviousMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c95b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>(),
                        {"get_PreviousMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs.get_NewMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocomotionGate_LocomotionMode (::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::*)()>(&::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::get_NewMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c95bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>(),
                        {"get_NewMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::*)(::GlobalNamespace::LocomotionGate_LocomotionMode, ::GlobalNamespace::LocomotionGate_LocomotionMode)>(&::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionMode>(), ::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionMode>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LocomotionGate_LocomotionMode GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::get_PreviousMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>(),
                        {"get_PreviousMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocomotionGate_LocomotionMode>(*this, ___internal_method);
}
inline ::GlobalNamespace::LocomotionGate_LocomotionMode GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::get_NewMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>(),
                        {"get_NewMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocomotionGate_LocomotionMode>(*this, ___internal_method);
}
inline void GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::_ctor(::GlobalNamespace::LocomotionGate_LocomotionMode  previousMode, ::GlobalNamespace::LocomotionGate_LocomotionMode  newMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionMode>(), ::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, previousMode, newMode);
}
// Ctor Parameters [CppParam { name: "_PreviousMode_k__BackingField", ty: "::GlobalNamespace::LocomotionGate_LocomotionMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_NewMode_k__BackingField", ty: "::GlobalNamespace::LocomotionGate_LocomotionMode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::LocomotionGate_LocomotionModeEventArgs(::GlobalNamespace::LocomotionGate_LocomotionMode  _PreviousMode_k__BackingField, ::GlobalNamespace::LocomotionGate_LocomotionMode  _NewMode_k__BackingField) noexcept  {
this->_PreviousMode_k__BackingField = _PreviousMode_k__BackingField;
this->_NewMode_k__BackingField = _NewMode_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs::LocomotionGate_LocomotionModeEventArgs()   {
}
