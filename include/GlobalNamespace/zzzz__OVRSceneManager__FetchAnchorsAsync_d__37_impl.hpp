#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__FetchAnchorsAsync_d__37.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager__FetchAnchorsAsync_d__37_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::*)()>(&::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xa633254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa633568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::OVRSceneManager__FetchAnchorsAsync_d__37(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->anchors = anchors;
this->uuids = uuids;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37::OVRSceneManager__FetchAnchorsAsync_d__37()   {
}
