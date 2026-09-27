#pragma once
// IWYU pragma private; include "System/Data/DataViewManagerListItemTypeDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DataViewManagerListItemTypeDescriptor)
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
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManager;
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
class DataViewManagerListItemTypeDescriptor;
}
// Write type traits
MARK_REF_T(::System::Data::DataViewManagerListItemTypeDescriptor*);
DEFINE_IL2CPP_CLASS(::System::Data::DataViewManagerListItemTypeDescriptor*, "System.Data", "DataViewManagerListItemTypeDescriptor");
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataViewManagerListItemTypeDescriptor
class CORDL_TYPE DataViewManagerListItemTypeDescriptor : public ::System::Object {
public:
// Declarations
/// @brief Field _dataViewManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataViewManager, put=__cordl_internal_set__dataViewManager)) ::System::Data::DataViewManager*  _dataViewManager;

/// @brief Field _propsCollection, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__propsCollection, put=__cordl_internal_set__propsCollection)) ::System::ComponentModel::PropertyDescriptorCollection*  _propsCollection;

/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr operator  ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

/// @brief Method GetDataView, addr 0xa92f3cc, size 0x78, virtual false, abstract: false, final false
inline ::System::Data::DataView* GetDataView(::System::Data::DataTable*  table) ;

static inline ::System::Data::DataViewManagerListItemTypeDescriptor* New_ctor(::System::Data::DataViewManager*  dataViewManager) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0xa935ef0, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0xa935f48, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0xa935f50, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0xa935f58, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0xa935f60, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0xa935f68, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0xa935f70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xa935f78, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xa935fd0, size 0x58, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xa936028, size 0x9c, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xa9360c4, size 0x1a0, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0xa936264, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd) ;

constexpr ::System::Data::DataViewManager* const& __cordl_internal_get__dataViewManager() const;

constexpr ::System::Data::DataViewManager*& __cordl_internal_get__dataViewManager() ;

constexpr ::System::ComponentModel::PropertyDescriptorCollection* const& __cordl_internal_get__propsCollection() const;

constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __cordl_internal_get__propsCollection() ;

constexpr void __cordl_internal_set__dataViewManager(::System::Data::DataViewManager*  value) ;

constexpr void __cordl_internal_set__propsCollection(::System::ComponentModel::PropertyDescriptorCollection*  value) ;

/// @brief Method .ctor, addr 0xa934fd4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataViewManager*  dataViewManager) ;

/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataViewManagerListItemTypeDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataViewManagerListItemTypeDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataViewManagerListItemTypeDescriptor(DataViewManagerListItemTypeDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataViewManagerListItemTypeDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataViewManagerListItemTypeDescriptor(DataViewManagerListItemTypeDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21001};

/// @brief Field _dataViewManager, offset: 0x10, size: 0x8, def value: None
 ::System::Data::DataViewManager*  ____dataViewManager;

/// @brief Field _propsCollection, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::PropertyDescriptorCollection*  ____propsCollection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataViewManagerListItemTypeDescriptor, ____dataViewManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManagerListItemTypeDescriptor, ____propsCollection) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataViewManagerListItemTypeDescriptor) == 0x20, "Size mismatch!");

} // namespace end def System::Data
