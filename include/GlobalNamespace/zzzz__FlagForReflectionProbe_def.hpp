#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForReflectionProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FlagForReflectionProbe)
// Forward declare root types
namespace GlobalNamespace {
class FlagForReflectionProbe;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlagForReflectionProbe*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlagForReflectionProbe*, "", "FlagForReflectionProbe");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlagForReflectionProbe
class CORDL_TYPE FlagForReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enableSimpleReflectionProbe, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableSimpleReflectionProbe, put=__cordl_internal_set_enableSimpleReflectionProbe)) bool  enableSimpleReflectionProbe;

static inline ::GlobalNamespace::FlagForReflectionProbe* New_ctor() ;

constexpr bool const& __cordl_internal_get_enableSimpleReflectionProbe() const;

constexpr bool& __cordl_internal_get_enableSimpleReflectionProbe() ;

constexpr void __cordl_internal_set_enableSimpleReflectionProbe(bool  value) ;

/// @brief Method .ctor, addr 0x5b07c7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlagForReflectionProbe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlagForReflectionProbe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlagForReflectionProbe(FlagForReflectionProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlagForReflectionProbe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlagForReflectionProbe(FlagForReflectionProbe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3501};

/// @brief Field enableSimpleReflectionProbe, offset: 0x20, size: 0x1, def value: None
 bool  ___enableSimpleReflectionProbe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlagForReflectionProbe, ___enableSimpleReflectionProbe) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlagForReflectionProbe) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
