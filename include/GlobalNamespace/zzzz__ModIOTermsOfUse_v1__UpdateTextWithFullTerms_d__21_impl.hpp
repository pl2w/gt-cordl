#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::*)()>(&::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59f2c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59f2cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21()   {
}
