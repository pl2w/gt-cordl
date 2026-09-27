#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreements__SubmitAcceptedAgreements_d__38.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__SubmitAcceptedAgreements_d__38_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::*)()>(&::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5a622a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a626b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "agreements", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::LegalAgreements__SubmitAcceptedAgreements_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  agreements, ::GlobalNamespace::LegalAgreements___c__DisplayClass38_0*  __8__1, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->agreements = agreements;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreements__SubmitAcceptedAgreements_d__38::LegalAgreements__SubmitAcceptedAgreements_d__38()   {
}
