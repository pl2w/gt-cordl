#pragma once
// IWYU pragma private; include "GlobalNamespace/AbilityHelperFunctions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AbilityHelperFunctions)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AbilityHelperFunctions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AbilityHelperFunctions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AbilityHelperFunctions*, "", "AbilityHelperFunctions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AbilityHelperFunctions
class CORDL_TYPE AbilityHelperFunctions : public ::System::Object {
public:
// Declarations
/// @brief Field navMeshWalkableArea, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_navMeshWalkableArea, put=setStaticF_navMeshWalkableArea)) int32_t  navMeshWalkableArea;

/// @brief Method EaseOutPower, addr 0x5866118, size 0x24, virtual false, abstract: false, final false
static inline float_t EaseOutPower(float_t  t, float_t  power) ;

/// @brief Method GetLocationToInvestigate, addr 0x5866240, size 0x160, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Vector3> GetLocationToInvestigate(::UnityEngine::Vector3  listenerLocation, float_t  hearingRadius, ::System::Nullable_1<::UnityEngine::Vector3>  currentInvestigationLocation) ;

/// @brief Method GetNavMeshWalkableArea, addr 0x586617c, size 0xc4, virtual false, abstract: false, final false
static inline int32_t GetNavMeshWalkableArea() ;

/// @brief Method RandomRangeUnique, addr 0x586613c, size 0x40, virtual false, abstract: false, final false
static inline int32_t RandomRangeUnique(int32_t  minInclusive, int32_t  maxExclusive, int32_t  lastValue) ;

static inline int32_t getStaticF_navMeshWalkableArea() ;

static inline void setStaticF_navMeshWalkableArea(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbilityHelperFunctions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbilityHelperFunctions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AbilityHelperFunctions(AbilityHelperFunctions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbilityHelperFunctions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbilityHelperFunctions(AbilityHelperFunctions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AbilityHelperFunctions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
