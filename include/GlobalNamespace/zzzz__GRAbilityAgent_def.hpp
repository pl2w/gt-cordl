#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GRAbilityAgent)
namespace GlobalNamespace {
class GRAbilityBase;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityAgent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityAgent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityAgent*, "", "GRAbilityAgent");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityAgent
class CORDL_TYPE GRAbilityAgent : public ::System::Object {
public:
// Declarations
/// @brief Field currAbility, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_currAbility, put=__cordl_internal_set_currAbility)) ::GlobalNamespace::GRAbilityBase*  currAbility;

static inline ::GlobalNamespace::GRAbilityAgent* New_ctor() ;

constexpr ::GlobalNamespace::GRAbilityBase* const& __cordl_internal_get_currAbility() const;

constexpr ::GlobalNamespace::GRAbilityBase*& __cordl_internal_get_currAbility() ;

constexpr void __cordl_internal_set_currAbility(::GlobalNamespace::GRAbilityBase*  value) ;

/// @brief Method .ctor, addr 0x587f680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAgent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityAgent(GRAbilityAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityAgent(GRAbilityAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1933};

/// @brief Field currAbility, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityBase*  ___currAbility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityAgent, ___currAbility) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityAgent) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
