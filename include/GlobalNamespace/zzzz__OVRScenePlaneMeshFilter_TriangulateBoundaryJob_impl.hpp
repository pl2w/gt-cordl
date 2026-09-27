#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlaneMeshFilter_TriangulateBoundaryJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlaneMeshFilter_TriangulateBoundaryJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlaneMeshFilter_TriangulateBoundaryJob_NList_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::*)()>(&::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::Execute)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa639fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::Cross)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa63a3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob>(),
                        {"Cross", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob.PointInTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::PointInTriangle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa63a3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob>(),
                        {"PointInTriangle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline float_t GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::Cross(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob>(),
                        {"Cross", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::PointInTriangle(::UnityEngine::Vector2  p, ::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob>(),
                        {"PointInTriangle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p, a, b, c);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::OVRScenePlaneMeshFilter_TriangulateBoundaryJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary, ::Unity::Collections::NativeArray_1<int32_t>  Triangles) noexcept  {
this->Boundary = Boundary;
this->Triangles = Triangles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScenePlaneMeshFilter_TriangulateBoundaryJob::OVRScenePlaneMeshFilter_TriangulateBoundaryJob()   {
}
