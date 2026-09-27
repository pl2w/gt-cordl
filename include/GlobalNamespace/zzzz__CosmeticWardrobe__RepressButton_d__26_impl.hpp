#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticWardrobe__RepressButton_d__26.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobe__RepressButton_d__26_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticWardrobe_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::*)()>(&::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x578655c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5786820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "itemName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CosmeticWardrobe>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "button", ty: "::UnityW<::GlobalNamespace::GorillaPressableButton>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeft", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_startTime_5__2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_maxTime_5__3", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::CosmeticWardrobe__RepressButton_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  itemName, ::UnityW<::GlobalNamespace::CosmeticWardrobe>  __4__this, ::UnityW<::GlobalNamespace::GorillaPressableButton>  button, bool  isLeft, float_t  _startTime_5__2, float_t  _maxTime_5__3, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->itemName = itemName;
this->__4__this = __4__this;
this->button = button;
this->isLeft = isLeft;
this->_startTime_5__2 = _startTime_5__2;
this->_maxTime_5__3 = _maxTime_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26::CosmeticWardrobe__RepressButton_d__26()   {
}
