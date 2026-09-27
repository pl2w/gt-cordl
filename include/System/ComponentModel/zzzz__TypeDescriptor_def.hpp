#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeDescriptor)
namespace GlobalNamespace {
struct TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor;
}
namespace GlobalNamespace {
struct TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel::Design {
class IDesigner;
}
namespace System::ComponentModel::Design {
class ITypeDescriptorFilterService;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class AttributeProvider_TypeDescriptor_AttributeTypeDescriptor;
}
namespace System::ComponentModel {
class ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class IComNativeDescriptorHandler;
}
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class RefreshEventHandler;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::ComponentModel {
class TypeDescriptor_AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_AttributeProvider;
}
namespace System::ComponentModel {
class TypeDescriptor_ComNativeDescriptionProvider;
}
namespace System::ComponentModel {
class TypeDescriptor_FilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_IUnimplemented;
}
namespace System::ComponentModel {
class TypeDescriptor_MemberDescriptorComparer;
}
namespace System::ComponentModel {
class TypeDescriptor_MergedTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptionNode;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorComObject;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorInterface;
}
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::Diagnostics {
class BooleanSwitch;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Module;
}
namespace System {
class Attribute;
}
namespace System {
class IServiceProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class AttributeProvider_TypeDescriptor_AttributeTypeDescriptor;
}
namespace System::ComponentModel {
class ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptor_AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_AttributeProvider;
}
namespace System::ComponentModel {
class TypeDescriptor_ComNativeDescriptionProvider;
}
namespace System::ComponentModel {
class TypeDescriptor_FilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_IUnimplemented;
}
namespace System::ComponentModel {
class TypeDescriptor_MemberDescriptorComparer;
}
namespace System::ComponentModel {
class TypeDescriptor_MergedTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptionNode;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorComObject;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorInterface;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*);
MARK_REF_T(::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_AttributeProvider*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_FilterCacheItem*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_IUnimplemented*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject*);
MARK_REF_T(::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/AttributeProvider/AttributeTypeDescriptor");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor*, "System.ComponentModel", "TypeDescriptor");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*, "System.ComponentModel", "TypeDescriptor/AttributeFilterCacheItem");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_AttributeProvider*, "System.ComponentModel", "TypeDescriptor/AttributeProvider");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*, "System.ComponentModel", "TypeDescriptor/ComNativeDescriptionProvider");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_FilterCacheItem*, "System.ComponentModel", "TypeDescriptor/FilterCacheItem");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_IUnimplemented*, "System.ComponentModel", "TypeDescriptor/IUnimplemented");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "System.ComponentModel", "TypeDescriptor/MemberDescriptorComparer");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/MergedTypeDescriptor");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorComObject");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorInterface");
// Dependencies System.Guid, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor
class CORDL_TYPE TypeDescriptor : public ::System::Object {
public:
// Declarations
using AttributeFilterCacheItem = ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem;

using AttributeProvider = ::System::ComponentModel::TypeDescriptor_AttributeProvider;

using ComNativeDescriptionProvider = ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider;

using FilterCacheItem = ::System::ComponentModel::TypeDescriptor_FilterCacheItem;

using IUnimplemented = ::System::ComponentModel::TypeDescriptor_IUnimplemented;

using MemberDescriptorComparer = ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer;

using MergedTypeDescriptor = ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor;

using TypeDescriptionNode = ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode;

using TypeDescriptorComObject = ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject;

using TypeDescriptorInterface = ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface;

/// @brief Field Refreshed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Refreshed, put=setStaticF_Refreshed)) ::System::ComponentModel::RefreshEventHandler*  Refreshed;

/// @brief Field TraceDescriptor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TraceDescriptor, put=setStaticF_TraceDescriptor)) ::System::Diagnostics::BooleanSwitch*  TraceDescriptor;

/// @brief Field _associationTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__associationTable, put=setStaticF__associationTable)) ::System::ComponentModel::WeakHashtable*  _associationTable;

/// @brief Field _collisionIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__collisionIndex, put=setStaticF__collisionIndex)) int32_t  _collisionIndex;

/// @brief Field _defaultProviders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultProviders, put=setStaticF__defaultProviders)) ::System::Collections::Hashtable*  _defaultProviders;

/// @brief Field _internalSyncObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__internalSyncObject, put=setStaticF__internalSyncObject)) ::System::Object*  _internalSyncObject;

/// @brief Field _metadataVersion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__metadataVersion, put=setStaticF__metadataVersion)) int32_t  _metadataVersion;

/// @brief Field _pipelineAttributeFilterKeys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pipelineAttributeFilterKeys, put=setStaticF__pipelineAttributeFilterKeys)) ::ArrayW<::System::Guid>  _pipelineAttributeFilterKeys;

/// @brief Field _pipelineFilterKeys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pipelineFilterKeys, put=setStaticF__pipelineFilterKeys)) ::ArrayW<::System::Guid>  _pipelineFilterKeys;

/// @brief Field _pipelineInitializeKeys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pipelineInitializeKeys, put=setStaticF__pipelineInitializeKeys)) ::ArrayW<::System::Guid>  _pipelineInitializeKeys;

/// @brief Field _pipelineMergeKeys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pipelineMergeKeys, put=setStaticF__pipelineMergeKeys)) ::ArrayW<::System::Guid>  _pipelineMergeKeys;

/// @brief Field _providerTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__providerTable, put=setStaticF__providerTable)) ::System::ComponentModel::WeakHashtable*  _providerTable;

/// @brief Field _providerTypeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__providerTypeTable, put=setStaticF__providerTypeTable)) ::System::Collections::Hashtable*  _providerTypeTable;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method AddAttributes, addr 0xad85f28, size 0x11c, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptionProvider* AddAttributes(::System::Object*  instance, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method AddAttributes, addr 0xad85d18, size 0x144, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptionProvider* AddAttributes(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method AddEditorTable, addr 0xad86384, size 0x64, virtual false, abstract: false, final false
static inline void AddEditorTable(::System::Type*  editorBaseType, ::System::Collections::Hashtable*  table) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method AddProvider, addr 0xad860e8, size 0x29c, virtual false, abstract: false, final false
static inline void AddProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method AddProvider, addr 0xad85824, size 0x284, virtual false, abstract: false, final false
static inline void AddProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method AddProviderTransparent, addr 0xad8784c, size 0xcc, virtual false, abstract: false, final false
static inline void AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method AddProviderTransparent, addr 0xad87758, size 0xf4, virtual false, abstract: false, final false
static inline void AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type) ;

/// @brief Method CheckDefaultProvider, addr 0xad87918, size 0x610, virtual false, abstract: false, final false
static inline void CheckDefaultProvider(::System::Type*  type) ;

/// @brief Method ConvertFromInvariantString, addr 0xad8d174, size 0x70, virtual false, abstract: false, final false
static inline ::System::Object* ConvertFromInvariantString(::System::Type*  type, ::StringW  stringValue) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method CreateAssociation, addr 0xad87f28, size 0x740, virtual false, abstract: false, final false
static inline void CreateAssociation(::System::Object*  primary, ::System::Object*  secondary) ;

/// @brief Method CreateDesigner, addr 0xad88668, size 0x450, virtual false, abstract: false, final false
static inline ::System::ComponentModel::Design::IDesigner* CreateDesigner(::System::ComponentModel::IComponent*  component, ::System::Type*  designerBaseType) ;

/// @brief Method CreateEvent, addr 0xad88ab8, size 0x84, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptor* CreateEvent(::System::Type*  componentType, ::StringW  name, ::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method CreateEvent, addr 0xad88b3c, size 0x74, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptor* CreateEvent(::System::Type*  componentType, ::System::ComponentModel::EventDescriptor*  oldEventDescriptor, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method CreateInstance, addr 0xad88bb0, size 0x2b0, virtual false, abstract: false, final false
static inline ::System::Object* CreateInstance(::System::IServiceProvider*  provider, ::System::Type*  objectType, ::ArrayW<::System::Type*>  argTypes, ::ArrayW<::System::Object*>  args) ;

/// @brief Method CreateProperty, addr 0xad88e60, size 0x80, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptor* CreateProperty(::System::Type*  componentType, ::StringW  name, ::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method CreateProperty, addr 0xad88ee0, size 0x1a4, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptor* CreateProperty(::System::Type*  componentType, ::System::ComponentModel::PropertyDescriptor*  oldPropertyDescriptor, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad89088, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::AttributeCollection*  attributes, ::System::ComponentModel::AttributeCollection*  debugAttributes) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad89090, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::AttributeCollection*  attributes, ::System::Object*  instance, bool  noCustomTypeDesc) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad8908c, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::AttributeCollection*  attributes, ::System::Type*  type) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad89098, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::TypeConverter*  converter, ::System::Object*  instance, bool  noCustomTypeDesc) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad89094, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::TypeConverter*  converter, ::System::Type*  type) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad890a0, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::EventDescriptorCollection*  events, ::System::Object*  instance, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad8909c, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::EventDescriptorCollection*  events, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad890a8, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::PropertyDescriptorCollection*  properties, ::System::Object*  instance, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad890a4, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::ComponentModel::PropertyDescriptorCollection*  properties, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugValidate, addr 0xad89084, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidate(::System::Type*  type, ::System::ComponentModel::AttributeCollection*  attributes, ::System::ComponentModel::AttributeCollection*  debugAttributes) ;

/// @brief Method FilterMembers, addr 0xad890ac, size 0x358, virtual false, abstract: false, final false
static inline ::System::Collections::ArrayList* FilterMembers(::System::Collections::IList*  members, ::ArrayW<::System::Attribute*>  attributes) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetAssociation, addr 0xad753fc, size 0x5b8, virtual false, abstract: false, final false
static inline ::System::Object* GetAssociation(::System::Type*  type, ::System::Object*  primary) ;

/// @brief Method GetAttributes, addr 0xad6fc74, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object*  component) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetAttributes, addr 0xad89560, size 0x418, virtual false, abstract: false, final false
static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetAttributes, addr 0xad79ddc, size 0x14c, virtual false, abstract: false, final false
static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type*  componentType) ;

/// @brief Method GetCache, addr 0xad7f1f4, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::IDictionary* GetCache(::System::Object*  instance) ;

/// @brief Method GetClassName, addr 0xad8cc54, size 0x58, virtual false, abstract: false, final false
static inline ::StringW GetClassName(::System::Object*  component) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetClassName, addr 0xad8ccac, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetClassName(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetClassName, addr 0xad8cd8c, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW GetClassName(::System::Type*  componentType) ;

/// @brief Method GetComponentName, addr 0xad812e0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW GetComponentName(::System::Object*  component) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetComponentName, addr 0xad8ce74, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetComponentName(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetConverter, addr 0xad8cf54, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object*  component) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetConverter, addr 0xad8cfac, size 0xe0, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetConverter, addr 0xad8d08c, size 0xe8, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type*  type) ;

/// @brief Method GetDefaultEvent, addr 0xad8d308, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object*  component) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetDefaultEvent, addr 0xad8d360, size 0xec, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetDefaultEvent, addr 0xad8d1e4, size 0x124, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Type*  componentType) ;

/// @brief Method GetDefaultProperty, addr 0xad8d570, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object*  component) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetDefaultProperty, addr 0xad8d5c8, size 0xec, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetDefaultProperty, addr 0xad8d44c, size 0x124, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Type*  componentType) ;

/// @brief Method GetDescriptor, addr 0xad89978, size 0x20c, virtual false, abstract: false, final false
static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetDescriptor, addr 0xad89490, size 0xd0, virtual false, abstract: false, final false
static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type*  type, ::StringW  typeName) ;

/// @brief Method GetEditor, addr 0xad8d6b4, size 0x68, virtual false, abstract: false, final false
static inline ::System::Object* GetEditor(::System::Object*  component, ::System::Type*  editorBaseType) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetEditor, addr 0xad8d71c, size 0x15c, virtual false, abstract: false, final false
static inline ::System::Object* GetEditor(::System::Object*  component, ::System::Type*  editorBaseType, bool  noCustomTypeDesc) ;

/// @brief Method GetEditor, addr 0xad8d878, size 0x164, virtual false, abstract: false, final false
static inline ::System::Object* GetEditor(::System::Type*  type, ::System::Type*  editorBaseType) ;

/// @brief Method GetEvents, addr 0xad83b9c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object*  component) ;

/// @brief Method GetEvents, addr 0xad8e164, size 0x68, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetEvents, addr 0xad8dc20, size 0x4dc, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetEvents, addr 0xad8e0fc, size 0x68, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetEvents, addr 0xad769bc, size 0x154, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type*  componentType) ;

/// @brief Method GetEvents, addr 0xad8d9dc, size 0x244, virtual false, abstract: false, final false
static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type*  componentType, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method GetExtendedDescriptor, addr 0xad89b84, size 0xb8, virtual false, abstract: false, final false
static inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::System::Object*  component) ;

/// @brief Method GetExtenderCollisionSuffix, addr 0xad8e824, size 0x304, virtual false, abstract: false, final false
static inline ::StringW GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor*  member) ;

/// @brief Method GetFullComponentName, addr 0xad8eb28, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW GetFullComponentName(::System::Object*  component) ;

/// @brief Method GetNodeForBaseType, addr 0xad8ebe0, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Type* GetNodeForBaseType(::System::Type*  searchType) ;

/// @brief Method GetProperties, addr 0xad83bf8, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object*  component) ;

/// @brief Method GetProperties, addr 0xad6e6f8, size 0x68, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method GetProperties, addr 0xad8f5c8, size 0x70, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetProperties, addr 0xad8eefc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object*  component, bool  noCustomTypeDesc) ;

/// @brief Method GetProperties, addr 0xad83c50, size 0x154, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type*  componentType) ;

/// @brief Method GetProperties, addr 0xad8ecb8, size 0x244, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type*  componentType, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method GetPropertiesImpl, addr 0xad8ef68, size 0x660, virtual false, abstract: false, final false
static inline ::System::ComponentModel::PropertyDescriptorCollection* GetPropertiesImpl(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc, bool  noAttributes) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetProvider, addr 0xad86044, size 0xa4, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptionProvider* GetProvider(::System::Object*  instance) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetProvider, addr 0xad85e5c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptionProvider* GetProvider(::System::Type*  type) ;

/// @brief Method GetProviderRecursive, addr 0xad8f638, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type*  type) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetReflectionType, addr 0xad8f690, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Type* GetReflectionType(::System::Object*  instance) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method GetReflectionType, addr 0xad72fb0, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Type* GetReflectionType(::System::Type*  type) ;

static inline ::System::ComponentModel::TypeDescriptor* New_ctor() ;

/// @brief Method NodeFor, addr 0xad8cbfc, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Object*  instance) ;

/// @brief Method NodeFor, addr 0xad86e08, size 0x164, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Object*  instance, bool  createDelegator) ;

/// @brief Method NodeFor, addr 0xad856f0, size 0x58, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Type*  type) ;

/// @brief Method NodeFor, addr 0xad863e8, size 0x4b4, virtual false, abstract: false, final false
static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Type*  type, bool  createDelegator) ;

/// @brief Method NodeRemove, addr 0xad8f744, size 0x3b0, virtual false, abstract: false, final false
static inline void NodeRemove(::System::Object*  key, ::System::ComponentModel::TypeDescriptionProvider*  provider) ;

/// @brief Method PipelineAttributeFilter, addr 0xad8e1cc, size 0x658, virtual false, abstract: false, final false
static inline ::System::Collections::ICollection* PipelineAttributeFilter(int32_t  pipelineType, ::System::Collections::ICollection*  members, ::ArrayW<::System::Attribute*>  filter, ::System::Object*  instance, ::System::Collections::IDictionary*  cache) ;

/// @brief Method PipelineFilter, addr 0xad8aca8, size 0x1840, virtual false, abstract: false, final false
static inline ::System::Collections::ICollection* PipelineFilter(int32_t  pipelineType, ::System::Collections::ICollection*  members, ::System::Object*  instance, ::System::Collections::IDictionary*  cache) ;

/// @brief Method PipelineInitialize, addr 0xad8c4e8, size 0x714, virtual false, abstract: false, final false
static inline ::System::Collections::ICollection* PipelineInitialize(int32_t  pipelineType, ::System::Collections::ICollection*  members, ::System::Collections::IDictionary*  cache) ;

/// @brief Method PipelineMerge, addr 0xad89c3c, size 0x106c, virtual false, abstract: false, final false
static inline ::System::Collections::ICollection* PipelineMerge(int32_t  pipelineType, ::System::Collections::ICollection*  primary, ::System::Collections::ICollection*  secondary, ::System::Object*  instance, ::System::Collections::IDictionary*  cache) ;

/// @brief Method RaiseRefresh, addr 0xad8faf4, size 0xac, virtual false, abstract: false, final false
static inline void RaiseRefresh(::System::Object*  component) ;

/// @brief Method RaiseRefresh, addr 0xad8fba0, size 0xac, virtual false, abstract: false, final false
static inline void RaiseRefresh(::System::Type*  type) ;

/// @brief Method Refresh, addr 0xad8fca4, size 0x944, virtual false, abstract: false, final false
static inline void Refresh(::System::Reflection::Module*  _cordl_module) ;

/// @brief Method Refresh, addr 0xad905e8, size 0xc8, virtual false, abstract: false, final false
static inline void Refresh(::System::Reflection::Assembly*  assembly) ;

/// @brief Method Refresh, addr 0xad8fc4c, size 0x58, virtual false, abstract: false, final false
static inline void Refresh(::System::Object*  component) ;

/// @brief Method Refresh, addr 0xad86f6c, size 0x7ec, virtual false, abstract: false, final false
static inline void Refresh(::System::Object*  component, bool  refreshReflectionProvider) ;

/// @brief Method Refresh, addr 0xad8689c, size 0x56c, virtual false, abstract: false, final false
static inline void Refresh(::System::Type*  type) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method RemoveAssociation, addr 0xad906b0, size 0x388, virtual false, abstract: false, final false
static inline void RemoveAssociation(::System::Object*  primary, ::System::Object*  secondary) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method RemoveAssociations, addr 0xad90a38, size 0xd0, virtual false, abstract: false, final false
static inline void RemoveAssociations(::System::Object*  primary) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method RemoveProvider, addr 0xad90c04, size 0xd4, virtual false, abstract: false, final false
static inline void RemoveProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method RemoveProvider, addr 0xad90b08, size 0xfc, virtual false, abstract: false, final false
static inline void RemoveProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method RemoveProviderTransparent, addr 0xad90dcc, size 0xcc, virtual false, abstract: false, final false
static inline void RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)2)]
/// @brief Method RemoveProviderTransparent, addr 0xad90cd8, size 0xf4, virtual false, abstract: false, final false
static inline void RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type) ;

/// @brief Method ShouldHideMember, addr 0xad89404, size 0x8c, virtual false, abstract: false, final false
static inline bool ShouldHideMember(::System::ComponentModel::MemberDescriptor*  member, ::System::Attribute*  attribute) ;

/// @brief Method SortDescriptorArray, addr 0xad90e98, size 0xd4, virtual false, abstract: false, final false
static inline void SortDescriptorArray(::System::Collections::IList*  infos) ;

/// [Conditional("DEBUG")]
/// @brief Method Trace, addr 0xad90f6c, size 0x4, virtual false, abstract: false, final false
static inline void Trace(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method .ctor, addr 0xad855e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_Refreshed, addr 0xad85b60, size 0xdc, virtual false, abstract: false, final false
static inline void add_Refreshed(::System::ComponentModel::RefreshEventHandler*  value) ;

static inline ::System::ComponentModel::RefreshEventHandler* getStaticF_Refreshed() ;

static inline ::System::Diagnostics::BooleanSwitch* getStaticF_TraceDescriptor() ;

static inline ::System::ComponentModel::WeakHashtable* getStaticF__associationTable() ;

static inline int32_t getStaticF__collisionIndex() ;

static inline ::System::Collections::Hashtable* getStaticF__defaultProviders() ;

static inline ::System::Object* getStaticF__internalSyncObject() ;

static inline int32_t getStaticF__metadataVersion() ;

static inline ::ArrayW<::System::Guid> getStaticF__pipelineAttributeFilterKeys() ;

static inline ::ArrayW<::System::Guid> getStaticF__pipelineFilterKeys() ;

static inline ::ArrayW<::System::Guid> getStaticF__pipelineInitializeKeys() ;

static inline ::ArrayW<::System::Guid> getStaticF__pipelineMergeKeys() ;

static inline ::System::ComponentModel::WeakHashtable* getStaticF__providerTable() ;

static inline ::System::Collections::Hashtable* getStaticF__providerTypeTable() ;

/// @brief Method get_ComNativeDescriptorHandler, addr 0xad855ec, size 0xa4, virtual false, abstract: false, final false
static inline ::System::ComponentModel::IComNativeDescriptorHandler* get_ComNativeDescriptorHandler() ;

/// @brief Method get_ComObjectType, addr 0xad85690, size 0x60, virtual false, abstract: false, final false
static inline ::System::Type* get_ComObjectType() ;

/// @brief Method get_InterfaceType, addr 0xad85aa8, size 0x60, virtual false, abstract: false, final false
static inline ::System::Type* get_InterfaceType() ;

/// @brief Method get_MetadataVersion, addr 0xad85b08, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_MetadataVersion() ;

/// [CompilerGenerated]
/// @brief Method remove_Refreshed, addr 0xad85c3c, size 0xdc, virtual false, abstract: false, final false
static inline void remove_Refreshed(::System::ComponentModel::RefreshEventHandler*  value) ;

static inline void setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler*  value) ;

static inline void setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch*  value) ;

static inline void setStaticF__associationTable(::System::ComponentModel::WeakHashtable*  value) ;

static inline void setStaticF__collisionIndex(int32_t  value) ;

static inline void setStaticF__defaultProviders(::System::Collections::Hashtable*  value) ;

static inline void setStaticF__internalSyncObject(::System::Object*  value) ;

static inline void setStaticF__metadataVersion(int32_t  value) ;

static inline void setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid>  value) ;

static inline void setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid>  value) ;

static inline void setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid>  value) ;

static inline void setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid>  value) ;

static inline void setStaticF__providerTable(::System::ComponentModel::WeakHashtable*  value) ;

static inline void setStaticF__providerTypeTable(::System::Collections::Hashtable*  value) ;

/// @brief Method set_ComNativeDescriptorHandler, addr 0xad85748, size 0xdc, virtual false, abstract: false, final false
static inline void set_ComNativeDescriptorHandler(::System::ComponentModel::IComNativeDescriptorHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor(TypeDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor(TypeDescriptor const& ) = delete;

/// @brief Field PIPELINE_ATTRIBUTES offset 0xffffffff size 0x4
static constexpr int32_t  PIPELINE_ATTRIBUTES{static_cast<int32_t>(0x0)};

/// @brief Field PIPELINE_EVENTS offset 0xffffffff size 0x4
static constexpr int32_t  PIPELINE_EVENTS{static_cast<int32_t>(0x2)};

/// @brief Field PIPELINE_PROPERTIES offset 0xffffffff size 0x4
static constexpr int32_t  PIPELINE_PROPERTIES{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::TypeDescriptor) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptorInterface
class CORDL_TYPE TypeDescriptor_TypeDescriptorInterface : public ::System::Object {
public:
// Declarations
static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface* New_ctor() ;

/// @brief Method .ctor, addr 0xad97070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_TypeDescriptorInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorInterface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_TypeDescriptorInterface(TypeDescriptor_TypeDescriptorInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_TypeDescriptorInterface(TypeDescriptor_TypeDescriptorInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10297};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
// [TypeDescriptionProvider("System.Windows.Forms.ComponentModel.Com2Interop.ComNativeDescriptor, System.Windows.Forms, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptorComObject
class CORDL_TYPE TypeDescriptor_TypeDescriptorComObject : public ::System::Object {
public:
// Declarations
static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject* New_ctor() ;

/// @brief Method .ctor, addr 0xad97068, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_TypeDescriptorComObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorComObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_TypeDescriptorComObject(TypeDescriptor_TypeDescriptorComObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorComObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_TypeDescriptorComObject(TypeDescriptor_TypeDescriptorComObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10296};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.ComponentModel.TypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptionNode
class CORDL_TYPE TypeDescriptor_TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider {
public:
// Declarations
using DefaultExtendedTypeDescriptor = ::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor;

using DefaultTypeDescriptor = ::GlobalNamespace::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor;

/// @brief Field Next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*  Next;

/// @brief Field Provider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Provider, put=__cordl_internal_set_Provider)) ::System::ComponentModel::TypeDescriptionProvider*  Provider;

/// @brief Method CreateInstance, addr 0xad93020, size 0x154, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance(::System::IServiceProvider*  provider, ::System::Type*  objectType, ::ArrayW<::System::Type*>  argTypes, ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetCache, addr 0xad93174, size 0x6c, virtual true, abstract: false, final false
inline ::System::Collections::IDictionary* GetCache(::System::Object*  instance) ;

/// @brief Method GetExtendedTypeDescriptor, addr 0xad931e0, size 0xd8, virtual true, abstract: false, final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object*  instance) ;

/// @brief Method GetExtenderProviders, addr 0xad932e8, size 0x6c, virtual true, abstract: false, final false
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*> GetExtenderProviders(::System::Object*  instance) ;

/// @brief Method GetFullComponentName, addr 0xad93354, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetFullComponentName(::System::Object*  component) ;

/// @brief Method GetReflectionType, addr 0xad933c0, size 0xb4, virtual true, abstract: false, final false
inline ::System::Type* GetReflectionType(::System::Type*  objectType, ::System::Object*  instance) ;

/// @brief Method GetRuntimeType, addr 0xad93474, size 0xac, virtual true, abstract: false, final false
inline ::System::Type* GetRuntimeType(::System::Type*  objectType) ;

/// @brief Method GetTypeDescriptor, addr 0xad93520, size 0x164, virtual true, abstract: false, final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance) ;

/// @brief Method IsSupportedType, addr 0xad936c8, size 0xac, virtual true, abstract: false, final false
inline bool IsSupportedType(::System::Type*  type) ;

static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* New_ctor(::System::ComponentModel::TypeDescriptionProvider*  provider) ;

constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* const& __cordl_internal_get_Next() const;

constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*& __cordl_internal_get_Next() ;

constexpr ::System::ComponentModel::TypeDescriptionProvider* const& __cordl_internal_get_Provider() const;

constexpr ::System::ComponentModel::TypeDescriptionProvider*& __cordl_internal_get_Provider() ;

constexpr void __cordl_internal_set_Next(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*  value) ;

constexpr void __cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider*  value) ;

/// @brief Method .ctor, addr 0xad92ff0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::TypeDescriptionProvider*  provider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_TypeDescriptionNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptionNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_TypeDescriptionNode(TypeDescriptor_TypeDescriptionNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptionNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_TypeDescriptionNode(TypeDescriptor_TypeDescriptionNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10295};

/// @brief Field Next, offset: 0x20, size: 0x8, def value: None
 ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*  ___Next;

/// @brief Field Provider, offset: 0x28, size: 0x8, def value: None
 ::System::ComponentModel::TypeDescriptionProvider*  ___Provider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode, ___Next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode, ___Provider) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode) == 0x30, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
class CORDL_TYPE TypeDescriptor_MergedTypeDescriptor : public ::System::Object {
public:
// Declarations
/// @brief Field _primary, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__primary, put=__cordl_internal_set__primary)) ::System::ComponentModel::ICustomTypeDescriptor*  _primary;

/// @brief Field _secondary, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondary, put=__cordl_internal_set__secondary)) ::System::ComponentModel::ICustomTypeDescriptor*  _secondary;

/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr operator  ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

static inline ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor* New_ctor(::System::ComponentModel::ICustomTypeDescriptor*  primary, ::System::ComponentModel::ICustomTypeDescriptor*  secondary) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0xad92204, size 0x110, virtual true, abstract: false, final true
inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0xad92314, size 0x118, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0xad9242c, size 0x118, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0xad92544, size 0x118, virtual true, abstract: false, final true
inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0xad9265c, size 0x118, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0xad92774, size 0x118, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0xad9288c, size 0x1a4, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xad92a30, size 0x118, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xad92b48, size 0x130, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xad92c78, size 0x118, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xad92d90, size 0x130, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0xad92ec0, size 0x130, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd) ;

constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& __cordl_internal_get__primary() const;

constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__primary() ;

constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& __cordl_internal_get__secondary() const;

constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__secondary() ;

constexpr void __cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor*  value) ;

constexpr void __cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor*  value) ;

/// @brief Method .ctor, addr 0xad921c0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::ICustomTypeDescriptor*  primary, ::System::ComponentModel::ICustomTypeDescriptor*  secondary) ;

/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_MergedTypeDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MergedTypeDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_MergedTypeDescriptor(TypeDescriptor_MergedTypeDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MergedTypeDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_MergedTypeDescriptor(TypeDescriptor_MergedTypeDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10292};

/// @brief Field _primary, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::ICustomTypeDescriptor*  ____primary;

/// @brief Field _secondary, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::ICustomTypeDescriptor*  ____secondary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor, ____primary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor, ____secondary) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
class CORDL_TYPE TypeDescriptor_MemberDescriptorComparer : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*  Instance;

/// @brief Convert operator to "::System::Collections::IComparer"
constexpr operator  ::System::Collections::IComparer*() noexcept;

/// @brief Method Compare, addr 0xad92034, size 0x11c, virtual true, abstract: false, final true
inline int32_t Compare(::System::Object*  left, ::System::Object*  right) ;

static inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xad92150, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* getStaticF_Instance() ;

/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

static inline void setStaticF_Instance(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_MemberDescriptorComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MemberDescriptorComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_MemberDescriptorComparer(TypeDescriptor_MemberDescriptorComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MemberDescriptorComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_MemberDescriptorComparer(TypeDescriptor_MemberDescriptorComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10291};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/IUnimplemented
class CORDL_TYPE TypeDescriptor_IUnimplemented {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_IUnimplemented", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_IUnimplemented(TypeDescriptor_IUnimplemented const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/FilterCacheItem
class CORDL_TYPE TypeDescriptor_FilterCacheItem : public ::System::Object {
public:
// Declarations
/// @brief Field FilteredMembers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilteredMembers, put=__cordl_internal_set_FilteredMembers)) ::System::Collections::ICollection*  FilteredMembers;

/// @brief Field _filterService, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterService, put=__cordl_internal_set__filterService)) ::System::ComponentModel::Design::ITypeDescriptorFilterService*  _filterService;

/// @brief Method IsValid, addr 0xad92024, size 0x10, virtual false, abstract: false, final false
inline bool IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService*  filterService) ;

static inline ::System::ComponentModel::TypeDescriptor_FilterCacheItem* New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService*  filterService, ::System::Collections::ICollection*  filteredMembers) ;

constexpr ::System::Collections::ICollection* const& __cordl_internal_get_FilteredMembers() const;

constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers() ;

constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService* const& __cordl_internal_get__filterService() const;

constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& __cordl_internal_get__filterService() ;

constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection*  value) ;

constexpr void __cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService*  value) ;

/// @brief Method .ctor, addr 0xad91fe0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService*  filterService, ::System::Collections::ICollection*  filteredMembers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_FilterCacheItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_FilterCacheItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_FilterCacheItem(TypeDescriptor_FilterCacheItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_FilterCacheItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_FilterCacheItem(TypeDescriptor_FilterCacheItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10289};

/// @brief Field _filterService, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::Design::ITypeDescriptorFilterService*  ____filterService;

/// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::ICollection*  ___FilteredMembers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_FilterCacheItem, ____filterService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_FilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeDescriptor_FilterCacheItem) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Attribute, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/AttributeFilterCacheItem
class CORDL_TYPE TypeDescriptor_AttributeFilterCacheItem : public ::System::Object {
public:
// Declarations
/// @brief Field FilteredMembers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilteredMembers, put=__cordl_internal_set_FilteredMembers)) ::System::Collections::ICollection*  FilteredMembers;

/// @brief Field _filter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::ArrayW<::System::Attribute*>  _filter;

/// @brief Method IsValid, addr 0xad91f6c, size 0x74, virtual false, abstract: false, final false
inline bool IsValid(::ArrayW<::System::Attribute*>  filter) ;

static inline ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem* New_ctor(::ArrayW<::System::Attribute*>  filter, ::System::Collections::ICollection*  filteredMembers) ;

constexpr ::System::Collections::ICollection* const& __cordl_internal_get_FilteredMembers() const;

constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers() ;

constexpr ::ArrayW<::System::Attribute*> const& __cordl_internal_get__filter() const;

constexpr ::ArrayW<::System::Attribute*>& __cordl_internal_get__filter() ;

constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection*  value) ;

constexpr void __cordl_internal_set__filter(::ArrayW<::System::Attribute*>  value) ;

/// @brief Method .ctor, addr 0xad91f28, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::Attribute*>  filter, ::System::Collections::ICollection*  filteredMembers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_AttributeFilterCacheItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_AttributeFilterCacheItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_AttributeFilterCacheItem(TypeDescriptor_AttributeFilterCacheItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_AttributeFilterCacheItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_AttributeFilterCacheItem(TypeDescriptor_AttributeFilterCacheItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10288};

/// @brief Field _filter, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Attribute*>  ____filter;

/// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::ICollection*  ___FilteredMembers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem, ____filter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.ComponentModel.TypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider
class CORDL_TYPE TypeDescriptor_ComNativeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
// Declarations
using ComNativeTypeDescriptor = ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor;

 __declspec(property(get=get_Handler, put=set_Handler)) ::System::ComponentModel::IComNativeDescriptorHandler*  Handler;

/// @brief Field _handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handler, put=__cordl_internal_set__handler)) ::System::ComponentModel::IComNativeDescriptorHandler*  _handler;

/// @brief Method GetTypeDescriptor, addr 0xad916bc, size 0x148, virtual true, abstract: false, final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance) ;

static inline ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider* New_ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler) ;

constexpr ::System::ComponentModel::IComNativeDescriptorHandler* const& __cordl_internal_get__handler() const;

constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& __cordl_internal_get__handler() ;

constexpr void __cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler*  value) ;

/// @brief Method .ctor, addr 0xad9167c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler) ;

/// @brief Method get_Handler, addr 0xad916ac, size 0x8, virtual false, abstract: false, final false
inline ::System::ComponentModel::IComNativeDescriptorHandler* get_Handler() ;

/// @brief Method set_Handler, addr 0xad916b4, size 0x8, virtual false, abstract: false, final false
inline void set_Handler(::System::ComponentModel::IComNativeDescriptorHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_ComNativeDescriptionProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_ComNativeDescriptionProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_ComNativeDescriptionProvider(TypeDescriptor_ComNativeDescriptionProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_ComNativeDescriptionProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_ComNativeDescriptionProvider(TypeDescriptor_ComNativeDescriptionProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10287};

/// @brief Field _handler, offset: 0x20, size: 0x8, def value: None
 ::System::ComponentModel::IComNativeDescriptorHandler*  ____handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider, ____handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor
class CORDL_TYPE ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor : public ::System::Object {
public:
// Declarations
/// @brief Field _handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__handler, put=__cordl_internal_set__handler)) ::System::ComponentModel::IComNativeDescriptorHandler*  _handler;

/// @brief Field _instance, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__instance, put=__cordl_internal_set__instance)) ::System::Object*  _instance;

/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr operator  ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

static inline ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor* New_ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler, ::System::Object*  instance) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0xad91848, size 0xa8, virtual true, abstract: false, final true
inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0xad918f0, size 0xac, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0xad9199c, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0xad919a4, size 0xac, virtual true, abstract: false, final true
inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0xad91a50, size 0xac, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0xad91afc, size 0xac, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0xad91ba8, size 0xb4, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xad91c5c, size 0xac, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0xad91d08, size 0xb4, virtual true, abstract: false, final true
inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xad91dbc, size 0xb0, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties() ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0xad91e6c, size 0xb4, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0xad91f20, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd) ;

constexpr ::System::ComponentModel::IComNativeDescriptorHandler* const& __cordl_internal_get__handler() const;

constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& __cordl_internal_get__handler() ;

constexpr ::System::Object* const& __cordl_internal_get__instance() const;

constexpr ::System::Object*& __cordl_internal_get__instance() ;

constexpr void __cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler*  value) ;

constexpr void __cordl_internal_set__instance(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad91804, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler, ::System::Object*  instance) ;

/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor(ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor(ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10286};

/// @brief Field _handler, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::IComNativeDescriptorHandler*  ____handler;

/// @brief Field _instance, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor, ____handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor, ____instance) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Attribute, System.ComponentModel.TypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/AttributeProvider
class CORDL_TYPE TypeDescriptor_AttributeProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
// Declarations
using AttributeTypeDescriptor = ::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor;

/// @brief Field _attrs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__attrs, put=__cordl_internal_set__attrs)) ::ArrayW<::System::Attribute*>  _attrs;

/// @brief Method GetTypeDescriptor, addr 0xad91310, size 0x9c, virtual true, abstract: false, final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance) ;

static inline ::System::ComponentModel::TypeDescriptor_AttributeProvider* New_ctor(::System::ComponentModel::TypeDescriptionProvider*  existingProvider, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attrs) ;

constexpr ::ArrayW<::System::Attribute*> const& __cordl_internal_get__attrs() const;

constexpr ::ArrayW<::System::Attribute*>& __cordl_internal_get__attrs() ;

constexpr void __cordl_internal_set__attrs(::ArrayW<::System::Attribute*>  value) ;

/// @brief Method .ctor, addr 0xad912e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::TypeDescriptionProvider*  existingProvider, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attrs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeDescriptor_AttributeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_AttributeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptor_AttributeProvider(TypeDescriptor_AttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_AttributeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptor_AttributeProvider(TypeDescriptor_AttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10285};

/// @brief Field _attrs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Attribute*>  ____attrs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_AttributeProvider, ____attrs) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::TypeDescriptor_AttributeProvider) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Attribute, System.ComponentModel.CustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/AttributeProvider/AttributeTypeDescriptor
class CORDL_TYPE AttributeProvider_TypeDescriptor_AttributeTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor {
public:
// Declarations
/// @brief Field _attributeArray, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeArray, put=__cordl_internal_set__attributeArray)) ::ArrayW<::System::Attribute*>  _attributeArray;

/// @brief Method GetAttributes, addr 0xad913e0, size 0x29c, virtual true, abstract: false, final false
inline ::System::ComponentModel::AttributeCollection* GetAttributes() ;

static inline ::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor* New_ctor(::ArrayW<::System::Attribute*>  attrs, ::System::ComponentModel::ICustomTypeDescriptor*  parent) ;

constexpr ::ArrayW<::System::Attribute*> const& __cordl_internal_get__attributeArray() const;

constexpr ::ArrayW<::System::Attribute*>& __cordl_internal_get__attributeArray() ;

constexpr void __cordl_internal_set__attributeArray(::ArrayW<::System::Attribute*>  value) ;

/// @brief Method .ctor, addr 0xad913ac, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::Attribute*>  attrs, ::System::ComponentModel::ICustomTypeDescriptor*  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributeProvider_TypeDescriptor_AttributeTypeDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributeProvider_TypeDescriptor_AttributeTypeDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributeProvider_TypeDescriptor_AttributeTypeDescriptor(AttributeProvider_TypeDescriptor_AttributeTypeDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributeProvider_TypeDescriptor_AttributeTypeDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributeProvider_TypeDescriptor_AttributeTypeDescriptor(AttributeProvider_TypeDescriptor_AttributeTypeDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10284};

/// @brief Field _attributeArray, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Attribute*>  ____attributeArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor, ____attributeArray) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
