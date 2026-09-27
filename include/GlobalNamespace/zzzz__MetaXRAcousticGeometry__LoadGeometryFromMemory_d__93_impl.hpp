#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::MoveNext)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x9ea669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea6ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_startTime_5__2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data, ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  __4__this, ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*  __8__1, float_t  _startTime_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->data = data;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->_startTime_5__2 = _startTime_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93()   {
}
