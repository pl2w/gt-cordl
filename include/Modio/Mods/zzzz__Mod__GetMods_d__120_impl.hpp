#pragma once
// IWYU pragma private; include "Modio/Mods/Mod__GetMods_d__120.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Mods/zzzz__Mod__GetMods_d__120_def.hpp"
#include "Modio/API/zzzz__ModioAPI_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__ModioPage_1_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Mod__GetMods_d__120.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mod__GetMods_d__120::*)()>(&::GlobalNamespace::Mod__GetMods_d__120::MoveNext)> {
  constexpr static std::size_t size = 0x169c;
  constexpr static std::size_t addrs = 0xa02bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__GetMods_d__120>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Mod__GetMods_d__120.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Mod__GetMods_d__120::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Mod__GetMods_d__120::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa02d314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__GetMods_d__120>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Mod__GetMods_d__120::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__GetMods_d__120>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Mod__GetMods_d__120::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Mod__GetMods_d__120>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::Mod__GetMods_d__120::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Mod__GetMods_d__120::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "neededModIds", ty: "::System::Collections::Generic::ICollection_1<int64_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "forceRefresh", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tempIndex", ty: "::Modio::ModIndex*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_output_5__2", ty: "::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_filter_5__3", ty: "::Modio::API::Mods_ModioAPI_GetModsFilter*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_modInstallManagementRefreshList_5__4", ty: "::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<int64_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_modId_5__6", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Mod__GetMods_d__120::Mod__GetMods_d__120(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __t__builder, ::System::Collections::Generic::ICollection_1<int64_t>*  neededModIds, bool  forceRefresh, ::Modio::ModIndex*  tempIndex, ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _output_5__2, ::Modio::API::Mods_ModioAPI_GetModsFilter*  _filter_5__3, ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _modInstallManagementRefreshList_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__1, ::System::Collections::Generic::IEnumerator_1<int64_t>*  __7__wrap4, int64_t  _modId_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->neededModIds = neededModIds;
this->forceRefresh = forceRefresh;
this->tempIndex = tempIndex;
this->_output_5__2 = _output_5__2;
this->_filter_5__3 = _filter_5__3;
this->_modInstallManagementRefreshList_5__4 = _modInstallManagementRefreshList_5__4;
this->__u__1 = __u__1;
this->__7__wrap4 = __7__wrap4;
this->_modId_5__6 = _modId_5__6;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Mod__GetMods_d__120::Mod__GetMods_d__120()   {
}
