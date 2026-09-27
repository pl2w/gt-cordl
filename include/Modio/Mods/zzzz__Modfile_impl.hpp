#pragma once
// IWYU pragma private; include "Modio/Mods/Modfile.hpp"
#include "Modio/Mods/zzzz__ModFileState_impl.hpp"
#include "Modio/Mods/zzzz__ModfileDownloadReference_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
#include "Modio/Mods/zzzz__ModfileDownloadReference_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
//  Writing Method size for method: ::Modio::Mods::Modfile.get_ModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_ModId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_ModId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_ModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(int64_t)>(&::Modio::Mods::Modfile::set_ModId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_ModId", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(int64_t)>(&::Modio::Mods::Modfile::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Id", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_FileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_FileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_FileSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_FileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(int64_t)>(&::Modio::Mods::Modfile::set_FileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_FileSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_ArchiveFileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_ArchiveFileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_ArchiveFileSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_ArchiveFileSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(int64_t)>(&::Modio::Mods::Modfile::set_ArchiveFileSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_ArchiveFileSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_InstallLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_InstallLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_InstallLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_InstallLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::StringW)>(&::Modio::Mods::Modfile::set_InstallLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_InstallLocation", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::StringW)>(&::Modio::Mods::Modfile::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Version", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::StringW)>(&::Modio::Mods::Modfile::set_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModFileState (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::Modio::Mods::ModFileState)>(&::Modio::Mods::Modfile::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_State", {}, {::i2c::type_of<::Modio::Mods::ModFileState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_FileStateErrorCause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_FileStateErrorCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_FileStateErrorCause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_FileStateErrorCause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::Modio::Error*)>(&::Modio::Mods::Modfile::set_FileStateErrorCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_FileStateErrorCause", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_FileStateProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_FileStateProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_FileStateProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_FileStateProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(float_t)>(&::Modio::Mods::Modfile::set_FileStateProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_FileStateProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_DownloadingBytesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_DownloadingBytesPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_DownloadingBytesPerSecond", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_DownloadingBytesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(int64_t)>(&::Modio::Mods::Modfile::set_DownloadingBytesPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_DownloadingBytesPerSecond", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_Download
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModfileDownloadReference (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_Download)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa030c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Download", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_Download
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::Modio::Mods::ModfileDownloadReference)>(&::Modio::Mods::Modfile::set_Download)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa030c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Download", {}, {::i2c::type_of<::Modio::Mods::ModfileDownloadReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.get_Md5Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Modfile::*)()>(&::Modio::Mods::Modfile::get_Md5Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Md5Hash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.set_Md5Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::StringW)>(&::Modio::Mods::Modfile::set_Md5Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Md5Hash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::Modio::API::SchemaDefinitions::ModfileObject)>(&::Modio::Mods::Modfile::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa028f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModfileObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Modfile.ApplyDetailsFromModfileObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Modfile::*)(::Modio::API::SchemaDefinitions::ModfileObject)>(&::Modio::Mods::Modfile::ApplyDetailsFromModfileObject)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa029004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"ApplyDetailsFromModfileObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModfileObject>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Modio::Mods::Modfile::__cordl_internal_get__ModId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ModId_k__BackingField;
}
constexpr int64_t const& Modio::Mods::Modfile::__cordl_internal_get__ModId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ModId_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__ModId_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ModId_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::Modfile::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr int64_t const& Modio::Mods::Modfile::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__Id_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::Modfile::__cordl_internal_get__FileSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileSize_k__BackingField;
}
constexpr int64_t const& Modio::Mods::Modfile::__cordl_internal_get__FileSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileSize_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__FileSize_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileSize_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::Modfile::__cordl_internal_get__ArchiveFileSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArchiveFileSize_k__BackingField;
}
constexpr int64_t const& Modio::Mods::Modfile::__cordl_internal_get__ArchiveFileSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArchiveFileSize_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__ArchiveFileSize_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ArchiveFileSize_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Modfile::__cordl_internal_get__InstallLocation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstallLocation_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Modfile::__cordl_internal_get__InstallLocation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstallLocation_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__InstallLocation_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InstallLocation_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Modfile::__cordl_internal_get__Version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Modfile::__cordl_internal_get__Version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__Version_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Version_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Modfile::__cordl_internal_get__MetadataBlob_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Modfile::__cordl_internal_get__MetadataBlob_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MetadataBlob_k__BackingField = value;
}
constexpr ::Modio::Mods::ModFileState& Modio::Mods::Modfile::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::Modio::Mods::ModFileState const& Modio::Mods::Modfile::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__State_k__BackingField(::Modio::Mods::ModFileState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
constexpr ::Modio::Error*& Modio::Mods::Modfile::__cordl_internal_get__FileStateErrorCause_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileStateErrorCause_k__BackingField;
}
constexpr ::Modio::Error* const& Modio::Mods::Modfile::__cordl_internal_get__FileStateErrorCause_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileStateErrorCause_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__FileStateErrorCause_k__BackingField(::Modio::Error*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileStateErrorCause_k__BackingField = value;
}
constexpr float_t& Modio::Mods::Modfile::__cordl_internal_get__FileStateProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileStateProgress_k__BackingField;
}
constexpr float_t const& Modio::Mods::Modfile::__cordl_internal_get__FileStateProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileStateProgress_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__FileStateProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileStateProgress_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::Modfile::__cordl_internal_get__DownloadingBytesPerSecond_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadingBytesPerSecond_k__BackingField;
}
constexpr int64_t const& Modio::Mods::Modfile::__cordl_internal_get__DownloadingBytesPerSecond_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadingBytesPerSecond_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__DownloadingBytesPerSecond_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DownloadingBytesPerSecond_k__BackingField = value;
}
constexpr ::Modio::Mods::ModfileDownloadReference& Modio::Mods::Modfile::__cordl_internal_get__Download_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Download_k__BackingField;
}
constexpr ::Modio::Mods::ModfileDownloadReference const& Modio::Mods::Modfile::__cordl_internal_get__Download_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Download_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__Download_k__BackingField(::Modio::Mods::ModfileDownloadReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Download_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Modfile::__cordl_internal_get__Md5Hash_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Md5Hash_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Modfile::__cordl_internal_get__Md5Hash_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Md5Hash_k__BackingField;
}
constexpr void Modio::Mods::Modfile::__cordl_internal_set__Md5Hash_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Md5Hash_k__BackingField = value;
}
inline int64_t Modio::Mods::Modfile::get_ModId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_ModId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_ModId(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_ModId", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::Modfile::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_Id(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Id", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::Modfile::get_FileSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_FileSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_FileSize(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_FileSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::Modfile::get_ArchiveFileSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_ArchiveFileSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_ArchiveFileSize(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_ArchiveFileSize", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Modfile::get_InstallLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_InstallLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_InstallLocation(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_InstallLocation", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Modfile::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_Version(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Version", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Modfile::get_MetadataBlob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_MetadataBlob(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModFileState Modio::Mods::Modfile::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModFileState>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_State(::Modio::Mods::ModFileState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_State", {}, {::i2c::type_of<::Modio::Mods::ModFileState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Error* Modio::Mods::Modfile::get_FileStateErrorCause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_FileStateErrorCause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_FileStateErrorCause(::Modio::Error*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_FileStateErrorCause", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Modio::Mods::Modfile::get_FileStateProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_FileStateProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_FileStateProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_FileStateProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::Modfile::get_DownloadingBytesPerSecond()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_DownloadingBytesPerSecond", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_DownloadingBytesPerSecond(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_DownloadingBytesPerSecond", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModfileDownloadReference Modio::Mods::Modfile::get_Download()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Download", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModfileDownloadReference>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_Download(::Modio::Mods::ModfileDownloadReference  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Download", {}, {::i2c::type_of<::Modio::Mods::ModfileDownloadReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Modfile::get_Md5Hash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"get_Md5Hash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Modfile::set_Md5Hash(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"set_Md5Hash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::Modfile::_ctor(::Modio::API::SchemaDefinitions::ModfileObject  modfileObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModfileObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modfileObject);
}
inline void Modio::Mods::Modfile::ApplyDetailsFromModfileObject(::Modio::API::SchemaDefinitions::ModfileObject  modfileObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Modfile*>(),
                        {"ApplyDetailsFromModfileObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModfileObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modfileObject);
}
inline ::Modio::Mods::Modfile* Modio::Mods::Modfile::New_ctor(::Modio::API::SchemaDefinitions::ModfileObject  modfileObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Modfile*>(modfileObject));
}
// Ctor Parameters []
constexpr ::Modio::Mods::Modfile::Modfile()   {
}
