#pragma once
// IWYU pragma private; include "Fusion/RpcTargetAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RpcTargetAttribute)
// Forward declare root types
namespace Fusion {
class RpcTargetAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::RpcTargetAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::RpcTargetAttribute*, "Fusion", "RpcTargetAttribute");
// [AttributeUsage((System.AttributeTargets)2048)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RpcTargetAttribute
class CORDL_TYPE RpcTargetAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::RpcTargetAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5fd173c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RpcTargetAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RpcTargetAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RpcTargetAttribute(RpcTargetAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RpcTargetAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RpcTargetAttribute(RpcTargetAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RpcTargetAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
