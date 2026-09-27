#pragma once
// IWYU pragma private; include "Photon/Voice/BufferReaderPushAdapter_1.hpp"
#include "Photon/Voice/zzzz__BufferReaderPushAdapterBase_1_impl.hpp"
#include "Photon/Voice/zzzz__BufferReaderPushAdapter_1_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::BufferReaderPushAdapter_1<T>::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::BufferReaderPushAdapter_1<T>::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename T>
constexpr void Photon::Voice::BufferReaderPushAdapter_1<T>::__cordl_internal_set_buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
template<typename T>
inline void Photon::Voice::BufferReaderPushAdapter_1<T>::_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<T>*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapter_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>(), ::i2c::type_of<::Photon::Voice::IDataReader_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice, reader);
}
template<typename T>
inline void Photon::Voice::BufferReaderPushAdapter_1<T>::Service(::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::BufferReaderPushAdapter_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice);
}
template<typename T>
inline ::Photon::Voice::BufferReaderPushAdapter_1<T>* Photon::Voice::BufferReaderPushAdapter_1<T>::New_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<T>*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::BufferReaderPushAdapter_1<T>*>(localVoice, reader));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::BufferReaderPushAdapter_1<T>::BufferReaderPushAdapter_1()   {
}
