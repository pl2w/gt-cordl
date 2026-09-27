#pragma once
// IWYU pragma private; include "Modio/Mods/Mod.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_impl.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_impl.hpp"
#include "Modio/Mods/zzzz__ModCommunityOptions_impl.hpp"
#include "Modio/Mods/zzzz__ModId_impl.hpp"
#include "Modio/Mods/zzzz__ModMaturityOptions_impl.hpp"
#include "Modio/Mods/zzzz__ModRating_impl.hpp"
#include "Modio/Mods/zzzz__ModTag_impl.hpp"
#include "Modio/Mods/zzzz__Mod_GalleryResolution_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ImageObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MetadataKvpObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/API/zzzz__ModioAPI_def.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__ModCommunityOptions_def.hpp"
#include "Modio/Mods/zzzz__ModDependencies_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__ModMaturityOptions_def.hpp"
#include "Modio/Mods/zzzz__ModRating_def.hpp"
#include "Modio/Mods/zzzz__ModSearchFilter_def.hpp"
#include "Modio/Mods/zzzz__ModStats_def.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "Modio/Mods/zzzz__Mod_GalleryResolution_def.hpp"
#include "Modio/Mods/zzzz__Mod_LogoResolution_def.hpp"
#include "Modio/Mods/zzzz__Mod__GetModDetailsFromServer_d__118_def.hpp"
#include "Modio/Mods/zzzz__Mod__GetMod_d__119_def.hpp"
#include "Modio/Mods/zzzz__Mod__GetMods_d__117_def.hpp"
#include "Modio/Mods/zzzz__Mod__GetMods_d__120_def.hpp"
#include "Modio/Mods/zzzz__Mod__Purchase_d__126_def.hpp"
#include "Modio/Mods/zzzz__Mod__RateMod_d__121_def.hpp"
#include "Modio/Mods/zzzz__Mod__RefreshPotentiallyHiddenCachedMods_d__130_def.hpp"
#include "Modio/Mods/zzzz__Mod__Report_d__123_def.hpp"
#include "Modio/Mods/zzzz__Mod__SetSubscribed_d__111_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/Mods/zzzz__ModioPage_1_def.hpp"
#include "Modio/Reports/zzzz__ModNotWorkingReason_def.hpp"
#include "Modio/Reports/zzzz__ReportType_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Mods::Mod.add_OnModUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::System::Action*)>(&::Modio::Mods::Mod::add_OnModUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa027c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"add_OnModUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.remove_OnModUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::System::Action*)>(&::Modio::Mods::Mod::remove_OnModUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa027d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"remove_OnModUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.AddChangeListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::ModChangeType, ::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*)>(&::Modio::Mods::Mod::AddChangeListener)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa027dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"AddChangeListener", {}, {::i2c::type_of<::Modio::Mods::ModChangeType>(), ::i2c::type_of<::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.RemoveChangeListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::ModChangeType, ::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*)>(&::Modio::Mods::Mod::RemoveChangeListener)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa027ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"RemoveChangeListener", {}, {::i2c::type_of<::Modio::Mods::ModChangeType>(), ::i2c::type_of<::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (*)()>(&::Modio::Mods::Mod::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa028034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.Edit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Builder::ModBuilder* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::Edit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa02811c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Edit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0283a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0283a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::StringW)>(&::Modio::Mods::Mod::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0283b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Summary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Summary)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa0283b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Summary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02843c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::StringW)>(&::Modio::Mods::Mod::set_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Description", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_DateLive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_DateLive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_DateLive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_DateLive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::System::DateTime)>(&::Modio::Mods::Mod::set_DateLive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_DateLive", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_DateUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_DateUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_DateUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_DateUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::System::DateTime)>(&::Modio::Mods::Mod::set_DateUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_DateUpdated", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Modio::Mods::ModTag*> (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Tags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::ArrayW<::Modio::Mods::ModTag*>)>(&::Modio::Mods::Mod::set_Tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Tags", {}, {::i2c::type_of<::ArrayW<::Modio::Mods::ModTag*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_MetadataBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::StringW)>(&::Modio::Mods::Mod::set_MetadataBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_MetadataKvps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_MetadataKvps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02848c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_MetadataKvps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_MetadataKvps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Modio::Mods::Mod::set_MetadataKvps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_MetadataKvps", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_CommunityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModCommunityOptions (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_CommunityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_CommunityOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_CommunityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModCommunityOptions)>(&::Modio::Mods::Mod::set_CommunityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_CommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_MaturityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModMaturityOptions (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_MaturityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_MaturityOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_MaturityOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModMaturityOptions)>(&::Modio::Mods::Mod::set_MaturityOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_MaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_File
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Modfile* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_File)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_File", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_File
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::Modfile*)>(&::Modio::Mods::Mod::set_File)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_File", {}, {::i2c::type_of<::Modio::Mods::Modfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Stats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModStats* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Stats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Stats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Stats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModStats*)>(&::Modio::Mods::Mod::set_Stats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Stats", {}, {::i2c::type_of<::Modio::Mods::ModStats*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Price", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Price
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(int64_t)>(&::Modio::Mods::Mod::set_Price)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Price", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_IsMonetized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_IsMonetized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsMonetized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_IsMonetized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::set_IsMonetized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsMonetized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Logo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Logo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0284fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Logo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Logo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*)>(&::Modio::Mods::Mod::set_Logo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Logo", {}, {::i2c::type_of<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Gallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*> (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Gallery)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02850c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Gallery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Gallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>)>(&::Modio::Mods::Mod::set_Gallery)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Gallery", {}, {::i2c::type_of<::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Creator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::UserProfile* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Creator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Creator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Creator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Users::UserProfile*)>(&::Modio::Mods::Mod::set_Creator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Creator", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_Dependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModDependencies* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02852c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Dependencies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_Dependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModDependencies*)>(&::Modio::Mods::Mod::set_Dependencies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Dependencies", {}, {::i2c::type_of<::Modio::Mods::ModDependencies*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_CurrentUserRating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModRating (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_CurrentUserRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02853c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_CurrentUserRating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_CurrentUserRating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModRating)>(&::Modio::Mods::Mod::set_CurrentUserRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_CurrentUserRating", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_IsSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_IsSubscribed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_IsSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::set_IsSubscribed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsSubscribed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_IsPurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_IsPurchased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02855c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsPurchased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_IsPurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::set_IsPurchased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsPurchased", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::set_IsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa028574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.get_LastModObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::SchemaDefinitions::ModObject (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::get_LastModObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa02857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_LastModObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.set_LastModObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::API::SchemaDefinitions::ModObject)>(&::Modio::Mods::Mod::set_LastModObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa02858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_LastModObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModId)>(&::Modio::Mods::Mod::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa0285b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::API::SchemaDefinitions::ModObject)>(&::Modio::Mods::Mod::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa0285e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (*)(int64_t)>(&::Modio::Mods::Mod::Get)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa028f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Get", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.ApplyDetailsFromModObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::Modio::Mods::Mod::*)(::Modio::API::SchemaDefinitions::ModObject)>(&::Modio::Mods::Mod::ApplyDetailsFromModObject)> {
  constexpr static std::size_t size = 0x824;
  constexpr static std::size_t addrs = 0xa0286e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"ApplyDetailsFromModObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::Subscribe)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa02931c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Subscribe", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::Unsubscribe)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa029458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Unsubscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.SetSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Mod::*)(bool, bool)>(&::Modio::Mods::Mod::SetSubscribed)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa029328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"SetSubscribed", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.SetIsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::SetIsEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa029464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"SetIsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.UpdateLocalSubscriptionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::UpdateLocalSubscriptionStatus)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa024a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateLocalSubscriptionStatus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.UpdateLocalEnabledStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::UpdateLocalEnabledStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa029474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateLocalEnabledStatus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.UpdateLocalPurchaseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::UpdateLocalPurchaseStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa023700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateLocalPurchaseStatus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.GetMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* (*)(::Modio::Mods::ModSearchFilter*)>(&::Modio::Mods::Mod::GetMods)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa029484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMods", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.GetMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* (*)(::Modio::API::Mods_ModioAPI_GetModsFilter*, bool)>(&::Modio::Mods::Mod::GetMods)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa02992c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMods", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.GetModDetailsFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::GetModDetailsFromServer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa029a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetModDetailsFromServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.GetMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* (*)(::Modio::Mods::ModId, bool, ::Modio::ModIndex*, bool)>(&::Modio::Mods::Mod::GetMod)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa029b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Modio::ModIndex*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.GetMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>* (*)(::System::Collections::Generic::ICollection_1<int64_t>*, bool, ::Modio::ModIndex*)>(&::Modio::Mods::Mod::GetMods)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa029c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMods", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Modio::ModIndex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.RateMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Mod::*)(::Modio::Mods::ModRating)>(&::Modio::Mods::Mod::RateMod)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa029db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"RateMod", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.SetCurrentUserRating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModRating)>(&::Modio::Mods::Mod::SetCurrentUserRating)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa023f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"SetCurrentUserRating", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.Report
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Mod::*)(::Modio::Reports::ReportType, ::Modio::Reports::ModNotWorkingReason, ::StringW, ::StringW)>(&::Modio::Mods::Mod::Report)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa029ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Report", {}, {::i2c::type_of<::Modio::Reports::ReportType>(), ::i2c::type_of<::Modio::Reports::ModNotWorkingReason>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.InvokeModUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModChangeType)>(&::Modio::Mods::Mod::InvokeModUpdated)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa02913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"InvokeModUpdated", {}, {::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.UpdateModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::Modfile*)>(&::Modio::Mods::Mod::UpdateModfile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa02a018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateModfile", {}, {::i2c::type_of<::Modio::Mods::Modfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.Purchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::Purchase)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa02a038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Purchase", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.UninstallOtherUserMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(bool)>(&::Modio::Mods::Mod::UninstallOtherUserMod)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa02a150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UninstallOtherUserMod", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::ToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa02a294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Mods::Mod*>(),
                    {::i2c::class_of<::Modio::Mods::Mod*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.IsHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::Mod::*)()>(&::Modio::Mods::Mod::IsHidden)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa02a31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"IsHidden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod.RefreshPotentiallyHiddenCachedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::Modio::Mods::Mod::RefreshPotentiallyHiddenCachedMods)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa02a33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"RefreshPotentiallyHiddenCachedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod._RateMod_g__UpdateStatsWithUserRating_121_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod::*)(::Modio::Mods::ModRating)>(&::Modio::Mods::Mod::_RateMod_g__UpdateStatsWithUserRating_121_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa02a4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"<RateMod>g__UpdateStatsWithUserRating|121_0", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Modio::Mods::Mod::__cordl_internal_get_OnModUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnModUpdated;
}
constexpr ::System::Action* const& Modio::Mods::Mod::__cordl_internal_get_OnModUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnModUpdated;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set_OnModUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnModUpdated = value;
}
constexpr ::Modio::Mods::ModId& Modio::Mods::Mod::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::Modio::Mods::ModId const& Modio::Mods::Mod::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Id_k__BackingField(::Modio::Mods::ModId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Mod::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Mod::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Mod::__cordl_internal_get__Description_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Description_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Mod::__cordl_internal_get__Description_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Description_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Description_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Description_k__BackingField = value;
}
constexpr ::System::DateTime& Modio::Mods::Mod::__cordl_internal_get__DateLive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateLive_k__BackingField;
}
constexpr ::System::DateTime const& Modio::Mods::Mod::__cordl_internal_get__DateLive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateLive_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__DateLive_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateLive_k__BackingField = value;
}
constexpr ::System::DateTime& Modio::Mods::Mod::__cordl_internal_get__DateUpdated_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateUpdated_k__BackingField;
}
constexpr ::System::DateTime const& Modio::Mods::Mod::__cordl_internal_get__DateUpdated_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateUpdated_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__DateUpdated_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateUpdated_k__BackingField = value;
}
constexpr ::ArrayW<::Modio::Mods::ModTag*>& Modio::Mods::Mod::__cordl_internal_get__Tags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tags_k__BackingField;
}
constexpr ::ArrayW<::Modio::Mods::ModTag*> const& Modio::Mods::Mod::__cordl_internal_get__Tags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tags_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Tags_k__BackingField(::ArrayW<::Modio::Mods::ModTag*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Tags_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Mod::__cordl_internal_get__MetadataBlob_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr ::StringW const& Modio::Mods::Mod::__cordl_internal_get__MetadataBlob_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataBlob_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MetadataBlob_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::Mods::Mod::__cordl_internal_get__MetadataKvps_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataKvps_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::Mods::Mod::__cordl_internal_get__MetadataKvps_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MetadataKvps_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__MetadataKvps_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MetadataKvps_k__BackingField = value;
}
constexpr ::Modio::Mods::ModCommunityOptions& Modio::Mods::Mod::__cordl_internal_get__CommunityOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommunityOptions_k__BackingField;
}
constexpr ::Modio::Mods::ModCommunityOptions const& Modio::Mods::Mod::__cordl_internal_get__CommunityOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommunityOptions_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__CommunityOptions_k__BackingField(::Modio::Mods::ModCommunityOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommunityOptions_k__BackingField = value;
}
constexpr ::Modio::Mods::ModMaturityOptions& Modio::Mods::Mod::__cordl_internal_get__MaturityOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaturityOptions_k__BackingField;
}
constexpr ::Modio::Mods::ModMaturityOptions const& Modio::Mods::Mod::__cordl_internal_get__MaturityOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaturityOptions_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__MaturityOptions_k__BackingField(::Modio::Mods::ModMaturityOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaturityOptions_k__BackingField = value;
}
constexpr ::Modio::Mods::Modfile*& Modio::Mods::Mod::__cordl_internal_get__File_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____File_k__BackingField;
}
constexpr ::Modio::Mods::Modfile* const& Modio::Mods::Mod::__cordl_internal_get__File_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____File_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__File_k__BackingField(::Modio::Mods::Modfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____File_k__BackingField = value;
}
constexpr ::Modio::Mods::ModStats*& Modio::Mods::Mod::__cordl_internal_get__Stats_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stats_k__BackingField;
}
constexpr ::Modio::Mods::ModStats* const& Modio::Mods::Mod::__cordl_internal_get__Stats_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Stats_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Stats_k__BackingField(::Modio::Mods::ModStats*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Stats_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::Mod::__cordl_internal_get__Price_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Price_k__BackingField;
}
constexpr int64_t const& Modio::Mods::Mod::__cordl_internal_get__Price_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Price_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Price_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Price_k__BackingField = value;
}
constexpr bool& Modio::Mods::Mod::__cordl_internal_get__IsMonetized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMonetized_k__BackingField;
}
constexpr bool const& Modio::Mods::Mod::__cordl_internal_get__IsMonetized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMonetized_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__IsMonetized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMonetized_k__BackingField = value;
}
constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*& Modio::Mods::Mod::__cordl_internal_get__Logo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logo_k__BackingField;
}
constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>* const& Modio::Mods::Mod::__cordl_internal_get__Logo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logo_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Logo_k__BackingField(::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logo_k__BackingField = value;
}
constexpr ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>& Modio::Mods::Mod::__cordl_internal_get__Gallery_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Gallery_k__BackingField;
}
constexpr ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*> const& Modio::Mods::Mod::__cordl_internal_get__Gallery_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Gallery_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Gallery_k__BackingField(::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Gallery_k__BackingField = value;
}
constexpr ::Modio::Users::UserProfile*& Modio::Mods::Mod::__cordl_internal_get__Creator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Creator_k__BackingField;
}
constexpr ::Modio::Users::UserProfile* const& Modio::Mods::Mod::__cordl_internal_get__Creator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Creator_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Creator_k__BackingField(::Modio::Users::UserProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Creator_k__BackingField = value;
}
constexpr ::Modio::Mods::ModDependencies*& Modio::Mods::Mod::__cordl_internal_get__Dependencies_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dependencies_k__BackingField;
}
constexpr ::Modio::Mods::ModDependencies* const& Modio::Mods::Mod::__cordl_internal_get__Dependencies_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dependencies_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__Dependencies_k__BackingField(::Modio::Mods::ModDependencies*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Dependencies_k__BackingField = value;
}
constexpr ::Modio::Mods::ModRating& Modio::Mods::Mod::__cordl_internal_get__CurrentUserRating_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentUserRating_k__BackingField;
}
constexpr ::Modio::Mods::ModRating const& Modio::Mods::Mod::__cordl_internal_get__CurrentUserRating_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentUserRating_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__CurrentUserRating_k__BackingField(::Modio::Mods::ModRating  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentUserRating_k__BackingField = value;
}
constexpr bool& Modio::Mods::Mod::__cordl_internal_get__IsSubscribed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSubscribed_k__BackingField;
}
constexpr bool const& Modio::Mods::Mod::__cordl_internal_get__IsSubscribed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSubscribed_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__IsSubscribed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSubscribed_k__BackingField = value;
}
constexpr bool& Modio::Mods::Mod::__cordl_internal_get__IsPurchased_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPurchased_k__BackingField;
}
constexpr bool const& Modio::Mods::Mod::__cordl_internal_get__IsPurchased_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPurchased_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__IsPurchased_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPurchased_k__BackingField = value;
}
constexpr bool& Modio::Mods::Mod::__cordl_internal_get__IsEnabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsEnabled_k__BackingField;
}
constexpr bool const& Modio::Mods::Mod::__cordl_internal_get__IsEnabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsEnabled_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__IsEnabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsEnabled_k__BackingField = value;
}
constexpr ::StringW& Modio::Mods::Mod::__cordl_internal_get__summaryDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____summaryDecoded;
}
constexpr ::StringW const& Modio::Mods::Mod::__cordl_internal_get__summaryDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____summaryDecoded;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__summaryDecoded(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____summaryDecoded = value;
}
constexpr ::StringW& Modio::Mods::Mod::__cordl_internal_get__summaryHtmlEncoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____summaryHtmlEncoded;
}
constexpr ::StringW const& Modio::Mods::Mod::__cordl_internal_get__summaryHtmlEncoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____summaryHtmlEncoded;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__summaryHtmlEncoded(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____summaryHtmlEncoded = value;
}
constexpr ::Modio::API::SchemaDefinitions::ModObject& Modio::Mods::Mod::__cordl_internal_get__LastModObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastModObject_k__BackingField;
}
constexpr ::Modio::API::SchemaDefinitions::ModObject const& Modio::Mods::Mod::__cordl_internal_get__LastModObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastModObject_k__BackingField;
}
constexpr void Modio::Mods::Mod::__cordl_internal_set__LastModObject_k__BackingField(::Modio::API::SchemaDefinitions::ModObject  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastModObject_k__BackingField = value;
}
inline void Modio::Mods::Mod::setStaticF_ChangeSubscribers(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>*, "ChangeSubscribers", ::Modio::Mods::Mod*>(std::forward<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>* Modio::Mods::Mod::getStaticF_ChangeSubscribers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModChangeType,::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>*, "ChangeSubscribers", ::Modio::Mods::Mod*>();
}
inline void Modio::Mods::Mod::add_OnModUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"add_OnModUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::Mod::remove_OnModUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"remove_OnModUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::Mod::AddChangeListener(::Modio::Mods::ModChangeType  subscribedChange, ::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"AddChangeListener", {}, {::i2c::type_of<::Modio::Mods::ModChangeType>(), ::i2c::type_of<::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, subscribedChange, listener);
}
inline void Modio::Mods::Mod::RemoveChangeListener(::Modio::Mods::ModChangeType  subscribedChange, ::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"RemoveChangeListener", {}, {::i2c::type_of<::Modio::Mods::ModChangeType>(), ::i2c::type_of<::System::Action_2<::Modio::Mods::Mod*,::Modio::Mods::ModChangeType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, subscribedChange, listener);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Mod::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(nullptr, ___internal_method);
}
inline ::Modio::Mods::Builder::ModBuilder* Modio::Mods::Mod::Edit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Edit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Builder::ModBuilder*>(this, ___internal_method);
}
inline ::Modio::Mods::ModId Modio::Mods::Mod::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(this, ___internal_method);
}
inline ::StringW Modio::Mods::Mod::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Mod::get_Summary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Summary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::Mods::Mod::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Description(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Description", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Modio::Mods::Mod::get_DateLive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_DateLive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_DateLive(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_DateLive", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Modio::Mods::Mod::get_DateUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_DateUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_DateUpdated(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_DateUpdated", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Modio::Mods::ModTag*> Modio::Mods::Mod::get_Tags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Tags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Modio::Mods::ModTag*>>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Tags(::ArrayW<::Modio::Mods::ModTag*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Tags", {}, {::i2c::type_of<::ArrayW<::Modio::Mods::ModTag*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Mods::Mod::get_MetadataBlob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_MetadataBlob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_MetadataBlob(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_MetadataBlob", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Modio::Mods::Mod::get_MetadataKvps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_MetadataKvps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_MetadataKvps(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_MetadataKvps", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModCommunityOptions Modio::Mods::Mod::get_CommunityOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_CommunityOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModCommunityOptions>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_CommunityOptions(::Modio::Mods::ModCommunityOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_CommunityOptions", {}, {::i2c::type_of<::Modio::Mods::ModCommunityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModMaturityOptions Modio::Mods::Mod::get_MaturityOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_MaturityOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModMaturityOptions>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_MaturityOptions(::Modio::Mods::ModMaturityOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_MaturityOptions", {}, {::i2c::type_of<::Modio::Mods::ModMaturityOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::Modfile* Modio::Mods::Mod::get_File()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_File", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Modfile*>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_File(::Modio::Mods::Modfile*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_File", {}, {::i2c::type_of<::Modio::Mods::Modfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModStats* Modio::Mods::Mod::get_Stats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Stats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModStats*>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Stats(::Modio::Mods::ModStats*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Stats", {}, {::i2c::type_of<::Modio::Mods::ModStats*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::Mod::get_Price()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Price", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Price(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Price", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Mod::get_IsMonetized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsMonetized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_IsMonetized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsMonetized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>* Modio::Mods::Mod::get_Logo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Logo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Logo(::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Logo", {}, {::i2c::type_of<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_LogoResolution>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*> Modio::Mods::Mod::get_Gallery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Gallery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Gallery(::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Gallery", {}, {::i2c::type_of<::ArrayW<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Users::UserProfile* Modio::Mods::Mod::get_Creator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Creator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::UserProfile*>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Creator(::Modio::Users::UserProfile*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Creator", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModDependencies* Modio::Mods::Mod::get_Dependencies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_Dependencies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModDependencies*>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_Dependencies(::Modio::Mods::ModDependencies*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_Dependencies", {}, {::i2c::type_of<::Modio::Mods::ModDependencies*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::ModRating Modio::Mods::Mod::get_CurrentUserRating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_CurrentUserRating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModRating>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_CurrentUserRating(::Modio::Mods::ModRating  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_CurrentUserRating", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Mod::get_IsSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_IsSubscribed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsSubscribed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Mod::get_IsPurchased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsPurchased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_IsPurchased(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsPurchased", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::Mod::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_IsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_IsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::API::SchemaDefinitions::ModObject Modio::Mods::Mod::get_LastModObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"get_LastModObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::SchemaDefinitions::ModObject>(this, ___internal_method);
}
inline void Modio::Mods::Mod::set_LastModObject(::Modio::API::SchemaDefinitions::ModObject  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"set_LastModObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::Mod::_ctor(::Modio::Mods::ModId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Modio::Mods::Mod::_ctor(::Modio::API::SchemaDefinitions::ModObject  modObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modObject);
}
inline ::Modio::Mods::Mod* Modio::Mods::Mod::Get(int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Get", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(nullptr, ___internal_method, id);
}
inline ::Modio::Mods::Mod* Modio::Mods::Mod::ApplyDetailsFromModObject(::Modio::API::SchemaDefinitions::ModObject  modObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"ApplyDetailsFromModObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method, modObject);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Mod::Subscribe(bool  includeDependencies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Subscribe", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, includeDependencies);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Mod::Unsubscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Unsubscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Mod::SetSubscribed(bool  subscribed, bool  includeDependencies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"SetSubscribed", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, subscribed, includeDependencies);
}
inline void Modio::Mods::Mod::SetIsEnabled(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"SetIsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline void Modio::Mods::Mod::UpdateLocalSubscriptionStatus(bool  isSubscribed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateLocalSubscriptionStatus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSubscribed);
}
inline void Modio::Mods::Mod::UpdateLocalEnabledStatus(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateLocalEnabledStatus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline void Modio::Mods::Mod::UpdateLocalPurchaseStatus(bool  isPurchased)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateLocalPurchaseStatus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPurchased);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* Modio::Mods::Mod::GetMods(::Modio::Mods::ModSearchFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMods", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>*>(nullptr, ___internal_method, filter);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>* Modio::Mods::Mod::GetMods(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter, bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMods", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>*>(nullptr, ___internal_method, filter, forceRefresh);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* Modio::Mods::Mod::GetModDetailsFromServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetModDetailsFromServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>* Modio::Mods::Mod::GetMod(::Modio::Mods::ModId  modId, bool  forceRefresh, ::Modio::ModIndex*  tempIndex, bool  deferModInstallManagementRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Modio::ModIndex*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>*>(nullptr, ___internal_method, modId, forceRefresh, tempIndex, deferModInstallManagementRefresh);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>* Modio::Mods::Mod::GetMods(::System::Collections::Generic::ICollection_1<int64_t>*  neededModIds, bool  forceRefresh, ::Modio::ModIndex*  tempIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"GetMods", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<int64_t>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Modio::ModIndex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>*>(nullptr, ___internal_method, neededModIds, forceRefresh, tempIndex);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Mod::RateMod(::Modio::Mods::ModRating  rating)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"RateMod", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, rating);
}
inline void Modio::Mods::Mod::SetCurrentUserRating(::Modio::Mods::ModRating  rating)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"SetCurrentUserRating", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rating);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Mod::Report(::Modio::Reports::ReportType  reportType, ::Modio::Reports::ModNotWorkingReason  reportReason, ::StringW  contact, ::StringW  summary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Report", {}, {::i2c::type_of<::Modio::Reports::ReportType>(), ::i2c::type_of<::Modio::Reports::ModNotWorkingReason>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, reportType, reportReason, contact, summary);
}
inline void Modio::Mods::Mod::InvokeModUpdated(::Modio::Mods::ModChangeType  changeFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"InvokeModUpdated", {}, {::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changeFlags);
}
inline void Modio::Mods::Mod::UpdateModfile(::Modio::Mods::Modfile*  modfile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UpdateModfile", {}, {::i2c::type_of<::Modio::Mods::Modfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modfile);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Mod::Purchase(bool  subscribeOnPurchase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"Purchase", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, subscribeOnPurchase);
}
inline void Modio::Mods::Mod::UninstallOtherUserMod(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"UninstallOtherUserMod", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline ::StringW Modio::Mods::Mod::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Mods::Mod*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Modio::Mods::Mod::IsHidden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"IsHidden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Mods::Mod::RefreshPotentiallyHiddenCachedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"RefreshPotentiallyHiddenCachedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline void Modio::Mods::Mod::_RateMod_g__UpdateStatsWithUserRating_121_0(::Modio::Mods::ModRating  userRating)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod*>(),
                        {"<RateMod>g__UpdateStatsWithUserRating|121_0", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userRating);
}
inline ::Modio::Mods::Mod* Modio::Mods::Mod::New_ctor(::Modio::Mods::ModId  id)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Mod*>(id));
}
inline ::Modio::Mods::Mod* Modio::Mods::Mod::New_ctor(::Modio::API::SchemaDefinitions::ModObject  modObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Mod*>(modObject));
}
// Ctor Parameters []
constexpr ::Modio::Mods::Mod::Mod()   {
}
//  Writing Method size for method: ::Modio::Mods::Mod___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::Mod___c::*)()>(&::Modio::Mods::Mod___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02a5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod___c._ApplyDetailsFromModObject_b__108_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Mod___c::*)(::Modio::API::SchemaDefinitions::MetadataKvpObject)>(&::Modio::Mods::Mod___c::_ApplyDetailsFromModObject_b__108_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02a5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {"<ApplyDetailsFromModObject>b__108_0", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::MetadataKvpObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod___c._ApplyDetailsFromModObject_b__108_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Mods::Mod___c::*)(::Modio::API::SchemaDefinitions::MetadataKvpObject)>(&::Modio::Mods::Mod___c::_ApplyDetailsFromModObject_b__108_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02a5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {"<ApplyDetailsFromModObject>b__108_1", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::MetadataKvpObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::Mod___c._ApplyDetailsFromModObject_b__108_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>* (::Modio::Mods::Mod___c::*)(::Modio::API::SchemaDefinitions::ImageObject)>(&::Modio::Mods::Mod___c::_ApplyDetailsFromModObject_b__108_2)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa02a5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {"<ApplyDetailsFromModObject>b__108_2", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ImageObject>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Mods::Mod___c::setStaticF___9(::Modio::Mods::Mod___c*  value)  {
::cordl_internals::setStaticField<::Modio::Mods::Mod___c*, "<>9", ::Modio::Mods::Mod___c*>(std::forward<::Modio::Mods::Mod___c*>(value));
}
inline ::Modio::Mods::Mod___c* Modio::Mods::Mod___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Mods::Mod___c*, "<>9", ::Modio::Mods::Mod___c*>();
}
inline void Modio::Mods::Mod___c::setStaticF___9__108_0(::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*, "<>9__108_0", ::Modio::Mods::Mod___c*>(std::forward<::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*>(value));
}
inline ::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>* Modio::Mods::Mod___c::getStaticF___9__108_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*, "<>9__108_0", ::Modio::Mods::Mod___c*>();
}
inline void Modio::Mods::Mod___c::setStaticF___9__108_1(::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*, "<>9__108_1", ::Modio::Mods::Mod___c*>(std::forward<::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*>(value));
}
inline ::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>* Modio::Mods::Mod___c::getStaticF___9__108_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::MetadataKvpObject,::StringW>*, "<>9__108_1", ::Modio::Mods::Mod___c*>();
}
inline void Modio::Mods::Mod___c::setStaticF___9__108_2(::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>*, "<>9__108_2", ::Modio::Mods::Mod___c*>(std::forward<::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>*>(value));
}
inline ::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>* Modio::Mods::Mod___c::getStaticF___9__108_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::ImageObject,::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>*, "<>9__108_2", ::Modio::Mods::Mod___c*>();
}
inline void Modio::Mods::Mod___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Modio::Mods::Mod___c::_ApplyDetailsFromModObject_b__108_0(::Modio::API::SchemaDefinitions::MetadataKvpObject  kvp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {"<ApplyDetailsFromModObject>b__108_0", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::MetadataKvpObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline ::StringW Modio::Mods::Mod___c::_ApplyDetailsFromModObject_b__108_1(::Modio::API::SchemaDefinitions::MetadataKvpObject  kvp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {"<ApplyDetailsFromModObject>b__108_1", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::MetadataKvpObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline ::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>* Modio::Mods::Mod___c::_ApplyDetailsFromModObject_b__108_2(::Modio::API::SchemaDefinitions::ImageObject  imageObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::Mod___c*>(),
                        {"<ApplyDetailsFromModObject>b__108_2", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ImageObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Images::ModioImageSource_1<::GlobalNamespace::Mod_GalleryResolution>*>(this, ___internal_method, imageObject);
}
inline ::Modio::Mods::Mod___c* Modio::Mods::Mod___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::Mod___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Mods::Mod___c::Mod___c()   {
}
