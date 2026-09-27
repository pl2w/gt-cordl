#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Tar/zzzz__TarHeader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fef604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fef778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::ArrayW<uint8_t>, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fef780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::ICSharpCode::SharpZipLib::Tar::TarHeader*)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9fefb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::Clone)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9fefc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.CreateTarEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::CreateTarEntry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fefde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"CreateTarEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.CreateEntryFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarEntry* (*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::CreateEntryFromFile)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9feffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"CreateEntryFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::System::Object*)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9ff0388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ff0430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.IsDescendent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::ICSharpCode::SharpZipLib::Tar::TarEntry*)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::IsDescendent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9ff0458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"IsDescendent", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_TarHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Tar::TarHeader* (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_TarHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff04d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_TarHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_Name)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fefdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::set_Name)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fefdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_UserId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff0538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::set_UserId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff0550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_UserId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_GroupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_GroupId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff0568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_GroupId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.set_GroupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::set_GroupId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff0580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_GroupId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_UserName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff0598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_UserName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.set_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::set_UserName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ff05b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_UserName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_GroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_GroupName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff069c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_GroupName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.set_GroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::set_GroupName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ff06b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_GroupName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.SetIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::SetIds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff072c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"SetIds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.SetNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::StringW, ::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::SetNames)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ff0744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"SetNames", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_ModTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_ModTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff077c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_ModTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.set_ModTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::set_ModTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ff0794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_ModTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_File
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_File)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff0954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_File", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_Size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff095c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::set_Size)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ff0974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_Size", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.get_IsDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::get_IsDirectory)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9ff09f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_IsDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.GetFileTarHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::ICSharpCode::SharpZipLib::Tar::TarHeader*, ::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::GetFileTarHeader)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x9ff004c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"GetFileTarHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarHeader*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.GetDirectoryEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ICSharpCode::SharpZipLib::Tar::TarEntry*> (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)()>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::GetDirectoryEntries)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9ff0ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"GetDirectoryEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.WriteEntryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::WriteEntryHeader)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff0c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"WriteEntryHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.WriteEntryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Tar::TarEntry::*)(::ArrayW<uint8_t>, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::WriteEntryHeader)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ff0c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"WriteEntryHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.AdjustEntryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::AdjustEntryName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"AdjustEntryName", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.AdjustEntryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::StringW, ::System::Text::Encoding*)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::AdjustEntryName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9ff0f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"AdjustEntryName", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Tar::TarEntry.NameTarHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ICSharpCode::SharpZipLib::Tar::TarHeader*, ::StringW)>(&::ICSharpCode::SharpZipLib::Tar::TarEntry::NameTarHeader)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9fefe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"NameTarHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarHeader*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& ICSharpCode::SharpZipLib::Tar::TarEntry::__cordl_internal_get_file()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Tar::TarEntry::__cordl_internal_get_file() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarEntry::__cordl_internal_set_file(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___file = value;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarHeader*& ICSharpCode::SharpZipLib::Tar::TarEntry::__cordl_internal_get_header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___header;
}
constexpr ::ICSharpCode::SharpZipLib::Tar::TarHeader* const& ICSharpCode::SharpZipLib::Tar::TarEntry::__cordl_internal_get_header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___header;
}
constexpr void ICSharpCode::SharpZipLib::Tar::TarEntry::__cordl_internal_set_header(::ICSharpCode::SharpZipLib::Tar::TarHeader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___header = value;
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor(::ArrayW<uint8_t>  headerBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerBuffer);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor(::ArrayW<uint8_t>  headerBuffer, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerBuffer, nameEncoding);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::_ctor(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline ::System::Object* ICSharpCode::SharpZipLib::Tar::TarEntry::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarEntry::CreateTarEntry(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"CreateTarEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(nullptr, ___internal_method, name);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarEntry::CreateEntryFromFile(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"CreateEntryFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(nullptr, ___internal_method, fileName);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarEntry::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarEntry::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarEntry::IsDescendent(::ICSharpCode::SharpZipLib::Tar::TarEntry*  toTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"IsDescendent", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toTest);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarHeader* ICSharpCode::SharpZipLib::Tar::TarEntry::get_TarHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_TarHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Tar::TarHeader*>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarEntry::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarEntry::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::set_UserId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_UserId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ICSharpCode::SharpZipLib::Tar::TarEntry::get_GroupId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_GroupId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::set_GroupId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_GroupId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarEntry::get_UserName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_UserName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::set_UserName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_UserName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarEntry::get_GroupName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_GroupName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::set_GroupName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_GroupName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::SetIds(int32_t  userId, int32_t  groupId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"SetIds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, groupId);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::SetNames(::StringW  userName, ::StringW  groupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"SetNames", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userName, groupName);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Tar::TarEntry::get_ModTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_ModTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::set_ModTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_ModTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Tar::TarEntry::get_File()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_File", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Tar::TarEntry::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::set_Size(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"set_Size", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Tar::TarEntry::get_IsDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"get_IsDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::GetFileTarHeader(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header, ::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"GetFileTarHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarHeader*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, file);
}
inline ::ArrayW<::ICSharpCode::SharpZipLib::Tar::TarEntry*> ICSharpCode::SharpZipLib::Tar::TarEntry::GetDirectoryEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"GetDirectoryEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ICSharpCode::SharpZipLib::Tar::TarEntry*>>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::WriteEntryHeader(::ArrayW<uint8_t>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"WriteEntryHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outBuffer);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::WriteEntryHeader(::ArrayW<uint8_t>  outBuffer, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"WriteEntryHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outBuffer, nameEncoding);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::AdjustEntryName(::ArrayW<uint8_t>  buffer, ::StringW  newName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"AdjustEntryName", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, newName);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::AdjustEntryName(::ArrayW<uint8_t>  buffer, ::StringW  newName, ::System::Text::Encoding*  nameEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"AdjustEntryName", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, newName, nameEncoding);
}
inline void ICSharpCode::SharpZipLib::Tar::TarEntry::NameTarHeader(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(),
                        {"NameTarHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Tar::TarHeader*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, name);
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarEntry*>());
}
/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarEntry::New_ctor(::ArrayW<uint8_t>  headerBuffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(headerBuffer));
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarEntry::New_ctor(::ArrayW<uint8_t>  headerBuffer, ::System::Text::Encoding*  nameEncoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(headerBuffer, nameEncoding));
}
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* ICSharpCode::SharpZipLib::Tar::TarEntry::New_ctor(::ICSharpCode::SharpZipLib::Tar::TarHeader*  header)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Tar::TarEntry*>(header));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Tar::TarEntry::TarEntry()   {
}
