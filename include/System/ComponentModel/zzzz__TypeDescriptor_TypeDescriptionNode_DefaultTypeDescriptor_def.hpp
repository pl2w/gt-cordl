#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor)
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
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptionNode;
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
namespace GlobalNamespace {
struct TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct CORDL_TYPE TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor {
public:
// Declarations
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr operator  ::System::ComponentModel::ICustomTypeDescriptor*() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0xad9543c, size 0x290, virtual true, abstract: false, final true
inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0xad956cc, size 0x228, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0xad958f4, size 0x1fc, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0xad95af0, size 0x290, virtual true, abstract: false, final true
inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0xad95d80, size 0x1fc, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0xad95f7c, size 0x1fc, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0xad96178, size 0x27c, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xad963f4, size 0x294, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xad96688, size 0x29c, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xad96924, size 0x294, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xad96bb8, size 0x29c, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0xad96e54, size 0x214, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd) ;

/// @brief Method .ctor, addr 0xad93684, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*  node, ::System::Type*  objectType, ::System::Object*  instance) ;

/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() ;

// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor() ;

// Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_objectType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*  _node, ::System::Type*  _objectType, ::System::Object*  _instance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _node, offset: 0x0, size: 0x8, def value: None
 ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*  _node;

/// @brief Field _objectType, offset: 0x8, size: 0x8, def value: None
 ::System::Type*  _objectType;

/// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  _instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, _node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, _objectType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, _instance) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
