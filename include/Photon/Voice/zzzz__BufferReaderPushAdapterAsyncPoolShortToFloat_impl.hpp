#pragma once
// IWYU pragma private; include "Photon/Voice/BufferReaderPushAdapterAsyncPoolShortToFloat.hpp"
#include "Photon/Voice/zzzz__BufferReaderPushAdapterBase_1_impl.hpp"
#include "Photon/Voice/zzzz__BufferReaderPushAdapterAsyncPoolShortToFloat_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
//  Writing Method size for method: ::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::*)(::Photon::Voice::LocalVoice*, ::Photon::Voice::IDataReader_1<int16_t>*)>(&::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa74f7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>(), ::i2c::type_of<::Photon::Voice::IDataReader_1<int16_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::Service)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa7542d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*>(),
                    {::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<int16_t> const& Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::__cordl_internal_set_buffer(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
inline void Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<int16_t>*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>(), ::i2c::type_of<::Photon::Voice::IDataReader_1<int16_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice, reader);
}
inline void Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::Service(::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice);
}
inline ::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat* Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::New_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<int16_t>*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat*>(localVoice, reader));
}
// Ctor Parameters []
constexpr ::Photon::Voice::BufferReaderPushAdapterAsyncPoolShortToFloat::BufferReaderPushAdapterAsyncPoolShortToFloat()   {
}
