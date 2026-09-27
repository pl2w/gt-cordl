#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipFile.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_UpdateCommand_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__INameTransform_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IArchiveStorage_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IDynamicDataSource_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IEntryFactory_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IStaticDataSource_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__KeysRequiredEventArgs_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__TestStrategy_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_HeaderTest_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_UpdateCommand_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipTestResultHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.OnKeysRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::OnKeysRequired)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f83c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"OnKeysRequired", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f83d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f83d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_Key", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.set_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::set_Password)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f7d0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_HaveKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_HaveKeys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f83d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_HaveKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9f83d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::System::IO::FileStream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f848d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::FileStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::System::IO::FileStream*, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9f848e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::FileStream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f84ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::System::IO::Stream*, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9f7cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f84ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f84ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Close)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f84c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipFile* (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Create)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9f84c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipFile* (*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Create)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9f84d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Create", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f84ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f84ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_IsEmbeddedArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsEmbeddedArchive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f84ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsEmbeddedArchive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_IsNewArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsNewArchive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f84ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsNewArchive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_ZipFileComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_ZipFileComment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f84ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_ZipFileComment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f84ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_Size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f84ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f84f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_EntryByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipEntry* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_EntryByIndex)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f84f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_EntryByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetEnumerator)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f7d17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.FindEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::FindEntry)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9f85004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"FindEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipEntry* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetEntry)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f850e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetInputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetInputStream)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9f7e4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetInputStream", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetInputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetInputStream)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9f851f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetInputStream", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.TestArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::TestArchive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f85964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"TestArchive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.TestArchive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(bool, ::ICSharpCode::SharpZipLib::Zip::TestStrategy, ::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::TestArchive)> {
  constexpr static std::size_t size = 0xa68;
  constexpr static std::size_t addrs = 0x9f85970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"TestArchive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::TestStrategy>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.TestLocalHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::GlobalNamespace::ZipFile_HeaderTest)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::TestLocalHeader)> {
  constexpr static std::size_t size = 0x106c;
  constexpr static std::size_t addrs = 0x9f863d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"TestLocalHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::GlobalNamespace::ZipFile_HeaderTest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_NameTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Core::INameTransform* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_NameTransform)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f8762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_NameTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.set_NameTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Core::INameTransform*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::set_NameTransform)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f876d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_NameTransform", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_EntryFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::IEntryFactory* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_EntryFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8777c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_EntryFactory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.set_EntryFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::set_EntryFactory)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f87784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_EntryFactory", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IEntryFactory*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_BufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f877e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::set_BufferSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f877f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_IsUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsUpdating)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f87880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsUpdating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.get_UseZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::UseZip64 (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::get_UseZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f87890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_UseZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.set_UseZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::UseZip64)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::set_UseZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f87898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_UseZip64", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::UseZip64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.BeginUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*, ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::BeginUpdate)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x9f878a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"BeginUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.BeginUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::BeginUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f87df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"BeginUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.BeginUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::BeginUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f87e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"BeginUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CommitUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CommitUpdate)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x9f87f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CommitUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.AbortUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::AbortUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f89710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AbortUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.SetComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::SetComment)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9f89800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"SetComment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.AddUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::AddUpdate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9f8999c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AddUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9f89bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9f89e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9f89fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9f8a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f8a268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::StringW, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f8a434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::StringW, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9f8a5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f8a754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Add)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9f8a944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.AddDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::AddDirectory)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9f8aa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AddDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CheckSupportedCompressionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CheckSupportedCompressionMethod)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f89d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CheckSupportedCompressionMethod", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Delete)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9f8abc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Delete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f8ad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Delete", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteLEShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEShort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f8aea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteLEUshort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(uint16_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEUshort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f8aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEUshort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteLEInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f8af40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteLEUint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(uint32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEUint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f8af6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEUint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteLeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLeLong)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9f8af94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLeLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteLEUlong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(uint64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEUlong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9f8afd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEUlong", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteLocalEntryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLocalEntryHeader)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x9f8b018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLocalEntryHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteCentralDirectoryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteCentralDirectoryHeader)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x9f8b5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteCentralDirectoryHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.PostUpdateCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::PostUpdateCleanup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f89714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"PostUpdateCleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetTransformedFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetTransformedFileName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f8bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetTransformedFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetTransformedDirectoryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetTransformedDirectoryName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9f8bc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetTransformedDirectoryName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f8bccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CopyDescriptorBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, ::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CopyDescriptorBytes)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9f8bd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyDescriptorBytes", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CopyBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, ::System::IO::Stream*, int64_t, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CopyBytes)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x9f8bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyBytes", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetDescriptorSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetDescriptorSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f8bef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetDescriptorSize", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CopyDescriptorBytesDirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, ::by_ref<int64_t>, int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CopyDescriptorBytesDirect)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9f8c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyDescriptorBytesDirect", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CopyEntryDataDirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::System::IO::Stream*, bool, ::by_ref<int64_t>, ::by_ref<int64_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CopyEntryDataDirect)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9f8c33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyEntryDataDirect", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.FindExistingUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::FindExistingUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9f8ae08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"FindExistingUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.FindExistingUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::FindExistingUpdate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f89b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"FindExistingUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.GetOutputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::GetOutputStream)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x9f8c5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetOutputStream", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::AddEntry)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x9f8c9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AddEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.ModifyEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::ModifyEntry)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x9f8d0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ModifyEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CopyEntryDirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::by_ref<int64_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CopyEntryDirect)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x9f8d3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyEntryDirect", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CopyEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CopyEntry)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f8d5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Reopen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Reopen)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f8d6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Reopen", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Reopen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Reopen)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f8d764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Reopen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.UpdateCommentOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::UpdateCommentOnly)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x9f88e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"UpdateCommentOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.RunUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::RunUpdates)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x9f882b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"RunUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CheckUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CheckUpdating)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f88260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CheckUpdating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f8d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.DisposeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::DisposeInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9f84788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"DisposeInternal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8d998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.ReadLEUshort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::ReadLEUshort)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9f87588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadLEUshort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.ReadLEUint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::ReadLEUint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f87558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadLEUint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.ReadLEUlong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::ReadLEUlong)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f8d9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadLEUlong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.LocateBlockWithSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(int32_t, int64_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::LocateBlockWithSignature)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9f8d9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"LocateBlockWithSignature", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.ReadEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::ReadEntries)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x9f83f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.LocateEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::LocateEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f854c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"LocateEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CreateAndInitDecryptionStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CreateAndInitDecryptionStream)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x9f8557c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CreateAndInitDecryptionStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CreateAndInitEncryptionStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::ZipFile::*)(::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CreateAndInitEncryptionStream)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9f8c7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CreateAndInitEncryptionStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.CheckClassicPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Security::Cryptography::CryptoStream*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::CheckClassicPassword)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f8db7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CheckClassicPassword", {}, {::i2c::type_of<::System::Security::Cryptography::CryptoStream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile.WriteEncryptionHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile::WriteEncryptionHeader)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9f8dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteEncryptionHeader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_KeysRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeysRequired;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_KeysRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeysRequired;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_KeysRequired(::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeysRequired = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_isDisposed_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_isDisposed_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_isDisposed_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_name_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_name_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_name_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_comment_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_comment_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_comment_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comment_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_rawPassword_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawPassword_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_rawPassword_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawPassword_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_rawPassword_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawPassword_ = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_baseStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream_;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_baseStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_baseStream_(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseStream_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_isStreamOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStreamOwner;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_isStreamOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStreamOwner;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_isStreamOwner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStreamOwner = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_offsetOfFirstEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetOfFirstEntry;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_offsetOfFirstEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetOfFirstEntry;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_offsetOfFirstEntry(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetOfFirstEntry = value;
}
constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_entries_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries_;
}
constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*> const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_entries_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_entries_(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries_ = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_key(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_isNewArchive_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNewArchive_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_isNewArchive_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isNewArchive_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_isNewArchive_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isNewArchive_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_useZip64_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useZip64_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64 const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_useZip64_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useZip64_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_useZip64_(::ICSharpCode::SharpZipLib::Zip::UseZip64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useZip64_ = value;
}
constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updates_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updates_;
}
constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updates_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updates_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_updates_(::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updates_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateCount_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCount_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateCount_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateCount_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_updateCount_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateCount_ = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateIndex_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateIndex_;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateIndex_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateIndex_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_updateIndex_(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateIndex_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_archiveStorage_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___archiveStorage_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_archiveStorage_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___archiveStorage_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_archiveStorage_(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___archiveStorage_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateDataSource_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDataSource_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateDataSource_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDataSource_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_updateDataSource_(::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateDataSource_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_contentsEdited_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentsEdited_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_contentsEdited_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentsEdited_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_contentsEdited_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentsEdited_ = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_bufferSize_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize_;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_bufferSize_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_bufferSize_(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferSize_ = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_copyBuffer_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyBuffer_;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_copyBuffer_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyBuffer_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_copyBuffer_(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyBuffer_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_newComment_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newComment_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_newComment_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newComment_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_newComment_(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newComment_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_commentEdited_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commentEdited_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_commentEdited_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commentEdited_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_commentEdited_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commentEdited_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateEntryFactory_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateEntryFactory_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* const& ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_get_updateEntryFactory_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateEntryFactory_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile::__cordl_internal_set_updateEntryFactory_(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateEntryFactory_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::OnKeysRequired(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"OnKeysRequired", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ZipFile::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::set_Key(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_Key", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::set_Password(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::get_HaveKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_HaveKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor(::System::IO::FileStream*  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::FileStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor(::System::IO::FileStream*  file, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::FileStream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file, leaveOpen);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor(::System::IO::Stream*  stream, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, leaveOpen);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::Create(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(nullptr, ___internal_method, fileName);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::Create(::System::IO::Stream*  outStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Create", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(nullptr, ___internal_method, outStream);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsEmbeddedArchive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsEmbeddedArchive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsNewArchive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsNewArchive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipFile::get_ZipFileComment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_ZipFileComment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipFile::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipFile::get_EntryByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_EntryByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* ICSharpCode::SharpZipLib::Zip::ZipFile::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile::FindEntry(::StringW  name, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"FindEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name, ignoreCase);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipFile::GetEntry(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(this, ___internal_method, name);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::ZipFile::GetInputStream(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetInputStream", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, entry);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::ZipFile::GetInputStream(int64_t  entryIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetInputStream", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, entryIndex);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::TestArchive(bool  testData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"TestArchive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, testData);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::TestArchive(bool  testData, ::ICSharpCode::SharpZipLib::Zip::TestStrategy  strategy, ::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*  resultHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"TestArchive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::TestStrategy>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, testData, strategy, resultHandler);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile::TestLocalHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::GlobalNamespace::ZipFile_HeaderTest  tests)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"TestLocalHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::GlobalNamespace::ZipFile_HeaderTest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, entry, tests);
}
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* ICSharpCode::SharpZipLib::Zip::ZipFile::get_NameTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_NameTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Core::INameTransform*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_NameTransform", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* ICSharpCode::SharpZipLib::Zip::ZipFile::get_EntryFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_EntryFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::IEntryFactory*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::set_EntryFactory(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_EntryFactory", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IEntryFactory*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::get_IsUpdating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_IsUpdating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::UseZip64 ICSharpCode::SharpZipLib::Zip::ZipFile::get_UseZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"get_UseZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::UseZip64>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"set_UseZip64", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::UseZip64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::BeginUpdate(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  archiveStorage, ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"BeginUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveStorage, dataSource);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::BeginUpdate(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  archiveStorage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"BeginUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, archiveStorage);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::BeginUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"BeginUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CommitUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CommitUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::AbortUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AbortUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::SetComment(::StringW  comment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"SetComment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comment);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::AddUpdate(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AddUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod, bool  useUnicodeText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, compressionMethod, useUnicodeText);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, compressionMethod);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::StringW  fileName, ::StringW  entryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, entryName);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource, entryName);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource, entryName, compressionMethod);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod, bool  useUnicodeText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource, entryName, compressionMethod, useUnicodeText);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Add", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::AddDirectory(::StringW  directoryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AddDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directoryName);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CheckSupportedCompressionMethod(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CheckSupportedCompressionMethod", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, compressionMethod);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile::Delete(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Delete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fileName);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Delete(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Delete", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEShort(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEUshort(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEUshort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEInt(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEUint(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEUint", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLeLong(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLeLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLEUlong(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLEUlong", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteLocalEntryHeader(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteLocalEntryHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile::WriteCentralDirectoryHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteCentralDirectoryHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::PostUpdateCleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"PostUpdateCleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipFile::GetTransformedFileName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetTransformedFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipFile::GetTransformedDirectoryName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetTransformedDirectoryName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ZipFile::GetBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CopyDescriptorBytes(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  dest, ::System::IO::Stream*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyDescriptorBytes", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update, dest, source);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CopyBytes(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  destination, ::System::IO::Stream*  source, int64_t  bytesToCopy, bool  updateCrc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyBytes", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update, destination, source, bytesToCopy, updateCrc);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile::GetDescriptorSize(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, bool  includingSignature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetDescriptorSize", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, update, includingSignature);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CopyDescriptorBytesDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  stream, ::by_ref<int64_t>  destinationPosition, int64_t  sourcePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyDescriptorBytesDirect", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update, stream, destinationPosition, sourcePosition);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CopyEntryDataDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  stream, bool  updateCrc, ::by_ref<int64_t>  destinationPosition, ::by_ref<int64_t>  sourcePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyEntryDataDirect", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update, stream, updateCrc, destinationPosition, sourcePosition);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile::FindExistingUpdate(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"FindExistingUpdate", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entry);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile::FindExistingUpdate(::StringW  fileName, bool  isEntryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"FindExistingUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, fileName, isEntryName);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::ZipFile::GetOutputStream(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"GetOutputStream", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::AddEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"AddEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workFile, update);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::ModifyEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ModifyEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workFile, update);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CopyEntryDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::by_ref<int64_t>  destinationPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyEntryDirect", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workFile, update, destinationPosition);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CopyEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CopyEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workFile, update);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Reopen(::System::IO::Stream*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Reopen", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Reopen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"Reopen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::UpdateCommentOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"UpdateCommentOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::RunUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"RunUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CheckUpdating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CheckUpdating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::DisposeInternal(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"DisposeInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline uint16_t ICSharpCode::SharpZipLib::Zip::ZipFile::ReadLEUshort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadLEUshort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint32_t ICSharpCode::SharpZipLib::Zip::ZipFile::ReadLEUint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadLEUint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint64_t ICSharpCode::SharpZipLib::Zip::ZipFile::ReadLEUlong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadLEUlong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile::LocateBlockWithSignature(int32_t  signature, int64_t  endLocation, int32_t  minimumBlockSize, int32_t  maximumVariableData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"LocateBlockWithSignature", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, signature, endLocation, minimumBlockSize, maximumVariableData);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::ReadEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"ReadEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile::LocateEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"LocateEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, entry);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::ZipFile::CreateAndInitDecryptionStream(::System::IO::Stream*  baseStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CreateAndInitDecryptionStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, baseStream, entry);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::ZipFile::CreateAndInitEncryptionStream(::System::IO::Stream*  baseStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CreateAndInitEncryptionStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, baseStream, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::CheckClassicPassword(::System::Security::Cryptography::CryptoStream*  classicCryptoStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"CheckClassicPassword", {}, {::i2c::type_of<::System::Security::Cryptography::CryptoStream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, classicCryptoStream, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile::WriteEncryptionHeader(::System::IO::Stream*  stream, int64_t  crcValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(),
                        {"WriteEncryptionHeader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, crcValue);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(name));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::New_ctor(::System::IO::FileStream*  file)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(file));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::New_ctor(::System::IO::FileStream*  file, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(file, leaveOpen));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(stream));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::New_ctor(::System::IO::Stream*  stream, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(stream, leaveOpen));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* ICSharpCode::SharpZipLib::Zip::ZipFile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  ICSharpCode::SharpZipLib::Zip::ZipFile::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* ICSharpCode::SharpZipLib::Zip::ZipFile::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ICSharpCode::SharpZipLib::Zip::ZipFile::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ICSharpCode::SharpZipLib::Zip::ZipFile::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile::ZipFile()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile*, int64_t, int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f854c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f8e4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Read)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9f8e624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Write)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f8e7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f8e7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Seek)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9f8e824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f8e8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_Position)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f8e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::set_Position)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f8e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream.get_CanTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f8e9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 10}
                ));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile*& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_zipFile_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipFile_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile* const& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_zipFile_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipFile_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_set_zipFile_(::ICSharpCode::SharpZipLib::Zip::ZipFile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zipFile_ = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_baseStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream_;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_baseStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_set_baseStream_(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseStream_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_start_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_start_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_set_start_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_length_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_length_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_set_length_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_readPos_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readPos_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_readPos_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readPos_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_set_readPos_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readPos_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_end_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_get_end_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::__cordl_internal_set_end_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  zipFile, int64_t  start, int64_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zipFile, start, length);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::get_CanTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream* ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  zipFile, int64_t  start, int64_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*>(zipFile, start, length));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream::ZipFile_PartialInputStream()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f8c954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f8e440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8e46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f8e48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Seek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f8e4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8e4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 38}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::__cordl_internal_get_baseStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream_;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::__cordl_internal_get_baseStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::__cordl_internal_set_baseStream_(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseStream_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::_ctor(::System::IO::Stream*  baseStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseStream);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream* ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::New_ctor(::System::IO::Stream*  baseStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*>(baseStream));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream::ZipFile_UncompressedStream()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::*)(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f84fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f8e3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f8e3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f8e3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*> const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::__cordl_internal_set_array(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::_ctor(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  entries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entries);
}
inline ::System::Object* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::New_ctor(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  entries)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*>(entries));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator::ZipFile_ZipEntryEnumerator()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9f8993c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f8e21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString.get_IsSourceString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::get_IsSourceString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"get_IsSourceString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString.get_RawLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::get_RawLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f89978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"get_RawLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString.get_RawComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::get_RawComment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f89454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"get_RawComment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f8e2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString.MakeTextAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::MakeTextAvailable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f8e308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"MakeTextAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString.MakeBytesAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::MakeBytesAvailable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f8e254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"MakeBytesAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f8e38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_get_comment_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_get_comment_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comment_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_set_comment_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comment_ = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_get_rawComment_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawComment_;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_get_rawComment_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawComment_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_set_rawComment_(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawComment_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_get_isSourceString_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSourceString_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_get_isSourceString_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSourceString_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::__cordl_internal_set_isSourceString_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSourceString_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::_ctor(::StringW  comment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comment);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::_ctor(::ArrayW<uint8_t>  rawString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawString);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::get_IsSourceString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"get_IsSourceString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::get_RawLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"get_RawLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::get_RawComment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"get_RawComment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::MakeTextAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"MakeTextAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::MakeBytesAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"MakeBytesAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::op_Implicit___StringW(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*  zipString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, zipString);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::New_ctor(::StringW  comment)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(comment));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::New_ctor(::ArrayW<uint8_t>  rawString)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*>(rawString));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString::ZipFile_ZipString()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::StringW, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f89df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::StringW, ::StringW, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f8dfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::StringW, ::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::StringW, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f8e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f8a3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f8e178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::GlobalNamespace::ZipFile_UpdateCommand, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f8a858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ZipFile_UpdateCommand>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f87de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.get_Entry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipEntry* (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_Entry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_Entry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.get_OutEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipEntry* (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_OutEntry)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9f8b500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_OutEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.get_Command
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ZipFile_UpdateCommand (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_Command)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_Command", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.get_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_Filename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_Filename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.get_SizePatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_SizePatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_SizePatchOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.set_SizePatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::set_SizePatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"set_SizePatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.get_CrcPatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_CrcPatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_CrcPatchOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.set_CrcPatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::set_CrcPatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"set_CrcPatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.get_OffsetBasedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_OffsetBasedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_OffsetBasedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.set_OffsetBasedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::set_OffsetBasedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8e214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"set_OffsetBasedSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate.GetSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::GetSource)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f8ced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"GetSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_entry_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entry_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_entry_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entry_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set_entry_(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entry_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_outEntry_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outEntry_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_outEntry_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outEntry_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set_outEntry_(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outEntry_ = value;
}
constexpr ::GlobalNamespace::ZipFile_UpdateCommand& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_command_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___command_;
}
constexpr ::GlobalNamespace::ZipFile_UpdateCommand const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_command_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___command_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set_command_(::GlobalNamespace::ZipFile_UpdateCommand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___command_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_dataSource_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataSource_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_dataSource_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataSource_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set_dataSource_(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataSource_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_filename_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filename_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_filename_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filename_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set_filename_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filename_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_sizePatchOffset_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePatchOffset_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_sizePatchOffset_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePatchOffset_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set_sizePatchOffset_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizePatchOffset_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_crcPatchOffset_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcPatchOffset_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get_crcPatchOffset_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcPatchOffset_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set_crcPatchOffset_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crcPatchOffset_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get__offsetBasedSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetBasedSize;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_get__offsetBasedSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetBasedSize;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::__cordl_internal_set__offsetBasedSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offsetBasedSize = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::StringW  fileName, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, entryName, compressionMethod);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::StringW  fileName, ::StringW  entryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, entryName);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource, entryName, compressionMethod);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  original, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  updated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, original, updated);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::GlobalNamespace::ZipFile_UpdateCommand  command, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ZipFile_UpdateCommand>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_Entry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_OutEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_OutEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(this, ___internal_method);
}
inline ::GlobalNamespace::ZipFile_UpdateCommand ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_Command()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_Command", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ZipFile_UpdateCommand>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_Filename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_Filename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_SizePatchOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_SizePatchOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::set_SizePatchOffset(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"set_SizePatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_CrcPatchOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_CrcPatchOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::set_CrcPatchOffset(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"set_CrcPatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::get_OffsetBasedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"get_OffsetBasedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::set_OffsetBasedSize(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"set_OffsetBasedSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::GetSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(),
                        {"GetSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(fileName, entry));
}
/// @brief [Obsolete]
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::StringW  fileName, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(fileName, entryName, compressionMethod));
}
/// @brief [Obsolete]
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::StringW  fileName, ::StringW  entryName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(fileName, entryName));
}
/// @brief [Obsolete]
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(dataSource, entryName, compressionMethod));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(dataSource, entry));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  original, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  updated)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(original, updated));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::GlobalNamespace::ZipFile_UpdateCommand  command, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(command, entry));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(entry));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate::ZipFile_ZipUpdate()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::Compare)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f8df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f87df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::Compare(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  x, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer* ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>"
constexpr  ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::operator ::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>"
constexpr ::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>* ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::i___System__Collections__Generic__IComparer_1___ICSharpCode__SharpZipLib__Zip__ZipFile_ZipUpdate__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer::ZipFile_UpdateComparer()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f8de1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f8df28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::*)(::System::Object*, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*, ::System::AsyncCallback*, ::System::Object*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f8df3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::*)(::System::IAsyncResult*)>(&::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f8df64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::IAsyncResult* ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sender, e, callback, object);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler* ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler::ZipFile_KeysRequiredEventHandler()   {
}
