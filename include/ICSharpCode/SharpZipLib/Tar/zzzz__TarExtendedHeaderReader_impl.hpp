#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarExtendedHeaderReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarExtendedHeaderReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9ff111c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::*)(::ArrayW<uint8_t>, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::Read)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9ff12e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::Flush)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ff14e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader.ResetBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::ResetBuffers)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9ff124c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"ResetBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff1570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"get_Headers", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
constexpr ::ArrayW<::StringW>& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_headerParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerParts;
}
constexpr ::ArrayW<::StringW> const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_headerParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerParts;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_headerParts(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headerParts = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_bbIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bbIndex;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_bbIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bbIndex;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_bbIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bbIndex = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_byteBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_byteBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_byteBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___byteBuffer = value;
}
constexpr ::ArrayW<char16_t>& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_charBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___charBuffer;
}
constexpr ::ArrayW<char16_t> const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_charBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___charBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_charBuffer(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___charBuffer = value;
}
constexpr ::System::Text::StringBuilder*& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr ::System::Text::StringBuilder* const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_sb(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sb = value;
}
constexpr ::System::Text::Decoder*& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr ::System::Text::Decoder* const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoder;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_decoder(::System::Text::Decoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decoder = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::setStaticF_StateNext(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "StateNext", ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::getStaticF_StateNext()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "StateNext", ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>();
}
inline void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::Read(::ArrayW<uint8_t>  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, length);
}
inline void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::ResetBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"ResetBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>(),
                        {"get_Headers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader* ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Tar::TarExtendedHeaderReader::TarExtendedHeaderReader()   {
}
