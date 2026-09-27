#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN__CacheRegionInfo_d__57.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN__CacheRegionInfo_d__57_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::*)()>(&::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x5707bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57083bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkSystemPUN>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tryingRegionIndex_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::NetworkSystemPUN__CacheRegionInfo_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::NetworkSystemPUN>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, int32_t  _tryingRegionIndex_5__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
this->_tryingRegionIndex_5__2 = _tryingRegionIndex_5__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemPUN__CacheRegionInfo_d__57::NetworkSystemPUN__CacheRegionInfo_d__57()   {
}
