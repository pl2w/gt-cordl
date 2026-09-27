#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_DictionaryReader_2.hpp"
#include "Fusion/zzzz__NetworkBehaviour_DictionaryReader_2_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkDictionaryReadOnly_2_def.hpp"
template<typename K,typename V>
inline ::Fusion::NetworkDictionaryReadOnly_2<K,V> GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V>::Read(::Fusion::NetworkBehaviourBuffer  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V>>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(*this, ___internal_method, first);
}
// Ctor Parameters [CppParam { name: "Data", ty: "::Fusion::NetworkBehaviour_PropertyReaderData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "KeyReaderWriter", ty: "::Fusion::IElementReaderWriter_1<K>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ValueReaderWriter", ty: "::Fusion::IElementReaderWriter_1<V>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K,typename V>
constexpr ::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V>::NetworkBehaviour_DictionaryReader_2(::Fusion::NetworkBehaviour_PropertyReaderData*  Data, ::Fusion::IElementReaderWriter_1<K>*  KeyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  ValueReaderWriter) noexcept  {
this->Data = Data;
this->KeyReaderWriter = KeyReaderWriter;
this->ValueReaderWriter = ValueReaderWriter;
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V>::NetworkBehaviour_DictionaryReader_2()   {
}
