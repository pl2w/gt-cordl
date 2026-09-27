#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsGraphDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_def.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatsGraphDefault)
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion::Statistics {
struct RenderSimStats;
}
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
struct FusionStatistics_FusionStatisticsStatCustomConfig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
struct DateTime;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatsGraphDefault;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatsGraphDefault*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatsGraphDefault*, "Fusion.Statistics", "FusionStatsGraphDefault");
// Dependencies Fusion.Statistics.FusionStatsGraphBase, Fusion.Statistics.RenderSimStats
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatsGraphDefault
class CORDL_TYPE FusionStatsGraphDefault : public ::Fusion::Statistics::FusionStatsGraphBase {
public:
// Declarations
 __declspec(property(get=get_Stat)) ::Fusion::Statistics::RenderSimStats  Stat;

/// @brief Field _descriptionText, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__descriptionText, put=__cordl_internal_set__descriptionText)) ::UnityW<::UnityEngine::UI::Text>  _descriptionText;

/// @brief Field _selectedStats, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedStats, put=__cordl_internal_set__selectedStats)) ::Fusion::Statistics::RenderSimStats  _selectedStats;

/// @brief Field _statsAdditionalInfo, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsAdditionalInfo, put=__cordl_internal_set__statsAdditionalInfo)) ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>*  _statsAdditionalInfo;

/// @brief Method ApplyCustomStatsConfig, addr 0x60fc198, size 0x54, virtual true, abstract: false, final false
inline void ApplyCustomStatsConfig(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig  config) ;

/// @brief Method Initialize, addr 0x60fc020, size 0x134, virtual true, abstract: false, final false
inline void Initialize(int32_t  accumulateTimeMs) ;

static inline ::Fusion::Statistics::FusionStatsGraphDefault* New_ctor() ;

/// @brief Method SetupDefaultGraph, addr 0x60fc1ec, size 0x94, virtual false, abstract: false, final false
inline void SetupDefaultGraph(::Fusion::Statistics::RenderSimStats  stat) ;

/// @brief Method UpdateGraph, addr 0x60fc154, size 0x44, virtual true, abstract: false, final false
inline void UpdateGraph(::Fusion::NetworkRunner*  runner, ::Fusion::Statistics::FusionStatisticsManager*  statisticsManager, ::by_ref<::System::DateTime>  now) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__descriptionText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__descriptionText() ;

constexpr ::Fusion::Statistics::RenderSimStats const& __cordl_internal_get__selectedStats() const;

constexpr ::Fusion::Statistics::RenderSimStats& __cordl_internal_get__selectedStats() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>* const& __cordl_internal_get__statsAdditionalInfo() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>*& __cordl_internal_get__statsAdditionalInfo() ;

constexpr void __cordl_internal_set__descriptionText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__selectedStats(::Fusion::Statistics::RenderSimStats  value) ;

constexpr void __cordl_internal_set__statsAdditionalInfo(::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x60fc280, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Stat, addr 0x60fc018, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::RenderSimStats get_Stat() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsGraphDefault() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsGraphDefault", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatsGraphDefault(FusionStatsGraphDefault && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsGraphDefault", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatsGraphDefault(FusionStatsGraphDefault const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23503};

/// @brief Field _selectedStats, offset: 0x11c, size: 0x4, def value: None
 ::Fusion::Statistics::RenderSimStats  ____selectedStats;

/// [SerializeField]
/// @brief Field _descriptionText, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____descriptionText;

/// @brief Field _statsAdditionalInfo, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>*  ____statsAdditionalInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphDefault, ____selectedStats) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphDefault, ____descriptionText) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphDefault, ____statsAdditionalInfo) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatsGraphDefault) == 0x130, "Size mismatch!");

} // namespace end def Fusion::Statistics
