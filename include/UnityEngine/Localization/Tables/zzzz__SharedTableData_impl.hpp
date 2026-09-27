#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/SharedTableData.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SharedTableData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataCollection_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__IKeyGenerator_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SharedTableData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::get_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0182b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.set_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*)>(&::UnityEngine::Localization::Tables::SharedTableData::set_Entries)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb0182bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_Entries", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::Clear)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb018348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.get_TableCollectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::get_TableCollectionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0183f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_TableCollectionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.set_TableCollectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::set_TableCollectionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0183fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_TableCollectionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.get_TableCollectionNameGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::get_TableCollectionNameGuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb018404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_TableCollectionNameGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.set_TableCollectionNameGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::System::Guid)>(&::UnityEngine::Localization::Tables::SharedTableData::set_TableCollectionNameGuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb018410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_TableCollectionNameGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.get_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::MetadataCollection* (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::get_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb018418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_Metadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.set_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::UnityEngine::Localization::Metadata::MetadataCollection*)>(&::UnityEngine::Localization::Tables::SharedTableData::set_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb018420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_Metadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.get_KeyGenerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::IKeyGenerator* (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::get_KeyGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb018428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_KeyGenerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.set_KeyGenerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::UnityEngine::Localization::Tables::IKeyGenerator*)>(&::UnityEngine::Localization::Tables::SharedTableData::set_KeyGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb018430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_KeyGenerator", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::IKeyGenerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::SharedTableData::*)(int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::GetKey)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb018438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetKey", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.GetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::GetId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb018620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.GetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW, bool)>(&::UnityEngine::Localization::Tables::SharedTableData::GetId)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb01806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.GetEntryFromReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::UnityEngine::Localization::Tables::TableEntryReference)>(&::UnityEngine::Localization::Tables::SharedTableData::GetEntryFromReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb018a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetEntryFromReference", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.GetEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::GetEntry)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb017644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetEntry", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.GetEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::GetEntry)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb018ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::SharedTableData::*)(int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb018ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"Contains", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb018acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.AddKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW, int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::AddKey)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb018ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.AddKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::AddKey)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb018cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.RemoveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::RemoveKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb018dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemoveKey", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.RemoveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::RemoveKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb018ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemoveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.RenameKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(int64_t, ::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::RenameKey)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb017690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RenameKey", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.RenameKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW, ::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::RenameKey)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb018ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RenameKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.RemapId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::SharedTableData::*)(int64_t, int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::RemapId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb019034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemapId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.FindSimilarKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW, ::by_ref<int32_t>)>(&::UnityEngine::Localization::Tables::SharedTableData::FindSimilarKey)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb0190fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"FindSimilarKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.ComputeLevenshteinDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::ComputeLevenshteinDistance)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb0192c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"ComputeLevenshteinDistance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.AddKeyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::AddKeyInternal)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb0187fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKeyInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.AddKeyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW, int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::AddKeyInternal)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb018b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKeyInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.RenameKeyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*, ::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::RenameKeyInternal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb018f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RenameKeyInternal", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.RemoveKeyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*)>(&::UnityEngine::Localization::Tables::SharedTableData::RemoveKeyInternal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb018df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemoveKeyInternal", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.FindWithId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData::FindWithId)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb018450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"FindWithId", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.FindWithKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::SharedTableData::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData::FindWithKey)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb018638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"FindWithKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb01957c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb0195c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb019770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData::*)()>(&::UnityEngine::Localization::Tables::SharedTableData::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb01982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_TableCollectionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCollectionName;
}
constexpr ::StringW const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_TableCollectionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCollectionName;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_TableCollectionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableCollectionName = value;
}
constexpr ::StringW& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_TableCollectionNameGuidString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCollectionNameGuidString;
}
constexpr ::StringW const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_TableCollectionNameGuidString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCollectionNameGuidString;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_TableCollectionNameGuidString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableCollectionNameGuidString = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_Entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_Entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Entries = value;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Metadata = value;
}
constexpr ::UnityEngine::Localization::Tables::IKeyGenerator*& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_KeyGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyGenerator;
}
constexpr ::UnityEngine::Localization::Tables::IKeyGenerator* const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_KeyGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyGenerator;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_KeyGenerator(::UnityEngine::Localization::Tables::IKeyGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyGenerator = value;
}
constexpr ::System::Guid& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_TableCollectionNameGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCollectionNameGuid;
}
constexpr ::System::Guid const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_TableCollectionNameGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCollectionNameGuid;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_TableCollectionNameGuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableCollectionNameGuid = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_IdDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IdDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_IdDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IdDictionary;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_IdDictionary(::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IdDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_KeyDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* const& UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_get_m_KeyDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyDictionary;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData::__cordl_internal_set_m_KeyDictionary(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyDictionary = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* UnityEngine::Localization::Tables::SharedTableData::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::set_Entries(::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_Entries", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Tables::SharedTableData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Tables::SharedTableData::get_TableCollectionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_TableCollectionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::set_TableCollectionName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_TableCollectionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid UnityEngine::Localization::Tables::SharedTableData::get_TableCollectionNameGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_TableCollectionNameGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::set_TableCollectionNameGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_TableCollectionNameGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Metadata::MetadataCollection* UnityEngine::Localization::Tables::SharedTableData::get_Metadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_Metadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::MetadataCollection*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::set_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_Metadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Tables::IKeyGenerator* UnityEngine::Localization::Tables::SharedTableData::get_KeyGenerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"get_KeyGenerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::IKeyGenerator*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::set_KeyGenerator(::UnityEngine::Localization::Tables::IKeyGenerator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"set_KeyGenerator", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::IKeyGenerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Tables::SharedTableData::GetKey(int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetKey", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
inline int64_t UnityEngine::Localization::Tables::SharedTableData::GetId(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, key);
}
inline int64_t UnityEngine::Localization::Tables::SharedTableData::GetId(::StringW  key, bool  addNewKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, key, addNewKey);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::GetEntryFromReference(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetEntryFromReference", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, tableEntryReference);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::GetEntry(int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetEntry", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, id);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::GetEntry(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"GetEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, key);
}
inline bool UnityEngine::Localization::Tables::SharedTableData::Contains(int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"Contains", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline bool UnityEngine::Localization::Tables::SharedTableData::Contains(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::AddKey(::StringW  key, int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, key, id);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::AddKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, key);
}
inline void UnityEngine::Localization::Tables::SharedTableData::RemoveKey(int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemoveKey", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::Localization::Tables::SharedTableData::RemoveKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemoveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void UnityEngine::Localization::Tables::SharedTableData::RenameKey(int64_t  id, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RenameKey", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, newValue);
}
inline void UnityEngine::Localization::Tables::SharedTableData::RenameKey(::StringW  oldValue, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RenameKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline bool UnityEngine::Localization::Tables::SharedTableData::RemapId(int64_t  currentId, int64_t  newId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemapId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentId, newId);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::FindSimilarKey(::StringW  text, ::by_ref<int32_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"FindSimilarKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, text, distance);
}
inline int32_t UnityEngine::Localization::Tables::SharedTableData::ComputeLevenshteinDistance(::StringW  a, ::StringW  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"ComputeLevenshteinDistance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::AddKeyInternal(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKeyInternal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, key);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::AddKeyInternal(::StringW  key, int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"AddKeyInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, key, id);
}
inline void UnityEngine::Localization::Tables::SharedTableData::RenameKeyInternal(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  entry, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RenameKeyInternal", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry, newValue);
}
inline void UnityEngine::Localization::Tables::SharedTableData::RemoveKeyInternal(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"RemoveKeyInternal", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::FindWithId(int64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"FindWithId", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, id);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData::FindWithKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"FindWithKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method, key);
}
inline ::StringW UnityEngine::Localization::Tables::SharedTableData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::SharedTableData* UnityEngine::Localization::Tables::SharedTableData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::SharedTableData*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::Tables::SharedTableData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Tables::SharedTableData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::SharedTableData::SharedTableData()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)()>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0199d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)(int64_t)>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0199d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"set_Id", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)()>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0199e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)(::StringW)>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0199e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"set_Key", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry.get_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::MetadataCollection* (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)()>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::get_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0199f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"get_Metadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry.set_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)(::UnityEngine::Localization::Metadata::MetadataCollection*)>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::set_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0199f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"set_Metadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)()>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb019a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::*)()>(&::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb019510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_get_m_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr int64_t const& UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_get_m_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_set_m_Id(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Id = value;
}
constexpr ::StringW& UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_get_m_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Key;
}
constexpr ::StringW const& UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_get_m_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Key;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_set_m_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Key = value;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_get_m_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_get_m_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr void UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::__cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Metadata = value;
}
inline int64_t UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::set_Id(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"set_Id", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::set_Key(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"set_Key", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Metadata::MetadataCollection* UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::get_Metadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"get_Metadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::MetadataCollection*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::set_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {"set_Metadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry::SharedTableData_SharedTableEntry()   {
}
