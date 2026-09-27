#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll_RollCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSplineRoll_RollCache)
namespace Unity::Cinemachine {
class CinemachineSplineRoll;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSplineRoll_RollCache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSplineRoll_RollCache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSplineRoll_RollCache, "Unity.Cinemachine", "CinemachineSplineRoll/RollCache");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSplineRoll/RollCache
struct CORDL_TYPE CinemachineSplineRoll_RollCache {
public:
// Declarations
/// @brief Method GetSplineRoll, addr 0xae98974, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Unity::Cinemachine::CinemachineSplineRoll> GetSplineRoll(::UnityEngine::MonoBehaviour*  owner) ;

/// @brief Method Refresh, addr 0xae9881c, size 0x158, virtual false, abstract: false, final false
inline void Refresh(::UnityEngine::MonoBehaviour*  owner) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineRoll_RollCache() ;

// Ctor Parameters [CppParam { name: "m_RollCache", ty: "::UnityW<::Unity::Cinemachine::CinemachineSplineRoll>", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineSplineRoll_RollCache(::UnityW<::Unity::Cinemachine::CinemachineSplineRoll>  m_RollCache) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_RollCache, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineSplineRoll>  m_RollCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineSplineRoll_RollCache, m_RollCache) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineSplineRoll_RollCache) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
