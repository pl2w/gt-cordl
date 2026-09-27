#pragma once
// IWYU pragma private; include "GlobalNamespace/PositionVolumeModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PositionVolumeModifier)
namespace GlobalNamespace {
class TimeOfDayDependentAudio;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PositionVolumeModifier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PositionVolumeModifier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PositionVolumeModifier*, "", "PositionVolumeModifier");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PositionVolumeModifier
class CORDL_TYPE PositionVolumeModifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioToMod, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioToMod, put=__cordl_internal_set_audioToMod)) ::UnityW<::GlobalNamespace::TimeOfDayDependentAudio>  audioToMod;

static inline ::GlobalNamespace::PositionVolumeModifier* New_ctor() ;

/// @brief Method OnTriggerStay, addr 0x568e478, size 0x1c, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::TimeOfDayDependentAudio> const& __cordl_internal_get_audioToMod() const;

constexpr ::UnityW<::GlobalNamespace::TimeOfDayDependentAudio>& __cordl_internal_get_audioToMod() ;

constexpr void __cordl_internal_set_audioToMod(::UnityW<::GlobalNamespace::TimeOfDayDependentAudio>  value) ;

/// @brief Method .ctor, addr 0x568e494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PositionVolumeModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PositionVolumeModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PositionVolumeModifier(PositionVolumeModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PositionVolumeModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PositionVolumeModifier(PositionVolumeModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{875};

/// @brief Field audioToMod, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TimeOfDayDependentAudio>  ___audioToMod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PositionVolumeModifier, ___audioToMod) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PositionVolumeModifier) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
