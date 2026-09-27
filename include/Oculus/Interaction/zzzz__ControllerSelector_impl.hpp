#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerSelector.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_impl.hpp"
#include "Oculus/Interaction/zzzz__ControllerSelector_ControllerSelectorLogicOperator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ControllerSelector_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "Oculus/Interaction/zzzz__ControllerSelector_ControllerSelectorLogicOperator_def.hpp"
#include "Oculus/Interaction/zzzz__ControllerSelector_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.get_ControllerButtonUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ControllerButtonUsage (::Oculus::Interaction::ControllerSelector::*)()>(&::Oculus::Interaction::ControllerSelector::get_ControllerButtonUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47af08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"get_ControllerButtonUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.set_ControllerButtonUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&::Oculus::Interaction::ControllerSelector::set_ControllerButtonUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47af10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"set_ControllerButtonUsage", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.get_RequireButtonUsages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator (::Oculus::Interaction::ControllerSelector::*)()>(&::Oculus::Interaction::ControllerSelector::get_RequireButtonUsages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47af18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"get_RequireButtonUsages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.set_RequireButtonUsages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator)>(&::Oculus::Interaction::ControllerSelector::set_RequireButtonUsages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47af20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"set_RequireButtonUsages", {}, {::i2c::type_of<::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IController* (::Oculus::Interaction::ControllerSelector::*)()>(&::Oculus::Interaction::ControllerSelector::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47af28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.set_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::ControllerSelector::set_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47af30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.add_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&::Oculus::Interaction::ControllerSelector::add_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa47af38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.remove_WhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&::Oculus::Interaction::ControllerSelector::remove_WhenSelected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa47afd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.add_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&::Oculus::Interaction::ControllerSelector::add_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa47b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.remove_WhenUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&::Oculus::Interaction::ControllerSelector::remove_WhenUnselected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa47b10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)()>(&::Oculus::Interaction::ControllerSelector::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47b1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)()>(&::Oculus::Interaction::ControllerSelector::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)()>(&::Oculus::Interaction::ControllerSelector::Update)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa47b204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                    {::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.InjectAllControllerSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::ControllerSelector::InjectAllControllerSelector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47b358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"InjectAllControllerSelector", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::ControllerSelector::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa47b35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector::*)()>(&::Oculus::Interaction::ControllerSelector::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa47b42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::ControllerSelector::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::ControllerSelector::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::ControllerSelector::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& Oculus::Interaction::ControllerSelector::__cordl_internal_get__controllerButtonUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerButtonUsage;
}
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& Oculus::Interaction::ControllerSelector::__cordl_internal_get__controllerButtonUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerButtonUsage;
}
constexpr void Oculus::Interaction::ControllerSelector::__cordl_internal_set__controllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerButtonUsage = value;
}
constexpr ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator& Oculus::Interaction::ControllerSelector::__cordl_internal_get__requireButtonUsages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireButtonUsages;
}
constexpr ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator const& Oculus::Interaction::ControllerSelector::__cordl_internal_get__requireButtonUsages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireButtonUsages;
}
constexpr void Oculus::Interaction::ControllerSelector::__cordl_internal_set__requireButtonUsages(::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requireButtonUsages = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::ControllerSelector::__cordl_internal_get__Controller_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::ControllerSelector::__cordl_internal_get__Controller_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr void Oculus::Interaction::ControllerSelector::__cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller_k__BackingField = value;
}
constexpr ::System::Action*& Oculus::Interaction::ControllerSelector::__cordl_internal_get_WhenSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr ::System::Action* const& Oculus::Interaction::ControllerSelector::__cordl_internal_get_WhenSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelected;
}
constexpr void Oculus::Interaction::ControllerSelector::__cordl_internal_set_WhenSelected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelected = value;
}
constexpr ::System::Action*& Oculus::Interaction::ControllerSelector::__cordl_internal_get_WhenUnselected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr ::System::Action* const& Oculus::Interaction::ControllerSelector::__cordl_internal_get_WhenUnselected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUnselected;
}
constexpr void Oculus::Interaction::ControllerSelector::__cordl_internal_set_WhenUnselected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenUnselected = value;
}
constexpr bool& Oculus::Interaction::ControllerSelector::__cordl_internal_get__selected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selected;
}
constexpr bool const& Oculus::Interaction::ControllerSelector::__cordl_internal_get__selected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selected;
}
constexpr void Oculus::Interaction::ControllerSelector::__cordl_internal_set__selected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selected = value;
}
inline ::Oculus::Interaction::Input::ControllerButtonUsage Oculus::Interaction::ControllerSelector::get_ControllerButtonUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"get_ControllerButtonUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ControllerButtonUsage>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector::set_ControllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"set_ControllerButtonUsage", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerButtonUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator Oculus::Interaction::ControllerSelector::get_RequireButtonUsages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"get_RequireButtonUsages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector::set_RequireButtonUsages(::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"set_RequireButtonUsages", {}, {::i2c::type_of<::GlobalNamespace::ControllerSelector_ControllerSelectorLogicOperator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IController* Oculus::Interaction::ControllerSelector::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IController*>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector::set_Controller(::Oculus::Interaction::Input::IController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ControllerSelector::add_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"add_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ControllerSelector::remove_WhenSelected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"remove_WhenSelected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ControllerSelector::add_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"add_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ControllerSelector::remove_WhenUnselected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"remove_WhenUnselected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::ControllerSelector::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector::InjectAllControllerSelector(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"InjectAllControllerSelector", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::ControllerSelector::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::ControllerSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ControllerSelector* Oculus::Interaction::ControllerSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ControllerSelector*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr  Oculus::Interaction::ControllerSelector::operator ::Oculus::Interaction::ISelector*() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* Oculus::Interaction::ControllerSelector::i___Oculus__Interaction__ISelector() noexcept {
return static_cast<::Oculus::Interaction::ISelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ControllerSelector::ControllerSelector()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector___c::*)()>(&::Oculus::Interaction::ControllerSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47b620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector___c.__ctor_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector___c::*)()>(&::Oculus::Interaction::ControllerSelector___c::__ctor_b__26_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47b628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector___c*>(),
                        {"<.ctor>b__26_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ControllerSelector___c.__ctor_b__26_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ControllerSelector___c::*)()>(&::Oculus::Interaction::ControllerSelector___c::__ctor_b__26_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47b62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector___c*>(),
                        {"<.ctor>b__26_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ControllerSelector___c::setStaticF___9(::Oculus::Interaction::ControllerSelector___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::ControllerSelector___c*, "<>9", ::Oculus::Interaction::ControllerSelector___c*>(std::forward<::Oculus::Interaction::ControllerSelector___c*>(value));
}
inline ::Oculus::Interaction::ControllerSelector___c* Oculus::Interaction::ControllerSelector___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::ControllerSelector___c*, "<>9", ::Oculus::Interaction::ControllerSelector___c*>();
}
inline void Oculus::Interaction::ControllerSelector___c::setStaticF___9__26_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__26_0", ::Oculus::Interaction::ControllerSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::ControllerSelector___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__26_0", ::Oculus::Interaction::ControllerSelector___c*>();
}
inline void Oculus::Interaction::ControllerSelector___c::setStaticF___9__26_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__26_1", ::Oculus::Interaction::ControllerSelector___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::ControllerSelector___c::getStaticF___9__26_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__26_1", ::Oculus::Interaction::ControllerSelector___c*>();
}
inline void Oculus::Interaction::ControllerSelector___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector___c::__ctor_b__26_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector___c*>(),
                        {"<.ctor>b__26_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ControllerSelector___c::__ctor_b__26_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ControllerSelector___c*>(),
                        {"<.ctor>b__26_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ControllerSelector___c* Oculus::Interaction::ControllerSelector___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ControllerSelector___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ControllerSelector___c::ControllerSelector___c()   {
}
