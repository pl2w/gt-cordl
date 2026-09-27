#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::*)()>(&::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x9e4;
  constexpr static std::size_t addrs = 0x5bde1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bdebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_succeeded_5__2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_curatedModId_5__5", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  data, bool  _succeeded_5__2, ::ArrayW<::StringW>  __7__wrap2, int32_t  __7__wrap3, int64_t  _curatedModId_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->data = data;
this->_succeeded_5__2 = _succeeded_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->_curatedModId_5__5 = _curatedModId_5__5;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12()   {
}
