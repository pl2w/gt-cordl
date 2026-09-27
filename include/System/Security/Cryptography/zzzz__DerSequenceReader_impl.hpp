#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DerSequenceReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_DerTag_def.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.set_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(int32_t)>(&::System::Security::Cryptography::DerSequenceReader::set_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad31224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"set_ContentLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad3122c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad3124c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(::GlobalNamespace::DerSequenceReader_DerTag, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xad31260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.get_HasData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::get_HasData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad3141c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"get_HasData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.PeekTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::PeekTag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xad3142c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"PeekTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.SkipValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::SkipValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xad314c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"SkipValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadNextEncodedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadNextEncodedValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad31514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadNextEncodedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadBoolean)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xad316e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadBoolean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadInteger)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad317b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadInteger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadIntegerBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadIntegerBytes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad31864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadIntegerBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadBitString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadBitString)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xad31930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadBitString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadOctetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadOctetString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad31a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadOctetString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadOidAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadOidAsString)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xad31a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadOidAsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadUtf8String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadUtf8String)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad31d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadUtf8String", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadCollectionWithTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DerSequenceReader* (::System::Security::Cryptography::DerSequenceReader::*)(::GlobalNamespace::DerSequenceReader_DerTag)>(&::System::Security::Cryptography::DerSequenceReader::ReadCollectionWithTag)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xad31e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadCollectionWithTag", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DerSequenceReader* (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadSequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad31fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DerSequenceReader* (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad31fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadPrintableString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadPrintableString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad31fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadPrintableString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadIA5String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadIA5String)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad32034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadIA5String", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadT61String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadT61String)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xad320b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadT61String", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadX509Date
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadX509Date)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad3238c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadX509Date", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadUtcTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadUtcTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad3240c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadUtcTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadGeneralizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadGeneralizedTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad32458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadGeneralizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadBMPString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadBMPString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad326e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadBMPString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.TrimTrailingNulls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Cryptography::DerSequenceReader::TrimTrailingNulls)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xad31dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"TrimTrailingNulls", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)(::GlobalNamespace::DerSequenceReader_DerTag, ::StringW)>(&::System::Security::Cryptography::DerSequenceReader::ReadTime)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xad324a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadTime", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadContentAsBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::ReadContentAsBytes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad31880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadContentAsBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.EatTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(::GlobalNamespace::DerSequenceReader_DerTag)>(&::System::Security::Cryptography::DerSequenceReader::EatTag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad31360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"EatTag", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.CheckTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::DerSequenceReader_DerTag, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::DerSequenceReader::CheckTag)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xad31f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"CheckTag", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.EatLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::DerSequenceReader::*)()>(&::System::Security::Cryptography::DerSequenceReader::EatLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xad313e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"EatLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ScanContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Security::Cryptography::DerSequenceReader::ScanContentLength)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xad315c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ScanContentLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr int32_t& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr int32_t const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__end(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____end = value;
}
constexpr int32_t& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr int32_t const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__position(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____position = value;
}
constexpr int32_t& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__ContentLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentLength_k__BackingField;
}
constexpr int32_t const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__ContentLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentLength_k__BackingField;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__ContentLength_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ContentLength_k__BackingField = value;
}
inline void System::Security::Cryptography::DerSequenceReader::setStaticF_s_validityDateTimeFormatInfo(::System::Globalization::DateTimeFormatInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_validityDateTimeFormatInfo", ::System::Security::Cryptography::DerSequenceReader*>(std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Security::Cryptography::DerSequenceReader::getStaticF_s_validityDateTimeFormatInfo()  {
return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_validityDateTimeFormatInfo", ::System::Security::Cryptography::DerSequenceReader*>();
}
inline void System::Security::Cryptography::DerSequenceReader::setStaticF_s_utf8EncodingWithExceptionFallback(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "s_utf8EncodingWithExceptionFallback", ::System::Security::Cryptography::DerSequenceReader*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader::getStaticF_s_utf8EncodingWithExceptionFallback()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "s_utf8EncodingWithExceptionFallback", ::System::Security::Cryptography::DerSequenceReader*>();
}
inline void System::Security::Cryptography::DerSequenceReader::setStaticF_s_latin1Encoding(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "s_latin1Encoding", ::System::Security::Cryptography::DerSequenceReader*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader::getStaticF_s_latin1Encoding()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "s_latin1Encoding", ::System::Security::Cryptography::DerSequenceReader*>();
}
inline void System::Security::Cryptography::DerSequenceReader::set_ContentLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"set_ContentLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::DerSequenceReader::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::DerSequenceReader::_ctor(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
inline void System::Security::Cryptography::DerSequenceReader::_ctor(::GlobalNamespace::DerSequenceReader_DerTag  tagToEat, ::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagToEat, data, offset, length);
}
inline bool System::Security::Cryptography::DerSequenceReader::get_HasData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"get_HasData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t System::Security::Cryptography::DerSequenceReader::PeekTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"PeekTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::DerSequenceReader::SkipValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"SkipValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadNextEncodedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadNextEncodedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool System::Security::Cryptography::DerSequenceReader::ReadBoolean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadBoolean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::DerSequenceReader::ReadInteger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadInteger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadIntegerBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadIntegerBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadBitString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadBitString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadOctetString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadOctetString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadOidAsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadOidAsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadUtf8String()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadUtf8String", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::ReadCollectionWithTag(::GlobalNamespace::DerSequenceReader_DerTag  expected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadCollectionWithTag", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DerSequenceReader*>(this, ___internal_method, expected);
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::ReadSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DerSequenceReader*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::ReadSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DerSequenceReader*>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadPrintableString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadPrintableString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadIA5String()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadIA5String", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadT61String()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadT61String", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadX509Date()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadX509Date", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadUtcTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadUtcTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadGeneralizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadGeneralizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadBMPString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadBMPString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::TrimTrailingNulls(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"TrimTrailingNulls", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadTime(::GlobalNamespace::DerSequenceReader_DerTag  timeTag, ::StringW  formatString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadTime", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, timeTag, formatString);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DerSequenceReader::ReadContentAsBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ReadContentAsBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::DerSequenceReader::EatTag(::GlobalNamespace::DerSequenceReader_DerTag  expected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"EatTag", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expected);
}
inline void System::Security::Cryptography::DerSequenceReader::CheckTag(::GlobalNamespace::DerSequenceReader_DerTag  expected, ::ArrayW<uint8_t>  data, int32_t  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"CheckTag", {}, {::i2c::type_of<::GlobalNamespace::DerSequenceReader_DerTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, data, position);
}
inline int32_t System::Security::Cryptography::DerSequenceReader::EatLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"EatLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::DerSequenceReader::ScanContentLength(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  end, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader*>(),
                        {"ScanContentLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, offset, end, bytesConsumed);
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DerSequenceReader*>(data));
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::New_ctor(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DerSequenceReader*>(data, offset, length));
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::New_ctor(::GlobalNamespace::DerSequenceReader_DerTag  tagToEat, ::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DerSequenceReader*>(tagToEat, data, offset, length));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DerSequenceReader::DerSequenceReader()   {
}
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DerSequenceReader___c::*)()>(&::System::Security::Cryptography::DerSequenceReader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad327cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ReadT61String_b__45_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Security::Cryptography::DerSequenceReader___c::*)()>(&::System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xad327d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {"<ReadT61String>b__45_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ReadT61String_b__45_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Security::Cryptography::DerSequenceReader___c::*)()>(&::System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad32830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {"<ReadT61String>b__45_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ReadTime_b__51_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeFormatInfo* (::System::Security::Cryptography::DerSequenceReader___c::*)()>(&::System::Security::Cryptography::DerSequenceReader___c::_ReadTime_b__51_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xad32874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {"<ReadTime>b__51_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9(::System::Security::Cryptography::DerSequenceReader___c*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::DerSequenceReader___c*, "<>9", ::System::Security::Cryptography::DerSequenceReader___c*>(std::forward<::System::Security::Cryptography::DerSequenceReader___c*>(value));
}
inline ::System::Security::Cryptography::DerSequenceReader___c* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::DerSequenceReader___c*, "<>9", ::System::Security::Cryptography::DerSequenceReader___c*>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9__45_0(::System::Func_1<::System::Text::Encoding*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_0", ::System::Security::Cryptography::DerSequenceReader___c*>(std::forward<::System::Func_1<::System::Text::Encoding*>*>(value));
}
inline ::System::Func_1<::System::Text::Encoding*>* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9__45_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_0", ::System::Security::Cryptography::DerSequenceReader___c*>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9__45_1(::System::Func_1<::System::Text::Encoding*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_1", ::System::Security::Cryptography::DerSequenceReader___c*>(std::forward<::System::Func_1<::System::Text::Encoding*>*>(value));
}
inline ::System::Func_1<::System::Text::Encoding*>* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9__45_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_1", ::System::Security::Cryptography::DerSequenceReader___c*>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9__51_0(::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*, "<>9__51_0", ::System::Security::Cryptography::DerSequenceReader___c*>(std::forward<::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*>(value));
}
inline ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9__51_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*, "<>9__51_0", ::System::Security::Cryptography::DerSequenceReader___c*>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {"<ReadT61String>b__45_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {"<ReadT61String>b__45_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Security::Cryptography::DerSequenceReader___c::_ReadTime_b__51_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DerSequenceReader___c*>(),
                        {"<ReadTime>b__51_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DerSequenceReader___c* System::Security::Cryptography::DerSequenceReader___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DerSequenceReader___c*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DerSequenceReader___c::DerSequenceReader___c()   {
}
