#pragma once
// IWYU pragma private; include "GlobalNamespace/CooldownType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimitType_1_def.hpp"
CORDL_MODULE_EXPORT(CooldownType)
namespace GlobalNamespace {
class CallLimiterWithCooldown;
}
// Forward declare root types
namespace GlobalNamespace {
class CooldownType;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CooldownType*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CooldownType*, "", "CooldownType");
// Dependencies CallLimitType`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: CooldownType
class CORDL_TYPE CooldownType : public ::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiterWithCooldown*> {
public:
// Declarations
static inline ::GlobalNamespace::CooldownType* New_ctor() ;

/// @brief Method .ctor, addr 0x5ac4cdc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CooldownType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CooldownType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CooldownType(CooldownType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CooldownType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CooldownType(CooldownType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CooldownType) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
