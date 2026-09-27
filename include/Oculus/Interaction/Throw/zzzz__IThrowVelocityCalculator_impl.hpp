#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/IThrowVelocityCalculator.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__ReleaseVelocityInformation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::IThrowVelocityCalculator.CalculateThrowVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::ReleaseVelocityInformation (::Oculus::Interaction::Throw::IThrowVelocityCalculator::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Throw::IThrowVelocityCalculator::CalculateThrowVelocity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Throw::ReleaseVelocityInformation Oculus::Interaction::Throw::IThrowVelocityCalculator::CalculateThrowVelocity(::UnityEngine::Transform*  objectThrown)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::ReleaseVelocityInformation>(this, ___internal_method, objectThrown);
}
