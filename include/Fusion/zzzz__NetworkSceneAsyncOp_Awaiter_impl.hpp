#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneAsyncOp_Awaiter.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_impl.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_Awaiter_def.hpp"
#include "Fusion/zzzz__NetworkSceneAsyncOp_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::*)(::by_ref<::Fusion::NetworkSceneAsyncOp>)>(&::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fddc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSceneAsyncOp>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::*)()>(&::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fddc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::*)()>(&::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fddc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5fddd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSceneAsyncOp_Awaiter::_ctor(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkSceneAsyncOp>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSceneAsyncOp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op);
}
inline bool GlobalNamespace::NetworkSceneAsyncOp_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSceneAsyncOp_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSceneAsyncOp_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSceneAsyncOp_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::NetworkSceneAsyncOp_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::NetworkSceneAsyncOp_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_op", ty: "::Fusion::NetworkSceneAsyncOp", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::NetworkSceneAsyncOp_Awaiter(::Fusion::NetworkSceneAsyncOp  _op) noexcept  {
this->_op = _op;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSceneAsyncOp_Awaiter::NetworkSceneAsyncOp_Awaiter()   {
}
