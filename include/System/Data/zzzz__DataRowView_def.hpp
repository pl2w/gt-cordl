#pragma once
// IWYU pragma private; include "System/Data/DataRowView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowView)
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class IDataErrorInfo;
}
namespace System::ComponentModel {
class IEditableObject;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataView;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataRowView;
}
// Write type traits
MARK_REF_T(::System::Data::DataRowView*);
DEFINE_IL2CPP_CLASS(::System::Data::DataRowView*, "System.Data", "DataRowView");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataRowView
class CORDL_TYPE DataRowView : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DataView)) ::System::Data::DataView*  DataView;

 __declspec(property(get=get_IsNew)) bool  IsNew;

/// @brief Field PropertyChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropertyChanged, put=__cordl_internal_set_PropertyChanged)) ::System::ComponentModel::PropertyChangedEventHandler*  PropertyChanged;

 __declspec(property(get=get_Row)) ::System::Data::DataRow*  Row;

 __declspec(property(get=get_RowVersionDefault)) ::System::Data::DataRowVersion  RowVersionDefault;

 __declspec(property(get=System_ComponentModel_IDataErrorInfo_get_Error)) ::StringW  System_ComponentModel_IDataErrorInfo_Error;

 __declspec(property(get=System_ComponentModel_IDataErrorInfo_get_Item)) ::StringW  System_ComponentModel_IDataErrorInfo_Item[];

/// @brief Field _dataView, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataView, put=__cordl_internal_set__dataView)) ::System::Data::DataView*  _dataView;

/// @brief Field _delayBeginEdit, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__delayBeginEdit, put=__cordl_internal_set__delayBeginEdit)) bool  _delayBeginEdit;

/// @brief Field _row, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__row, put=__cordl_internal_set__row)) ::System::Data::DataRow*  _row;

/// @brief Field s_zeroPropertyDescriptorCollection, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_zeroPropertyDescriptorCollection, put=setStaticF_s_zeroPropertyDescriptorCollection)) ::System::ComponentModel::PropertyDescriptorCollection*  s_zeroPropertyDescriptorCollection;

/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr operator  ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::IDataErrorInfo"
constexpr operator  ::System::ComponentModel::IDataErrorInfo*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::IEditableObject"
constexpr operator  ::System::ComponentModel::IEditableObject*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr operator  ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

/// @brief Method BeginEdit, addr 0xa92c578, size 0xc, virtual true, abstract: false, final true
inline void BeginEdit() ;

/// @brief Method CancelEdit, addr 0xa92c584, size 0x4c, virtual true, abstract: false, final true
inline void CancelEdit() ;

/// @brief Method CreateChildView, addr 0xa9282e8, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataView* CreateChildView(::System::Data::DataRelation*  relation) ;

/// @brief Method CreateChildView, addr 0xa92c3d4, size 0x19c, virtual false, abstract: false, final false
inline ::System::Data::DataView* CreateChildView(::System::Data::DataRelation*  relation, bool  followParent) ;

/// @brief Method EndEdit, addr 0xa92c5f4, size 0x4c, virtual true, abstract: false, final true
inline void EndEdit() ;

/// @brief Method Equals, addr 0xa92c2a4, size 0xc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetColumnValue, addr 0xa920ca8, size 0x34, virtual false, abstract: false, final false
inline ::System::Object* GetColumnValue(::System::Data::DataColumn*  column) ;

/// @brief Method GetHashCode, addr 0xa92c2b0, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetRecord, addr 0xa92c38c, size 0x24, virtual false, abstract: false, final false
inline int32_t GetRecord() ;

/// @brief Method HasRecord, addr 0xa92c3b0, size 0x24, virtual false, abstract: false, final false
inline bool HasRecord() ;

static inline ::System::Data::DataRowView* New_ctor(::System::Data::DataView*  dataView, ::System::Data::DataRow*  row) ;

/// @brief Method RaisePropertyChangedEvent, addr 0xa92c778, size 0x90, virtual false, abstract: false, final false
inline void RaisePropertyChangedEvent(::StringW  propName) ;

/// @brief Method SetColumnValue, addr 0xa920e28, size 0x8c, virtual false, abstract: false, final false
inline void SetColumnValue(::System::Data::DataColumn*  column, ::System::Object*  value) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0xa92c808, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0xa92c860, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0xa92c868, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0xa92c870, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0xa92c878, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0xa92c880, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0xa92c888, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xa92c890, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xa92c8e8, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xa92c940, size 0x9c, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xa92c9dc, size 0x88, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0xa92ca64, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd) ;

/// @brief Method System.ComponentModel.IDataErrorInfo.get_Error, addr 0xa92c2fc, size 0x38, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_IDataErrorInfo_get_Error() ;

/// @brief Method System.ComponentModel.IDataErrorInfo.get_Item, addr 0xa92c2d4, size 0x28, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_IDataErrorInfo_get_Item(::StringW  colName) ;

constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& __cordl_internal_get_PropertyChanged() const;

constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged() ;

constexpr ::System::Data::DataView* const& __cordl_internal_get__dataView() const;

constexpr ::System::Data::DataView*& __cordl_internal_get__dataView() ;

constexpr bool const& __cordl_internal_get__delayBeginEdit() const;

constexpr bool& __cordl_internal_get__delayBeginEdit() ;

constexpr ::System::Data::DataRow* const& __cordl_internal_get__row() const;

constexpr ::System::Data::DataRow*& __cordl_internal_get__row() ;

constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__dataView(::System::Data::DataView*  value) ;

constexpr void __cordl_internal_set__delayBeginEdit(bool  value) ;

constexpr void __cordl_internal_set__row(::System::Data::DataRow*  value) ;

/// @brief Method .ctor, addr 0xa92c260, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataView*  dataView, ::System::Data::DataRow*  row) ;

/// [CompilerGenerated]
/// @brief Method add_PropertyChanged, addr 0xa92c640, size 0x9c, virtual true, abstract: false, final true
inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

static inline ::System::ComponentModel::PropertyDescriptorCollection* getStaticF_s_zeroPropertyDescriptorCollection() ;

/// @brief Method get_DataView, addr 0xa92c2cc, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataView* get_DataView() ;

/// @brief Method get_IsNew, addr 0xa92c5d0, size 0x24, virtual false, abstract: false, final false
inline bool get_IsNew() ;

/// @brief Method get_Row, addr 0xa92c570, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataRow* get_Row() ;

/// @brief Method get_RowVersionDefault, addr 0xa92c334, size 0x58, virtual false, abstract: false, final false
inline ::System::Data::DataRowVersion get_RowVersionDefault() ;

/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

/// @brief Convert to "::System::ComponentModel::IDataErrorInfo"
constexpr ::System::ComponentModel::IDataErrorInfo* i___System__ComponentModel__IDataErrorInfo() noexcept;

/// @brief Convert to "::System::ComponentModel::IEditableObject"
constexpr ::System::ComponentModel::IEditableObject* i___System__ComponentModel__IEditableObject() noexcept;

/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_PropertyChanged, addr 0xa92c6dc, size 0x9c, virtual true, abstract: false, final true
inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

static inline void setStaticF_s_zeroPropertyDescriptorCollection(::System::ComponentModel::PropertyDescriptorCollection*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataRowView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataRowView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataRowView(DataRowView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataRowView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataRowView(DataRowView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20987};

/// @brief Field _dataView, offset: 0x10, size: 0x8, def value: None
 ::System::Data::DataView*  ____dataView;

/// @brief Field _row, offset: 0x18, size: 0x8, def value: None
 ::System::Data::DataRow*  ____row;

/// @brief Field _delayBeginEdit, offset: 0x20, size: 0x1, def value: None
 bool  ____delayBeginEdit;

/// [CompilerGenerated]
/// @brief Field PropertyChanged, offset: 0x28, size: 0x8, def value: None
 ::System::ComponentModel::PropertyChangedEventHandler*  ___PropertyChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataRowView, ____dataView) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowView, ____row) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowView, ____delayBeginEdit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowView, ___PropertyChanged) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataRowView) == 0x30, "Size mismatch!");

} // namespace end def System::Data
