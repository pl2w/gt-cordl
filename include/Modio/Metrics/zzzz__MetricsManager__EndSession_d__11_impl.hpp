#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsManager__EndSession_d__11.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Response204_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Metrics/zzzz__MetricsManager__EndSession_d__11_def.hpp"
#include "Modio/Metrics/zzzz__MetricsManager_def.hpp"
#include "Modio/Metrics/zzzz__MetricsSession_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetricsManager__EndSession_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetricsManager__EndSession_d__11::*)()>(&::GlobalNamespace::MetricsManager__EndSession_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0xa03dd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetricsManager__EndSession_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetricsManager__EndSession_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetricsManager__EndSession_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MetricsManager__EndSession_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa03e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetricsManager__EndSession_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetricsManager__EndSession_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetricsManager__EndSession_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MetricsManager__EndSession_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetricsManager__EndSession_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MetricsManager__EndSession_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MetricsManager__EndSession_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::Metrics::MetricsManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_session_5__2", ty: "::Modio::Metrics::MetricsSession*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MetricsManager__EndSession_d__11::MetricsManager__EndSession_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Metrics::MetricsManager*  __4__this, ::StringW  id, ::Modio::Metrics::MetricsSession*  _session_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->id = id;
this->_session_5__2 = _session_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetricsManager__EndSession_d__11::MetricsManager__EndSession_d__11()   {
}
