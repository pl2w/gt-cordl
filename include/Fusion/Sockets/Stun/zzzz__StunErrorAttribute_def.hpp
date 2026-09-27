#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunErrorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StunErrorAttribute)
// Forward declare root types
namespace Fusion::Sockets::Stun {
class StunErrorAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::Stun::StunErrorAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunErrorAttribute*, "Fusion.Sockets.Stun", "StunErrorAttribute");
// Dependencies System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunErrorAttribute
class CORDL_TYPE StunErrorAttribute : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Code)) int32_t  Code;

 __declspec(property(get=get_ReasonText)) ::StringW  ReasonText;

/// @brief Field <Code>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Code_k__BackingField, put=__cordl_internal_set__Code_k__BackingField)) int32_t  _Code_k__BackingField;

/// @brief Field <ReasonText>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReasonText_k__BackingField, put=__cordl_internal_set__ReasonText_k__BackingField)) ::StringW  _ReasonText_k__BackingField;

constexpr int32_t const& __cordl_internal_get__Code_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Code_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ReasonText_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ReasonText_k__BackingField() ;

constexpr void __cordl_internal_set__Code_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ReasonText_k__BackingField(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method get_Code, addr 0x6038e6c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Code() ;

/// [CompilerGenerated]
/// @brief Method get_ReasonText, addr 0x6038e74, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ReasonText() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunErrorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunErrorAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunErrorAttribute(StunErrorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunErrorAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunErrorAttribute(StunErrorAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29402};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Code>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Code_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ReasonText>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ReasonText_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::StunErrorAttribute, ____Code_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunErrorAttribute, ____ReasonText_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::StunErrorAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
