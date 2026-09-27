#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextJobSystem_PrepareTextJobData.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UITKTextJobSystem_PrepareTextJobData_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UITKTextJobSystem_PrepareTextJobData.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UITKTextJobSystem_PrepareTextJobData::*)(int32_t)>(&::GlobalNamespace::UITKTextJobSystem_PrepareTextJobData::Execute)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb7a8528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UITKTextJobSystem_PrepareTextJobData>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UITKTextJobSystem_PrepareTextJobData::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UITKTextJobSystem_PrepareTextJobData>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::UITKTextJobSystem_PrepareTextJobData::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::UITKTextJobSystem_PrepareTextJobData::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedJobDataHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UITKTextJobSystem_PrepareTextJobData::UITKTextJobSystem_PrepareTextJobData(::System::Runtime::InteropServices::GCHandle  managedJobDataHandle) noexcept  {
this->managedJobDataHandle = managedJobDataHandle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UITKTextJobSystem_PrepareTextJobData::UITKTextJobSystem_PrepareTextJobData()   {
}
