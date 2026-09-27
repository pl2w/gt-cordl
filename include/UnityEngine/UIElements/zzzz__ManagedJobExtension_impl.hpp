#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ManagedJobExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ManagedJobExtension_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Jobs::JobHandle UnityEngine::UIElements::ManagedJobExtension::ScheduleOrRunJob(T  jobData, int32_t  arrayLength, int32_t  innerloopBatchCount, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::ManagedJobExtension*>(),
                    {"ScheduleOrRunJob", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, arrayLength, innerloopBatchCount, dependsOn);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ManagedJobExtension::ManagedJobExtension()   {
}
