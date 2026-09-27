#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch__GetModsViaStandardQuery_d__84.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch__GetModsViaStandardQuery_d__84_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__ModioPage_1_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::*)()>(&::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::MoveNext)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x9fa2190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9fa25f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Search::ModioUISearch>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::ModioUISearch__GetModsViaStandardQuery_d__84(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __t__builder, ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84::ModioUISearch__GetModsViaStandardQuery_d__84()   {
}
