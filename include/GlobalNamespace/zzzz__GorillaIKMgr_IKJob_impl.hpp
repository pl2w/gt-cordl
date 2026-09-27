#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr_IKJob.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKConstantInput_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKInput_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKOutput_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr_IKJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr_IKJob::*)(int32_t)>(&::GlobalNamespace::GorillaIKMgr_IKJob::Execute)> {
  constexpr static std::size_t size = 0x13cc;
  constexpr static std::size_t addrs = 0x591673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr_IKJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaIKMgr_IKJob::setStaticF_upperArmLocalPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "upperArmLocalPos", ::GlobalNamespace::GorillaIKMgr_IKJob>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::GorillaIKMgr_IKJob::getStaticF_upperArmLocalPos()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "upperArmLocalPos", ::GlobalNamespace::GorillaIKMgr_IKJob>();
}
inline void GlobalNamespace::GorillaIKMgr_IKJob::setStaticF_forearmLocalPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "forearmLocalPos", ::GlobalNamespace::GorillaIKMgr_IKJob>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::GorillaIKMgr_IKJob::getStaticF_forearmLocalPos()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "forearmLocalPos", ::GlobalNamespace::GorillaIKMgr_IKJob>();
}
inline void GlobalNamespace::GorillaIKMgr_IKJob::setStaticF_handLocalPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "handLocalPos", ::GlobalNamespace::GorillaIKMgr_IKJob>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::GorillaIKMgr_IKJob::getStaticF_handLocalPos()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "handLocalPos", ::GlobalNamespace::GorillaIKMgr_IKJob>();
}
inline void GlobalNamespace::GorillaIKMgr_IKJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr_IKJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::GorillaIKMgr_IKJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::GorillaIKMgr_IKJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "constantInput", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKConstantInput>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "input", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKInput>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "output", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKOutput>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaIKMgr_IKJob::GorillaIKMgr_IKJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKConstantInput>  constantInput, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKInput>  input, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GorillaIKMgr_IKOutput>  output) noexcept  {
this->constantInput = constantInput;
this->input = input;
this->output = output;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKMgr_IKJob::GorillaIKMgr_IKJob()   {
}
