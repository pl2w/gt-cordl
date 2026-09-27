#pragma once
// IWYU pragma private; include "GlobalNamespace/MapModeQueueSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MapModeQueueSet)
// Forward declare root types
namespace GlobalNamespace {
class MapModeQueueSet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MapModeQueueSet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MapModeQueueSet*, "", "MapModeQueueSet");
// [CreateAssetMenu(fileName = "MapModeQueueSet", menuName = "Game Settings/Map Mode Queue Set")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MapModeQueueSet
class CORDL_TYPE MapModeQueueSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field maps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_maps, put=__cordl_internal_set_maps)) ::ArrayW<::StringW>  maps;

/// @brief Field modes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_modes, put=__cordl_internal_set_modes)) ::ArrayW<::StringW>  modes;

/// @brief Field queues, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_queues, put=__cordl_internal_set_queues)) ::ArrayW<::StringW>  queues;

static inline ::GlobalNamespace::MapModeQueueSet* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_maps() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_maps() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_modes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_modes() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_queues() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_queues() ;

constexpr void __cordl_internal_set_maps(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_modes(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_queues(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x595a2e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapModeQueueSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapModeQueueSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapModeQueueSet(MapModeQueueSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapModeQueueSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapModeQueueSet(MapModeQueueSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2336};

/// @brief Field maps, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___maps;

/// @brief Field modes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___modes;

/// @brief Field queues, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___queues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MapModeQueueSet, ___maps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapModeQueueSet, ___modes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapModeQueueSet, ___queues) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MapModeQueueSet) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
