#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyDiskUsage__UpdateUsage_d__11.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyDiskUsage__UpdateUsage_d__11_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyDiskUsage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::*)()>(&::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x9fbf2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fbf930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_usedSpaceBytes_5__2", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_reservedSpaceBytes_5__3", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::UserPropertyDiskUsage__UpdateUsage_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Modio::Unity::UI::Components::UserProperties::UserPropertyDiskUsage*  __4__this, int64_t  _usedSpaceBytes_5__2, int64_t  _reservedSpaceBytes_5__3, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_usedSpaceBytes_5__2 = _usedSpaceBytes_5__2;
this->_reservedSpaceBytes_5__3 = _reservedSpaceBytes_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UserPropertyDiskUsage__UpdateUsage_d__11::UserPropertyDiskUsage__UpdateUsage_d__11()   {
}
