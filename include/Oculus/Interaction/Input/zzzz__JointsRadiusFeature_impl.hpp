#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/JointsRadiusFeature.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__JointsRadiusFeature_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::JointsRadiusFeature.GetJointRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::JointsRadiusFeature::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::JointsRadiusFeature::GetJointRadius)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa51089c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointsRadiusFeature*>(),
                        {"GetJointRadius", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::JointsRadiusFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::JointsRadiusFeature::*)()>(&::Oculus::Interaction::Input::JointsRadiusFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa51272c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointsRadiusFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Input::Hand>& Oculus::Interaction::Input::JointsRadiusFeature::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::Oculus::Interaction::Input::Hand> const& Oculus::Interaction::Input::JointsRadiusFeature::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::Input::JointsRadiusFeature::__cordl_internal_set__hand(::UnityW<::Oculus::Interaction::Input::Hand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
inline float_t Oculus::Interaction::Input::JointsRadiusFeature::GetJointRadius(::Oculus::Interaction::Input::HandJointId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointsRadiusFeature*>(),
                        {"GetJointRadius", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline void Oculus::Interaction::Input::JointsRadiusFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::JointsRadiusFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::JointsRadiusFeature* Oculus::Interaction::Input::JointsRadiusFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::JointsRadiusFeature*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::JointsRadiusFeature::JointsRadiusFeature()   {
}
