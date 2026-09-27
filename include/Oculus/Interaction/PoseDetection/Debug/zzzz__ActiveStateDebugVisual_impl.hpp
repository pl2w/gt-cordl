#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateDebugVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateDebugVisual_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual.get_ActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::get_ActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4aaca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"get_ActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual.set_ActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::set_ActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4aaca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"set_ActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4aacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4aadc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4aae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual.SetMaterialColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::SetMaterialColor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4aad78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"SetMaterialColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4aaf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__ActiveState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveState_k__BackingField;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__ActiveState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveState_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_set__ActiveState_k__BackingField(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveState_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__normalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__normalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_set__normalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__activeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__activeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeColor;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_set__activeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeColor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__lastActiveValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveValue;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_get__lastActiveValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveValue;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::__cordl_internal_set__lastActiveValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastActiveValue = value;
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::get_ActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"get_ActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"set_ActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::SetMaterialColor(::UnityEngine::Color  activeColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {"SetMaterialColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeColor);
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual::ActiveStateDebugVisual()   {
}
