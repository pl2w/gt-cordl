#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CuratedMapDoorway.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CuratedDestinationsManager_CuratedDoorway_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CuratedMapDoorway)
namespace Modio::Mods {
class Mod;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CuratedMapDoorway;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedMapDoorway*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedMapDoorway*, "GorillaTagScripts.VirtualStumpCustomMaps", "CuratedMapDoorway");
// Dependencies GorillaTagScripts.VirtualStumpCustomMaps.CuratedDestinationsManager::CuratedDoorway, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CuratedMapDoorway
class CORDL_TYPE CuratedMapDoorway : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CuratedMod, put=set_CuratedMod)) ::Modio::Mods::Mod*  CuratedMod;

 __declspec(property(get=get_HasCuratedMap)) bool  HasCuratedMap;

/// @brief Field <CuratedMod>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CuratedMod_k__BackingField, put=__cordl_internal_set__CuratedMod_k__BackingField)) ::Modio::Mods::Mod*  _CuratedMod_k__BackingField;

/// @brief Field doorway, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorway, put=__cordl_internal_set_doorway)) ::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway  doorway;

/// @brief Field onCuratedMapResolved, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCuratedMapResolved, put=__cordl_internal_set_onCuratedMapResolved)) ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*  onCuratedMapResolved;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedMapDoorway* New_ctor() ;

/// @brief Method OnCuratedMapsUpdated, addr 0x5bded04, size 0xa8, virtual false, abstract: false, final false
inline void OnCuratedMapsUpdated() ;

/// @brief Method OnDisable, addr 0x5bdedac, size 0xbc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bdebdc, size 0x128, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__CuratedMod_k__BackingField() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__CuratedMod_k__BackingField() ;

constexpr ::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway const& __cordl_internal_get_doorway() const;

constexpr ::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway& __cordl_internal_get_doorway() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_onCuratedMapResolved() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*& __cordl_internal_get_onCuratedMapResolved() ;

constexpr void __cordl_internal_set__CuratedMod_k__BackingField(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set_doorway(::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway  value) ;

constexpr void __cordl_internal_set_onCuratedMapResolved(::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*  value) ;

/// @brief Method .ctor, addr 0x5bdee68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CuratedMod, addr 0x5bdebbc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* get_CuratedMod() ;

/// @brief Method get_HasCuratedMap, addr 0x5bdebcc, size 0x10, virtual false, abstract: false, final false
inline bool get_HasCuratedMap() ;

/// [CompilerGenerated]
/// @brief Method set_CuratedMod, addr 0x5bdebc4, size 0x8, virtual false, abstract: false, final false
inline void set_CuratedMod(::Modio::Mods::Mod*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CuratedMapDoorway() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CuratedMapDoorway", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CuratedMapDoorway(CuratedMapDoorway && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuratedMapDoorway", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuratedMapDoorway(CuratedMapDoorway const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4039};

/// [Tooltip("Which slot in the DestinationsCurated TitleData ID list this doorway loads")]
/// [SerializeField]
/// @brief Field doorway, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway  ___doorway;

/// @brief Field onCuratedMapResolved, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*  ___onCuratedMapResolved;

/// [CompilerGenerated]
/// @brief Field <CuratedMod>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____CuratedMod_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedMapDoorway, ___doorway) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedMapDoorway, ___onCuratedMapResolved) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedMapDoorway, ____CuratedMod_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedMapDoorway) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
