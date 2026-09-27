#pragma once
// IWYU pragma private; include "Cysharp/Text/EnumUtil_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__EnumUtil_1_def.hpp"
#include "System/Buffers/zzzz__StandardFormat_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template<typename T>
inline void Cysharp::Text::EnumUtil_1<T>::setStaticF_names(::System::Collections::Generic::Dictionary_2<T,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<T,::StringW>*, "names", ::Cysharp::Text::EnumUtil_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<T,::StringW>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<T,::StringW>* Cysharp::Text::EnumUtil_1<T>::getStaticF_names()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<T,::StringW>*, "names", ::Cysharp::Text::EnumUtil_1<T>*>();
}
template<typename T>
inline void Cysharp::Text::EnumUtil_1<T>::setStaticF_utf8names(::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>*, "utf8names", ::Cysharp::Text::EnumUtil_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>* Cysharp::Text::EnumUtil_1<T>::getStaticF_utf8names()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<T,::ArrayW<uint8_t>>*, "utf8names", ::Cysharp::Text::EnumUtil_1<T>*>();
}
template<typename T>
inline bool Cysharp::Text::EnumUtil_1<T>::TryFormatUtf16(/* [Nullable(1)] */ T  value, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::EnumUtil_1<T>*>(),
                        {"TryFormatUtf16", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, dest, written, _);
}
template<typename T>
inline bool Cysharp::Text::EnumUtil_1<T>::TryFormatUtf8(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::EnumUtil_1<T>*>(),
                        {"TryFormatUtf8", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, dest, written, _);
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Text::EnumUtil_1<T>::EnumUtil_1()   {
}
