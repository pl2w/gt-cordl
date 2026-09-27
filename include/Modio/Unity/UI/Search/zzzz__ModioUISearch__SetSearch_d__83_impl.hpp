#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch__SetSearch_d__83.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch__SetSearch_d__83_def.hpp"
#include "Modio/Mods/zzzz__ModSearchFilter_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModioUISearch__SetSearch_d__83.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUISearch__SetSearch_d__83::*)()>(&::GlobalNamespace::ModioUISearch__SetSearch_d__83::MoveNext)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x9fa2674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__SetSearch_d__83>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUISearch__SetSearch_d__83.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUISearch__SetSearch_d__83::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModioUISearch__SetSearch_d__83::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fa2e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__SetSearch_d__83>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModioUISearch__SetSearch_d__83::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__SetSearch_d__83>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModioUISearch__SetSearch_d__83::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUISearch__SetSearch_d__83>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModioUISearch__SetSearch_d__83::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModioUISearch__SetSearch_d__83::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Search::ModioUISearch>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "searchFilter", ty: "::Modio::Mods::ModSearchFilter*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isAdditiveSearch", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "customResultProvider", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_asyncSearchIndex_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModioUISearch__SetSearch_d__83::ModioUISearch__SetSearch_d__83(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this, ::Modio::Mods::ModSearchFilter*  searchFilter, bool  isAdditiveSearch, ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*  customResultProvider, int32_t  _asyncSearchIndex_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->searchFilter = searchFilter;
this->isAdditiveSearch = isAdditiveSearch;
this->customResultProvider = customResultProvider;
this->_asyncSearchIndex_5__2 = _asyncSearchIndex_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUISearch__SetSearch_d__83::ModioUISearch__SetSearch_d__83()   {
}
