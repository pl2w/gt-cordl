#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ArrayReader_1.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ArrayReader_1_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__NetworkArrayReadOnly_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
template<typename T>
inline ::Fusion::NetworkArrayReadOnly_1<T> GlobalNamespace::NetworkBehaviour_ArrayReader_1<T>::Read(::Fusion::NetworkBehaviourBuffer  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T>>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArrayReadOnly_1<T>>(*this, ___internal_method, first);
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Fusion::NetworkBehaviour_PropertyReaderData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReaderWriter", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T>::NetworkBehaviour_ArrayReader_1(::Fusion::NetworkBehaviour_PropertyReaderData*  Data, ::Fusion::IElementReaderWriter_1<T>*  ReaderWriter) noexcept  {
this->Data = Data;
this->ReaderWriter = ReaderWriter;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T>::NetworkBehaviour_ArrayReader_1()   {
}
