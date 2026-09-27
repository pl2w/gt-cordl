#pragma once
// IWYU pragma private; include "CosmeticRoom/EvolvingCosmeticKiosk__BuildCosmeticsList_d__14.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk__BuildCosmeticsList_d__14_def.hpp"
#include "CosmeticRoom/zzzz__EvolvingCosmeticKiosk_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticItemRegistry_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::*)()>(&::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xb0c;
  constexpr static std::size_t addrs = 0x5c4ca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c4d63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_registry_5__2", ty: "::GorillaNetworking::CosmeticItemRegistry*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_loadedCosmetics_5__3", ty: "::System::Collections::Generic::HashSet_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_item_5__6", ty: "::GlobalNamespace::CosmeticsController_CosmeticItem", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>  __4__this, ::GorillaNetworking::CosmeticItemRegistry*  _registry_5__2, ::System::Collections::Generic::HashSet_1<::StringW>*  _loadedCosmetics_5__3, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::ArrayW<::GlobalNamespace::CosmeticsController_CosmeticItem>  __7__wrap3, int32_t  __7__wrap4, ::GlobalNamespace::CosmeticsController_CosmeticItem  _item_5__6) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_registry_5__2 = _registry_5__2;
this->_loadedCosmetics_5__3 = _loadedCosmetics_5__3;
this->__u__1 = __u__1;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->_item_5__6 = _item_5__6;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14::EvolvingCosmeticKiosk__BuildCosmeticsList_d__14()   {
}
