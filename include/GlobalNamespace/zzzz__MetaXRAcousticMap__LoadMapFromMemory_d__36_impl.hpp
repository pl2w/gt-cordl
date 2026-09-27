#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMap__LoadMapFromMemory_d__36.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMap__LoadMapFromMemory_d__36_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMap_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::*)()>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x9ea83ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea89a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MetaXRAcousticMap>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_startTime_5__2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::MetaXRAcousticMap__LoadMapFromMemory_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data, ::UnityW<::GlobalNamespace::MetaXRAcousticMap>  __4__this, ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*  __8__1, float_t  _startTime_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->data = data;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->_startTime_5__2 = _startTime_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMap__LoadMapFromMemory_d__36::MetaXRAcousticMap__LoadMapFromMemory_d__36()   {
}
