#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/LckFrameController__LoadAndApplyTextures_d__13.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckFrameController__LoadAndApplyTextures_d__13_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckFrameController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::*)()>(&::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x9d30364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d30894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Liv::Lck::GorillaTag::LckFrameController>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_horizontalTask_5__2", ty: "::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_verticalTask_5__3", ty: "::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::UnityEngine::Texture>>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::LckFrameController__LoadAndApplyTextures_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Liv::Lck::GorillaTag::LckFrameController>  __4__this, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>*  _horizontalTask_5__2, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>*  _verticalTask_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::UnityEngine::Texture>>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_horizontalTask_5__2 = _horizontalTask_5__2;
this->_verticalTask_5__3 = _verticalTask_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13::LckFrameController__LoadAndApplyTextures_d__13()   {
}
