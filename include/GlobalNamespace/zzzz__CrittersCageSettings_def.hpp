#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCageSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActorSettings_def.hpp"
CORDL_MODULE_EXPORT(CrittersCageSettings)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersCageSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersCageSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersCageSettings*, "", "CrittersCageSettings");
// Dependencies CrittersActorSettings
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersCageSettings
class CORDL_TYPE CrittersCageSettings : public ::GlobalNamespace::CrittersActorSettings {
public:
// Declarations
/// @brief Field cagePoint, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cagePoint, put=__cordl_internal_set_cagePoint)) ::UnityW<::UnityEngine::Transform>  cagePoint;

/// @brief Field grabPoint, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPoint, put=__cordl_internal_set_grabPoint)) ::UnityW<::UnityEngine::Transform>  grabPoint;

static inline ::GlobalNamespace::CrittersCageSettings* New_ctor() ;

/// @brief Method UpdateActorSettings, addr 0x55fe294, size 0xa4, virtual true, abstract: false, final false
inline void UpdateActorSettings() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cagePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cagePoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPoint() ;

constexpr void __cordl_internal_set_cagePoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grabPoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x55fe338, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersCageSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersCageSettings(CrittersCageSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersCageSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersCageSettings(CrittersCageSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{94};

/// @brief Field cagePoint, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cagePoint;

/// @brief Field grabPoint, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersCageSettings, ___cagePoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCageSettings, ___grabPoint) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersCageSettings) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
