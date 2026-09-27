#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSpawnConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(GhostReactorSpawnConfig)
namespace GlobalNamespace {
struct GhostReactorSpawnConfig_EntitySpawnGroup;
}
namespace GlobalNamespace {
struct GhostReactorSpawnConfig_SpawnPointType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorSpawnConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorSpawnConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorSpawnConfig*, "", "GhostReactorSpawnConfig");
// [CreateAssetMenu(fileName = "GhostReactorSpawnConfig", menuName = "ScriptableObjects/GhostReactorSpawnConfig")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorSpawnConfig
class CORDL_TYPE GhostReactorSpawnConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using EntitySpawnGroup = ::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup;

using SpawnPointType = ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType;

/// @brief Field entitySpawnGroups, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_entitySpawnGroups, put=__cordl_internal_set_entitySpawnGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*  entitySpawnGroups;

static inline ::GlobalNamespace::GhostReactorSpawnConfig* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>* const& __cordl_internal_get_entitySpawnGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*& __cordl_internal_get_entitySpawnGroups() ;

constexpr void __cordl_internal_set_entitySpawnGroups(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*  value) ;

/// @brief Method .ctor, addr 0x5866040, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorSpawnConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorSpawnConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorSpawnConfig(GhostReactorSpawnConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorSpawnConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorSpawnConfig(GhostReactorSpawnConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1836};

/// @brief Field entitySpawnGroups, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorSpawnConfig_EntitySpawnGroup>*  ___entitySpawnGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorSpawnConfig, ___entitySpawnGroups) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorSpawnConfig) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
