#pragma once
// IWYU pragma private; include "UnityEngine/StaticBatchingUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__StaticBatchingUtility_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::StaticBatchingUtility.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::UnityEngine::StaticBatchingUtility::Combine)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb5ec938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingUtility*>(),
                        {"Combine", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StaticBatchingUtility.CombineRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::UnityEngine::StaticBatchingUtility::CombineRoot)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb5eca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingUtility*>(),
                        {"CombineRoot", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::StaticBatchingUtility::setStaticF_s_CombineMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_CombineMarker", ::UnityEngine::StaticBatchingUtility*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::StaticBatchingUtility::getStaticF_s_CombineMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_CombineMarker", ::UnityEngine::StaticBatchingUtility*>();
}
inline void UnityEngine::StaticBatchingUtility::Combine(::UnityEngine::GameObject*  staticBatchRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingUtility*>(),
                        {"Combine", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, staticBatchRoot);
}
inline void UnityEngine::StaticBatchingUtility::CombineRoot(::UnityEngine::GameObject*  staticBatchRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingUtility*>(),
                        {"CombineRoot", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, staticBatchRoot);
}
// Ctor Parameters []
constexpr ::UnityEngine::StaticBatchingUtility::StaticBatchingUtility()   {
}
