#pragma once
// IWYU pragma private; include "Fusion/NetworkDictionaryReadOnly_2.hpp"
#include "Fusion/zzzz__NetworkDictionaryReadOnly_2_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::get__free()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"get__free", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::get__freeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"get__freeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::get__usedCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"get__usedCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename K,typename V>
inline void Fusion::NetworkDictionaryReadOnly_2<K,V>::_ctor(int32_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<K>*  keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  valReaderWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<K>*>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<V>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, capacity, keyReaderWriter, valReaderWriter);
}
template<typename K,typename V>
inline V Fusion::NetworkDictionaryReadOnly_2<K,V>::Get(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"Get", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline bool Fusion::NetworkDictionaryReadOnly_2<K,V>::TryGet(K  key, ::by_ref<V>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"TryGet", {}, {::i2c::type_of<K>(), ::i2c::type_of<::by_ref<V>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, value);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::Find(K  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"Find", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, key);
}
template<typename K,typename V>
inline uint32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::GetBucketFromHashCode(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"GetBucketFromHashCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, hash);
}
template<typename K,typename V>
inline K Fusion::NetworkDictionaryReadOnly_2<K,V>::GetKey(int32_t  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"GetKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<K>(*this, ___internal_method, entry);
}
template<typename K,typename V>
inline V Fusion::NetworkDictionaryReadOnly_2<K,V>::GetVal(int32_t  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"GetVal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<V>(*this, ___internal_method, entry);
}
template<typename K,typename V>
inline int32_t Fusion::NetworkDictionaryReadOnly_2<K,V>::GetNxt(int32_t  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkDictionaryReadOnly_2<K,V>>(),
                        {"GetNxt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, entry);
}
// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nxtOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_keyOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_valOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_entryStride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bucketsOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_entriesOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_keyReaderWriter", ty: "::Fusion::IElementReaderWriter_1<K>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_valReaderWriter", ty: "::Fusion::IElementReaderWriter_1<V>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_equalityComparer", ty: "::System::Collections::Generic::EqualityComparer_1<K>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K,typename V>
constexpr ::Fusion::NetworkDictionaryReadOnly_2<K,V>::NetworkDictionaryReadOnly_2(int32_t*  _data, int32_t  _capacity, int32_t  _nxtOffset, int32_t  _keyOffset, int32_t  _valOffset, int32_t  _entryStride, int32_t  _bucketsOffset, int32_t  _entriesOffset, ::Fusion::IElementReaderWriter_1<K>*  _keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  _valReaderWriter, ::System::Collections::Generic::EqualityComparer_1<K>*  _equalityComparer) noexcept  {
this->_data = _data;
this->_capacity = _capacity;
this->_nxtOffset = _nxtOffset;
this->_keyOffset = _keyOffset;
this->_valOffset = _valOffset;
this->_entryStride = _entryStride;
this->_bucketsOffset = _bucketsOffset;
this->_entriesOffset = _entriesOffset;
this->_keyReaderWriter = _keyReaderWriter;
this->_valReaderWriter = _valReaderWriter;
this->_equalityComparer = _equalityComparer;
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::Fusion::NetworkDictionaryReadOnly_2<K,V>::NetworkDictionaryReadOnly_2()   {
}
