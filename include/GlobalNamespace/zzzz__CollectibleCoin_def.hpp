#pragma once
// IWYU pragma private; include "GlobalNamespace/CollectibleCoin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CollectibleCoin)
// Forward declare root types
namespace GlobalNamespace {
class CollectibleCoin;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CollectibleCoin*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollectibleCoin*, "", "CollectibleCoin");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollectibleCoin
class CORDL_TYPE CollectibleCoin : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field RespawnTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_RespawnTime, put=__cordl_internal_set_RespawnTime)) float_t  RespawnTime;

/// @brief Field m_respawnPosition, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_respawnPosition, put=__cordl_internal_set_m_respawnPosition)) ::UnityEngine::Vector3  m_respawnPosition;

/// @brief Field m_respawnTimerStartTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_respawnTimerStartTime, put=__cordl_internal_set_m_respawnTimerStartTime)) float_t  m_respawnTimerStartTime;

/// @brief Field m_taken, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_taken, put=__cordl_internal_set_m_taken)) bool  m_taken;

static inline ::GlobalNamespace::CollectibleCoin* New_ctor() ;

/// @brief Method Update, addr 0x55e7e14, size 0x468, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_RespawnTime() const;

constexpr float_t& __cordl_internal_get_RespawnTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_respawnPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_respawnPosition() ;

constexpr float_t const& __cordl_internal_get_m_respawnTimerStartTime() const;

constexpr float_t& __cordl_internal_get_m_respawnTimerStartTime() ;

constexpr bool const& __cordl_internal_get_m_taken() const;

constexpr bool& __cordl_internal_get_m_taken() ;

constexpr void __cordl_internal_set_RespawnTime(float_t  value) ;

constexpr void __cordl_internal_set_m_respawnPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_respawnTimerStartTime(float_t  value) ;

constexpr void __cordl_internal_set_m_taken(bool  value) ;

/// @brief Method .ctor, addr 0x55e827c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectibleCoin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectibleCoin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectibleCoin(CollectibleCoin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectibleCoin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectibleCoin(CollectibleCoin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28};

/// @brief Field RespawnTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___RespawnTime;

/// @brief Field m_taken, offset: 0x24, size: 0x1, def value: None
 bool  ___m_taken;

/// @brief Field m_respawnPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_respawnPosition;

/// @brief Field m_respawnTimerStartTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_respawnTimerStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollectibleCoin, ___RespawnTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollectibleCoin, ___m_taken) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollectibleCoin, ___m_respawnPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollectibleCoin, ___m_respawnTimerStartTime) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollectibleCoin) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
