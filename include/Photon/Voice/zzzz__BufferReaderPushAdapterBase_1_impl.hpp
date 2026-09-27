#pragma once
// IWYU pragma private; include "Photon/Voice/BufferReaderPushAdapterBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__BufferReaderPushAdapterBase_1_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "Photon/Voice/zzzz__IServiceable_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
template<typename T>
constexpr ::Photon::Voice::IDataReader_1<T>*& Photon::Voice::BufferReaderPushAdapterBase_1<T>::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
template<typename T>
constexpr ::Photon::Voice::IDataReader_1<T>* const& Photon::Voice::BufferReaderPushAdapterBase_1<T>::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
template<typename T>
constexpr void Photon::Voice::BufferReaderPushAdapterBase_1<T>::__cordl_internal_set_reader(::Photon::Voice::IDataReader_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
template<typename T>
inline void Photon::Voice::BufferReaderPushAdapterBase_1<T>::Service(::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterBase_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice);
}
template<typename T>
inline void Photon::Voice::BufferReaderPushAdapterBase_1<T>::_ctor(::Photon::Voice::IDataReader_1<T>*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterBase_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::IDataReader_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template<typename T>
inline void Photon::Voice::BufferReaderPushAdapterBase_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterBase_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::BufferReaderPushAdapterBase_1<T>* Photon::Voice::BufferReaderPushAdapterBase_1<T>::New_ctor(::Photon::Voice::IDataReader_1<T>*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::BufferReaderPushAdapterBase_1<T>*>(reader));
}
/// @brief Convert operator to "::Photon::Voice::IServiceable"
template<typename T>
constexpr  Photon::Voice::BufferReaderPushAdapterBase_1<T>::operator ::Photon::Voice::IServiceable*() noexcept {
return static_cast<::Photon::Voice::IServiceable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IServiceable"
template<typename T>
constexpr ::Photon::Voice::IServiceable* Photon::Voice::BufferReaderPushAdapterBase_1<T>::i___Photon__Voice__IServiceable() noexcept {
return static_cast<::Photon::Voice::IServiceable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::BufferReaderPushAdapterBase_1<T>::BufferReaderPushAdapterBase_1()   {
}
