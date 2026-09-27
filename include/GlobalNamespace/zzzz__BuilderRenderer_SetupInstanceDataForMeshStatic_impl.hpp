#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRenderer_SetupInstanceDataForMeshStatic.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderRenderer_SetupInstanceDataForMeshStatic_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic::Execute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57d5c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic::Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "transformIndexToDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "objectToWorld", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic::BuilderRenderer_SetupInstanceDataForMeshStatic(::Unity::Collections::NativeArray_1<int32_t>  transformIndexToDataIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  objectToWorld) noexcept  {
this->transformIndexToDataIndex = transformIndexToDataIndex;
this->objectToWorld = objectToWorld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic::BuilderRenderer_SetupInstanceDataForMeshStatic()   {
}
