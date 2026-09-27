#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobsUtility_JobScheduleParameters.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_JobScheduleParameters_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__ScheduleMode_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JobsUtility_JobScheduleParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JobsUtility_JobScheduleParameters::*)(void*, ::System::IntPtr, ::Unity::Jobs::JobHandle, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode)>(&::GlobalNamespace::JobsUtility_JobScheduleParameters::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb55bff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JobsUtility_JobScheduleParameters>(),
                        {".ctor", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JobsUtility_JobScheduleParameters::_ctor(void*  i_jobData, ::System::IntPtr  i_reflectionData, ::Unity::Jobs::JobHandle  i_dependency, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  i_scheduleMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JobsUtility_JobScheduleParameters>(),
                        {".ctor", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i_jobData, i_reflectionData, i_dependency, i_scheduleMode);
}
// Ctor Parameters [CppParam { name: "Dependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "JobDataPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JobsUtility_JobScheduleParameters::JobsUtility_JobScheduleParameters(::Unity::Jobs::JobHandle  Dependency, int32_t  ScheduleMode, ::System::IntPtr  ReflectionData, ::System::IntPtr  JobDataPtr) noexcept  {
this->Dependency = Dependency;
this->ScheduleMode = ScheduleMode;
this->ReflectionData = ReflectionData;
this->JobDataPtr = JobDataPtr;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JobsUtility_JobScheduleParameters::JobsUtility_JobScheduleParameters()   {
}
