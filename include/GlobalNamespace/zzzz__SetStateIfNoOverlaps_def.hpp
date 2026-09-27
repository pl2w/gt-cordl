#pragma once
// IWYU pragma private; include "GlobalNamespace/SetStateIfNoOverlaps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SetStateConditional_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetStateIfNoOverlaps)
namespace GlobalNamespace {
class VolumeCast;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class SetStateIfNoOverlaps;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetStateIfNoOverlaps*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetStateIfNoOverlaps*, "", "SetStateIfNoOverlaps");
// Dependencies SetStateConditional
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetStateIfNoOverlaps
class CORDL_TYPE SetStateIfNoOverlaps : public ::GlobalNamespace::SetStateConditional {
public:
// Declarations
/// @brief Field _volume, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) ::UnityW<::GlobalNamespace::VolumeCast>  _volume;

/// @brief Method CanSetState, addr 0x579f768, size 0x4c, virtual true, abstract: false, final false
inline bool CanSetState(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

static inline ::GlobalNamespace::SetStateIfNoOverlaps* New_ctor() ;

/// @brief Method Setup, addr 0x579f704, size 0x64, virtual true, abstract: false, final false
inline void Setup(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

constexpr ::UnityW<::GlobalNamespace::VolumeCast> const& __cordl_internal_get__volume() const;

constexpr ::UnityW<::GlobalNamespace::VolumeCast>& __cordl_internal_get__volume() ;

constexpr void __cordl_internal_set__volume(::UnityW<::GlobalNamespace::VolumeCast>  value) ;

/// @brief Method .ctor, addr 0x579f7b4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetStateIfNoOverlaps() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetStateIfNoOverlaps", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetStateIfNoOverlaps(SetStateIfNoOverlaps && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetStateIfNoOverlaps", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetStateIfNoOverlaps(SetStateIfNoOverlaps const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1523};

/// @brief Field _volume, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VolumeCast>  ____volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetStateIfNoOverlaps, ____volume) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetStateIfNoOverlaps) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
