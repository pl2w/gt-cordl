#pragma once
// IWYU pragma private; include "System/ComponentModel/InstallerTypeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstallerTypeAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class InstallerTypeAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::InstallerTypeAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::InstallerTypeAttribute*, "System.ComponentModel", "InstallerTypeAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.InstallerTypeAttribute
class CORDL_TYPE InstallerTypeAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_InstallerType)) ::System::Type*  InstallerType;

/// @brief Field _typeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeName, put=__cordl_internal_set__typeName)) ::StringW  _typeName;

/// @brief Method Equals, addr 0xad588e4, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad58984, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::InstallerTypeAttribute* New_ctor(::System::Type*  installerType) ;

static inline ::System::ComponentModel::InstallerTypeAttribute* New_ctor(::StringW  typeName) ;

constexpr ::StringW const& __cordl_internal_get__typeName() const;

constexpr ::StringW& __cordl_internal_get__typeName() ;

constexpr void __cordl_internal_set__typeName(::StringW  value) ;

/// @brief Method .ctor, addr 0xad587ec, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  installerType) ;

/// @brief Method .ctor, addr 0xad58838, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  typeName) ;

/// @brief Method get_InstallerType, addr 0xad58868, size 0x7c, virtual true, abstract: false, final false
inline ::System::Type* get_InstallerType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstallerTypeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstallerTypeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstallerTypeAttribute(InstallerTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstallerTypeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstallerTypeAttribute(InstallerTypeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10182};

/// @brief Field _typeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____typeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::InstallerTypeAttribute, ____typeName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::InstallerTypeAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
