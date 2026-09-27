#pragma once
// IWYU pragma private; include "LitJson/JsonWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__JsonWriter_def.hpp"
#include "LitJson/zzzz__Condition_def.hpp"
#include "LitJson/zzzz__WriterContext_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::LitJson::JsonWriter.get_IndentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::get_IndentValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6927c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_IndentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.set_IndentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(int32_t)>(&::LitJson::JsonWriter::set_IndentValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b69284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"set_IndentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.get_PrettyPrint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::get_PrettyPrint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_PrettyPrint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.set_PrettyPrint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(bool)>(&::LitJson::JsonWriter::set_PrettyPrint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b692a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"set_PrettyPrint", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.get_TextWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::TextWriter* (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::get_TextWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b692a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_TextWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.get_Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::get_Validate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b692b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.set_Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(bool)>(&::LitJson::JsonWriter::set_Validate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b692b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"set_Validate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b600bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::System::Text::StringBuilder*)>(&::LitJson::JsonWriter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b69450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::System::IO::TextWriter*)>(&::LitJson::JsonWriter::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b694bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.DoValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::LitJson::Condition)>(&::LitJson::JsonWriter::DoValidation)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b69540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"DoValidation", {}, {::i2c::type_of<::LitJson::Condition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::Init)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b6931c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.IntToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<char16_t>)>(&::LitJson::JsonWriter::IntToHex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b696cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Indent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::Indent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b6974c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Indent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Put
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::StringW)>(&::LitJson::JsonWriter::Put)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b69764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Put", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.PutNewline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::PutNewline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b697f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"PutNewline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.PutNewline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(bool)>(&::LitJson::JsonWriter::PutNewline)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b697f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"PutNewline", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.PutString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::StringW)>(&::LitJson::JsonWriter::PutString)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5b69880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"PutString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Unindent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::Unindent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b69b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Unindent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b69ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::JsonWriter*>(),
                    {::i2c::class_of<::LitJson::JsonWriter*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::Reset)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b66658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(bool)>(&::LitJson::JsonWriter::Write)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b65d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::System::Decimal)>(&::LitJson::JsonWriter::Write)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b671f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(double_t)>(&::LitJson::JsonWriter::Write)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b65b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(int32_t)>(&::LitJson::JsonWriter::Write)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b65cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(int64_t)>(&::LitJson::JsonWriter::Write)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b65e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::StringW)>(&::LitJson::JsonWriter::Write)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b65b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(uint64_t)>(&::LitJson::JsonWriter::Write)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b66408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.WriteArrayEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::WriteArrayEnd)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b65ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteArrayEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.WriteArrayStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::WriteArrayStart)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b65f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteArrayStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.WriteObjectEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::WriteObjectEnd)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b66308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteObjectEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.WriteObjectStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)()>(&::LitJson::JsonWriter::WriteObjectStart)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b660fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteObjectStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonWriter.WritePropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonWriter::*)(::StringW)>(&::LitJson::JsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b661f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WritePropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::LitJson::WriterContext*& LitJson::JsonWriter::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::LitJson::WriterContext* const& LitJson::JsonWriter::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_context(::LitJson::WriterContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::System::Collections::Generic::Stack_1<::LitJson::WriterContext*>*& LitJson::JsonWriter::__cordl_internal_get_ctx_stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx_stack;
}
constexpr ::System::Collections::Generic::Stack_1<::LitJson::WriterContext*>* const& LitJson::JsonWriter::__cordl_internal_get_ctx_stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctx_stack;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_ctx_stack(::System::Collections::Generic::Stack_1<::LitJson::WriterContext*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctx_stack = value;
}
constexpr bool& LitJson::JsonWriter::__cordl_internal_get_has_reached_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___has_reached_end;
}
constexpr bool const& LitJson::JsonWriter::__cordl_internal_get_has_reached_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___has_reached_end;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_has_reached_end(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___has_reached_end = value;
}
constexpr ::ArrayW<char16_t>& LitJson::JsonWriter::__cordl_internal_get_hex_seq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hex_seq;
}
constexpr ::ArrayW<char16_t> const& LitJson::JsonWriter::__cordl_internal_get_hex_seq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hex_seq;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_hex_seq(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hex_seq = value;
}
constexpr int32_t& LitJson::JsonWriter::__cordl_internal_get_indentation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentation;
}
constexpr int32_t const& LitJson::JsonWriter::__cordl_internal_get_indentation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentation;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_indentation(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indentation = value;
}
constexpr int32_t& LitJson::JsonWriter::__cordl_internal_get_indent_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indent_value;
}
constexpr int32_t const& LitJson::JsonWriter::__cordl_internal_get_indent_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indent_value;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_indent_value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indent_value = value;
}
constexpr ::System::Text::StringBuilder*& LitJson::JsonWriter::__cordl_internal_get_inst_string_builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_string_builder;
}
constexpr ::System::Text::StringBuilder* const& LitJson::JsonWriter::__cordl_internal_get_inst_string_builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_string_builder;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_inst_string_builder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_string_builder = value;
}
constexpr bool& LitJson::JsonWriter::__cordl_internal_get_pretty_print()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pretty_print;
}
constexpr bool const& LitJson::JsonWriter::__cordl_internal_get_pretty_print() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pretty_print;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_pretty_print(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pretty_print = value;
}
constexpr bool& LitJson::JsonWriter::__cordl_internal_get_validate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validate;
}
constexpr bool const& LitJson::JsonWriter::__cordl_internal_get_validate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validate;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_validate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validate = value;
}
constexpr ::System::IO::TextWriter*& LitJson::JsonWriter::__cordl_internal_get_writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr ::System::IO::TextWriter* const& LitJson::JsonWriter::__cordl_internal_get_writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr void LitJson::JsonWriter::__cordl_internal_set_writer(::System::IO::TextWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writer = value;
}
inline void LitJson::JsonWriter::setStaticF_number_format(::System::Globalization::NumberFormatInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::NumberFormatInfo*, "number_format", ::LitJson::JsonWriter*>(std::forward<::System::Globalization::NumberFormatInfo*>(value));
}
inline ::System::Globalization::NumberFormatInfo* LitJson::JsonWriter::getStaticF_number_format()  {
return ::cordl_internals::getStaticField<::System::Globalization::NumberFormatInfo*, "number_format", ::LitJson::JsonWriter*>();
}
inline int32_t LitJson::JsonWriter::get_IndentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_IndentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void LitJson::JsonWriter::set_IndentValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"set_IndentValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LitJson::JsonWriter::get_PrettyPrint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_PrettyPrint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::JsonWriter::set_PrettyPrint(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"set_PrettyPrint", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::TextWriter* LitJson::JsonWriter::get_TextWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_TextWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*>(this, ___internal_method);
}
inline bool LitJson::JsonWriter::get_Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"get_Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::JsonWriter::set_Validate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"set_Validate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LitJson::JsonWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::_ctor(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline void LitJson::JsonWriter::_ctor(::System::IO::TextWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void LitJson::JsonWriter::DoValidation(::LitJson::Condition  cond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"DoValidation", {}, {::i2c::type_of<::LitJson::Condition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cond);
}
inline void LitJson::JsonWriter::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::IntToHex(int32_t  n, ::ArrayW<char16_t>  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, n, hex);
}
inline void LitJson::JsonWriter::Indent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Indent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::Put(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Put", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void LitJson::JsonWriter::PutNewline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"PutNewline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::PutNewline(bool  add_comma)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"PutNewline", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, add_comma);
}
inline void LitJson::JsonWriter::PutString(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"PutString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void LitJson::JsonWriter::Unindent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Unindent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW LitJson::JsonWriter::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::JsonWriter*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LitJson::JsonWriter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::Write(bool  boolean)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boolean);
}
inline void LitJson::JsonWriter::Write(::System::Decimal  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonWriter::Write(double_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonWriter::Write(int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonWriter::Write(int64_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonWriter::Write(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void LitJson::JsonWriter::Write(uint64_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonWriter::WriteArrayEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteArrayEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::WriteArrayStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteArrayStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::WriteObjectEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteObjectEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::WriteObjectStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WriteObjectStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonWriter::WritePropertyName(::StringW  property_name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonWriter*>(),
                        {"WritePropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property_name);
}
inline ::LitJson::JsonWriter* LitJson::JsonWriter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonWriter*>());
}
inline ::LitJson::JsonWriter* LitJson::JsonWriter::New_ctor(::System::Text::StringBuilder*  sb)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonWriter*>(sb));
}
inline ::LitJson::JsonWriter* LitJson::JsonWriter::New_ctor(::System::IO::TextWriter*  writer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonWriter*>(writer));
}
// Ctor Parameters []
constexpr ::LitJson::JsonWriter::JsonWriter()   {
}
