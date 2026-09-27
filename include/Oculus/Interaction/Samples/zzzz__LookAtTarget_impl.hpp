#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LookAtTarget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__LookAtTarget_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::LookAtTarget.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LookAtTarget::*)()>(&::Oculus::Interaction::Samples::LookAtTarget::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa439924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LookAtTarget.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LookAtTarget::*)()>(&::Oculus::Interaction::Samples::LookAtTarget::Update)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa439928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LookAtTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LookAtTarget::*)()>(&::Oculus::Interaction::Samples::LookAtTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa439aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::LookAtTarget::__cordl_internal_get__toRotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRotate;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::LookAtTarget::__cordl_internal_get__toRotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRotate;
}
constexpr void Oculus::Interaction::Samples::LookAtTarget::__cordl_internal_set__toRotate(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toRotate = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::LookAtTarget::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::LookAtTarget::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::Samples::LookAtTarget::__cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
inline void Oculus::Interaction::Samples::LookAtTarget::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LookAtTarget::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LookAtTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LookAtTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::LookAtTarget* Oculus::Interaction::Samples::LookAtTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::LookAtTarget*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::LookAtTarget::LookAtTarget()   {
}
