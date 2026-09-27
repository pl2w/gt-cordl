#pragma once
// IWYU pragma private; include "GlobalNamespace/InvalidType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ProxyType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InvalidType)
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class InvalidType;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InvalidType*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InvalidType*, "", "InvalidType");
// Dependencies ProxyType
namespace GlobalNamespace {
// Is value type: false
// CS Name: InvalidType
class CORDL_TYPE InvalidType : public ::GlobalNamespace::ProxyType {
public:
// Declarations
 __declspec(property(get=get_AssemblyQualifiedName)) ::StringW  AssemblyQualifiedName;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field _self, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__self, put=__cordl_internal_set__self)) ::System::Type*  _self;

static inline ::GlobalNamespace::InvalidType* New_ctor() ;

constexpr ::System::Type* const& __cordl_internal_get__self() const;

constexpr ::System::Type*& __cordl_internal_get__self() ;

constexpr void __cordl_internal_set__self(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5b2101c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AssemblyQualifiedName, addr 0x5b20ffc, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_FullName, addr 0x5b20fdc, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_Name, addr 0x5b20fc0, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidType(InvalidType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidType(InvalidType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3608};

/// @brief Field _self, offset: 0x28, size: 0x8, def value: None
 ::System::Type*  ____self;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InvalidType, ____self) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InvalidType) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
