#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlane_GetBoundaryJob.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_GetBoundaryJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane_GetBoundaryJob.HasBoundaryChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRScenePlane_GetBoundaryJob::*)()>(&::GlobalNamespace::OVRScenePlane_GetBoundaryJob::HasBoundaryChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa638fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryJob>(),
                        {"HasBoundaryChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane_GetBoundaryJob.SetNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>)>(&::GlobalNamespace::OVRScenePlane_GetBoundaryJob::SetNaN)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa639044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryJob>(),
                        {"SetNaN", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane_GetBoundaryJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane_GetBoundaryJob::*)()>(&::GlobalNamespace::OVRScenePlane_GetBoundaryJob::Execute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa63905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRScenePlane_GetBoundaryJob::HasBoundaryChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryJob>(),
                        {"HasBoundaryChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane_GetBoundaryJob::SetNaN(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryJob>(),
                        {"SetNaN", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline void GlobalNamespace::OVRScenePlane_GetBoundaryJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::OVRScenePlane_GetBoundaryJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::OVRScenePlane_GetBoundaryJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Boundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PreviousBoundary", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRScenePlane_GetBoundaryJob::OVRScenePlane_GetBoundaryJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  Boundary, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  PreviousBoundary) noexcept  {
this->Space = Space;
this->Boundary = Boundary;
this->PreviousBoundary = PreviousBoundary;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScenePlane_GetBoundaryJob::OVRScenePlane_GetBoundaryJob()   {
}
