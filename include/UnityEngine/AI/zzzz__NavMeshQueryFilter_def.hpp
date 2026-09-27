#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshQueryFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshQueryFilter)
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshQueryFilter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshQueryFilter);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshQueryFilter, "UnityEngine.AI", "NavMeshQueryFilter");
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshQueryFilter
struct CORDL_TYPE NavMeshQueryFilter {
public:
// Declarations
 __declspec(property(get=get_agentTypeID, put=set_agentTypeID)) int32_t  agentTypeID;

 __declspec(property(get=get_areaMask, put=set_areaMask)) int32_t  areaMask;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_agentTypeID, addr 0xb5205cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_agentTypeID() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_areaMask, addr 0xb5205bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_areaMask() ;

/// [CompilerGenerated]
/// @brief Method set_agentTypeID, addr 0xb5205d4, size 0x8, virtual false, abstract: false, final false
inline void set_agentTypeID(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_areaMask, addr 0xb5205c4, size 0x8, virtual false, abstract: false, final false
inline void set_areaMask(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshQueryFilter() ;

// Ctor Parameters [CppParam { name: "_costs_k__BackingField", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_areaMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_agentTypeID_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshQueryFilter(::ArrayW<float_t>  _costs_k__BackingField, int32_t  _areaMask_k__BackingField, int32_t  _agentTypeID_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_AreaCostElementCount offset 0xffffffff size 0x4
static constexpr int32_t  k_AreaCostElementCount{static_cast<int32_t>(0x20)};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <costs>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<float_t>  _costs_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <areaMask>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _areaMask_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <agentTypeID>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _agentTypeID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshQueryFilter, _costs_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshQueryFilter, _areaMask_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshQueryFilter, _agentTypeID_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshQueryFilter) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AI
