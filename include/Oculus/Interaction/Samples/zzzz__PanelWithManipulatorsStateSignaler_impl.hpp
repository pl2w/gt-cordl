#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PanelWithManipulatorsStateSignaler.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_State_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler.add_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::*)(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::add_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa43acd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler.remove_WhenStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::*)(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::remove_WhenStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa43aff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State (::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::*)(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::set_CurrentState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa43b22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa43d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*& Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::__cordl_internal_get_WhenStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>* const& Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::__cordl_internal_get_WhenStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::__cordl_internal_set_WhenStateChanged(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenStateChanged = value;
}
constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State& Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State const& Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::__cordl_internal_set__state(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::add_WhenStateChanged(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::remove_WhenStateChanged(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::set_CurrentState(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler* Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler::PanelWithManipulatorsStateSignaler()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::*)()>(&::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c.__ctor_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::*)(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State)>(&::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::__ctor_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa43d4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::setStaticF___9(::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*, "<>9", ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>(std::forward<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>(value));
}
inline ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c* Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*, "<>9", ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>();
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::setStaticF___9__8_0(::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*, "<>9__8_0", ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>(std::forward<::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>* Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>*, "<>9__8_0", ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>();
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::__ctor_b__8_0(::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>(),
                        {"<.ctor>b__8_0", {}, {::i2c::type_of<::GlobalNamespace::PanelWithManipulatorsStateSignaler_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c* Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PanelWithManipulatorsStateSignaler___c::PanelWithManipulatorsStateSignaler___c()   {
}
