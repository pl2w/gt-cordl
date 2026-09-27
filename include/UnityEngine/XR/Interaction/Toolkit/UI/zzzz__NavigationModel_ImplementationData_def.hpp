#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/NavigationModel_ImplementationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationModel_ImplementationData)
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
// Forward declare root types
namespace GlobalNamespace {
struct NavigationModel_ImplementationData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NavigationModel_ImplementationData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NavigationModel_ImplementationData, "UnityEngine.XR.Interaction.Toolkit.UI", "NavigationModel/ImplementationData");
// Dependencies UnityEngine.EventSystems.MoveDirection
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.NavigationModel/ImplementationData
struct CORDL_TYPE NavigationModel_ImplementationData {
public:
// Declarations
 __declspec(property(get=get_consecutiveMoveCount, put=set_consecutiveMoveCount)) int32_t  consecutiveMoveCount;

 __declspec(property(get=get_lastMoveDirection, put=set_lastMoveDirection)) ::UnityEngine::EventSystems::MoveDirection  lastMoveDirection;

 __declspec(property(get=get_lastMoveTime, put=set_lastMoveTime)) float_t  lastMoveTime;

/// @brief Method Reset, addr 0xb432320, size 0x14, virtual false, abstract: false, final false
inline void Reset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_consecutiveMoveCount, addr 0xb43233c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_consecutiveMoveCount() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_lastMoveDirection, addr 0xb43234c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::MoveDirection get_lastMoveDirection() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_lastMoveTime, addr 0xb43235c, size 0x8, virtual false, abstract: false, final false
inline float_t get_lastMoveTime() ;

/// [CompilerGenerated]
/// @brief Method set_consecutiveMoveCount, addr 0xb432344, size 0x8, virtual false, abstract: false, final false
inline void set_consecutiveMoveCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_lastMoveDirection, addr 0xb432354, size 0x8, virtual false, abstract: false, final false
inline void set_lastMoveDirection(::UnityEngine::EventSystems::MoveDirection  value) ;

/// [CompilerGenerated]
/// @brief Method set_lastMoveTime, addr 0xb432364, size 0x8, virtual false, abstract: false, final false
inline void set_lastMoveTime(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavigationModel_ImplementationData() ;

// Ctor Parameters [CppParam { name: "_consecutiveMoveCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lastMoveDirection_k__BackingField", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lastMoveTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr NavigationModel_ImplementationData(int32_t  _consecutiveMoveCount_k__BackingField, ::UnityEngine::EventSystems::MoveDirection  _lastMoveDirection_k__BackingField, float_t  _lastMoveTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11282};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [CompilerGenerated]
/// @brief Field <consecutiveMoveCount>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _consecutiveMoveCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <lastMoveDirection>k__BackingField, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::EventSystems::MoveDirection  _lastMoveDirection_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <lastMoveTime>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _lastMoveTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NavigationModel_ImplementationData, _consecutiveMoveCount_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationModel_ImplementationData, _lastMoveDirection_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigationModel_ImplementationData, _lastMoveTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NavigationModel_ImplementationData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
