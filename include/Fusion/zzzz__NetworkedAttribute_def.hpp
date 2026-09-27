#pragma once
// IWYU pragma private; include "Fusion/NetworkedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkedAttribute)
// Forward declare root types
namespace Fusion {
class NetworkedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkedAttribute*, "Fusion", "NetworkedAttribute");
// [AttributeUsage((System.AttributeTargets)128, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkedAttribute
class CORDL_TYPE NetworkedAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Default, put=set_Default)) ::StringW  Default;

/// @brief Field <Default>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Default_k__BackingField, put=__cordl_internal_set__Default_k__BackingField)) ::StringW  _Default_k__BackingField;

static inline ::Fusion::NetworkedAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Default_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Default_k__BackingField() ;

constexpr void __cordl_internal_set__Default_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f700ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Default, addr 0x5f7009c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Default() ;

/// [CompilerGenerated]
/// @brief Method set_Default, addr 0x5f700a4, size 0x8, virtual false, abstract: false, final false
inline void set_Default(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedAttribute(NetworkedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedAttribute(NetworkedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18804};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Default>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Default_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkedAttribute, ____Default_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkedAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
