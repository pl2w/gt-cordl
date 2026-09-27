#pragma once
// IWYU pragma private; include "Voxels/CollisionJob.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__MeshColliderCookingOptions_impl.hpp"
#include "Voxels/zzzz__CollisionJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::Voxels::CollisionJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::CollisionJob::*)()>(&::Voxels::CollisionJob::Execute)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5daedc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::CollisionJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::CollisionJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::CollisionJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Voxels::CollisionJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Voxels::CollisionJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "MeshId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::CollisionJob::CollisionJob(::UnityEngine::EntityId  MeshId) noexcept  {
this->MeshId = MeshId;
}
// Ctor Parameters []
constexpr ::Voxels::CollisionJob::CollisionJob()   {
}
constexpr ::UnityEngine::MeshColliderCookingOptions  Voxels::CollisionJob::CookingOptions{static_cast<int32_t>(0x1e)};
