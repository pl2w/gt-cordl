#pragma once
// IWYU pragma private; include "Cysharp/Text/ZStringWriter.hpp"
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_impl.hpp"
#include "System/IO/zzzz__TextWriter_impl.hpp"
#include "Cysharp/Text/zzzz__ZStringWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)()>(&::Cysharp::Text::ZStringWriter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb9be3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)(::System::IFormatProvider*)>(&::Cysharp::Text::ZStringWriter::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb9be404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)()>(&::Cysharp::Text::ZStringWriter::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9be4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)(bool)>(&::Cysharp::Text::ZStringWriter::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb9be4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.get_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::Cysharp::Text::ZStringWriter::*)()>(&::Cysharp::Text::ZStringWriter::get_Encoding)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb9be554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)(char16_t)>(&::Cysharp::Text::ZStringWriter::Write)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb9be5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::Cysharp::Text::ZStringWriter::Write)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb9be71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)(::StringW)>(&::Cysharp::Text::ZStringWriter::Write)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb9be8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::ZStringWriter::*)(char16_t)>(&::Cysharp::Text::ZStringWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb9be9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::ZStringWriter::*)(::StringW)>(&::Cysharp::Text::ZStringWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb9bea8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::ZStringWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::Cysharp::Text::ZStringWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb9beb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.WriteLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::ZStringWriter::*)(char16_t)>(&::Cysharp::Text::ZStringWriter::WriteLineAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb9bec04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.WriteLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::ZStringWriter::*)(::StringW)>(&::Cysharp::Text::ZStringWriter::WriteLineAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb9becb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.WriteLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::ZStringWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::Cysharp::Text::ZStringWriter::WriteLineAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb9bed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)(bool)>(&::Cysharp::Text::ZStringWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb9bee2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)(::System::Decimal)>(&::Cysharp::Text::ZStringWriter::Write)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb9beeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.FlushAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Cysharp::Text::ZStringWriter::*)()>(&::Cysharp::Text::ZStringWriter::FlushAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9bef28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Cysharp::Text::ZStringWriter::*)()>(&::Cysharp::Text::ZStringWriter::ToString)> {
  constexpr static std::size_t size = 0x81e8;
  constexpr static std::size_t addrs = 0xb9befb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                    {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Text::ZStringWriter.AssertNotDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Text::ZStringWriter::*)()>(&::Cysharp::Text::ZStringWriter::AssertNotDisposed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb9be6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                        {"AssertNotDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Text::Utf16ValueStringBuilder& Cysharp::Text::ZStringWriter::__cordl_internal_get_sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr ::Cysharp::Text::Utf16ValueStringBuilder const& Cysharp::Text::ZStringWriter::__cordl_internal_get_sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr void Cysharp::Text::ZStringWriter::__cordl_internal_set_sb(::Cysharp::Text::Utf16ValueStringBuilder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sb = value;
}
constexpr bool& Cysharp::Text::ZStringWriter::__cordl_internal_get_isOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr bool const& Cysharp::Text::ZStringWriter::__cordl_internal_get_isOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOpen;
}
constexpr void Cysharp::Text::ZStringWriter::__cordl_internal_set_isOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOpen = value;
}
constexpr ::System::Text::UnicodeEncoding*& Cysharp::Text::ZStringWriter::__cordl_internal_get_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr ::System::Text::UnicodeEncoding* const& Cysharp::Text::ZStringWriter::__cordl_internal_get_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr void Cysharp::Text::ZStringWriter::__cordl_internal_set_encoding(::System::Text::UnicodeEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoding = value;
}
inline void Cysharp::Text::ZStringWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Text::ZStringWriter::_ctor(::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatProvider);
}
inline void Cysharp::Text::ZStringWriter::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Text::ZStringWriter::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Text::Encoding* Cysharp::Text::ZStringWriter::get_Encoding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void Cysharp::Text::ZStringWriter::Write(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cysharp::Text::ZStringWriter::Write(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void Cysharp::Text::ZStringWriter::Write(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::ZStringWriter::WriteAsync(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::ZStringWriter::WriteAsync(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::ZStringWriter::WriteAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::ZStringWriter::WriteLineAsync(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::ZStringWriter::WriteLineAsync(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::ZStringWriter::WriteLineAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, index, count);
}
inline void Cysharp::Text::ZStringWriter::Write(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cysharp::Text::ZStringWriter::Write(::System::Decimal  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Cysharp::Text::ZStringWriter::FlushAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::StringW Cysharp::Text::ZStringWriter::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Text::ZStringWriter*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Cysharp::Text::ZStringWriter::AssertNotDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ZStringWriter*>(),
                        {"AssertNotDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Text::ZStringWriter* Cysharp::Text::ZStringWriter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::ZStringWriter*>());
}
inline ::Cysharp::Text::ZStringWriter* Cysharp::Text::ZStringWriter::New_ctor(::System::IFormatProvider*  formatProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Text::ZStringWriter*>(formatProvider));
}
// Ctor Parameters []
constexpr ::Cysharp::Text::ZStringWriter::ZStringWriter()   {
}
