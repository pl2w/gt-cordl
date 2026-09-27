#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForBaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FlagForBaking)
// Forward declare root types
namespace GlobalNamespace {
class FlagForBaking;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlagForBaking*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlagForBaking*, "", "FlagForBaking");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlagForBaking
class CORDL_TYPE FlagForBaking : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enableForBaking, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableForBaking, put=__cordl_internal_set_enableForBaking)) bool  enableForBaking;

static inline ::GlobalNamespace::FlagForBaking* New_ctor() ;

constexpr bool const& __cordl_internal_get_enableForBaking() const;

constexpr bool& __cordl_internal_get_enableForBaking() ;

constexpr void __cordl_internal_set_enableForBaking(bool  value) ;

/// @brief Method .ctor, addr 0x5b07c6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlagForBaking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlagForBaking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlagForBaking(FlagForBaking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlagForBaking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlagForBaking(FlagForBaking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3498};

/// @brief Field enableForBaking, offset: 0x20, size: 0x1, def value: None
 bool  ___enableForBaking;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlagForBaking, ___enableForBaking) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlagForBaking) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
