#pragma once
// IWYU pragma private; include "System/Data/DataViewSettingCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataViewSettingCollection)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManager;
}
namespace System::Data {
class DataViewSettingCollection_DataViewSettingsEnumerator;
}
namespace System::Data {
class DataViewSetting;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataViewSettingCollection;
}
namespace System::Data {
class DataViewSettingCollection_DataViewSettingsEnumerator;
}
// Write type traits
MARK_REF_T(::System::Data::DataViewSettingCollection*);
MARK_REF_T(::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*);
DEFINE_IL2CPP_CLASS(::System::Data::DataViewSettingCollection*, "System.Data", "DataViewSettingCollection");
DEFINE_IL2CPP_CLASS(::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*, "System.Data", "DataViewSettingCollection/DataViewSettingsEnumerator");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataViewSettingCollection
class CORDL_TYPE DataViewSettingCollection : public ::System::Object {
public:
// Declarations
using DataViewSettingsEnumerator = ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator;

/// @brief [Browsable(false)]
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief [Browsable(false)]
 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Data::DataViewSetting*  Item[];

/// @brief [Browsable(false)]
 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Field _dataViewManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataViewManager, put=__cordl_internal_set__dataViewManager)) ::System::Data::DataViewManager*  _dataViewManager;

/// @brief Field _list, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__list, put=__cordl_internal_set__list)) ::System::Collections::Hashtable*  _list;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method CopyTo, addr 0xa9364cc, size 0x140, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  ar, int32_t  index) ;

/// @brief Method GetEnumerator, addr 0xa93660c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Data::DataViewSettingCollection* New_ctor(::System::Data::DataViewManager*  dataViewManager) ;

/// @brief Method Remove, addr 0xa9367c0, size 0x20, virtual false, abstract: false, final false
inline void Remove(::System::Data::DataTable*  table) ;

constexpr ::System::Data::DataViewManager* const& __cordl_internal_get__dataViewManager() const;

constexpr ::System::Data::DataViewManager*& __cordl_internal_get__dataViewManager() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__list() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get__list() ;

constexpr void __cordl_internal_set__dataViewManager(::System::Data::DataViewManager*  value) ;

constexpr void __cordl_internal_set__list(::System::Collections::Hashtable*  value) ;

/// @brief Method .ctor, addr 0xa935004, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataViewManager*  dataViewManager) ;

/// @brief Method get_Count, addr 0xa936668, size 0x3c, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsSynchronized, addr 0xa9367b4, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0xa936314, size 0x108, virtual true, abstract: false, final false
inline ::System::Data::DataViewSetting* get_Item(::System::Data::DataTable*  table) ;

/// @brief Method get_SyncRoot, addr 0xa9367bc, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* get_SyncRoot() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0xa93641c, size 0xb0, virtual true, abstract: false, final false
inline void set_Item(::System::Data::DataTable*  table, ::System::Data::DataViewSetting*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataViewSettingCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataViewSettingCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataViewSettingCollection(DataViewSettingCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataViewSettingCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataViewSettingCollection(DataViewSettingCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21005};

/// @brief Field _dataViewManager, offset: 0x10, size: 0x8, def value: None
 ::System::Data::DataViewManager*  ____dataViewManager;

/// @brief Field _list, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ____list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataViewSettingCollection, ____dataViewManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSettingCollection, ____list) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataViewSettingCollection) == 0x20, "Size mismatch!");

} // namespace end def System::Data
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataViewSettingCollection/DataViewSettingsEnumerator
class CORDL_TYPE DataViewSettingCollection_DataViewSettingsEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field _dataViewSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataViewSettings, put=__cordl_internal_set__dataViewSettings)) ::System::Data::DataViewSettingCollection*  _dataViewSettings;

/// @brief Field _tableEnumerator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tableEnumerator, put=__cordl_internal_set__tableEnumerator)) ::System::Collections::IEnumerator*  _tableEnumerator;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0xa9367e0, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator* New_ctor(::System::Data::DataViewManager*  dvm) ;

/// @brief Method Reset, addr 0xa936880, size 0xa4, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::System::Data::DataViewSettingCollection* const& __cordl_internal_get__dataViewSettings() const;

constexpr ::System::Data::DataViewSettingCollection*& __cordl_internal_get__dataViewSettings() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__tableEnumerator() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__tableEnumerator() ;

constexpr void __cordl_internal_set__dataViewSettings(::System::Data::DataViewSettingCollection*  value) ;

constexpr void __cordl_internal_set__tableEnumerator(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0xa9366a4, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataViewManager*  dvm) ;

/// @brief Method get_Current, addr 0xa936924, size 0x110, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataViewSettingCollection_DataViewSettingsEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataViewSettingCollection_DataViewSettingsEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataViewSettingCollection_DataViewSettingsEnumerator(DataViewSettingCollection_DataViewSettingsEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataViewSettingCollection_DataViewSettingsEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataViewSettingCollection_DataViewSettingsEnumerator(DataViewSettingCollection_DataViewSettingsEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21004};

/// @brief Field _dataViewSettings, offset: 0x10, size: 0x8, def value: None
 ::System::Data::DataViewSettingCollection*  ____dataViewSettings;

/// @brief Field _tableEnumerator, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ____tableEnumerator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator, ____dataViewSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator, ____tableEnumerator) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator) == 0x20, "Size mismatch!");

} // namespace end def System::Data
