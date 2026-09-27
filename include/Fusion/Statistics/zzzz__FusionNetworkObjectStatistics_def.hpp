#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionNetworkObjectStatistics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FusionNetworkObjectStatistics)
namespace Fusion {
class NetworkObject;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionNetworkObjectStatistics;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionNetworkObjectStatistics*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionNetworkObjectStatistics*, "Fusion.Statistics", "FusionNetworkObjectStatistics");
// [RequireComponent(typeof(Fusion.NetworkObject))]
// [DisallowMultipleComponent]
// [AddComponentMenu("Fusion/Statistics/Network Object Statistics")]
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionNetworkObjectStatistics
class CORDL_TYPE FusionNetworkObjectStatistics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field NetworkObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkObject, put=__cordl_internal_set_NetworkObject)) ::UnityW<::Fusion::NetworkObject>  NetworkObject;

static inline ::Fusion::Statistics::FusionNetworkObjectStatistics* New_ctor() ;

/// @brief Method OnDisable, addr 0x60f8154, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x60f814c, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ToggleMonitoring, addr 0x60f7e18, size 0x144, virtual false, abstract: false, final false
inline void ToggleMonitoring(bool  value) ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get_NetworkObject() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get_NetworkObject() ;

constexpr void __cordl_internal_set_NetworkObject(::UnityW<::Fusion::NetworkObject>  value) ;

/// @brief Method .ctor, addr 0x60f815c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionNetworkObjectStatistics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkObjectStatistics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionNetworkObjectStatistics(FusionNetworkObjectStatistics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkObjectStatistics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionNetworkObjectStatistics(FusionNetworkObjectStatistics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23492};

/// [HideInInspector]
/// @brief Field NetworkObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ___NetworkObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatistics, ___NetworkObject) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionNetworkObjectStatistics) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Statistics
