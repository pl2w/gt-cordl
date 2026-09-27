#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableEntryMetadata_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntry_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadataCollection_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableCollectionMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableEntryMetadata_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SharedTableData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.get_Table
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable> (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0175d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_Table", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.set_Table
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Tables::LocalizationTable*)>(&::UnityEngine::Localization::Tables::TableEntry::set_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0175d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"set_Table", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::LocalizationTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::TableEntryData* (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0175e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Tables::TableEntryData*)>(&::UnityEngine::Localization::Tables::TableEntry::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0175e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"set_Data", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.get_SharedEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::get_SharedEntry)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb0175f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_SharedEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::get_Key)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb017648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.set_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::StringW)>(&::UnityEngine::Localization::Tables::TableEntry::set_Key)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb017660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"set_Key", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.get_KeyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::get_KeyId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb0165b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_KeyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.get_LocalizedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::get_LocalizedValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb0176cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_LocalizedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.get_MetadataEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::get_MetadataEntries)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb014198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_MetadataEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.AddSharedMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*)>(&::UnityEngine::Localization::Tables::TableEntry::AddSharedMetadata)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb0176e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"AddSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.AddSharedMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*)>(&::UnityEngine::Localization::Tables::TableEntry::AddSharedMetadata)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb0177cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"AddSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.AddMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Tables::TableEntry::AddMetadata)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb0177a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"AddMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.RemoveSharedMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*)>(&::UnityEngine::Localization::Tables::TableEntry::RemoveSharedMetadata)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb017858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"RemoveSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.RemoveSharedMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*)>(&::UnityEngine::Localization::Tables::TableEntry::RemoveSharedMetadata)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb017928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"RemoveSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.RemoveMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Tables::TableEntry::RemoveMetadata)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb0178ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"RemoveMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::TableEntry::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Tables::TableEntry::Contains)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb0179ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb0179d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableEntry::*)()>(&::UnityEngine::Localization::Tables::TableEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb016420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*& UnityEngine::Localization::Tables::TableEntry::__cordl_internal_get_m_SharedTableEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedTableEntry;
}
constexpr ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* const& UnityEngine::Localization::Tables::TableEntry::__cordl_internal_get_m_SharedTableEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedTableEntry;
}
constexpr void UnityEngine::Localization::Tables::TableEntry::__cordl_internal_set_m_SharedTableEntry(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SharedTableEntry = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>& UnityEngine::Localization::Tables::TableEntry::__cordl_internal_get__Table_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Table_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable> const& UnityEngine::Localization::Tables::TableEntry::__cordl_internal_get__Table_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Table_k__BackingField;
}
constexpr void UnityEngine::Localization::Tables::TableEntry::__cordl_internal_set__Table_k__BackingField(::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Table_k__BackingField = value;
}
constexpr ::UnityEngine::Localization::Tables::TableEntryData*& UnityEngine::Localization::Tables::TableEntry::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::UnityEngine::Localization::Tables::TableEntryData* const& UnityEngine::Localization::Tables::TableEntry::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void UnityEngine::Localization::Tables::TableEntry::__cordl_internal_set__Data_k__BackingField(::UnityEngine::Localization::Tables::TableEntryData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable> UnityEngine::Localization::Tables::TableEntry::get_Table()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_Table", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableEntry::set_Table(::UnityEngine::Localization::Tables::LocalizationTable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"set_Table", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::LocalizationTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Tables::TableEntryData* UnityEngine::Localization::Tables::TableEntry::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::TableEntryData*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableEntry::set_Data(::UnityEngine::Localization::Tables::TableEntryData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"set_Data", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* UnityEngine::Localization::Tables::TableEntry::get_SharedEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_SharedEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Tables::TableEntry::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableEntry::set_Key(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"set_Key", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t UnityEngine::Localization::Tables::TableEntry::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_KeyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Tables::TableEntry::get_LocalizedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_LocalizedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* UnityEngine::Localization::Tables::TableEntry::get_MetadataEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"get_MetadataEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline TObject UnityEngine::Localization::Tables::TableEntry::GetMetadata()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
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
inline void UnityEngine::Localization::Tables::TableEntry::GetMetadatas(::System::Collections::Generic::IList_1<TObject>*  foundItems)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
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
inline ::System::Collections::Generic::IList_1<TObject>* UnityEngine::Localization::Tables::TableEntry::GetMetadatas()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                    {"GetMetadatas", {::i2c::class_of<TObject>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TObject>*>(this, ___internal_method);
}
template<typename TShared>
requires(::cordl_internals::type_constraint<TShared, ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>)
inline bool UnityEngine::Localization::Tables::TableEntry::HasTagMetadata()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                    {"HasTagMetadata", {::i2c::class_of<TShared>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TShared>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TShared>
requires(::cordl_internals::type_constraint<TShared, ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*> && ::cordl_internals::default_constructor_constraint<TShared>)
inline void UnityEngine::Localization::Tables::TableEntry::AddTagMetadata()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                    {"AddTagMetadata", {::i2c::class_of<TShared>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TShared>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableEntry::AddSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"AddSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline void UnityEngine::Localization::Tables::TableEntry::AddSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"AddSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline void UnityEngine::Localization::Tables::TableEntry::AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"AddMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
template<typename TShared>
requires(::cordl_internals::type_constraint<TShared, ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>)
inline void UnityEngine::Localization::Tables::TableEntry::RemoveTagMetadata()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                    {"RemoveTagMetadata", {::i2c::class_of<TShared>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TShared>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableEntry::RemoveSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"RemoveSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline void UnityEngine::Localization::Tables::TableEntry::RemoveSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"RemoveSharedMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Tables::TableEntry::RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"RemoveMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Tables::TableEntry::Contains(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
inline ::StringW UnityEngine::Localization::Tables::TableEntry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::TableEntry* UnityEngine::Localization::Tables::TableEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::TableEntry*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr  UnityEngine::Localization::Tables::TableEntry::operator ::UnityEngine::Localization::Metadata::IMetadataCollection*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadataCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr ::UnityEngine::Localization::Metadata::IMetadataCollection* UnityEngine::Localization::Tables::TableEntry::i___UnityEngine__Localization__Metadata__IMetadataCollection() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadataCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::TableEntry::TableEntry()   {
}
