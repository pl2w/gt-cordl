#pragma once
// IWYU pragma private; include "System/ComponentModel/ToolboxItemAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ToolboxItemAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ToolboxItemAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ToolboxItemAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ToolboxItemAttribute*, "System.ComponentModel", "ToolboxItemAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ToolboxItemAttribute
class CORDL_TYPE ToolboxItemAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::ToolboxItemAttribute*  Default;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::System::ComponentModel::ToolboxItemAttribute*  None;

 __declspec(property(get=get_ToolboxItemType)) ::System::Type*  ToolboxItemType;

 __declspec(property(get=get_ToolboxItemTypeName)) ::StringW  ToolboxItemTypeName;

/// @brief Field _toolboxItemType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__toolboxItemType, put=__cordl_internal_set__toolboxItemType)) ::System::Type*  _toolboxItemType;

/// @brief Field _toolboxItemTypeName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__toolboxItemTypeName, put=__cordl_internal_set__toolboxItemTypeName)) ::StringW  _toolboxItemTypeName;

/// @brief Method Equals, addr 0xad558dc, size 0xd0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad559ac, size 0x24, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0xad55554, size 0x68, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::ToolboxItemAttribute* New_ctor(bool  defaultType) ;

static inline ::System::ComponentModel::ToolboxItemAttribute* New_ctor(::System::Type*  toolboxItemType) ;

static inline ::System::ComponentModel::ToolboxItemAttribute* New_ctor(::StringW  toolboxItemTypeName) ;

constexpr ::System::Type* const& __cordl_internal_get__toolboxItemType() const;

constexpr ::System::Type*& __cordl_internal_get__toolboxItemType() ;

constexpr ::StringW const& __cordl_internal_get__toolboxItemTypeName() const;

constexpr ::StringW& __cordl_internal_get__toolboxItemTypeName() ;

constexpr void __cordl_internal_set__toolboxItemType(::System::Type*  value) ;

constexpr void __cordl_internal_set__toolboxItemTypeName(::StringW  value) ;

/// @brief Method .ctor, addr 0xad555bc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(bool  defaultType) ;

/// @brief Method .ctor, addr 0xad556bc, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  toolboxItemType) ;

/// @brief Method .ctor, addr 0xad55628, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::StringW  toolboxItemTypeName) ;

static inline ::System::ComponentModel::ToolboxItemAttribute* getStaticF_Default() ;

static inline ::System::ComponentModel::ToolboxItemAttribute* getStaticF_None() ;

/// @brief Method get_ToolboxItemType, addr 0xad55718, size 0x1a0, virtual false, abstract: false, final false
inline ::System::Type* get_ToolboxItemType() ;

/// @brief Method get_ToolboxItemTypeName, addr 0xad558b8, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_ToolboxItemTypeName() ;

static inline void setStaticF_Default(::System::ComponentModel::ToolboxItemAttribute*  value) ;

static inline void setStaticF_None(::System::ComponentModel::ToolboxItemAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToolboxItemAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToolboxItemAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToolboxItemAttribute(ToolboxItemAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToolboxItemAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToolboxItemAttribute(ToolboxItemAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10154};

/// @brief Field _toolboxItemType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____toolboxItemType;

/// @brief Field _toolboxItemTypeName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____toolboxItemTypeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ToolboxItemAttribute, ____toolboxItemType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ToolboxItemAttribute, ____toolboxItemTypeName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ToolboxItemAttribute) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
