#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__GetMods_d__76.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__ModIOManager__GetMods_d__76_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__GetMods_d__76.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager__GetMods_d__76::*)()>(&::GlobalNamespace::ModIOManager__GetMods_d__76::MoveNext)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x59d17d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetMods_d__76>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModIOManager__GetMods_d__76.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModIOManager__GetMods_d__76::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModIOManager__GetMods_d__76::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59d1cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetMods_d__76>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModIOManager__GetMods_d__76::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetMods_d__76>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModIOManager__GetMods_d__76::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIOManager__GetMods_d__76>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModIOManager__GetMods_d__76::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModIOManager__GetMods_d__76::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callback", ty: "::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modIds", ty: "::System::Collections::Generic::ICollection_1<int64_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "forceRefresh", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModIOManager__GetMods_d__76::ModIOManager__GetMods_d__76(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __t__builder, ::System::Action_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*  callback, ::System::Collections::Generic::ICollection_1<int64_t>*  modIds, bool  forceRefresh, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->callback = callback;
this->modIds = modIds;
this->forceRefresh = forceRefresh;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModIOManager__GetMods_d__76::ModIOManager__GetMods_d__76()   {
}
