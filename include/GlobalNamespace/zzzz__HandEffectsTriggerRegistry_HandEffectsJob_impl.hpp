#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsTriggerRegistry_HandEffectsJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HandEffectsTriggerRegistry_HandEffectsJob_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::*)(int32_t)>(&::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::Execute)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56bf4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56bed9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "positionInput", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "closeOutput", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actualListSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::HandEffectsTriggerRegistry_HandEffectsJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positionInput, ::Unity::Collections::NativeArray_1<bool>  closeOutput, int32_t  actualListSize) noexcept  {
this->positionInput = positionInput;
this->closeOutput = closeOutput;
this->actualListSize = actualListSize;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob::HandEffectsTriggerRegistry_HandEffectsJob()   {
}
