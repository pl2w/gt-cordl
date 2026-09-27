#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsChunk__BuildChunk_d__13.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_Awaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Voxels/zzzz__SurfaceNetsBuffer_impl.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsChunk__BuildChunk_d__13_def.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsChunk_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::*)()>(&::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x5daa180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5daac08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::FastSurfaceNets::SurfaceNetsChunk>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer_5__2", ty: "::Voxels::SurfaceNetsBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handle_5__3", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::SurfaceNetsChunk__BuildChunk_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::FastSurfaceNets::SurfaceNetsChunk>  __4__this, ::Voxels::SurfaceNetsBuffer  _buffer_5__2, ::Unity::Jobs::JobHandle  _handle_5__3, ::GlobalNamespace::YieldAwaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_buffer_5__2 = _buffer_5__2;
this->_handle_5__3 = _handle_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13::SurfaceNetsChunk__BuildChunk_d__13()   {
}
