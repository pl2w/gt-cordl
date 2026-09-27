#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersGrabberSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActorSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersGrabberSettings)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersGrabberSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersGrabberSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersGrabberSettings*, "", "CrittersGrabberSettings");
// Dependencies CrittersActorSettings
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersGrabberSettings
class CORDL_TYPE CrittersGrabberSettings : public ::GlobalNamespace::CrittersActorSettings {
public:
// Declarations
/// @brief Field _grabDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabDistance, put=__cordl_internal_set__grabDistance)) float_t  _grabDistance;

/// @brief Field _grabPosition, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabPosition, put=__cordl_internal_set__grabPosition)) ::UnityW<::UnityEngine::Transform>  _grabPosition;

static inline ::GlobalNamespace::CrittersGrabberSettings* New_ctor() ;

/// @brief Method UpdateActorSettings, addr 0x55ff350, size 0xa0, virtual true, abstract: false, final false
inline void UpdateActorSettings() ;

constexpr float_t const& __cordl_internal_get__grabDistance() const;

constexpr float_t& __cordl_internal_get__grabDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabPosition() ;

constexpr void __cordl_internal_set__grabDistance(float_t  value) ;

constexpr void __cordl_internal_set__grabPosition(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x55ff3f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersGrabberSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersGrabberSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersGrabberSettings(CrittersGrabberSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersGrabberSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersGrabberSettings(CrittersGrabberSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{100};

/// @brief Field _grabPosition, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabPosition;

/// @brief Field _grabDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ____grabDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersGrabberSettings, ____grabPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersGrabberSettings, ____grabDistance) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersGrabberSettings) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
