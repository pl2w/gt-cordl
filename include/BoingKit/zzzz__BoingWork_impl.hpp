#pragma once
// IWYU pragma private; include "BoingKit/BoingWork.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BoingKit/zzzz__BoingWork_def.hpp"
#include "BoingKit/zzzz__BoingBehavior_def.hpp"
#include "BoingKit/zzzz__BoingWork_EffectorFlags_def.hpp"
#include "BoingKit/zzzz__BoingWork_Output_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "BoingKit/zzzz__BoingWork_ReactorFlags_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingWork.ComputeTranslationalResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::BoingKit::BoingBehavior*)>(&::BoingKit::BoingWork::ComputeTranslationalResults)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5e214d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWork*>(),
                        {"ComputeTranslationalResults", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::BoingKit::BoingBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 BoingKit::BoingWork::ComputeTranslationalResults(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  src, ::UnityEngine::Vector3  dst, ::BoingKit::BoingBehavior*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingWork*>(),
                        {"ComputeTranslationalResults", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::BoingKit::BoingBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, t, src, dst, b);
}
// Ctor Parameters []
constexpr ::BoingKit::BoingWork::BoingWork()   {
}
