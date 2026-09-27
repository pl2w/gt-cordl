#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableStateChangeArgs.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractableStateChangeArgs.get_PreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractableState (::Oculus::Interaction::InteractableStateChangeArgs::*)()>(&::Oculus::Interaction::InteractableStateChangeArgs::get_PreviousState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4149c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableStateChangeArgs>(),
                        {"get_PreviousState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableStateChangeArgs.get_NewState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractableState (::Oculus::Interaction::InteractableStateChangeArgs::*)()>(&::Oculus::Interaction::InteractableStateChangeArgs::get_NewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4149c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableStateChangeArgs>(),
                        {"get_NewState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableStateChangeArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableStateChangeArgs::*)(::Oculus::Interaction::InteractableState, ::Oculus::Interaction::InteractableState)>(&::Oculus::Interaction::InteractableStateChangeArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4149d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableStateChangeArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::InteractableState>(), ::i2c::type_of<::Oculus::Interaction::InteractableState>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::InteractableState Oculus::Interaction::InteractableStateChangeArgs::get_PreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableStateChangeArgs>(),
                        {"get_PreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractableState>(*this, ___internal_method);
}
inline ::Oculus::Interaction::InteractableState Oculus::Interaction::InteractableStateChangeArgs::get_NewState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableStateChangeArgs>(),
                        {"get_NewState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractableState>(*this, ___internal_method);
}
inline void Oculus::Interaction::InteractableStateChangeArgs::_ctor(::Oculus::Interaction::InteractableState  previousState, ::Oculus::Interaction::InteractableState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableStateChangeArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::InteractableState>(), ::i2c::type_of<::Oculus::Interaction::InteractableState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, previousState, newState);
}
// Ctor Parameters [CppParam { name: "_PreviousState_k__BackingField", ty: "::Oculus::Interaction::InteractableState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_NewState_k__BackingField", ty: "::Oculus::Interaction::InteractableState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::InteractableStateChangeArgs::InteractableStateChangeArgs(::Oculus::Interaction::InteractableState  _PreviousState_k__BackingField, ::Oculus::Interaction::InteractableState  _NewState_k__BackingField) noexcept  {
this->_PreviousState_k__BackingField = _PreviousState_k__BackingField;
this->_NewState_k__BackingField = _NewState_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableStateChangeArgs::InteractableStateChangeArgs()   {
}
