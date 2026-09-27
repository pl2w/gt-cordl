#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorFieldGPUSampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingReactorFieldGPUSampler)
namespace BoingKit {
class BoingReactorField;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace BoingKit {
class BoingReactorFieldGPUSampler;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingReactorFieldGPUSampler*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingReactorFieldGPUSampler*, "BoingKit", "BoingReactorFieldGPUSampler");
// Dependencies UnityEngine.MonoBehaviour
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingReactorFieldGPUSampler
class CORDL_TYPE BoingReactorFieldGPUSampler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PositionSampleMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PositionSampleMultiplier, put=__cordl_internal_set_PositionSampleMultiplier)) float_t  PositionSampleMultiplier;

/// @brief Field ReactorField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReactorField, put=__cordl_internal_set_ReactorField)) ::UnityW<::BoingKit::BoingReactorField>  ReactorField;

/// @brief Field RotationSampleMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotationSampleMultiplier, put=__cordl_internal_set_RotationSampleMultiplier)) float_t  RotationSampleMultiplier;

/// @brief Field m_fieldResourceSetId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_fieldResourceSetId, put=__cordl_internal_set_m_fieldResourceSetId)) int32_t  m_fieldResourceSetId;

/// @brief Field m_matProps, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_matProps, put=__cordl_internal_set_m_matProps)) ::UnityEngine::MaterialPropertyBlock*  m_matProps;

static inline ::BoingKit::BoingReactorFieldGPUSampler* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e21200, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e211a8, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5e21258, size 0x268, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_PositionSampleMultiplier() const;

constexpr float_t& __cordl_internal_get_PositionSampleMultiplier() ;

constexpr ::UnityW<::BoingKit::BoingReactorField> const& __cordl_internal_get_ReactorField() const;

constexpr ::UnityW<::BoingKit::BoingReactorField>& __cordl_internal_get_ReactorField() ;

constexpr float_t const& __cordl_internal_get_RotationSampleMultiplier() const;

constexpr float_t& __cordl_internal_get_RotationSampleMultiplier() ;

constexpr int32_t const& __cordl_internal_get_m_fieldResourceSetId() const;

constexpr int32_t& __cordl_internal_get_m_fieldResourceSetId() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_matProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_matProps() ;

constexpr void __cordl_internal_set_PositionSampleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value) ;

constexpr void __cordl_internal_set_RotationSampleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_fieldResourceSetId(int32_t  value) ;

constexpr void __cordl_internal_set_m_matProps(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0x5e214c0, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorFieldGPUSampler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorFieldGPUSampler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingReactorFieldGPUSampler(BoingReactorFieldGPUSampler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorFieldGPUSampler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingReactorFieldGPUSampler(BoingReactorFieldGPUSampler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5204};

/// @brief Field ReactorField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BoingKit::BoingReactorField>  ___ReactorField;

/// [Range(0, 10)]
/// [Tooltip("Multiplier on positional samples from reactor field.\n1.0 means 100%.")]
/// @brief Field PositionSampleMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___PositionSampleMultiplier;

/// [Range(0, 10)]
/// [Tooltip("Multiplier on rotational samples from reactor field.\n1.0 means 100%.")]
/// @brief Field RotationSampleMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ___RotationSampleMultiplier;

/// @brief Field m_matProps, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_matProps;

/// @brief Field m_fieldResourceSetId, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_fieldResourceSetId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingReactorFieldGPUSampler, ___ReactorField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldGPUSampler, ___PositionSampleMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldGPUSampler, ___RotationSampleMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldGPUSampler, ___m_matProps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldGPUSampler, ___m_fieldResourceSetId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingReactorFieldGPUSampler) == 0x40, "Size mismatch!");

} // namespace end def BoingKit
