#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedTriggerZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NamedTriggerZone)
// Forward declare root types
namespace GlobalNamespace {
class NamedTriggerZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NamedTriggerZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NamedTriggerZone*, "", "NamedTriggerZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedTriggerZone
class CORDL_TYPE NamedTriggerZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TriggerName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerName, put=__cordl_internal_set_TriggerName)) ::StringW  TriggerName;

/// @brief Method ConfigureCollider, addr 0x5d171f8, size 0x11c, virtual false, abstract: false, final false
inline void ConfigureCollider() ;

static inline ::GlobalNamespace::NamedTriggerZone* New_ctor() ;

/// @brief Method Reset, addr 0x5d171f4, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::StringW const& __cordl_internal_get_TriggerName() const;

constexpr ::StringW& __cordl_internal_get_TriggerName() ;

constexpr void __cordl_internal_set_TriggerName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5d17314, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NamedTriggerZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NamedTriggerZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NamedTriggerZone(NamedTriggerZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamedTriggerZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamedTriggerZone(NamedTriggerZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{489};

/// @brief Field TriggerName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TriggerName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NamedTriggerZone, ___TriggerName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NamedTriggerZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
