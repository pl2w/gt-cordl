#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker_Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectBaker_Result)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkObjectBaker_Result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkObjectBaker_Result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkObjectBaker_Result, "Fusion", "NetworkObjectBaker/Result");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkObjectBaker/Result
struct CORDL_TYPE NetworkObjectBaker_Result {
public:
// Declarations
 __declspec(property(get=get_BehaviourCount)) int32_t  BehaviourCount;

 __declspec(property(get=get_HadChanges)) bool  HadChanges;

 __declspec(property(get=get_ObjectCount)) int32_t  ObjectCount;

/// @brief Method .ctor, addr 0x60e4af4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  dirty, int32_t  objectCount, int32_t  behaviourCount) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_BehaviourCount, addr 0x60e53e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BehaviourCount() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_HadChanges, addr 0x60e53d4, size 0x8, virtual false, abstract: false, final false
inline bool get_HadChanges() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ObjectCount, addr 0x60e53dc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ObjectCount() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectBaker_Result() ;

// Ctor Parameters [CppParam { name: "_HadChanges_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ObjectCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BehaviourCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectBaker_Result(bool  _HadChanges_k__BackingField, int32_t  _ObjectCount_k__BackingField, int32_t  _BehaviourCount_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [CompilerGenerated]
/// @brief Field <HadChanges>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _HadChanges_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ObjectCount>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _ObjectCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BehaviourCount>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _BehaviourCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkObjectBaker_Result, _HadChanges_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkObjectBaker_Result, _ObjectCount_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkObjectBaker_Result, _BehaviourCount_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkObjectBaker_Result) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
