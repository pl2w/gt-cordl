#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorStateChangeArgs.hpp"
#include "Oculus/Interaction/zzzz__InteractorState_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorState_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractorStateChangeArgs.get_PreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractorState (::Oculus::Interaction::InteractorStateChangeArgs::*)()>(&::Oculus::Interaction::InteractorStateChangeArgs::get_PreviousState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4149d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorStateChangeArgs>(),
                        {"get_PreviousState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorStateChangeArgs.get_NewState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractorState (::Oculus::Interaction::InteractorStateChangeArgs::*)()>(&::Oculus::Interaction::InteractorStateChangeArgs::get_NewState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4149e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorStateChangeArgs>(),
                        {"get_NewState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorStateChangeArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorStateChangeArgs::*)(::Oculus::Interaction::InteractorState, ::Oculus::Interaction::InteractorState)>(&::Oculus::Interaction::InteractorStateChangeArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40b784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorStateChangeArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::InteractorState>(), ::i2c::type_of<::Oculus::Interaction::InteractorState>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::InteractorState Oculus::Interaction::InteractorStateChangeArgs::get_PreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorStateChangeArgs>(),
                        {"get_PreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractorState>(*this, ___internal_method);
}
inline ::Oculus::Interaction::InteractorState Oculus::Interaction::InteractorStateChangeArgs::get_NewState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorStateChangeArgs>(),
                        {"get_NewState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractorState>(*this, ___internal_method);
}
inline void Oculus::Interaction::InteractorStateChangeArgs::_ctor(::Oculus::Interaction::InteractorState  previousState, ::Oculus::Interaction::InteractorState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorStateChangeArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::InteractorState>(), ::i2c::type_of<::Oculus::Interaction::InteractorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, previousState, newState);
}
// Ctor Parameters [CppParam { name: "_PreviousState_k__BackingField", ty: "::Oculus::Interaction::InteractorState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_NewState_k__BackingField", ty: "::Oculus::Interaction::InteractorState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::InteractorStateChangeArgs::InteractorStateChangeArgs(::Oculus::Interaction::InteractorState  _PreviousState_k__BackingField, ::Oculus::Interaction::InteractorState  _NewState_k__BackingField) noexcept  {
this->_PreviousState_k__BackingField = _PreviousState_k__BackingField;
this->_NewState_k__BackingField = _NewState_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorStateChangeArgs::InteractorStateChangeArgs()   {
}
