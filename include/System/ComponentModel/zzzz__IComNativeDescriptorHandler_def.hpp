#pragma once
// IWYU pragma private; include "System/ComponentModel/IComNativeDescriptorHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IComNativeDescriptorHandler)
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
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
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
namespace System::ComponentModel {
class IComNativeDescriptorHandler;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IComNativeDescriptorHandler*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IComNativeDescriptorHandler*, "System.ComponentModel", "IComNativeDescriptorHandler");
// [Obsolete("This interface has been deprecated. Add a TypeDescriptionProvider to handle type TypeDescriptor.ComObjectType instead.  https://go.microsoft.com/fwlink/?linkid=14202")]
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IComNativeDescriptorHandler
class CORDL_TYPE IComNativeDescriptorHandler {
public:
// Declarations
/// @brief Method GetAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object*  component) ;

/// @brief Method GetClassName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetClassName(::System::Object*  component) ;

/// @brief Method GetConverter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object*  component) ;

/// @brief Method GetDefaultEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object*  component) ;

/// @brief Method GetDefaultProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object*  component) ;

/// @brief Method GetEditor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetEditor(::System::Object*  component, ::System::Type*  baseEditorType) ;

/// @brief Method GetEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object*  component) ;

/// @brief Method GetEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetName(::System::Object*  component) ;

/// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method GetPropertyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetPropertyValue(::System::Object*  component, int32_t  dispid, ::by_ref<bool>  success) ;

/// @brief Method GetPropertyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetPropertyValue(::System::Object*  component, ::StringW  propertyName, ::by_ref<bool>  success) ;

// Ctor Parameters [CppParam { name: "", ty: "IComNativeDescriptorHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IComNativeDescriptorHandler(IComNativeDescriptorHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
