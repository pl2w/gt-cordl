#pragma once
// IWYU pragma private; include "Modio/Mods/Mod__SetSubscribed_d__111.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Response204_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Mods/zzzz__Mod__SetSubscribed_d__111_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Mod__SetSubscribed_d__111.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mod__SetSubscribed_d__111::*)()>(&::GlobalNamespace::Mod__SetSubscribed_d__111::MoveNext)> {
  constexpr static std::size_t size = 0xc94;
  constexpr static std::size_t addrs = 0xa02e6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__SetSubscribed_d__111>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mod__SetSubscribed_d__111.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mod__SetSubscribed_d__111::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Mod__SetSubscribed_d__111::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa02f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__SetSubscribed_d__111>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Mod__SetSubscribed_d__111::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__SetSubscribed_d__111>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Mod__SetSubscribed_d__111::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__SetSubscribed_d__111>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::Mod__SetSubscribed_d__111::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Mod__SetSubscribed_d__111::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subscribed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "includeDependencies", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_error_5__2", ty: "::Modio::Error*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Mod__SetSubscribed_d__111::Mod__SetSubscribed_d__111(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Mods::Mod*  __4__this, bool  subscribed, bool  includeDependencies, ::Modio::Error*  _error_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModObject>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Response204>>>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>  __u__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->subscribed = subscribed;
this->includeDependencies = includeDependencies;
this->_error_5__2 = _error_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Mod__SetSubscribed_d__111::Mod__SetSubscribed_d__111()   {
}
