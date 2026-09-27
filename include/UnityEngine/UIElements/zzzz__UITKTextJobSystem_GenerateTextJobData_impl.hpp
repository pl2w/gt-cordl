#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextJobSystem_GenerateTextJobData.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UITKTextJobSystem_GenerateTextJobData_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData::*)(int32_t)>(&::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData::Execute)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xb7a867c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UITKTextJobSystem_GenerateTextJobData::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::UITKTextJobSystem_GenerateTextJobData::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::UITKTextJobSystem_GenerateTextJobData::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alloc", ty: "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData::UITKTextJobSystem_GenerateTextJobData(::System::Runtime::InteropServices::GCHandle  managedJobDataHandle, ::UnityEngine::UIElements::TempMeshAllocator  alloc) noexcept  {
this->managedJobDataHandle = managedJobDataHandle;
this->alloc = alloc;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UITKTextJobSystem_GenerateTextJobData::UITKTextJobSystem_GenerateTextJobData()   {
}
