#pragma once
// IWYU pragma private; include "Photon/Voice/BufferReaderPushAdapterAsyncPoolFloatToShort.hpp"
#include "Photon/Voice/zzzz__BufferReaderPushAdapterBase_1_impl.hpp"
#include "Photon/Voice/zzzz__BufferReaderPushAdapterAsyncPoolFloatToShort_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
//  Writing Method size for method: ::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::*)(::Photon::Voice::LocalVoice*, ::Photon::Voice::IDataReader_1<float_t>*)>(&::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa74f70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>(), ::i2c::type_of<::Photon::Voice::IDataReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::Service)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa754104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort*>(),
                    {::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<float_t> const& Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::__cordl_internal_set_buffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
inline void Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<float_t>*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>(), ::i2c::type_of<::Photon::Voice::IDataReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice, reader);
}
inline void Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::Service(::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice);
}
inline ::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort* Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::New_ctor(::Photon::Voice::LocalVoice*  localVoice, ::Photon::Voice::IDataReader_1<float_t>*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort*>(localVoice, reader));
}
// Ctor Parameters []
constexpr ::Photon::Voice::BufferReaderPushAdapterAsyncPoolFloatToShort::BufferReaderPushAdapterAsyncPoolFloatToShort()   {
}
