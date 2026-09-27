#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandHistory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GorillaHandHistory)
// Forward declare root types
namespace GlobalNamespace {
class GorillaHandHistory;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHandHistory*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHandHistory*, "", "GorillaHandHistory");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHandHistory
class CORDL_TYPE GorillaHandHistory : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field direction, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::UnityEngine::Vector3  direction;

/// @brief Field lastLastPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLastPosition, put=__cordl_internal_set_lastLastPosition)) ::UnityEngine::Vector3  lastLastPosition;

/// @brief Field lastPosition, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Method FixedUpdate, addr 0x579d90c, size 0x88, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::GorillaHandHistory* New_ctor() ;

/// @brief Method Start, addr 0x579d900, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLastPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastLastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x579d994, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHandHistory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandHistory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHandHistory(GorillaHandHistory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandHistory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHandHistory(GorillaHandHistory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1501};

/// @brief Field direction, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___direction;

/// @brief Field lastPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field lastLastPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLastPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHandHistory, ___direction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandHistory, ___lastPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandHistory, ___lastLastPosition) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHandHistory) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
