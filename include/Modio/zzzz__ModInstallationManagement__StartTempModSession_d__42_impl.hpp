#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement__StartTempModSession_d__42.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Modio/zzzz__ModInstallationManagement__StartTempModSession_d__42_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::*)()>(&::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0xa017da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa01829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "appendCurrentSession", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tempMods", ty: "::System::Collections::Generic::List_1<::Modio::Mods::ModId>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::ModInstallationManagement__StartTempModSession_d__42(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, bool  appendCurrentSession, ::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  tempMods, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->appendCurrentSession = appendCurrentSession;
this->tempMods = tempMods;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42::ModInstallationManagement__StartTempModSession_d__42()   {
}
