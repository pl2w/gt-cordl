#pragma once
// IWYU pragma private; include "Oculus/Interaction/ICandidatePosition.hpp"
#include "Oculus/Interaction/zzzz__ICandidatePosition_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ICandidatePosition.get_CandidatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::ICandidatePosition::*)()>(&::Oculus::Interaction::ICandidatePosition::get_CandidatePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ICandidatePosition*>(),
                    {::i2c::class_of<::Oculus::Interaction::ICandidatePosition*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::ICandidatePosition::get_CandidatePosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ICandidatePosition*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
