#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRMeshSubsystem.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__MeshGenerationResult_def.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_MeshTransformList_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem.InvokeMeshReadyDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)(::UnityEngine::XR::MeshGenerationResult, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*)>(&::UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb938c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(),
                        {"InvokeMeshReadyDelegate", {}, {::i2c::type_of<::UnityEngine::XR::MeshGenerationResult>(), ::i2c::type_of<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)()>(&::UnityEngine::XR::XRMeshSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb938cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult  result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*  onMeshGenerationComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(),
                        {"InvokeMeshReadyDelegate", {}, {::i2c::type_of<::UnityEngine::XR::MeshGenerationResult>(), ::i2c::type_of<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, onMeshGenerationComplete);
}
inline void UnityEngine::XR::XRMeshSubsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRMeshSubsystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRMeshSubsystem* UnityEngine::XR::XRMeshSubsystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::XRMeshSubsystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRMeshSubsystem::XRMeshSubsystem()   {
}
