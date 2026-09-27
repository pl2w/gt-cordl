#pragma once
// IWYU pragma private; include "System/Xml/XmlUrlResolver__GetEntityAsync_d__15.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Xml/zzzz__XmlUrlResolver__GetEntityAsync_d__15_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Xml/zzzz__XmlUrlResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::*)()>(&::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xabfb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xabfb4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ofObjectToReturn", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "absoluteUri", ty: "::System::Uri*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::System::Xml::XmlUrlResolver*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::XmlUrlResolver__GetEntityAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>  __t__builder, ::System::Type*  ofObjectToReturn, ::System::Uri*  absoluteUri, ::System::Xml::XmlUrlResolver*  __4__this, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->ofObjectToReturn = ofObjectToReturn;
this->absoluteUri = absoluteUri;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15::XmlUrlResolver__GetEntityAsync_d__15()   {
}
