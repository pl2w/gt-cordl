#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/DynamicCosmeticStand__AsyncAddStandToStoreController_d__30.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand__AsyncAddStandToStoreController_d__30_def.hpp"
#include "GorillaNetworking/Store/zzzz__DynamicCosmeticStand_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::*)()>(&::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5cacf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cad130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  __4__this, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30::DynamicCosmeticStand__AsyncAddStandToStoreController_d__30()   {
}
