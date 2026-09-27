#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatorUtils_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatorUtils.ResetToEntryState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*)>(&::GlobalNamespace::AnimatorUtils::ResetToEntryState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ae0d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorUtils*>(),
                        {"ResetToEntryState", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AnimatorUtils::ResetToEntryState(::UnityEngine::Animator*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorUtils*>(),
                        {"ResetToEntryState", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatorUtils::AnimatorUtils()   {
}
