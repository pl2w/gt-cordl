#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf8FormatHelper.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Text/zzzz__Utf8FormatHelper_def.hpp"
#include "System/Buffers/zzzz__StandardFormat_def.hpp"
template<typename TBufferWriter,typename T>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<uint8_t>*>)
inline void Cysharp::Text::Utf8FormatHelper::FormatTo(::by_ref<TBufferWriter>  sb, T  arg, int32_t  width, ::System::Buffers::StandardFormat  format, ::StringW  argName)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8FormatHelper*>(),
                    {"FormatTo", {::i2c::class_of<TBufferWriter>(), ::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<TBufferWriter>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TBufferWriter>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, arg, width, format, argName);
}
template<typename TBufferWriter,typename T>
requires(::cordl_internals::type_constraint<TBufferWriter, ::System::Buffers::IBufferWriter_1<uint8_t>*>)
inline void Cysharp::Text::Utf8FormatHelper::FormatToRightJustify(::by_ref<TBufferWriter>  sb, T  arg, int32_t  width, ::System::Buffers::StandardFormat  format, ::StringW  argName)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::Utf8FormatHelper*>(),
                    {"FormatToRightJustify", {::i2c::class_of<TBufferWriter>(), ::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<TBufferWriter>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Buffers::StandardFormat>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TBufferWriter>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, arg, width, format, argName);
}
// Ctor Parameters []
constexpr ::Cysharp::Text::Utf8FormatHelper::Utf8FormatHelper()   {
}
