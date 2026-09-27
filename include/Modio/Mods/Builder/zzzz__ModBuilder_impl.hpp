#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder.hpp"
#include "Modio/Mods/Builder/zzzz__ChangeFlags_impl.hpp"
#include "Modio/Mods/Builder/zzzz__ImageFormat_impl.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_MonetizationOptions_impl.hpp"
#include "Modio/Mods/zzzz__ModCommunityOptions_impl.hpp"
#include "Modio/Mods/zzzz__ModMaturityOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_def.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "Modio/Mods/Builder/zzzz__ChangeFlags_def.hpp"
#include "Modio/Mods/Builder/zzzz__ImageFormat_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_MonetizationOptions_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__GalleryZipFromFilePaths_d__126_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__PublishDependencies_d__119_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__PublishEdits_d__116_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__PublishGallery_d__117_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__PublishMetadataKvps_d__118_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__PublishMonetization_d__121_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__PublishNewMod_d__113_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__PublishRemainingChanges_d__115_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__Publish_d__112_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder_def.hpp"
#include "Modio/Mods/zzzz__ModCommunityOptions_def.hpp"
#include "Modio/Mods/zzzz__ModMaturityOptions_def.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Results)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa031b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Summary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Summary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Summary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Summary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::set_Summary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Summary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Description", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_LogoFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_LogoFilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_LogoFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_LogoFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::set_LogoFilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_LogoFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_GalleryFilePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_GalleryFilePaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_GalleryFilePaths", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_GalleryFilePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::ArrayW<::StringW>)>(&::Modio::Mods::Builder::ModBuilder::set_GalleryFilePaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_GalleryFilePaths", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Tags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::ArrayW<::StringW>)>(&::Modio::Mods::Builder::ModBuilder::set_Tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Tags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::set_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_MetadataKvps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_MetadataKvps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_MetadataKvps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_MetadataKvps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Modio::Mods::Builder::ModBuilder::set_MetadataKvps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_MetadataKvps", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Dependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int64_t>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Dependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Dependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::List_1<int64_t>*)>(&::Modio::Mods::Builder::ModBuilder::set_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Dependencies", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Visible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(bool)>(&::Modio::Mods::Builder::ModBuilder::set_Visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Visible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_MaturityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModMaturityOptions (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_MaturityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_MaturityOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_MaturityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::ModMaturityOptions)>(&::Modio::Mods::Builder::ModBuilder::set_MaturityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_MaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_CommunityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModCommunityOptions (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_CommunityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_CommunityOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_CommunityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::ModCommunityOptions)>(&::Modio::Mods::Builder::ModBuilder::set_CommunityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_CommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_IsMonetized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_IsMonetized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_IsMonetized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_IsMonetized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(bool)>(&::Modio::Mods::Builder::ModBuilder::set_IsMonetized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_IsMonetized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_IsLimitedStock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_IsLimitedStock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_IsLimitedStock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_IsLimitedStock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(bool)>(&::Modio::Mods::Builder::ModBuilder::set_IsLimitedStock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_IsLimitedStock", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Price", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(int32_t)>(&::Modio::Mods::Builder::ModBuilder::set_Price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Price", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_Stock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_Stock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Stock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_Stock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(int32_t)>(&::Modio::Mods::Builder::ModBuilder::set_Stock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Stock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_IsEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_IsEditMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa031d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_IsEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.get_EditTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::get_EditTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_EditTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.set_EditTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::Mod*)>(&::Modio::Mods::Builder::ModBuilder::set_EditTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_EditTarget", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa028084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::Mod*)>(&::Modio::Mods::Builder::ModBuilder::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa028174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::SetName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa031d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetSummary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::SetSummary)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa031dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetSummary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::SetDescription)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa031de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(&::Modio::Mods::Builder::ModBuilder::SetTags)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa031e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetTags", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::SetTags)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa031e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.AppendTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(&::Modio::Mods::Builder::ModBuilder::AppendTags)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa031f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendTags", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.AppendTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::AppendTags)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa031fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetMetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::SetMetadataBlob)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa032034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.AppendMetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::AppendMetadataBlob)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa03205c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendMetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetMetadataKvps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Modio::Mods::Builder::ModBuilder::SetMetadataKvps)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa0320a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMetadataKvps", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetLogo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::SetLogo)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa032258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetLogo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetLogo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::ArrayW<uint8_t>, ::Modio::Mods::Builder::ImageFormat)>(&::Modio::Mods::Builder::ModBuilder::SetLogo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa032280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetLogo", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Modio::Mods::Builder::ImageFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(&::Modio::Mods::Builder::ModBuilder::SetGallery)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa0322b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetGallery", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::SetGallery)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa032334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetGallery", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.AppendGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(&::Modio::Mods::Builder::ModBuilder::AppendGallery)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa0323bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendGallery", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.AppendGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::AppendGallery)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa032460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendGallery", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::ICollection_1<int64_t>*)>(&::Modio::Mods::Builder::ModBuilder::SetDependencies)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa0324e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetDependencies", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(int64_t)>(&::Modio::Mods::Builder::ModBuilder::SetDependencies)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa032564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetDependencies", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.AppendDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::System::Collections::Generic::ICollection_1<int64_t>*)>(&::Modio::Mods::Builder::ModBuilder::AppendDependencies)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa0325dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendDependencies", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.AppendDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(int64_t)>(&::Modio::Mods::Builder::ModBuilder::AppendDependencies)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa032680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendDependencies", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.EditModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModfileBuilder* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::EditModfile)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa0326f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"EditModfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(bool)>(&::Modio::Mods::Builder::ModBuilder::SetVisible)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa03277c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetMaturityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::ModMaturityOptions)>(&::Modio::Mods::Builder::ModBuilder::SetMaturityOptions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa032790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.OverwriteMaturityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::ModMaturityOptions)>(&::Modio::Mods::Builder::ModBuilder::OverwriteMaturityOptions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa0327ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"OverwriteMaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetCommunityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::ModCommunityOptions)>(&::Modio::Mods::Builder::ModBuilder::SetCommunityOptions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa0327c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetCommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.OverwriteCommunityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::ModCommunityOptions)>(&::Modio::Mods::Builder::ModBuilder::OverwriteCommunityOptions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa0327dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"OverwriteCommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetMonetized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(bool)>(&::Modio::Mods::Builder::ModBuilder::SetMonetized)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa0327f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMonetized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetPrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(int32_t)>(&::Modio::Mods::Builder::ModBuilder::SetPrice)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa032820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetPrice", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetLimitedStock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(bool)>(&::Modio::Mods::Builder::ModBuilder::SetLimitedStock)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa0328fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetLimitedStock", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.SetStockAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Builder::ModBuilder::*)(int32_t)>(&::Modio::Mods::Builder::ModBuilder::SetStockAmount)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa032928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetStockAmount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.Publish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::Publish)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa032a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"Publish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishNewMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishNewMod)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa032b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishNewMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.TryGetLogoFileParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter> (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::TryGetLogoFileParameter)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa032c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"TryGetLogoFileParameter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishRemainingChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishRemainingChanges)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa0331e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishRemainingChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishEdits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishEdits)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa0332c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishEdits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishGallery)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa0333d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishGallery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishMetadataKvps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishMetadataKvps)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa0334d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishMetadataKvps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishDependencies)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa0335e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishDependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishModfile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa0336e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishModfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.PublishMonetization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::PublishMonetization)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa033700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishMonetization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.GetChangeSpecificPublishTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::Builder::ChangeFlags)>(&::Modio::Mods::Builder::ModBuilder::GetChangeSpecificPublishTask)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa033808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"GetChangeSpecificPublishTask", {}, {::i2c::type_of<::Modio::Mods::Builder::ChangeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.ValidateImageFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::ValidateImageFilePath)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xa033a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"ValidateImageFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.LogoFromByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::ModioAPIFileParameter (::Modio::Mods::Builder::ModBuilder::*)()>(&::Modio::Mods::Builder::ModBuilder::LogoFromByteArray)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa0330a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"LogoFromByteArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.LogoFromFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter> (*)(::StringW)>(&::Modio::Mods::Builder::ModBuilder::LogoFromFilePath)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa032eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"LogoFromFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.GalleryZipFromFilePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>* (*)(::System::Collections::Generic::ICollection_1<::StringW>*)>(&::Modio::Mods::Builder::ModBuilder::GalleryZipFromFilePaths)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa033ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"GalleryZipFromFilePaths", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder.GetExtensionFromFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Mods::Builder::ImageFormat)>(&::Modio::Mods::Builder::ModBuilder::GetExtensionFromFormat)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa033ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"GetExtensionFromFormat", {}, {::i2c::type_of<::Modio::Mods::Builder::ImageFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder._PublishRemainingChanges_b__115_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Builder::ModBuilder::*)(::Modio::Mods::Builder::ChangeFlags)>(&::Modio::Mods::Builder::ModBuilder::_PublishRemainingChanges_b__115_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa0340d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"<PublishRemainingChanges>b__115_0", {}, {::i2c::type_of<::Modio::Mods::Builder::ChangeFlags>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>*& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__commitErrors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commitErrors;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>* const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__commitErrors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commitErrors;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__commitErrors(::System::Collections::Generic::Dictionary_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____commitErrors = value;
}
constexpr ::Modio::Mods::Builder::ChangeFlags& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__pendingChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingChanges;
}
constexpr ::Modio::Mods::Builder::ChangeFlags const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__pendingChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingChanges;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__pendingChanges(::Modio::Mods::Builder::ChangeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingChanges = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Summary_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Summary_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Summary_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Summary_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Summary_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Summary_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Description_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Description_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Description_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Description_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Description_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Description_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__LogoFilePath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogoFilePath_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__LogoFilePath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogoFilePath_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__LogoFilePath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogoFilePath_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__logoBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logoBytes;
}
constexpr ::ArrayW<uint8_t> const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__logoBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logoBytes;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__logoBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logoBytes = value;
}
constexpr ::Modio::Mods::Builder::ImageFormat& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__logoBytesFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logoBytesFormat;
}
constexpr ::Modio::Mods::Builder::ImageFormat const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__logoBytesFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logoBytesFormat;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__logoBytesFormat(::Modio::Mods::Builder::ImageFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logoBytesFormat = value;
}
constexpr ::ArrayW<::StringW>& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__GalleryFilePaths_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GalleryFilePaths_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__GalleryFilePaths_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GalleryFilePaths_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__GalleryFilePaths_k__BackingField(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GalleryFilePaths_k__BackingField = value;
}
constexpr bool& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__appendingGallery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appendingGallery;
}
constexpr bool const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__appendingGallery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appendingGallery;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__appendingGallery(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appendingGallery = value;
}
constexpr ::ArrayW<::StringW>& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Tags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tags_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Tags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tags_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Tags_k__BackingField(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Tags_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__MetadataBlob_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__MetadataBlob_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MetadataBlob_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__MetadataKvps_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataKvps_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__MetadataKvps_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataKvps_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__MetadataKvps_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MetadataKvps_k__BackingField = value;
}
constexpr ::Modio::Mods::Builder::ModfileBuilder*& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__modfileBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modfileBuilder;
}
constexpr ::Modio::Mods::Builder::ModfileBuilder* const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__modfileBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modfileBuilder;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__modfileBuilder(::Modio::Mods::Builder::ModfileBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modfileBuilder = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Dependencies_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dependencies_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Dependencies_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dependencies_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Dependencies_k__BackingField(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Dependencies_k__BackingField = value;
}
constexpr bool& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__appendingDependencies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appendingDependencies;
}
constexpr bool const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__appendingDependencies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appendingDependencies;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__appendingDependencies(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____appendingDependencies = value;
}
constexpr bool& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Visible_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Visible_k__BackingField;
}
constexpr bool const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Visible_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Visible_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Visible_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Visible_k__BackingField = value;
}
constexpr ::Modio::Mods::ModMaturityOptions& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__MaturityOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaturityOptions_k__BackingField;
}
constexpr ::Modio::Mods::ModMaturityOptions const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__MaturityOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaturityOptions_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__MaturityOptions_k__BackingField(::Modio::Mods::ModMaturityOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaturityOptions_k__BackingField = value;
}
constexpr ::Modio::Mods::ModCommunityOptions& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__CommunityOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommunityOptions_k__BackingField;
}
constexpr ::Modio::Mods::ModCommunityOptions const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__CommunityOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommunityOptions_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__CommunityOptions_k__BackingField(::Modio::Mods::ModCommunityOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommunityOptions_k__BackingField = value;
}
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__monetizationOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monetizationOptions;
}
constexpr ::GlobalNamespace::ModBuilder_MonetizationOptions const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__monetizationOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monetizationOptions;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__monetizationOptions(::GlobalNamespace::ModBuilder_MonetizationOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monetizationOptions = value;
}
constexpr bool& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__IsMonetized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMonetized_k__BackingField;
}
constexpr bool const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__IsMonetized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMonetized_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__IsMonetized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMonetized_k__BackingField = value;
}
constexpr bool& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__IsLimitedStock_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLimitedStock_k__BackingField;
}
constexpr bool const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__IsLimitedStock_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLimitedStock_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__IsLimitedStock_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsLimitedStock_k__BackingField = value;
}
constexpr int32_t& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Price_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Price_k__BackingField;
}
constexpr int32_t const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Price_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Price_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Price_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Price_k__BackingField = value;
}
constexpr int32_t& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Stock_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stock_k__BackingField;
}
constexpr int32_t const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__Stock_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stock_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__Stock_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Stock_k__BackingField = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__EditTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EditTarget_k__BackingField;
}
constexpr ::Modio::Mods::Mod* const& Modio::Mods::Builder::ModBuilder::__cordl_internal_get__EditTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EditTarget_k__BackingField;
}
constexpr void Modio::Mods::Builder::ModBuilder::__cordl_internal_set__EditTarget_k__BackingField(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EditTarget_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>* Modio::Mods::Builder::ModBuilder::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*>(this, ___internal_method);
}
inline ::StringW Modio::Mods::Builder::ModBuilder::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Builder::ModBuilder::get_Summary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Summary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Summary(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Summary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Builder::ModBuilder::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Description(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Description", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Builder::ModBuilder::get_LogoFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_LogoFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_LogoFilePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_LogoFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Modio::Mods::Builder::ModBuilder::get_GalleryFilePaths()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_GalleryFilePaths", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_GalleryFilePaths(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_GalleryFilePaths", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Modio::Mods::Builder::ModBuilder::get_Tags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Tags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Tags(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Tags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Builder::ModBuilder::get_MetadataBlob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_MetadataBlob(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Modio::Mods::Builder::ModBuilder::get_MetadataKvps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_MetadataKvps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_MetadataKvps(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_MetadataKvps", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int64_t>* Modio::Mods::Builder::ModBuilder::get_Dependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Dependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int64_t>*>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Dependencies(::System::Collections::Generic::List_1<int64_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Dependencies", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Builder::ModBuilder::get_Visible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Visible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Visible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Visible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModMaturityOptions Modio::Mods::Builder::ModBuilder::get_MaturityOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_MaturityOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModMaturityOptions>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_MaturityOptions(::Modio::Mods::ModMaturityOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_MaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModCommunityOptions Modio::Mods::Builder::ModBuilder::get_CommunityOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_CommunityOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModCommunityOptions>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_CommunityOptions(::Modio::Mods::ModCommunityOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_CommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Builder::ModBuilder::get_IsMonetized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_IsMonetized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_IsMonetized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_IsMonetized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Builder::ModBuilder::get_IsLimitedStock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_IsLimitedStock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_IsLimitedStock(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_IsLimitedStock", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Mods::Builder::ModBuilder::get_Price()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Price", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Price(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Price", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Mods::Builder::ModBuilder::get_Stock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_Stock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_Stock(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_Stock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Builder::ModBuilder::get_IsEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_IsEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Modio::Mods::Mod* Modio::Mods::Builder::ModBuilder::get_EditTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"get_EditTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::set_EditTarget(::Modio::Mods::Mod*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"set_EditTarget", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::Builder::ModBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Mods::Builder::ModBuilder::_ctor(::Modio::Mods::Mod*  editTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editTarget);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, name);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetSummary(::StringW  summary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetSummary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, summary);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetDescription(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, description);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetTags(::System::Collections::Generic::ICollection_1<::StringW>*  tags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetTags", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, tags);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetTags(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, tag);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::AppendTags(::System::Collections::Generic::ICollection_1<::StringW>*  tags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendTags", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, tags);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::AppendTags(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, tag);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetMetadataBlob(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, data);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::AppendMetadataBlob(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendMetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, data);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetMetadataKvps(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  kvps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMetadataKvps", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, kvps);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetLogo(::StringW  logoFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetLogo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, logoFilePath);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetLogo(::ArrayW<uint8_t>  imageData, ::Modio::Mods::Builder::ImageFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetLogo", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Modio::Mods::Builder::ImageFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, imageData, format);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetGallery(::System::Collections::Generic::ICollection_1<::StringW>*  galleryImageFilePaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetGallery", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, galleryImageFilePaths);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetGallery(::StringW  galleryImageFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetGallery", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, galleryImageFilePath);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::AppendGallery(::System::Collections::Generic::ICollection_1<::StringW>*  galleryImageFilePaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendGallery", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, galleryImageFilePaths);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::AppendGallery(::StringW  galleryImageFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendGallery", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, galleryImageFilePath);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetDependencies(::System::Collections::Generic::ICollection_1<int64_t>*  dependencies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetDependencies", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, dependencies);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetDependencies(int64_t  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetDependencies", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, dependency);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::AppendDependencies(::System::Collections::Generic::ICollection_1<int64_t>*  dependencies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendDependencies", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, dependencies);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::AppendDependencies(int64_t  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"AppendDependencies", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, dependency);
}
inline ::Modio::Mods::Builder::ModfileBuilder* Modio::Mods::Builder::ModBuilder::EditModfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"EditModfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModfileBuilder*>(this, ___internal_method);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetVisible(bool  isVisible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, isVisible);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetMaturityOptions(::Modio::Mods::ModMaturityOptions  maturityOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, maturityOptions);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::OverwriteMaturityOptions(::Modio::Mods::ModMaturityOptions  maturityOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"OverwriteMaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, maturityOptions);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetCommunityOptions(::Modio::Mods::ModCommunityOptions  communityOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetCommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, communityOptions);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::OverwriteCommunityOptions(::Modio::Mods::ModCommunityOptions  communityOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"OverwriteCommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, communityOptions);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetMonetized(bool  isMonetized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetMonetized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, isMonetized);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetPrice(int32_t  price)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetPrice", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, price);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetLimitedStock(bool  isLimitedStock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetLimitedStock", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, isLimitedStock);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::SetStockAmount(int32_t  stockAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"SetStockAmount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method, stockAmount);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* Modio::Mods::Builder::ModBuilder::Publish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"Publish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* Modio::Mods::Builder::ModBuilder::PublishNewMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishNewMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>*>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter> Modio::Mods::Builder::ModBuilder::TryGetLogoFileParameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"TryGetLogoFileParameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Mods::Builder::ModBuilder::PublishRemainingChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishRemainingChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* Modio::Mods::Builder::ModBuilder::PublishEdits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishEdits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModBuilder::PublishGallery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishGallery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModBuilder::PublishMetadataKvps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishMetadataKvps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModBuilder::PublishDependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishDependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModBuilder::PublishModfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishModfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModBuilder::PublishMonetization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"PublishMonetization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Builder::ModBuilder::GetChangeSpecificPublishTask(::Modio::Mods::Builder::ChangeFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"GetChangeSpecificPublishTask", {}, {::i2c::type_of<::Modio::Mods::Builder::ChangeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, flag);
}
inline bool Modio::Mods::Builder::ModBuilder::ValidateImageFilePath(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"ValidateImageFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filePath);
}
inline ::Modio::API::ModioAPIFileParameter Modio::Mods::Builder::ModBuilder::LogoFromByteArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"LogoFromByteArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::ModioAPIFileParameter>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter> Modio::Mods::Builder::ModBuilder::LogoFromFilePath(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"LogoFromFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>(nullptr, ___internal_method, filePath);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>* Modio::Mods::Builder::ModBuilder::GalleryZipFromFilePaths(::System::Collections::Generic::ICollection_1<::StringW>*  imageFilePaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"GalleryZipFromFilePaths", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>*>(nullptr, ___internal_method, imageFilePaths);
}
inline ::StringW Modio::Mods::Builder::ModBuilder::GetExtensionFromFormat(::Modio::Mods::Builder::ImageFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"GetExtensionFromFormat", {}, {::i2c::type_of<::Modio::Mods::Builder::ImageFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format);
}
inline bool Modio::Mods::Builder::ModBuilder::_PublishRemainingChanges_b__115_0(::Modio::Mods::Builder::ChangeFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder*>(),
                        {"<PublishRemainingChanges>b__115_0", {}, {::i2c::type_of<::Modio::Mods::Builder::ChangeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flag);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Builder::ModBuilder*>());
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Builder::ModBuilder::New_ctor(::Modio::Mods::Mod*  editTarget)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Builder::ModBuilder*>(editTarget));
}
// Ctor Parameters []
constexpr ::Modio::Mods::Builder::ModBuilder::ModBuilder()   {
}
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Builder::ModBuilder___c::*)()>(&::Modio::Mods::Builder::ModBuilder___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa034148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder___c._get_Results_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*> (::Modio::Mods::Builder::ModBuilder___c::*)(::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>)>(&::Modio::Mods::Builder::ModBuilder___c::_get_Results_b__1_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa034150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<get_Results>b__1_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder___c.__ctor_b__81_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModBuilder___c::*)(::Modio::Mods::ModTag*)>(&::Modio::Mods::Builder::ModBuilder___c::__ctor_b__81_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa0341d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<.ctor>b__81_0", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder___c._PublishRemainingChanges_b__115_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Builder::ModBuilder___c::*)(::Modio::Mods::Builder::ChangeFlags)>(&::Modio::Mods::Builder::ModBuilder___c::_PublishRemainingChanges_b__115_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa0341ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<PublishRemainingChanges>b__115_1", {}, {::i2c::type_of<::Modio::Mods::Builder::ChangeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Builder::ModBuilder___c._PublishMetadataKvps_b__118_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Builder::ModBuilder___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>)>(&::Modio::Mods::Builder::ModBuilder___c::_PublishMetadataKvps_b__118_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa0341f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<PublishMetadataKvps>b__118_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Mods::Builder::ModBuilder___c::setStaticF___9(::Modio::Mods::Builder::ModBuilder___c*  value)  {
::cordl_internals::setStaticField<::Modio::Mods::Builder::ModBuilder___c*, "<>9", ::Modio::Mods::Builder::ModBuilder___c*>(std::forward<::Modio::Mods::Builder::ModBuilder___c*>(value));
}
inline ::Modio::Mods::Builder::ModBuilder___c* Modio::Mods::Builder::ModBuilder___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Mods::Builder::ModBuilder___c*, "<>9", ::Modio::Mods::Builder::ModBuilder___c*>();
}
inline void Modio::Mods::Builder::ModBuilder___c::setStaticF___9__1_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*, "<>9__1_0", ::Modio::Mods::Builder::ModBuilder___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>* Modio::Mods::Builder::ModBuilder___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>,::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>*, "<>9__1_0", ::Modio::Mods::Builder::ModBuilder___c*>();
}
inline void Modio::Mods::Builder::ModBuilder___c::setStaticF___9__81_0(::System::Func_2<::Modio::Mods::ModTag*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::ModTag*,::StringW>*, "<>9__81_0", ::Modio::Mods::Builder::ModBuilder___c*>(std::forward<::System::Func_2<::Modio::Mods::ModTag*,::StringW>*>(value));
}
inline ::System::Func_2<::Modio::Mods::ModTag*,::StringW>* Modio::Mods::Builder::ModBuilder___c::getStaticF___9__81_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::ModTag*,::StringW>*, "<>9__81_0", ::Modio::Mods::Builder::ModBuilder___c*>();
}
inline void Modio::Mods::Builder::ModBuilder___c::setStaticF___9__115_1(::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>*, "<>9__115_1", ::Modio::Mods::Builder::ModBuilder___c*>(std::forward<::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>* Modio::Mods::Builder::ModBuilder___c::getStaticF___9__115_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Builder::ChangeFlags,bool>*, "<>9__115_1", ::Modio::Mods::Builder::ModBuilder___c*>();
}
inline void Modio::Mods::Builder::ModBuilder___c::setStaticF___9__118_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__118_0", ::Modio::Mods::Builder::ModBuilder___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* Modio::Mods::Builder::ModBuilder___c::getStaticF___9__118_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__118_0", ::Modio::Mods::Builder::ModBuilder___c*>();
}
inline void Modio::Mods::Builder::ModBuilder___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*> Modio::Mods::Builder::ModBuilder___c::_get_Results_b__1_0(::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>  yeet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<get_Results>b__1_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Modio::Mods::Builder::ChangeFlags,::Modio::Error*>>(this, ___internal_method, yeet);
}
inline ::StringW Modio::Mods::Builder::ModBuilder___c::__ctor_b__81_0(::Modio::Mods::ModTag*  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<.ctor>b__81_0", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tag);
}
inline bool Modio::Mods::Builder::ModBuilder___c::_PublishRemainingChanges_b__115_1(::Modio::Mods::Builder::ChangeFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<PublishRemainingChanges>b__115_1", {}, {::i2c::type_of<::Modio::Mods::Builder::ChangeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flag);
}
inline ::StringW Modio::Mods::Builder::ModBuilder___c::_PublishMetadataKvps_b__118_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  kvp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Builder::ModBuilder___c*>(),
                        {"<PublishMetadataKvps>b__118_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline ::Modio::Mods::Builder::ModBuilder___c* Modio::Mods::Builder::ModBuilder___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Builder::ModBuilder___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Mods::Builder::ModBuilder___c::ModBuilder___c()   {
}
