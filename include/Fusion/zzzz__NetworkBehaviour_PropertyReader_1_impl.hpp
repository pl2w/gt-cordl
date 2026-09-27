#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_PropertyReader_1.hpp"
#include "Fusion/zzzz__NetworkBehaviour_PropertyReader_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename T>
inline void GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>::_ctor(::Fusion::NetworkBehaviour_PropertyReaderData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template<typename T>
inline void GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>::_ctor(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, offset);
}
template<typename T>
inline T GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>::Read(::Fusion::NetworkBehaviourBuffer  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, first);
}
template<typename T>
inline ::System::ValueTuple_2<T,T> GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>::Read(::Fusion::NetworkBehaviourBuffer  first, ::Fusion::NetworkBehaviourBuffer  second)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T,T>>(*this, ___internal_method, first, second);
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Fusion::NetworkBehaviour_PropertyReaderData*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>::NetworkBehaviour_PropertyReader_1(::Fusion::NetworkBehaviour_PropertyReaderData*  Data) noexcept  {
this->Data = Data;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>::NetworkBehaviour_PropertyReader_1()   {
}
