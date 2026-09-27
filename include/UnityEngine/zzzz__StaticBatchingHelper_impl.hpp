#pragma once
// IWYU pragma private; include "UnityEngine/StaticBatchingHelper.hpp"
#include "UnityEngine/zzzz__StaticBatchingHelper_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::StaticBatchingHelper.CombineMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*>, ::UnityEngine::GameObject*)>(&::UnityEngine::StaticBatchingHelper::CombineMeshes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb5b180c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingHelper>(),
                        {"CombineMeshes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StaticBatchingHelper.CombineMeshes_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*>, ::System::IntPtr)>(&::UnityEngine::StaticBatchingHelper::CombineMeshes_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5b1898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingHelper>(),
                        {"CombineMeshes_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::StaticBatchingHelper::CombineMeshes(::ArrayW<::UnityEngine::GameObject*>  gos, ::UnityEngine::GameObject*  staticBatchRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingHelper>(),
                        {"CombineMeshes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gos, staticBatchRoot);
}
inline void UnityEngine::StaticBatchingHelper::CombineMeshes_Injected(::ArrayW<::UnityEngine::GameObject*>  gos, ::System::IntPtr  staticBatchRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::StaticBatchingHelper>(),
                        {"CombineMeshes_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gos, staticBatchRoot);
}
// Ctor Parameters []
constexpr ::UnityEngine::StaticBatchingHelper::StaticBatchingHelper()   {
}
