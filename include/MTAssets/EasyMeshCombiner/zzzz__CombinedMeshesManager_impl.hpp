#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/CombinedMeshesManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__CombinedMeshesManager_def.hpp"
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::CombinedMeshesManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::CombinedMeshesManager::*)()>(&::MTAssets::EasyMeshCombiner::CombinedMeshesManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb9c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombinedMeshesManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MTAssets::EasyMeshCombiner::CombinedMeshesManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::CombinedMeshesManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MTAssets::EasyMeshCombiner::CombinedMeshesManager* MTAssets::EasyMeshCombiner::CombinedMeshesManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::CombinedMeshesManager*>());
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::CombinedMeshesManager::CombinedMeshesManager()   {
}
