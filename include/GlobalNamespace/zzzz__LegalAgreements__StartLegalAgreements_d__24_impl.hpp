#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreements__StartLegalAgreements_d__24.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements__StartLegalAgreements_d__24_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__LegalAgreements_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::*)()>(&::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xcac;
  constexpr static std::size_t addrs = 0x5a6158c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a62238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LegalAgreements>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_agreementResults_5__2", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_screen_5__5", ty: "::UnityW<::GlobalNamespace::LegalAgreementTextAsset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_latestVersion_5__6", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__5", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::LegalAgreements__StartLegalAgreements_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::LegalAgreements>  __4__this, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _agreementResults_5__2, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>  __u__2, ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  __7__wrap2, int32_t  __7__wrap3, ::UnityW<::GlobalNamespace::LegalAgreementTextAsset>  _screen_5__5, ::StringW  _latestVersion_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__5) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_agreementResults_5__2 = _agreementResults_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->_screen_5__5 = _screen_5__5;
this->_latestVersion_5__6 = _latestVersion_5__6;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
this->__u__5 = __u__5;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24::LegalAgreements__StartLegalAgreements_d__24()   {
}
