#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractorPinchVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Oculus/Interaction/zzzz__RayInteractorPinchVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractor_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.get_RemapCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::get_RemapCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"get_RemapCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.set_RemapCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::RayInteractorPinchVisual::set_RemapCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45f008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"set_RemapCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.get_AlphaRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::get_AlphaRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"get_AlphaRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.set_AlphaRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::RayInteractorPinchVisual::set_AlphaRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45f018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"set_AlphaRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa45f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa45f088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa45f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::OnDisable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa45f7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.UpdateVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::UpdateVisual)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0xa45f1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"UpdateVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::RayInteractorPinchVisual::UpdateVisualState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa45f8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.InjectAllRayInteractorPinchVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::RayInteractor*, ::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::RayInteractorPinchVisual::InjectAllRayInteractorPinchVisual)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa45f8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectAllRayInteractorPinchVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::RayInteractorPinchVisual::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa45f93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.InjectRayInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)(::Oculus::Interaction::RayInteractor*)>(&::Oculus::Interaction::RayInteractorPinchVisual::InjectRayInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45fa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual.InjectSkinnedMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)(::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::RayInteractorPinchVisual::InjectSkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45fa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectSkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractorPinchVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractorPinchVisual::*)()>(&::Oculus::Interaction::RayInteractorPinchVisual::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa45fa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__rayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__rayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayInteractor;
}
constexpr void Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayInteractor = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__skinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__skinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr void Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skinnedMeshRenderer = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__remapCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__remapCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapCurve;
}
constexpr void Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_set__remapCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remapCurve = value;
}
constexpr ::UnityEngine::Vector2& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__alphaRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaRange;
}
constexpr ::UnityEngine::Vector2 const& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__alphaRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaRange;
}
constexpr void Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_set__alphaRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alphaRange = value;
}
constexpr bool& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::RayInteractorPinchVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::RayInteractorPinchVisual::get_RemapCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"get_RemapCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::set_RemapCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"set_RemapCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::RayInteractorPinchVisual::get_AlphaRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"get_AlphaRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::set_AlphaRange(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"set_AlphaRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::UpdateVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"UpdateVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"UpdateVisualState", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::InjectAllRayInteractorPinchVisual(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::RayInteractor*  rayInteractor, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectAllRayInteractorPinchVisual", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::RayInteractor*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, rayInteractor, skinnedMeshRenderer);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayInteractor);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::InjectSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {"InjectSkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skinnedMeshRenderer);
}
inline void Oculus::Interaction::RayInteractorPinchVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractorPinchVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::RayInteractorPinchVisual* Oculus::Interaction::RayInteractorPinchVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RayInteractorPinchVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RayInteractorPinchVisual::RayInteractorPinchVisual()   {
}
