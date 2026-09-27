#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/JsonConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__JsonConverter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IO::Stream*, ::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::Encode)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d086e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::System::IO::Stream*, ::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d0882c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.AppendStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::JsonConverter* (::SouthPointe::Serialization::MessagePack::JsonConverter::*)()>(&::SouthPointe::Serialization::MessagePack::JsonConverter::AppendStream)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x9d0890c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"AppendStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::JsonConverter::*)()>(&::SouthPointe::Serialization::MessagePack::JsonConverter::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d09450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                    {::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.Indent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::JsonConverter* (::SouthPointe::Serialization::MessagePack::JsonConverter::*)()>(&::SouthPointe::Serialization::MessagePack::JsonConverter::Indent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d0946c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"Indent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::JsonConverter* (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::StringW)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::Append)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d08e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"Append", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.AppendIfPretty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::JsonConverter* (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::StringW)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::AppendIfPretty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d094e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"AppendIfPretty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.ValueSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::JsonConverter* (::SouthPointe::Serialization::MessagePack::JsonConverter::*)()>(&::SouthPointe::Serialization::MessagePack::JsonConverter::ValueSeparator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d09528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ValueSeparator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.AppendQuotedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::JsonConverter* (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::StringW)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::AppendQuotedString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d08e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"AppendQuotedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.StringifyBinary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::ArrayW<uint8_t>)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::StringifyBinary)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d08ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"StringifyBinary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.ReadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::ReadArray)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9d0905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ReadArray", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.ReadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::ReadMap)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9d0919c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ReadMap", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::JsonConverter.ReadExt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::JsonConverter::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::JsonConverter::ReadExt)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9d09330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ReadExt", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::FormatReader*& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::SouthPointe::Serialization::MessagePack::FormatReader* const& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_set_reader(::SouthPointe::Serialization::MessagePack::FormatReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr ::System::Text::StringBuilder*& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr ::System::Text::StringBuilder* const& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr void SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_set_builder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builder = value;
}
constexpr int32_t& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_indentationSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentationSize;
}
constexpr int32_t const& SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_get_indentationSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentationSize;
}
constexpr void SouthPointe::Serialization::MessagePack::JsonConverter::__cordl_internal_set_indentationSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indentationSize = value;
}
inline ::StringW SouthPointe::Serialization::MessagePack::JsonConverter::Encode(::System::IO::Stream*  stream, ::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"Encode", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stream, context);
}
inline void SouthPointe::Serialization::MessagePack::JsonConverter::_ctor(::System::IO::Stream*  stream, ::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, context);
}
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* SouthPointe::Serialization::MessagePack::JsonConverter::AppendStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"AppendStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::JsonConverter*>(this, ___internal_method);
}
inline ::StringW SouthPointe::Serialization::MessagePack::JsonConverter::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* SouthPointe::Serialization::MessagePack::JsonConverter::Indent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"Indent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::JsonConverter*>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* SouthPointe::Serialization::MessagePack::JsonConverter::Append(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"Append", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::JsonConverter*>(this, ___internal_method, str);
}
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* SouthPointe::Serialization::MessagePack::JsonConverter::AppendIfPretty(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"AppendIfPretty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::JsonConverter*>(this, ___internal_method, str);
}
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* SouthPointe::Serialization::MessagePack::JsonConverter::ValueSeparator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ValueSeparator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::JsonConverter*>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* SouthPointe::Serialization::MessagePack::JsonConverter::AppendQuotedString(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"AppendQuotedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::JsonConverter*>(this, ___internal_method, str);
}
inline void SouthPointe::Serialization::MessagePack::JsonConverter::StringifyBinary(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"StringifyBinary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void SouthPointe::Serialization::MessagePack::JsonConverter::ReadArray(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ReadArray", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline void SouthPointe::Serialization::MessagePack::JsonConverter::ReadMap(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ReadMap", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline void SouthPointe::Serialization::MessagePack::JsonConverter::ReadExt(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::JsonConverter*>(),
                        {"ReadExt", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline ::SouthPointe::Serialization::MessagePack::JsonConverter* SouthPointe::Serialization::MessagePack::JsonConverter::New_ctor(::System::IO::Stream*  stream, ::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::JsonConverter*>(stream, context));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::JsonConverter::JsonConverter()   {
}
