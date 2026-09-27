#pragma once
// IWYU pragma private; include "System/ComponentModel/ITypeDescriptorContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITypeDescriptorContext)
namespace System::ComponentModel {
class IContainer;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System {
class IServiceProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ITypeDescriptorContext*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ITypeDescriptorContext*, "System.ComponentModel", "ITypeDescriptorContext");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ITypeDescriptorContext
class CORDL_TYPE ITypeDescriptorContext {
public:
// Declarations
 __declspec(property(get=get_Container)) ::System::ComponentModel::IContainer*  Container;

 __declspec(property(get=get_Instance)) ::System::Object*  Instance;

 __declspec(property(get=get_PropertyDescriptor)) ::System::ComponentModel::PropertyDescriptor*  PropertyDescriptor;

/// @brief Convert operator to "::System::IServiceProvider"
constexpr operator  ::System::IServiceProvider*() noexcept;

/// @brief Method OnComponentChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnComponentChanged() ;

/// @brief Method OnComponentChanging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool OnComponentChanging() ;

/// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::IContainer* get_Container() ;

/// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_Instance() ;

/// @brief Method get_PropertyDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor() ;

/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITypeDescriptorContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITypeDescriptorContext(ITypeDescriptorContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10180};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
