#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousCosmeticEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousCosmeticEffects)
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ContinuousCosmeticEffects;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ContinuousCosmeticEffects*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ContinuousCosmeticEffects*, "GorillaTag.Cosmetics", "ContinuousCosmeticEffects");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ContinuousCosmeticEffects
class CORDL_TYPE ContinuousCosmeticEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field continuousProperties, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Method ApplyAll, addr 0x5d80e10, size 0x14, virtual false, abstract: false, final false
inline void ApplyAll(float_t  f) ;

static inline ::GorillaTag::Cosmetics::ContinuousCosmeticEffects* New_ctor() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

/// @brief Method .ctor, addr 0x5d80e24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousCosmeticEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousCosmeticEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousCosmeticEffects(ContinuousCosmeticEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousCosmeticEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousCosmeticEffects(ContinuousCosmeticEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4880};

/// [FormerlySerializedAs("properties")]
/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x20, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ContinuousCosmeticEffects, ___continuousProperties) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ContinuousCosmeticEffects) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
