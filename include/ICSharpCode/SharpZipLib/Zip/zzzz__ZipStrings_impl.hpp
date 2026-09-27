#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipStrings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipStrings_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.get_CodePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::get_CodePage)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fd16c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"get_CodePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.set_CodePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::set_CodePage)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9fd1764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"set_CodePage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.get_SystemDefaultCodePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::get_SystemDefaultCodePage)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fd1838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"get_SystemDefaultCodePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.get_UseUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::get_UseUnicode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fd1890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"get_UseUnicode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.set_UseUnicode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::set_UseUnicode)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9fd1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"set_UseUnicode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.ConvertToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9fd19ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.ConvertToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fd1a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.EncodingFromFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::EncodingFromFlag)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9fd1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"EncodingFromFlag", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.ConvertToStringExt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToStringExt)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9fd1bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToStringExt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.ConvertToStringExt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToStringExt)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fcc22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToStringExt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.ConvertToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToArray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fccdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipStrings.ConvertToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fcfe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Zip::ZipStrings::setStaticF_codePage(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "codePage", ::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(std::forward<int32_t>(value));
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipStrings::getStaticF_codePage()  {
return ::cordl_internals::getStaticField<int32_t, "codePage", ::ICSharpCode::SharpZipLib::Zip::ZipStrings*>();
}
inline void ICSharpCode::SharpZipLib::Zip::ZipStrings::setStaticF__SystemDefaultCodePage_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<SystemDefaultCodePage>k__BackingField", ::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(std::forward<int32_t>(value));
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipStrings::getStaticF__SystemDefaultCodePage_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<SystemDefaultCodePage>k__BackingField", ::ICSharpCode::SharpZipLib::Zip::ZipStrings*>();
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipStrings::get_CodePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"get_CodePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipStrings::set_CodePage(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"set_CodePage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipStrings::get_SystemDefaultCodePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"get_SystemDefaultCodePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipStrings::get_UseUnicode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"get_UseUnicode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipStrings::set_UseUnicode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"set_UseUnicode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToString(::ArrayW<uint8_t>  data, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, count);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToString(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data);
}
inline ::System::Text::Encoding* ICSharpCode::SharpZipLib::Zip::ZipStrings::EncodingFromFlag(int32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"EncodingFromFlag", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, flags);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToStringExt(int32_t  flags, ::ArrayW<uint8_t>  data, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToStringExt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flags, data, count);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToStringExt(int32_t  flags, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToStringExt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flags, data);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToArray(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, str);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ZipStrings::ConvertToArray(int32_t  flags, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipStrings*>(),
                        {"ConvertToArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, flags, str);
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipStrings::ZipStrings()   {
}
