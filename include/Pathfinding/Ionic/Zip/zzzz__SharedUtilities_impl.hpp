#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/SharedUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__SharedUtilities_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.GetFileLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::Pathfinding::Ionic::Zip::SharedUtilities::GetFileLength)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa68cc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"GetFileLength", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.SimplifyFwdSlashPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Pathfinding::Ionic::Zip::SharedUtilities::SimplifyFwdSlashPath)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa68cdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"SimplifyFwdSlashPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.NormalizePathForUseInZipFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Pathfinding::Ionic::Zip::SharedUtilities::NormalizePathForUseInZipFile)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa68cee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"NormalizePathForUseInZipFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.StringToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::System::Text::Encoding*)>(&::Pathfinding::Ionic::Zip::SharedUtilities::StringToByteArray)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa68d018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"StringToByteArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.StringToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Pathfinding::Ionic::Zip::SharedUtilities::StringToByteArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa68d040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"StringToByteArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.Utf8StringFromBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Pathfinding::Ionic::Zip::SharedUtilities::Utf8StringFromBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa68d0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"Utf8StringFromBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.StringFromBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, ::System::Text::Encoding*)>(&::Pathfinding::Ionic::Zip::SharedUtilities::StringFromBuffer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa68d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"StringFromBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.ReadSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::SharedUtilities::ReadSignature)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa68d14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadSignature", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.ReadEntrySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::SharedUtilities::ReadEntrySignature)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa68d358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadEntrySignature", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.ReadInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::SharedUtilities::ReadInt)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa68d574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadInt", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities._ReadFourBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, ::StringW)>(&::Pathfinding::Ionic::Zip::SharedUtilities::_ReadFourBytes)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa68d234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"_ReadFourBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.FindSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IO::Stream*, int32_t)>(&::Pathfinding::Ionic::Zip::SharedUtilities::FindSignature)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa68d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"FindSignature", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.AdjustTime_Reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime)>(&::Pathfinding::Ionic::Zip::SharedUtilities::AdjustTime_Reverse)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa68d828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"AdjustTime_Reverse", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.PackedToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int32_t)>(&::Pathfinding::Ionic::Zip::SharedUtilities::PackedToDateTime)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0xa68d9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"PackedToDateTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.DateTimeToPacked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::DateTime)>(&::Pathfinding::Ionic::Zip::SharedUtilities::DateTimeToPacked)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa68e03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"DateTimeToPacked", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.CreateAndOpenUniqueTempFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::System::IO::Stream*>, ::by_ref<::StringW>)>(&::Pathfinding::Ionic::Zip::SharedUtilities::CreateAndOpenUniqueTempFile)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa68e12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"CreateAndOpenUniqueTempFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.InternalGetTempFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Pathfinding::Ionic::Zip::SharedUtilities::InternalGetTempFileName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa68e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"InternalGetTempFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.GenerateRandomStringImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::SharedUtilities::GenerateRandomStringImpl)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa68e364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"GenerateRandomStringImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SharedUtilities.ReadWithRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, int32_t, ::StringW)>(&::Pathfinding::Ionic::Zip::SharedUtilities::ReadWithRetry)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa68e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadWithRetry", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::SharedUtilities::setStaticF_doubleDotRegex1(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "doubleDotRegex1", ::Pathfinding::Ionic::Zip::SharedUtilities*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Pathfinding::Ionic::Zip::SharedUtilities::getStaticF_doubleDotRegex1()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "doubleDotRegex1", ::Pathfinding::Ionic::Zip::SharedUtilities*>();
}
inline void Pathfinding::Ionic::Zip::SharedUtilities::setStaticF_ibm437(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "ibm437", ::Pathfinding::Ionic::Zip::SharedUtilities*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::SharedUtilities::getStaticF_ibm437()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "ibm437", ::Pathfinding::Ionic::Zip::SharedUtilities*>();
}
inline void Pathfinding::Ionic::Zip::SharedUtilities::setStaticF_utf8(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "utf8", ::Pathfinding::Ionic::Zip::SharedUtilities*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::SharedUtilities::getStaticF_utf8()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf8", ::Pathfinding::Ionic::Zip::SharedUtilities*>();
}
inline int64_t Pathfinding::Ionic::Zip::SharedUtilities::GetFileLength(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"GetFileLength", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, fileName);
}
inline ::StringW Pathfinding::Ionic::Zip::SharedUtilities::SimplifyFwdSlashPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"SimplifyFwdSlashPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW Pathfinding::Ionic::Zip::SharedUtilities::NormalizePathForUseInZipFile(::StringW  pathName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"NormalizePathForUseInZipFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pathName);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::SharedUtilities::StringToByteArray(::StringW  value, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"StringToByteArray", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value, encoding);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::SharedUtilities::StringToByteArray(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"StringToByteArray", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::StringW Pathfinding::Ionic::Zip::SharedUtilities::Utf8StringFromBuffer(::ArrayW<uint8_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"Utf8StringFromBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buf);
}
inline ::StringW Pathfinding::Ionic::Zip::SharedUtilities::StringFromBuffer(::ArrayW<uint8_t>  buf, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"StringFromBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buf, encoding);
}
inline int32_t Pathfinding::Ionic::Zip::SharedUtilities::ReadSignature(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadSignature", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t Pathfinding::Ionic::Zip::SharedUtilities::ReadEntrySignature(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadEntrySignature", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t Pathfinding::Ionic::Zip::SharedUtilities::ReadInt(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadInt", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t Pathfinding::Ionic::Zip::SharedUtilities::_ReadFourBytes(::System::IO::Stream*  s, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"_ReadFourBytes", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, message);
}
inline int64_t Pathfinding::Ionic::Zip::SharedUtilities::FindSignature(::System::IO::Stream*  stream, int32_t  SignatureToFind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"FindSignature", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, stream, SignatureToFind);
}
inline ::System::DateTime Pathfinding::Ionic::Zip::SharedUtilities::AdjustTime_Reverse(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"AdjustTime_Reverse", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, time);
}
inline ::System::DateTime Pathfinding::Ionic::Zip::SharedUtilities::PackedToDateTime(int32_t  packedDateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"PackedToDateTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, packedDateTime);
}
inline int32_t Pathfinding::Ionic::Zip::SharedUtilities::DateTimeToPacked(::System::DateTime  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"DateTimeToPacked", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, time);
}
inline void Pathfinding::Ionic::Zip::SharedUtilities::CreateAndOpenUniqueTempFile(::StringW  dir, ::by_ref<::System::IO::Stream*>  fs, ::by_ref<::StringW>  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"CreateAndOpenUniqueTempFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dir, fs, filename);
}
inline ::StringW Pathfinding::Ionic::Zip::SharedUtilities::InternalGetTempFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"InternalGetTempFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::SharedUtilities::GenerateRandomStringImpl(int32_t  length, int32_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"GenerateRandomStringImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, length, delta);
}
inline int32_t Pathfinding::Ionic::Zip::SharedUtilities::ReadWithRetry(::System::IO::Stream*  s, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::StringW  FileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SharedUtilities*>(),
                        {"ReadWithRetry", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, buffer, offset, count, FileName);
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::SharedUtilities::SharedUtilities()   {
}
