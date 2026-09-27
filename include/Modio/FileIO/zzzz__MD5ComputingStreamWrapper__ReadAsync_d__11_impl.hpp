#pragma once
// IWYU pragma private; include "Modio/FileIO/MD5ComputingStreamWrapper__ReadAsync_d__11.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Modio/FileIO/zzzz__MD5ComputingStreamWrapper__ReadAsync_d__11_def.hpp"
#include "Modio/FileIO/zzzz__MD5ComputingStreamWrapper_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::*)()>(&::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xa054508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa054828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::MD5ComputingStreamWrapper*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::MD5ComputingStreamWrapper__ReadAsync_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::Modio::FileIO::MD5ComputingStreamWrapper*  __4__this, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->buffer = buffer;
this->offset = offset;
this->count = count;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MD5ComputingStreamWrapper__ReadAsync_d__11::MD5ComputingStreamWrapper__ReadAsync_d__11()   {
}
