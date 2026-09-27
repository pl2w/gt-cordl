#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobExtensions_JobStruct_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_SharedStatic_1_impl.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_JobStruct_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
template<typename T>
inline void GlobalNamespace::IJobExtensions_JobStruct_1<T>::setStaticF_jobReflectionData(::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr>  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData", ::GlobalNamespace::IJobExtensions_JobStruct_1<T>>(std::forward<::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr>>(value));
}
template<typename T>
inline ::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr> GlobalNamespace::IJobExtensions_JobStruct_1<T>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::BurstLike_SharedStatic_1<::System::IntPtr>, "jobReflectionData", ::GlobalNamespace::IJobExtensions_JobStruct_1<T>>();
}
template<typename T>
inline void GlobalNamespace::IJobExtensions_JobStruct_1<T>::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IJobExtensions_JobStruct_1<T>>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::IJobExtensions_JobStruct_1<T>::Execute(::by_ref<T>  data, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IJobExtensions_JobStruct_1<T>>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::IJobExtensions_JobStruct_1<T>::IJobExtensions_JobStruct_1()   {
}
