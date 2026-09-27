#pragma once
// IWYU pragma private; include "Oculus/Interaction/BecomeChildOfTargetOnStart.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__BecomeChildOfTargetOnStart_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::BecomeChildOfTargetOnStart.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BecomeChildOfTargetOnStart::*)()>(&::Oculus::Interaction::BecomeChildOfTargetOnStart::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa46d950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                    {::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BecomeChildOfTargetOnStart.InjectAllChildToTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BecomeChildOfTargetOnStart::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::BecomeChildOfTargetOnStart::InjectAllChildToTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46d97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {"InjectAllChildToTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BecomeChildOfTargetOnStart.InjectTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BecomeChildOfTargetOnStart::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::BecomeChildOfTargetOnStart::InjectTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46d984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {"InjectTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BecomeChildOfTargetOnStart.InjectOptionalKeepWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BecomeChildOfTargetOnStart::*)(bool)>(&::Oculus::Interaction::BecomeChildOfTargetOnStart::InjectOptionalKeepWorldPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46d98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {"InjectOptionalKeepWorldPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::BecomeChildOfTargetOnStart._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::BecomeChildOfTargetOnStart::*)()>(&::Oculus::Interaction::BecomeChildOfTargetOnStart::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa46d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::BecomeChildOfTargetOnStart::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::BecomeChildOfTargetOnStart::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::BecomeChildOfTargetOnStart::__cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr bool& Oculus::Interaction::BecomeChildOfTargetOnStart::__cordl_internal_get__keepWorldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepWorldPosition;
}
constexpr bool const& Oculus::Interaction::BecomeChildOfTargetOnStart::__cordl_internal_get__keepWorldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepWorldPosition;
}
constexpr void Oculus::Interaction::BecomeChildOfTargetOnStart::__cordl_internal_set__keepWorldPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keepWorldPosition = value;
}
inline void Oculus::Interaction::BecomeChildOfTargetOnStart::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::BecomeChildOfTargetOnStart::InjectAllChildToTransform(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {"InjectAllChildToTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::BecomeChildOfTargetOnStart::InjectTarget(::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {"InjectTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::BecomeChildOfTargetOnStart::InjectOptionalKeepWorldPosition(bool  keepWorldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {"InjectOptionalKeepWorldPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepWorldPosition);
}
inline void Oculus::Interaction::BecomeChildOfTargetOnStart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BecomeChildOfTargetOnStart*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::BecomeChildOfTargetOnStart* Oculus::Interaction::BecomeChildOfTargetOnStart::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::BecomeChildOfTargetOnStart*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::BecomeChildOfTargetOnStart::BecomeChildOfTargetOnStart()   {
}
