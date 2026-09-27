#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MigrateMaterialsToDifferentPipeline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_MigrateMaterialsToDifferentPipeline_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline::*)()>(&::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfd8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline* GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline::MB_MigrateMaterialsToDifferentPipeline()   {
}
