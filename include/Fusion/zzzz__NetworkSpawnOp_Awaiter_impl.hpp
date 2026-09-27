#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnOp_Awaiter.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_impl.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_Awaiter_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkSpawnOp_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkSpawnOp_Awaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSpawnOp_Awaiter::*)(::by_ref<::Fusion::NetworkSpawnOp>)>(&::GlobalNamespace::NetworkSpawnOp_Awaiter::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd9dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSpawnOp>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSpawnOp_Awaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkSpawnOp_Awaiter::*)()>(&::GlobalNamespace::NetworkSpawnOp_Awaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fd9f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSpawnOp_Awaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::GlobalNamespace::NetworkSpawnOp_Awaiter::*)()>(&::GlobalNamespace::NetworkSpawnOp_Awaiter::GetResult)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5fd9fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkSpawnOp_Awaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkSpawnOp_Awaiter::*)(::System::Action*)>(&::GlobalNamespace::NetworkSpawnOp_Awaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5fda1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkSpawnOp_Awaiter::_ctor(/* [IsReadOnly] */ ::by_ref<::Fusion::NetworkSpawnOp>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkSpawnOp>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op);
}
inline bool GlobalNamespace::NetworkSpawnOp_Awaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkObject> GlobalNamespace::NetworkSpawnOp_Awaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(*this, ___internal_method);
}
inline void GlobalNamespace::NetworkSpawnOp_Awaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkSpawnOp_Awaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::NetworkSpawnOp_Awaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::NetworkSpawnOp_Awaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_op", ty: "::Fusion::NetworkSpawnOp", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSpawnOp_Awaiter::NetworkSpawnOp_Awaiter(::Fusion::NetworkSpawnOp  _op) noexcept  {
this->_op = _op;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSpawnOp_Awaiter::NetworkSpawnOp_Awaiter()   {
}
