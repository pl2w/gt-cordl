#pragma once
// IWYU pragma private; include "UnityEngine/Localization/IPreloadRequired.hpp"
#include "UnityEngine/Localization/zzzz__IPreloadRequired_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::IPreloadRequired.get_PreloadOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::IPreloadRequired::*)()>(&::UnityEngine::Localization::IPreloadRequired::get_PreloadOperation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::IPreloadRequired*>(),
                    {::i2c::class_of<::UnityEngine::Localization::IPreloadRequired*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::IPreloadRequired::get_PreloadOperation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::IPreloadRequired*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
