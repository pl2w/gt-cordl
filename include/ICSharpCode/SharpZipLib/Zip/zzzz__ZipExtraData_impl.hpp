#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipExtraData.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipExtraData_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedData_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f82da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f80488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.GetEntryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::GetEntryData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f82e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"GetEntryData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9f82dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f82efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.GetStreamForTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::GetStreamForTag)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f82f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"GetStreamForTag", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.get_ValueLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_ValueLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_ValueLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.get_CurrentReadIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_CurrentReadIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_CurrentReadIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.get_UnreadCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_UnreadCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f82fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_UnreadCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::Find)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f80500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Find", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(::ICSharpCode::SharpZipLib::Zip::ITaggedData*)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddEntry)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9f830e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t, ::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddEntry)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9f83238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.StartNewEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::StartNewEntry)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f835bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"StartNewEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddNewEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddNewEntry)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f8361c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddNewEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f83680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddData", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f836a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddLeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddLeShort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f83718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddLeShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddLeInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddLeInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f83768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddLeInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.AddLeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddLeLong)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9f83794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddLeLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::Delete)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9f8345c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Delete", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.ReadLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadLong)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9f805b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.ReadInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadInt)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f838b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.ReadShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadShort)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f807cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadShort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f80828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::Skip)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f8393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Skip", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.ReadCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadCheck)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f837d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadCheck", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.ReadShortInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadShortInternal)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f83040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadShortInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.SetShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)(::by_ref<int32_t>, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::SetShort)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f83554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"SetShort", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipExtraData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipExtraData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipExtraData::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f83968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__readValueStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readValueStart;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__readValueStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readValueStart;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_set__readValueStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readValueStart = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__readValueLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readValueLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__readValueLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readValueLength;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_set__readValueLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readValueLength = value;
}
constexpr ::System::IO::MemoryStream*& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__newEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newEntry;
}
constexpr ::System::IO::MemoryStream* const& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__newEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newEntry;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_set__newEntry(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newEntry = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipExtraData::__cordl_internal_set__data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ZipExtraData::GetEntryData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"GetEntryData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::ZipExtraData::GetStreamForTag(int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"GetStreamForTag", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, tag);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::ICSharpCode::SharpZipLib::Zip::ITaggedData*> && ::cordl_internals::reference_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T ICSharpCode::SharpZipLib::Zip::ZipExtraData::GetData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                    {"GetData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_ValueLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_ValueLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_CurrentReadIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_CurrentReadIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::get_UnreadCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"get_UnreadCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipExtraData::Find(int32_t  headerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Find", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, headerID);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddEntry(::ICSharpCode::SharpZipLib::Zip::ITaggedData*  taggedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedData);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddEntry(int32_t  headerID, ::ArrayW<uint8_t>  fieldData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerID, fieldData);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::StartNewEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"StartNewEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddNewEntry(int32_t  headerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddNewEntry", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerID);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddData(uint8_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddData", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddData(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddLeShort(int32_t  toAdd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddLeShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toAdd);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddLeInt(int32_t  toAdd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddLeInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toAdd);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::AddLeLong(int64_t  toAdd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"AddLeLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toAdd);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipExtraData::Delete(int32_t  headerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Delete", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, headerID);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadShort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadShort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::Skip(int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Skip", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadCheck(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadCheck", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipExtraData::ReadShortInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"ReadShortInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::SetShort(::by_ref<int32_t>  index, int32_t  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"SetShort", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, source);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipExtraData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipExtraData* ICSharpCode::SharpZipLib::Zip::ZipExtraData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>());
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipExtraData* ICSharpCode::SharpZipLib::Zip::ZipExtraData::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>(data));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ICSharpCode::SharpZipLib::Zip::ZipExtraData::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ICSharpCode::SharpZipLib::Zip::ZipExtraData::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipExtraData::ZipExtraData()   {
}
