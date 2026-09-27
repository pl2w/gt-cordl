#pragma once
// IWYU pragma private; include "Photon/Voice/FrameOut_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::FrameOut_1<T>::__cordl_internal_get__Buf_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Buf_k__BackingField;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::FrameOut_1<T>::__cordl_internal_get__Buf_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Buf_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::FrameOut_1<T>::__cordl_internal_set__Buf_k__BackingField(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Buf_k__BackingField = value;
}
template<typename T>
constexpr bool& Photon::Voice::FrameOut_1<T>::__cordl_internal_get__EndOfStream_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndOfStream_k__BackingField;
}
template<typename T>
constexpr bool const& Photon::Voice::FrameOut_1<T>::__cordl_internal_get__EndOfStream_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndOfStream_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::FrameOut_1<T>::__cordl_internal_set__EndOfStream_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndOfStream_k__BackingField = value;
}
template<typename T>
inline void Photon::Voice::FrameOut_1<T>::_ctor(::ArrayW<T>  buf, bool  endOfStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameOut_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, endOfStream);
}
template<typename T>
inline ::Photon::Voice::FrameOut_1<T>* Photon::Voice::FrameOut_1<T>::Set(::ArrayW<T>  buf, bool  endOfStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameOut_1<T>*>(),
                        {"Set", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::FrameOut_1<T>*>(this, ___internal_method, buf, endOfStream);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::FrameOut_1<T>::get_Buf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameOut_1<T>*>(),
                        {"get_Buf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::FrameOut_1<T>::set_Buf(::ArrayW<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameOut_1<T>*>(),
                        {"set_Buf", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool Photon::Voice::FrameOut_1<T>::get_EndOfStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameOut_1<T>*>(),
                        {"get_EndOfStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::FrameOut_1<T>::set_EndOfStream(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameOut_1<T>*>(),
                        {"set_EndOfStream", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Photon::Voice::FrameOut_1<T>* Photon::Voice::FrameOut_1<T>::New_ctor(::ArrayW<T>  buf, bool  endOfStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::FrameOut_1<T>*>(buf, endOfStream));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::FrameOut_1<T>::FrameOut_1()   {
}
