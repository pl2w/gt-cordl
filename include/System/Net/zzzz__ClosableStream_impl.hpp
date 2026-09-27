#pragma once
// IWYU pragma private; include "System/Net/ClosableStream.hpp"
#include "System/Net/zzzz__DelegatedStream_impl.hpp"
#include "System/Net/zzzz__ClosableStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
//  Writing Method size for method: ::System::Net::ClosableStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ClosableStream::*)(::System::IO::Stream*, ::System::EventHandler*)>(&::System::Net::ClosableStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xadaf9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ClosableStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::EventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ClosableStream.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ClosableStream::*)()>(&::System::Net::ClosableStream::Close)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xadafa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ClosableStream*>(),
                    {::i2c::class_of<::System::Net::ClosableStream*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler*& System::Net::ClosableStream::__cordl_internal_get__onClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClose;
}
constexpr ::System::EventHandler* const& System::Net::ClosableStream::__cordl_internal_get__onClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClose;
}
constexpr void System::Net::ClosableStream::__cordl_internal_set__onClose(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onClose = value;
}
constexpr int32_t& System::Net::ClosableStream::__cordl_internal_get__closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closed;
}
constexpr int32_t const& System::Net::ClosableStream::__cordl_internal_get__closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closed;
}
constexpr void System::Net::ClosableStream::__cordl_internal_set__closed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closed = value;
}
inline void System::Net::ClosableStream::_ctor(::System::IO::Stream*  stream, ::System::EventHandler*  onClose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ClosableStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::EventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, onClose);
}
inline void System::Net::ClosableStream::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ClosableStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::ClosableStream* System::Net::ClosableStream::New_ctor(::System::IO::Stream*  stream, ::System::EventHandler*  onClose)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ClosableStream*>(stream, onClose));
}
// Ctor Parameters []
constexpr ::System::Net::ClosableStream::ClosableStream()   {
}
