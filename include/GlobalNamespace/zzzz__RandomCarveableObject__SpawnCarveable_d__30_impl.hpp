#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomCarveableObject__SpawnCarveable_d__30.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "GlobalNamespace/zzzz__RandomCarveableObject__SpawnCarveable_d__30_def.hpp"
#include "GlobalNamespace/zzzz__RandomCarveableObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::*)()>(&::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x5df54dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5df5d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RandomCarveableObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::RandomCarveableObject__SpawnCarveable_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::RandomCarveableObject>  __4__this, int32_t  index, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->index = index;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomCarveableObject__SpawnCarveable_d__30::RandomCarveableObject__SpawnCarveable_d__30()   {
}
