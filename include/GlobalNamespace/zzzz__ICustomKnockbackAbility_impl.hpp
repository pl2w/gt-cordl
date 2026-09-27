#pragma once
// IWYU pragma private; include "GlobalNamespace/ICustomKnockbackAbility.hpp"
#include "GlobalNamespace/zzzz__ICustomKnockbackAbility_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICustomKnockbackAbility.CalculateImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::ICustomKnockbackAbility::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ICustomKnockbackAbility::CalculateImpulse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ICustomKnockbackAbility*>(),
                    {::i2c::class_of<::GlobalNamespace::ICustomKnockbackAbility*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::ICustomKnockbackAbility::CalculateImpulse(::UnityEngine::Transform*  targetTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ICustomKnockbackAbility*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(this, ___internal_method, targetTransform);
}
