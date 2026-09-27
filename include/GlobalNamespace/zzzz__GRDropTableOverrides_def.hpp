#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDropTableOverrides.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(GRDropTableOverrides)
namespace GlobalNamespace {
class GRBreakableItemSpawnConfig;
}
namespace GlobalNamespace {
class GRDropTableOverrides_DropTableOverride;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDropTableOverrides;
}
namespace GlobalNamespace {
class GRDropTableOverrides_DropTableOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDropTableOverrides*);
MARK_REF_T(::GlobalNamespace::GRDropTableOverrides_DropTableOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDropTableOverrides*, "", "GRDropTableOverrides");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDropTableOverrides_DropTableOverride*, "", "GRDropTableOverrides/DropTableOverride");
// [CreateAssetMenu(fileName = "GhostReactorDropTableOverrides", menuName = "ScriptableObjects/GhostReactorDropTableOverride")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDropTableOverrides
class CORDL_TYPE GRDropTableOverrides : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using DropTableOverride = ::GlobalNamespace::GRDropTableOverrides_DropTableOverride;

/// @brief Field overrides, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrides, put=__cordl_internal_set_overrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*  overrides;

/// @brief Method GetOverride, addr 0x5877578, size 0xfc, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GetOverride(::GlobalNamespace::GRBreakableItemSpawnConfig*  table) ;

static inline ::GlobalNamespace::GRDropTableOverrides* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>* const& __cordl_internal_get_overrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*& __cordl_internal_get_overrides() ;

constexpr void __cordl_internal_set_overrides(::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*  value) ;

/// @brief Method .ctor, addr 0x5877674, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDropTableOverrides() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDropTableOverrides", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDropTableOverrides(GRDropTableOverrides && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDropTableOverrides", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDropTableOverrides(GRDropTableOverrides const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1909};

/// @brief Field overrides, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*  ___overrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDropTableOverrides, ___overrides) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDropTableOverrides) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDropTableOverrides/DropTableOverride
class CORDL_TYPE GRDropTableOverrides_DropTableOverride : public ::System::Object {
public:
// Declarations
/// @brief Field overrideTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideTable, put=__cordl_internal_set_overrideTable)) ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  overrideTable;

/// @brief Field table, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  table;

static inline ::GlobalNamespace::GRDropTableOverrides_DropTableOverride* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& __cordl_internal_get_overrideTable() const;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& __cordl_internal_get_overrideTable() ;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& __cordl_internal_get_table() ;

constexpr void __cordl_internal_set_overrideTable(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value) ;

/// @brief Method .ctor, addr 0x587767c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDropTableOverrides_DropTableOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDropTableOverrides_DropTableOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDropTableOverrides_DropTableOverride(GRDropTableOverrides_DropTableOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDropTableOverrides_DropTableOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDropTableOverrides_DropTableOverride(GRDropTableOverrides_DropTableOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1908};

/// @brief Field table, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  ___table;

/// @brief Field overrideTable, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  ___overrideTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDropTableOverrides_DropTableOverride, ___table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropTableOverrides_DropTableOverride, ___overrideTable) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDropTableOverrides_DropTableOverride) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
