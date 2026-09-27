#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/LocalizationTable.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadataCollection_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataCollection_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SharedTableData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.get_LocaleIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocaleIdentifier (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::get_LocaleIdentifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb017ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_LocaleIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.set_LocaleIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::LocalizationTable::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::Tables::LocalizationTable::set_LocaleIdentifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb017ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"set_LocaleIdentifier", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.get_TableCollectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::get_TableCollectionName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb017efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_TableCollectionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.get_SharedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Tables::SharedTableData> (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::get_SharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb018004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_SharedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.set_SharedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::LocalizationTable::*)(::UnityEngine::Localization::Tables::SharedTableData*)>(&::UnityEngine::Localization::Tables::LocalizationTable::set_SharedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01800c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"set_SharedData", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::SharedTableData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.get_TableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>* (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::get_TableData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb018014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_TableData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.get_MetadataEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::get_MetadataEntries)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb01801c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_MetadataEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.AddMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::LocalizationTable::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Tables::LocalizationTable::AddMetadata)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb017790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"AddMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.RemoveMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::LocalizationTable::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Tables::LocalizationTable::RemoveMetadata)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb017910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"RemoveMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::LocalizationTable::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Tables::LocalizationTable::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb017778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.CreateEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::LocalizationTable::*)(::UnityEngine::Localization::Tables::TableEntryReference)>(&::UnityEngine::Localization::Tables::LocalizationTable::CreateEmpty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.FindKeyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::LocalizationTable::*)(::StringW, bool)>(&::UnityEngine::Localization::Tables::LocalizationTable::FindKeyId)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb018034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"FindKeyId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.VerifySharedTableDataIsNotNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::VerifySharedTableDataIsNotNull)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb017f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"VerifySharedTableDataIsNotNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb0180b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Tables::LocalizationTable::*)(::UnityEngine::Localization::Tables::LocalizationTable*)>(&::UnityEngine::Localization::Tables::LocalizationTable::CompareTo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb018154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::LocalizationTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::LocalizationTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::LocalizationTable::*)()>(&::UnityEngine::Localization::Tables::LocalizationTable::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb0181f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocaleIdentifier& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_LocaleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocaleId;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier const& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_LocaleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocaleId;
}
constexpr void UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_set_m_LocaleId(::UnityEngine::Localization::LocaleIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocaleId = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::SharedTableData>& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_SharedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedData;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::SharedTableData> const& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_SharedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedData;
}
constexpr void UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_set_m_SharedData(::UnityW<::UnityEngine::Localization::Tables::SharedTableData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SharedData = value;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr void UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Metadata = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_TableData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableData;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>* const& UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_get_m_TableData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableData;
}
constexpr void UnityEngine::Localization::Tables::LocalizationTable::__cordl_internal_set_m_TableData(::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableData = value;
}
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::Tables::LocalizationTable::get_LocaleIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_LocaleIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocaleIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::LocalizationTable::set_LocaleIdentifier(::UnityEngine::Localization::LocaleIdentifier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"set_LocaleIdentifier", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Tables::LocalizationTable::get_TableCollectionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_TableCollectionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Tables::SharedTableData> UnityEngine::Localization::Tables::LocalizationTable::get_SharedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_SharedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::LocalizationTable::set_SharedData(::UnityEngine::Localization::Tables::SharedTableData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"set_SharedData", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::SharedTableData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>* UnityEngine::Localization::Tables::LocalizationTable::get_TableData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_TableData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* UnityEngine::Localization::Tables::LocalizationTable::get_MetadataEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"get_MetadataEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline TObject UnityEngine::Localization::Tables::LocalizationTable::GetMetadata()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                    {"GetMetadata", {::i2c::class_of<TObject>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<TObject>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline void UnityEngine::Localization::Tables::LocalizationTable::GetMetadatas(::System::Collections::Generic::IList_1<TObject>*  foundItems)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                    {"GetMetadatas", {::i2c::class_of<TObject>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<TObject>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foundItems);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline ::System::Collections::Generic::IList_1<TObject>* UnityEngine::Localization::Tables::LocalizationTable::GetMetadatas()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                    {"GetMetadatas", {::i2c::class_of<TObject>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TObject>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::LocalizationTable::AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"AddMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Tables::LocalizationTable::RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"RemoveMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Tables::LocalizationTable::Contains(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
inline void UnityEngine::Localization::Tables::LocalizationTable::CreateEmpty(::UnityEngine::Localization::Tables::TableEntryReference  entryReference)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryReference);
}
inline int64_t UnityEngine::Localization::Tables::LocalizationTable::FindKeyId(::StringW  key, bool  addKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"FindKeyId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, key, addKey);
}
inline void UnityEngine::Localization::Tables::LocalizationTable::VerifySharedTableDataIsNotNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"VerifySharedTableDataIsNotNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Tables::LocalizationTable::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Localization::Tables::LocalizationTable::CompareTo(::UnityEngine::Localization::Tables::LocalizationTable*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {"CompareTo", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::LocalizationTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void UnityEngine::Localization::Tables::LocalizationTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::LocalizationTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::LocalizationTable* UnityEngine::Localization::Tables::LocalizationTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::LocalizationTable*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr  UnityEngine::Localization::Tables::LocalizationTable::operator ::UnityEngine::Localization::Metadata::IMetadataCollection*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadataCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr ::UnityEngine::Localization::Metadata::IMetadataCollection* UnityEngine::Localization::Tables::LocalizationTable::i___UnityEngine__Localization__Metadata__IMetadataCollection() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadataCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>"
constexpr  UnityEngine::Localization::Tables::LocalizationTable::operator ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>*() noexcept {
return static_cast<::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>"
constexpr ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>* UnityEngine::Localization::Tables::LocalizationTable::i___System__IComparable_1___UnityW___UnityEngine__Localization__Tables__LocalizationTable__() noexcept {
return static_cast<::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::LocalizationTable::LocalizationTable()   {
}
