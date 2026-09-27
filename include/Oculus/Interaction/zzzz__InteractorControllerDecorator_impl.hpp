#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorControllerDecorator.hpp"
#include "Oculus/Interaction/zzzz__ClassToClassDecorator_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractorControllerDecorator_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/zzzz__Context_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorControllerDecorator_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractorControllerDecorator.TryGetControllerForInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::IInteractorView*, ::by_ref<::Oculus::Interaction::Input::IController*>)>(&::Oculus::Interaction::InteractorControllerDecorator::TryGetControllerForInteractor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa419638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator*>(),
                        {"TryGetControllerForInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::IController*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorControllerDecorator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorControllerDecorator::*)()>(&::Oculus::Interaction::InteractorControllerDecorator::Awake)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa419808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorControllerDecorator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorControllerDecorator::*)()>(&::Oculus::Interaction::InteractorControllerDecorator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_get__interactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_get__interactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
constexpr void Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_set__interactors(::ArrayW<::UnityW<::UnityEngine::Component>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactors = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_get__interactorHierarchies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorHierarchies;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_get__interactorHierarchies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorHierarchies;
}
constexpr void Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_set__interactorHierarchies(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactorHierarchies = value;
}
constexpr ::UnityW<::UnityEngine::Component>& Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Component> const& Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::InteractorControllerDecorator::__cordl_internal_set__controller(::UnityW<::UnityEngine::Component>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
inline bool Oculus::Interaction::InteractorControllerDecorator::TryGetControllerForInteractor(::Oculus::Interaction::IInteractorView*  interactor, ::by_ref<::Oculus::Interaction::Input::IController*>  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator*>(),
                        {"TryGetControllerForInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::IController*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, controller);
}
inline void Oculus::Interaction::InteractorControllerDecorator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractorControllerDecorator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractorControllerDecorator* Oculus::Interaction::InteractorControllerDecorator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractorControllerDecorator*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorControllerDecorator::InteractorControllerDecorator()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractorControllerDecorator_Decorator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractorControllerDecorator_Decorator::*)()>(&::Oculus::Interaction::InteractorControllerDecorator_Decorator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa419a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractorControllerDecorator_Decorator.GetFromContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractorControllerDecorator_Decorator* (*)(::Oculus::Interaction::Context*)>(&::Oculus::Interaction::InteractorControllerDecorator_Decorator::GetFromContext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa419708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>(),
                        {"GetFromContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::InteractorControllerDecorator_Decorator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractorControllerDecorator_Decorator* Oculus::Interaction::InteractorControllerDecorator_Decorator::GetFromContext(::Oculus::Interaction::Context*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>(),
                        {"GetFromContext", {}, {::i2c::type_of<::Oculus::Interaction::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>(nullptr, ___internal_method, context);
}
inline ::Oculus::Interaction::InteractorControllerDecorator_Decorator* Oculus::Interaction::InteractorControllerDecorator_Decorator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractorControllerDecorator_Decorator::InteractorControllerDecorator_Decorator()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Decorator_InteractorControllerDecorator___c::*)()>(&::Oculus::Interaction::Decorator_InteractorControllerDecorator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c._GetFromContext_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::InteractorControllerDecorator_Decorator* (::Oculus::Interaction::Decorator_InteractorControllerDecorator___c::*)()>(&::Oculus::Interaction::Decorator_InteractorControllerDecorator___c::_GetFromContext_b__1_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa419adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>(),
                        {"<GetFromContext>b__1_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Decorator_InteractorControllerDecorator___c::setStaticF___9(::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*, "<>9", ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>(std::forward<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>(value));
}
inline ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c* Oculus::Interaction::Decorator_InteractorControllerDecorator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*, "<>9", ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>();
}
inline void Oculus::Interaction::Decorator_InteractorControllerDecorator___c::setStaticF___9__1_0(::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>*, "<>9__1_0", ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>(std::forward<::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>*>(value));
}
inline ::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>* Oculus::Interaction::Decorator_InteractorControllerDecorator___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>*, "<>9__1_0", ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>();
}
inline void Oculus::Interaction::Decorator_InteractorControllerDecorator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractorControllerDecorator_Decorator* Oculus::Interaction::Decorator_InteractorControllerDecorator___c::_GetFromContext_b__1_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>(),
                        {"<GetFromContext>b__1_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c* Oculus::Interaction::Decorator_InteractorControllerDecorator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c::Decorator_InteractorControllerDecorator___c()   {
}
