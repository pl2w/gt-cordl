#pragma once
// IWYU pragma private; include "System/ComponentModel/LicenseProviderAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LicenseProviderAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicenseProviderAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::LicenseProviderAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::LicenseProviderAttribute*, "System.ComponentModel", "LicenseProviderAttribute");
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.LicenseProviderAttribute
class CORDL_TYPE LicenseProviderAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::LicenseProviderAttribute*  Default;

 __declspec(property(get=get_LicenseProvider)) ::System::Type*  LicenseProvider;

 __declspec(property(get=get_TypeId)) ::System::Object*  TypeId;

/// @brief Field _licenseProviderName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__licenseProviderName, put=__cordl_internal_set__licenseProviderName)) ::StringW  _licenseProviderName;

/// @brief Field _licenseProviderType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__licenseProviderType, put=__cordl_internal_set__licenseProviderType)) ::System::Type*  _licenseProviderType;

/// @brief Method Equals, addr 0xad5acb4, size 0x108, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0xad5adbc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::ComponentModel::LicenseProviderAttribute* New_ctor() ;

static inline ::System::ComponentModel::LicenseProviderAttribute* New_ctor(::System::Type*  type) ;

static inline ::System::ComponentModel::LicenseProviderAttribute* New_ctor(::StringW  typeName) ;

constexpr ::StringW const& __cordl_internal_get__licenseProviderName() const;

constexpr ::StringW& __cordl_internal_get__licenseProviderName() ;

constexpr ::System::Type* const& __cordl_internal_get__licenseProviderType() const;

constexpr ::System::Type*& __cordl_internal_get__licenseProviderType() ;

constexpr void __cordl_internal_set__licenseProviderName(::StringW  value) ;

constexpr void __cordl_internal_set__licenseProviderType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xad5ab94, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad5abe8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method .ctor, addr 0xad5abb8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  typeName) ;

static inline ::System::ComponentModel::LicenseProviderAttribute* getStaticF_Default() ;

/// @brief Method get_LicenseProvider, addr 0xad5a8a8, size 0xcc, virtual false, abstract: false, final false
inline ::System::Type* get_LicenseProvider() ;

/// @brief Method get_TypeId, addr 0xad5ac18, size 0x9c, virtual true, abstract: false, final false
inline ::System::Object* get_TypeId() ;

static inline void setStaticF_Default(::System::ComponentModel::LicenseProviderAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LicenseProviderAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LicenseProviderAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LicenseProviderAttribute(LicenseProviderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LicenseProviderAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LicenseProviderAttribute(LicenseProviderAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10194};

/// @brief Field _licenseProviderType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____licenseProviderType;

/// @brief Field _licenseProviderName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____licenseProviderName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::LicenseProviderAttribute, ____licenseProviderType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LicenseProviderAttribute, ____licenseProviderName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::LicenseProviderAttribute) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
