#pragma once
// IWYU pragma private; include "Fusion/Internal/UnityDictionarySurrogate_4.hpp"
#include "Fusion/Internal/zzzz__UnitySurrogateBase_impl.hpp"
#include "Fusion/Internal/zzzz__UnityDictionarySurrogate_4_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__SerializableDictionary_2_def.hpp"
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline void Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::setStaticF__keyReaderWriter(::Fusion::IElementReaderWriter_1<TKeyType>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<TKeyType>*, "_keyReaderWriter", ::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(std::forward<::Fusion::IElementReaderWriter_1<TKeyType>*>(value));
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline ::Fusion::IElementReaderWriter_1<TKeyType>* Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::getStaticF__keyReaderWriter()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<TKeyType>*, "_keyReaderWriter", ::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>();
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline void Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::setStaticF__valReaderWriter(::Fusion::IElementReaderWriter_1<TValueType>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<TValueType>*, "_valReaderWriter", ::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(std::forward<::Fusion::IElementReaderWriter_1<TValueType>*>(value));
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline ::Fusion::IElementReaderWriter_1<TValueType>* Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::getStaticF__valReaderWriter()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<TValueType>*, "_valReaderWriter", ::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>();
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline ::Fusion::SerializableDictionary_2<TKeyType,TValueType>* Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SerializableDictionary_2<TKeyType,TValueType>*>(this, ___internal_method);
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline void Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::set_DataProperty(::Fusion::SerializableDictionary_2<TKeyType,TValueType>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline void Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::Read(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline void Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::Write(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline void Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::Init(int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline void Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
inline ::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>* Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>*>());
}
// Ctor Parameters []
template<typename TKeyType,typename TKeyReaderWriter,typename TValueType,typename TValueReaderWriter>
constexpr ::Fusion::Internal::UnityDictionarySurrogate_4<TKeyType,TKeyReaderWriter,TValueType,TValueReaderWriter>::UnityDictionarySurrogate_4()   {
}
