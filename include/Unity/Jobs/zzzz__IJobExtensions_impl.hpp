#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobExtensions.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__IJob_impl.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_JobStruct_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Jobs::IJobExtensions::EarlyJobInit()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Jobs::IJobExtensions*>(),
                    {"EarlyJobInit", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::IntPtr Unity::Jobs::IJobExtensions::GetReflectionData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Jobs::IJobExtensions*>(),
                    {"GetReflectionData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobExtensions::Schedule(T  jobData, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Jobs::IJobExtensions*>(),
                    {"Schedule", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobData, dependsOn);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::Jobs::IJobExtensions::Run(T  jobData)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Jobs::IJobExtensions*>(),
                    {"Run", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobData);
}
// Ctor Parameters []
constexpr ::Unity::Jobs::IJobExtensions::IJobExtensions()   {
}
template<typename T>
inline void Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>::Invoke(::by_ref<T>  data, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
template<typename T>
inline ::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>* Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>::JobStruct_1_IJobExtensions_ExecuteJobFunction()   {
}
