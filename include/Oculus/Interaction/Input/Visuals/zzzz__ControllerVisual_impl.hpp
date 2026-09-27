#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Visuals/ControllerVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/Visuals/zzzz__ControllerVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IController* (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::get_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5186b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.set_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::set_Controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5186b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.get_ForceOffVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::get_ForceOffVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5186c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"get_ForceOffVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.set_ForceOffVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)(bool)>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::set_ForceOffVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5186c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"set_ForceOffVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa5186d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa518740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa51876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::OnDisable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa51886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.HandleUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::HandleUpdated)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xa5189a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"HandleUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.InjectAllOVRControllerVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)(::Oculus::Interaction::Input::IController*, ::UnityEngine::GameObject*)>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::InjectAllOVRControllerVisual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa518cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"InjectAllOVRControllerVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.InjectController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)(::Oculus::Interaction::Input::IController*)>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::InjectController)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa518ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual.InjectRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::InjectRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa518db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"InjectRoot", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Visuals::ControllerVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Visuals::ControllerVisual::*)()>(&::Oculus::Interaction::Input::Visuals::ControllerVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa518dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::Oculus::Interaction::Input::IController*& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__Controller_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IController* const& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__Controller_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller_k__BackingField;
}
constexpr void Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_set__root(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr bool& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__ForceOffVisibility_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceOffVisibility_k__BackingField;
}
constexpr bool const& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__ForceOffVisibility_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceOffVisibility_k__BackingField;
}
constexpr void Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_set__ForceOffVisibility_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceOffVisibility_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Input::Visuals::ControllerVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IController* Oculus::Interaction::Input::Visuals::ControllerVisual::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IController*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::set_Controller(::Oculus::Interaction::Input::IController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"set_Controller", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::Visuals::ControllerVisual::get_ForceOffVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"get_ForceOffVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::set_ForceOffVisibility(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"set_ForceOffVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::HandleUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"HandleUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::InjectAllOVRControllerVisual(::Oculus::Interaction::Input::IController*  controller, ::UnityEngine::GameObject*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"InjectAllOVRControllerVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, root);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::InjectController(::Oculus::Interaction::Input::IController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"InjectController", {}, {::i2c::type_of<::Oculus::Interaction::Input::IController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::InjectRoot(::UnityEngine::GameObject*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {"InjectRoot", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Oculus::Interaction::Input::Visuals::ControllerVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Visuals::ControllerVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Visuals::ControllerVisual* Oculus::Interaction::Input::Visuals::ControllerVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Visuals::ControllerVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Visuals::ControllerVisual::ControllerVisual()   {
}
