#pragma once
// IWYU pragma private; include "GlobalNamespace/PortTypeOverrideAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PortTypeOverrideAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class PortTypeOverrideAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PortTypeOverrideAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PortTypeOverrideAttribute*, "", "PortTypeOverrideAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: PortTypeOverrideAttribute
class CORDL_TYPE PortTypeOverrideAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::GlobalNamespace::PortTypeOverrideAttribute* New_ctor(::System::Type*  type) ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xb98b5e8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PortTypeOverrideAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PortTypeOverrideAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PortTypeOverrideAttribute(PortTypeOverrideAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PortTypeOverrideAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PortTypeOverrideAttribute(PortTypeOverrideAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32253};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PortTypeOverrideAttribute, ___type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PortTypeOverrideAttribute) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
