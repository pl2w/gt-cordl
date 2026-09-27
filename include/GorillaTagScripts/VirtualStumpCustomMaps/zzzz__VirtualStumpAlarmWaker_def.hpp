#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/VirtualStumpAlarmWaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VirtualStumpAlarmWaker)
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class VirtualStumpAlarmWaker;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker*, "GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpAlarmWaker");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpAlarmWaker
class CORDL_TYPE VirtualStumpAlarmWaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method EnterStumpCustomMode, addr 0x5bee748, size 0x54, virtual false, abstract: false, final false
inline void EnterStumpCustomMode() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker* New_ctor() ;

/// @brief Method .ctor, addr 0x5bee79c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpAlarmWaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpAlarmWaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpAlarmWaker(VirtualStumpAlarmWaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpAlarmWaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpAlarmWaker(VirtualStumpAlarmWaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4059};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpAlarmWaker) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
