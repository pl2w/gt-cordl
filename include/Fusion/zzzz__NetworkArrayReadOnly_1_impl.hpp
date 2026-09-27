#pragma once
// IWYU pragma private; include "Fusion/NetworkArrayReadOnly_1.hpp"
#include "Fusion/zzzz__NetworkArrayReadOnly_1_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
template<typename T>
inline int32_t Fusion::NetworkArrayReadOnly_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArrayReadOnly_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkArrayReadOnly_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArrayReadOnly_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void Fusion::NetworkArrayReadOnly_1<T>::_ctor(uint8_t*  array, int32_t  length, ::Fusion::IElementReaderWriter_1<T>*  readerWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkArrayReadOnly_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, length, readerWriter);
}
// Ctor Parameters [CppParam { name: "_array", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_readerWriter", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Fusion::NetworkArrayReadOnly_1<T>::NetworkArrayReadOnly_1(uint8_t*  _array, int32_t  _length, ::Fusion::IElementReaderWriter_1<T>*  _readerWriter) noexcept  {
this->_array = _array;
this->_length = _length;
this->_readerWriter = _readerWriter;
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkArrayReadOnly_1<T>::NetworkArrayReadOnly_1()   {
}
