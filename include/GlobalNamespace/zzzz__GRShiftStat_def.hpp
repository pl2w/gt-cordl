#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShiftStat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRShiftStat)
namespace GlobalNamespace {
struct GRShiftStatType;
}
namespace GorillaTagScripts::GhostReactor {
struct GREnemyType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class GRShiftStat;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRShiftStat*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRShiftStat*, "", "GRShiftStat");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRShiftStat
class CORDL_TYPE GRShiftStat : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EnemyKills)) ::System::Collections::Generic::IReadOnlyDictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*  EnemyKills;

/// @brief Field enemyKills, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemyKills, put=__cordl_internal_set_enemyKills)) ::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*  enemyKills;

/// @brief Field shiftStats, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftStats, put=__cordl_internal_set_shiftStats)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>*  shiftStats;

/// @brief Method Deserialize, addr 0x58b41e8, size 0x1a0, virtual false, abstract: false, final false
inline void Deserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method GetShiftStat, addr 0x58b4154, size 0x94, virtual false, abstract: false, final false
inline int32_t GetShiftStat(::GlobalNamespace::GRShiftStatType  stat) ;

/// @brief Method IncrementEnemyKills, addr 0x58b4550, size 0x108, virtual false, abstract: false, final false
inline void IncrementEnemyKills(::GorillaTagScripts::GhostReactor::GREnemyType  type) ;

/// @brief Method IncrementShiftStat, addr 0x58b4434, size 0x11c, virtual false, abstract: false, final false
inline void IncrementShiftStat(::GlobalNamespace::GRShiftStatType  stat) ;

static inline ::GlobalNamespace::GRShiftStat* New_ctor() ;

/// @brief Method ResetShiftStats, addr 0x58b4658, size 0x108, virtual false, abstract: false, final false
inline void ResetShiftStats() ;

/// @brief Method Serialize, addr 0x58b3f10, size 0x244, virtual false, abstract: false, final false
inline void Serialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method SetShiftStat, addr 0x58b4388, size 0xac, virtual false, abstract: false, final false
inline void SetShiftStat(::GlobalNamespace::GRShiftStatType  stat, int32_t  newValue) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>* const& __cordl_internal_get_enemyKills() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*& __cordl_internal_get_enemyKills() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>* const& __cordl_internal_get_shiftStats() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>*& __cordl_internal_get_shiftStats() ;

constexpr void __cordl_internal_set_enemyKills(::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*  value) ;

constexpr void __cordl_internal_set_shiftStats(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x58b4760, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EnemyKills, addr 0x58b3f08, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>* get_EnemyKills() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRShiftStat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRShiftStat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRShiftStat(GRShiftStat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRShiftStat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRShiftStat(GRShiftStat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2039};

/// @brief Field shiftStats, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRShiftStatType,int32_t>*  ___shiftStats;

/// @brief Field enemyKills, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GorillaTagScripts::GhostReactor::GREnemyType,int32_t>*  ___enemyKills;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRShiftStat, ___shiftStats) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRShiftStat, ___enemyKills) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRShiftStat) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
