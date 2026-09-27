#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestLoader__LoadManifestFromJsonAsync_d__6.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Meta/Conduit/zzzz__ManifestLoader__LoadManifestFromJsonAsync_d__6_def.hpp"
#include "Meta/Conduit/zzzz__ManifestLoader_def.hpp"
#include "Meta/Conduit/zzzz__Manifest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::*)()>(&::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x9e22c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e23198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::Conduit::Manifest*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::Conduit::ManifestLoader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "manifestText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::ManifestLoader__LoadManifestFromJsonAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::Conduit::Manifest*>  __t__builder, ::Meta::Conduit::ManifestLoader*  __4__this, ::StringW  manifestText, ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->manifestText = manifestText;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6::ManifestLoader__LoadManifestFromJsonAsync_d__6()   {
}
