#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder_Platform_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder_Platform_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder__AddAllMulipartUploadParts_d__35_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder__AddMultipartModfile_d__34_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder__PublishModfile_d__33_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder__RetryAddMultipartModfile_d__36_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.get_FilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::get_FilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_FilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.set_FilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::set_FilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_FilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_Version", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.get_ChangeLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::get_ChangeLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_ChangeLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.set_ChangeLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::set_ChangeLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_ChangeLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.get_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::get_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.set_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::set_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0398f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.get_Platforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ModfileBuilder_Platform> (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::get_Platforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa039900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_Platforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.set_Platforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModfileBuilder::*)(::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>)>(&::Modio::Mods::Builder::ModfileBuilder::set_Platforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa039908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_Platforms", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.get_ParentId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::get_ParentId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa039910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_ParentId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModfileBuilder::*)(::Modio::Mods::Builder::ModBuilder*)>(&::Modio::Mods::Builder::ModfileBuilder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa039934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Builder::ModBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.SetSourceDirectoryPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::SetSourceDirectoryPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa039964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetSourceDirectoryPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.SetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::SetVersion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa039980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.SetChangelog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::SetChangelog)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa03999c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetChangelog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.SetMetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModfileBuilder::SetMetadataBlob)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa0399b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetMetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.SetPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::GlobalNamespace::ModfileBuilder_Platform)>(&::Modio::Mods::Builder::ModfileBuilder::SetPlatform)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa0399d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::ModfileBuilder_Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.SetPlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*)>(&::Modio::Mods::Builder::ModfileBuilder::SetPlatforms)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa039a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetPlatforms", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.AppendPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::GlobalNamespace::ModfileBuilder_Platform)>(&::Modio::Mods::Builder::ModfileBuilder::AppendPlatform)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa039ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AppendPlatform", {}, {::i2c::type_of<::GlobalNamespace::ModfileBuilder_Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.AppendPlatforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)(::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*)>(&::Modio::Mods::Builder::ModfileBuilder::AppendPlatforms)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa039b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AppendPlatforms", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.FinishModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::FinishModfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa039bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"FinishModfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.PublishModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModfileBuilder::*)()>(&::Modio::Mods::Builder::ModfileBuilder::PublishModfile)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa039bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"PublishModfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.AddMultipartModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModfileBuilder::*)(::System::IO::Stream*)>(&::Modio::Mods::Builder::ModfileBuilder::AddMultipartModfile)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa039cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AddMultipartModfile", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.AddAllMulipartUploadParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW, int32_t, ::System::IO::Stream*)>(&::Modio::Mods::Builder::ModfileBuilder::AddAllMulipartUploadParts)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa039e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AddAllMulipartUploadParts", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.RetryAddMultipartModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>* (::Modio::Mods::Builder::ModfileBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW, ::ArrayW<::StringW>, ::System::IO::Stream*)>(&::Modio::Mods::Builder::ModfileBuilder::RetryAddMultipartModfile)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa039f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"RetryAddMultipartModfile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModfileBuilder.GetPlatformHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::ModfileBuilder_Platform)>(&::Modio::Mods::Builder::ModfileBuilder::GetPlatformHeader)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa03a0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"GetPlatformHeader", {}, {::i2c::type_of<::GlobalNamespace::ModfileBuilder_Platform>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__FilePath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilePath_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__FilePath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FilePath_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModfileBuilder::__cordl_internal_set__FilePath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FilePath_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__Version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__Version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModfileBuilder::__cordl_internal_set__Version_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Version_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__ChangeLog_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChangeLog_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__ChangeLog_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChangeLog_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModfileBuilder::__cordl_internal_set__ChangeLog_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChangeLog_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__MetadataBlob_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__MetadataBlob_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModfileBuilder::__cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MetadataBlob_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__Platforms_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Platforms_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform> const& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__Platforms_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Platforms_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModfileBuilder::__cordl_internal_set__Platforms_k__BackingField(::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Platforms_k__BackingField = value;
}
constexpr ::Modio::Mods::Builder::ModBuilder*& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__parentModBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentModBuilder;
}
constexpr ::Modio::Mods::Builder::ModBuilder* const& Modio::Mods::Builder::ModfileBuilder::__cordl_internal_get__parentModBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentModBuilder;
}
constexpr void Modio::Mods::Builder::ModfileBuilder::__cordl_internal_set__parentModBuilder(::Modio::Mods::Builder::ModBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentModBuilder = value;
}
inline ::StringW Modio::Mods::Builder::ModfileBuilder::get_FilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_FilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModfileBuilder::set_FilePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_FilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Builder::ModfileBuilder::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModfileBuilder::set_Version(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_Version", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Builder::ModfileBuilder::get_ChangeLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_ChangeLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModfileBuilder::set_ChangeLog(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_ChangeLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Builder::ModfileBuilder::get_MetadataBlob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModfileBuilder::set_MetadataBlob(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform> Modio::Mods::Builder::ModfileBuilder::get_Platforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_Platforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModfileBuilder::set_Platforms(::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"set_Platforms", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModId Modio::Mods::Builder::ModfileBuilder::get_ParentId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"get_ParentId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModfileBuilder::_ctor(::Modio::Mods::Builder::ModBuilder*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Builder::ModBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::SetSourceDirectoryPath(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetSourceDirectoryPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, filePath);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::SetVersion(::StringW  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, version);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::SetChangelog(::StringW  changelog)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetChangelog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, changelog);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::SetMetadataBlob(::StringW  metadataBlob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetMetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, metadataBlob);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::SetPlatform(::GlobalNamespace::ModfileBuilder_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::ModfileBuilder_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, platform);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::SetPlatforms(::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*  platforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"SetPlatforms", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, platforms);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::AppendPlatform(::GlobalNamespace::ModfileBuilder_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AppendPlatform", {}, {::i2c::type_of<::GlobalNamespace::ModfileBuilder_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, platform);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::AppendPlatforms(::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*  platforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AppendPlatforms", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method, platforms);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModfileBuilder::FinishModfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"FinishModfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModfileBuilder::PublishModfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"PublishModfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModfileBuilder::AddMultipartModfile(::System::IO::Stream*  readStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AddMultipartModfile", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, readStream);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModfileBuilder::AddAllMulipartUploadParts(::StringW  uploadId, int32_t  partCount, ::System::IO::Stream*  readStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"AddAllMulipartUploadParts", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, uploadId, partCount, readStream);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>* Modio::Mods::Builder::ModfileBuilder::RetryAddMultipartModfile(::StringW  uploadId, ::StringW  version, ::StringW  changelog, ::StringW  metadataBlob, ::ArrayW<::StringW>  platforms, ::System::IO::Stream*  readStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"RetryAddMultipartModfile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>*>(this, ___internal_method, uploadId, version, changelog, metadataBlob, platforms, readStream);
}
inline ::StringW Modio::Mods::Builder::ModfileBuilder::GetPlatformHeader(::GlobalNamespace::ModfileBuilder_Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModfileBuilder*>(),
                        {"GetPlatformHeader", {}, {::i2c::type_of<::GlobalNamespace::ModfileBuilder_Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platform);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModfileBuilder::New_ctor(::Modio::Mods::Builder::ModBuilder*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Builder::ModfileBuilder*>(parent));
}
// Ctor Parameters []
constexpr ::Modio::Mods::Builder::ModfileBuilder::ModfileBuilder()   {
}
