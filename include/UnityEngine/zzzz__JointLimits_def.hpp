#pragma once
// IWYU pragma private; include "UnityEngine/JointLimits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(JointLimits)
// Forward declare root types
namespace UnityEngine {
struct JointLimits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JointLimits);
DEFINE_IL2CPP_CLASS(::UnityEngine::JointLimits, "UnityEngine", "JointLimits");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.JointLimits
struct CORDL_TYPE JointLimits {
public:
// Declarations
 __declspec(property(get=get_max)) float_t  max;

 __declspec(property(get=get_min)) float_t  min;

/// @brief Method get_max, addr 0xb67f29c, size 0x8, virtual false, abstract: false, final false
inline float_t get_max() ;

/// @brief Method get_min, addr 0xb67f294, size 0x8, virtual false, abstract: false, final false
inline float_t get_min() ;

// Ctor Parameters []
// @brief default ctor
constexpr JointLimits() ;

// Ctor Parameters [CppParam { name: "m_Min", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Max", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BounceMinVelocity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContactDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minBounce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxBounce", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr JointLimits(float_t  m_Min, float_t  m_Max, float_t  m_Bounciness, float_t  m_BounceMinVelocity, float_t  m_ContactDistance, float_t  minBounce, float_t  maxBounce) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field m_Min, offset: 0x0, size: 0x4, def value: None
 float_t  m_Min;

/// @brief Field m_Max, offset: 0x4, size: 0x4, def value: None
 float_t  m_Max;

/// @brief Field m_Bounciness, offset: 0x8, size: 0x4, def value: None
 float_t  m_Bounciness;

/// @brief Field m_BounceMinVelocity, offset: 0xc, size: 0x4, def value: None
 float_t  m_BounceMinVelocity;

/// @brief Field m_ContactDistance, offset: 0x10, size: 0x4, def value: None
 float_t  m_ContactDistance;

/// [Obsolete("minBounce and maxBounce are replaced by a single JointLimits.bounciness for both limit ends.", true)]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief Field minBounce, offset: 0x14, size: 0x4, def value: None
 float_t  minBounce;

/// [Obsolete("minBounce and maxBounce are replaced by a single JointLimits.bounciness for both limit ends.", true)]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief Field maxBounce, offset: 0x18, size: 0x4, def value: None
 float_t  maxBounce;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::JointLimits, m_Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_Max) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_Bounciness) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_BounceMinVelocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, m_ContactDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, minBounce) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimits, maxBounce) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::JointLimits) == 0x1c, "Size mismatch!");

} // namespace end def UnityEngine
