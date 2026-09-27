#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_BehaviourReader_1.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_PropertyReader_1_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_BehaviourReader_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename T>
inline T GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>::Read(::Fusion::NetworkBehaviourBuffer  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, first);
}
template<typename T>
inline ::System::ValueTuple_2<T,T> GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>::Read(::Fusion::NetworkBehaviourBuffer  first, ::Fusion::NetworkBehaviourBuffer  second)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T,T>>(*this, ___internal_method, first, second);
}
// Ctor Parameters [CppParam { name: "Runner", ty: "::UnityW<::Fusion::NetworkRunner>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reader", ty: "::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::Fusion::NetworkBehaviourId>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>::NetworkBehaviour_BehaviourReader_1(::UnityW<::Fusion::NetworkRunner>  Runner, ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::Fusion::NetworkBehaviourId>  Reader) noexcept  {
this->Runner = Runner;
this->Reader = Reader;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>::NetworkBehaviour_BehaviourReader_1()   {
}
