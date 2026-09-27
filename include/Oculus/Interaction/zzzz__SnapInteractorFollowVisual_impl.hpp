#pragma once
// IWYU pragma private; include "Oculus/Interaction/SnapInteractorFollowVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractorFollowVisual_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractor_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.get_HoverOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::get_HoverOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"get_HoverOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.set_HoverOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)(float_t)>(&::Oculus::Interaction::SnapInteractorFollowVisual::set_HoverOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"set_HoverOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.get_EaseCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::ProgressCurve* (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::get_EaseCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"get_EaseCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.set_EaseCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::SnapInteractorFollowVisual::set_EaseCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"set_EaseCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa464a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa464b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa464c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::SnapInteractorFollowVisual::HandleStateChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa464cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.ComputeTargetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::ComputeTargetPose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa464d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa464e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.InjectAllSnapInteractorFollowVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)(::Oculus::Interaction::SnapInteractor*)>(&::Oculus::Interaction::SnapInteractorFollowVisual::InjectAllSnapInteractorFollowVisual)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"InjectAllSnapInteractorFollowVisual", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual.InjectOptionalTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::SnapInteractorFollowVisual::InjectOptionalTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"InjectOptionalTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractorFollowVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractorFollowVisual::*)()>(&::Oculus::Interaction::SnapInteractorFollowVisual::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa464f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::SnapInteractor>& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__snapInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::SnapInteractor> const& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__snapInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapInteractor;
}
constexpr void Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_set__snapInteractor(::UnityW<::Oculus::Interaction::SnapInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapInteractor = value;
}
constexpr float_t& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__hoverOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverOffset;
}
constexpr float_t const& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__hoverOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverOffset;
}
constexpr void Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_set__hoverOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverOffset = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__easeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__easeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeCurve;
}
constexpr void Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_set__easeCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____easeCurve = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform = value;
}
constexpr bool& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__from()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__from() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from;
}
constexpr void Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_set__from(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____from = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__to()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_get__to() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to;
}
constexpr void Oculus::Interaction::SnapInteractorFollowVisual::__cordl_internal_set__to(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____to = value;
}
inline float_t Oculus::Interaction::SnapInteractorFollowVisual::get_HoverOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"get_HoverOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::set_HoverOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"set_HoverOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::ProgressCurve* Oculus::Interaction::SnapInteractorFollowVisual::get_EaseCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"get_EaseCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::ProgressCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::set_EaseCurve(::Oculus::Interaction::ProgressCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"set_EaseCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityEngine::Pose Oculus::Interaction::SnapInteractorFollowVisual::ComputeTargetPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::InjectAllSnapInteractorFollowVisual(::Oculus::Interaction::SnapInteractor*  snapInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"InjectAllSnapInteractorFollowVisual", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapInteractor);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::InjectOptionalTransform(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {"InjectOptionalTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline void Oculus::Interaction::SnapInteractorFollowVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractorFollowVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::SnapInteractorFollowVisual* Oculus::Interaction::SnapInteractorFollowVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SnapInteractorFollowVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SnapInteractorFollowVisual::SnapInteractorFollowVisual()   {
}
