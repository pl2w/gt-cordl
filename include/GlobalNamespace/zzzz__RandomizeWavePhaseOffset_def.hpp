#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomizeWavePhaseOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomizeWavePhaseOffset)
// Forward declare root types
namespace GlobalNamespace {
class RandomizeWavePhaseOffset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomizeWavePhaseOffset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomizeWavePhaseOffset*, "", "RandomizeWavePhaseOffset");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomizeWavePhaseOffset
class CORDL_TYPE RandomizeWavePhaseOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxPhaseOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPhaseOffset, put=__cordl_internal_set_maxPhaseOffset)) float_t  maxPhaseOffset;

/// @brief Field minPhaseOffset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minPhaseOffset, put=__cordl_internal_set_minPhaseOffset)) float_t  minPhaseOffset;

static inline ::GlobalNamespace::RandomizeWavePhaseOffset* New_ctor() ;

/// @brief Method Start, addr 0x5615d98, size 0xc4, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_maxPhaseOffset() const;

constexpr float_t& __cordl_internal_get_maxPhaseOffset() ;

constexpr float_t const& __cordl_internal_get_minPhaseOffset() const;

constexpr float_t& __cordl_internal_get_minPhaseOffset() ;

constexpr void __cordl_internal_set_maxPhaseOffset(float_t  value) ;

constexpr void __cordl_internal_set_minPhaseOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x5615e5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomizeWavePhaseOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomizeWavePhaseOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomizeWavePhaseOffset(RandomizeWavePhaseOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomizeWavePhaseOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomizeWavePhaseOffset(RandomizeWavePhaseOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{553};

/// [SerializeField]
/// @brief Field minPhaseOffset, offset: 0x20, size: 0x4, def value: None
 float_t  ___minPhaseOffset;

/// [SerializeField]
/// @brief Field maxPhaseOffset, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxPhaseOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomizeWavePhaseOffset, ___minPhaseOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomizeWavePhaseOffset, ___maxPhaseOffset) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RandomizeWavePhaseOffset) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
