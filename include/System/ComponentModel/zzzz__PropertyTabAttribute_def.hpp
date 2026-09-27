#pragma once
// IWYU pragma private; include "System/ComponentModel/PropertyTabAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyTabScope_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyTabAttribute)
namespace System::ComponentModel {
struct PropertyTabScope;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyTabAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::PropertyTabAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::PropertyTabAttribute*, "System.ComponentModel", "PropertyTabAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute, System.ComponentModel.PropertyTabScope, System.Type
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.PropertyTabAttribute
class CORDL_TYPE PropertyTabAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_TabClassNames)) ::ArrayW<::StringW>  TabClassNames;

 __declspec(property(get=get_TabClasses)) ::ArrayW<::System::Type*>  TabClasses;

 __declspec(property(get=get_TabScopes, put=set_TabScopes)) ::ArrayW<::System::ComponentModel::PropertyTabScope>  TabScopes;

/// @brief Field <TabScopes>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__TabScopes_k__BackingField, put=__cordl_internal_set__TabScopes_k__BackingField)) ::ArrayW<::System::ComponentModel::PropertyTabScope>  _TabScopes_k__BackingField;

/// @brief Field _tabClassNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabClassNames, put=__cordl_internal_set__tabClassNames)) ::ArrayW<::StringW>  _tabClassNames;

/// @brief Field _tabClasses, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabClasses, put=__cordl_internal_set__tabClasses)) ::ArrayW<::System::Type*>  _tabClasses;

/// @brief Method Equals, addr 0xad5508c, size 0x188, virtual false, abstract: false, final false
inline bool Equals(::System::ComponentModel::PropertyTabAttribute*  other) ;

/// @brief Method Equals, addr 0xad55000, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0xad55214, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method InitializeArrays, addr 0xad55228, size 0x31c, virtual false, abstract: false, final false
inline void InitializeArrays(::ArrayW<::StringW>  tabClassNames, ::ArrayW<::System::Type*>  tabClasses, ::ArrayW<::System::ComponentModel::PropertyTabScope>  tabScopes) ;

/// @brief Method InitializeArrays, addr 0xad5521c, size 0xc, virtual false, abstract: false, final false
inline void InitializeArrays(::ArrayW<::StringW>  tabClassNames, ::ArrayW<::System::ComponentModel::PropertyTabScope>  tabScopes) ;

/// @brief Method InitializeArrays, addr 0xad55544, size 0x10, virtual false, abstract: false, final false
inline void InitializeArrays(::ArrayW<::System::Type*>  tabClasses, ::ArrayW<::System::ComponentModel::PropertyTabScope>  tabScopes) ;

static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor() ;

static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::System::Type*  tabClass) ;

static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::System::Type*  tabClass, ::System::ComponentModel::PropertyTabScope  tabScope) ;

static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::StringW  tabClassName) ;

static inline ::System::ComponentModel::PropertyTabAttribute* New_ctor(::StringW  tabClassName, ::System::ComponentModel::PropertyTabScope  tabScope) ;

constexpr ::ArrayW<::System::ComponentModel::PropertyTabScope> const& __cordl_internal_get__TabScopes_k__BackingField() const;

constexpr ::ArrayW<::System::ComponentModel::PropertyTabScope>& __cordl_internal_get__TabScopes_k__BackingField() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__tabClassNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__tabClassNames() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__tabClasses() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__tabClasses() ;

constexpr void __cordl_internal_set__TabScopes_k__BackingField(::ArrayW<::System::ComponentModel::PropertyTabScope>  value) ;

constexpr void __cordl_internal_set__tabClassNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__tabClasses(::ArrayW<::System::Type*>  value) ;

/// @brief Method .ctor, addr 0xad5482c, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad54950, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  tabClass) ;

/// @brief Method .ctor, addr 0xad54958, size 0x184, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  tabClass, ::System::ComponentModel::PropertyTabScope  tabScope) ;

/// @brief Method .ctor, addr 0xad54adc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  tabClassName) ;

/// @brief Method .ctor, addr 0xad54ae4, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::StringW  tabClassName, ::System::ComponentModel::PropertyTabScope  tabScope) ;

/// @brief Method get_TabClassNames, addr 0xad54f7c, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_TabClassNames() ;

/// @brief Method get_TabClasses, addr 0xad54c44, size 0x338, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> get_TabClasses() ;

/// [CompilerGenerated]
/// @brief Method get_TabScopes, addr 0xad54ff0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::ComponentModel::PropertyTabScope> get_TabScopes() ;

/// [CompilerGenerated]
/// @brief Method set_TabScopes, addr 0xad54ff8, size 0x8, virtual false, abstract: false, final false
inline void set_TabScopes(::ArrayW<::System::ComponentModel::PropertyTabScope>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyTabAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyTabAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyTabAttribute(PropertyTabAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyTabAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyTabAttribute(PropertyTabAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10152};

/// @brief Field _tabClasses, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ____tabClasses;

/// @brief Field _tabClassNames, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____tabClassNames;

/// [CompilerGenerated]
/// @brief Field <TabScopes>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::ComponentModel::PropertyTabScope>  ____TabScopes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::PropertyTabAttribute, ____tabClasses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyTabAttribute, ____tabClassNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyTabAttribute, ____TabScopes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::PropertyTabAttribute) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
