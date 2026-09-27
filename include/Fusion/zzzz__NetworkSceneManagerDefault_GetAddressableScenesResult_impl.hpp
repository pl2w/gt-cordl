#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDefault_GetAddressableScenesResult.hpp"
#include "Fusion/zzzz__NetworkSceneManagerDefault_GetAddressableScenesResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult.op_Implicit___GlobalNamespace__NetworkSceneManagerDefault_GetAddressableScenesResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult (*)(::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*)>(&::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult::op_Implicit___GlobalNamespace__NetworkSceneManagerDefault_GetAddressableScenesResult)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f176c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult::op_Implicit___GlobalNamespace__NetworkSceneManagerDefault_GetAddressableScenesResult(::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult>(nullptr, ___internal_method, task);
}
// Ctor Parameters [CppParam { name: "Task", ty: "::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BeforeWaitForCompletion", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult::NetworkSceneManagerDefault_GetAddressableScenesResult(::System::Threading::Tasks::Task_1<::ArrayW<::StringW>>*  Task, ::System::Action*  BeforeWaitForCompletion) noexcept  {
this->Task = Task;
this->BeforeWaitForCompletion = BeforeWaitForCompletion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSceneManagerDefault_GetAddressableScenesResult::NetworkSceneManagerDefault_GetAddressableScenesResult()   {
}
