#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportArcVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportArcVisual_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4cf740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4cf76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4cf80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual.HandleInteractorPostProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::HandleInteractorPostProcessed)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa4cf8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual.InjectAllTeleportArcVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)(::Oculus::Interaction::Locomotion::TeleportInteractor*, ::UnityEngine::LineRenderer*)>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::InjectAllTeleportArcVisual)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4cfa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {"InjectAllTeleportArcVisual", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), ::i2c::type_of<::UnityEngine::LineRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual.InjectInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)(::Oculus::Interaction::Locomotion::TeleportInteractor*)>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::InjectInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cfac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual.InjectArcRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)(::UnityEngine::LineRenderer*)>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::InjectArcRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cfacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {"InjectArcRenderer", {}, {::i2c::type_of<::UnityEngine::LineRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportArcVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportArcVisual::*)()>(&::Oculus::Interaction::Locomotion::TeleportArcVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cfad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr void Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_set__interactor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactor = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__arcRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__arcRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcRenderer;
}
constexpr void Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_set__arcRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arcRenderer = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__positions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__positions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr void Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positions = value;
}
constexpr bool& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::TeleportArcVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::HandleInteractorPostProcessed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::InjectAllTeleportArcVisual(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor, ::UnityEngine::LineRenderer*  arcRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {"InjectAllTeleportArcVisual", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), ::i2c::type_of<::UnityEngine::LineRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, arcRenderer);
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::InjectInteractor(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::InjectArcRenderer(::UnityEngine::LineRenderer*  arcRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {"InjectArcRenderer", {}, {::i2c::type_of<::UnityEngine::LineRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arcRenderer);
}
inline void Oculus::Interaction::Locomotion::TeleportArcVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportArcVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::TeleportArcVisual* Oculus::Interaction::Locomotion::TeleportArcVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportArcVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportArcVisual::TeleportArcVisual()   {
}
