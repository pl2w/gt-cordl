#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ParentScaleInverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ParentScaleInverter)
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ParentScaleInverter;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ParentScaleInverter*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ParentScaleInverter*, "Oculus.Interaction.Samples", "ParentScaleInverter");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ParentScaleInverter
class CORDL_TYPE ParentScaleInverter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _initialLocalScale, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialLocalScale, put=__cordl_internal_set__initialLocalScale)) ::UnityEngine::Vector3  _initialLocalScale;

/// @brief Field _initialParentScale, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialParentScale, put=__cordl_internal_set__initialParentScale)) ::UnityEngine::Vector3  _initialParentScale;

/// @brief Method LateUpdate, addr 0xa43d528, size 0xf8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Samples::ParentScaleInverter* New_ctor() ;

/// @brief Method Start, addr 0xa43d4cc, size 0x5c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialLocalScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialParentScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialParentScale() ;

constexpr void __cordl_internal_set__initialLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialParentScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa43d620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParentScaleInverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParentScaleInverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParentScaleInverter(ParentScaleInverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParentScaleInverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParentScaleInverter(ParentScaleInverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28325};

/// @brief Field _initialLocalScale, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialLocalScale;

/// @brief Field _initialParentScale, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialParentScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::ParentScaleInverter, ____initialLocalScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ParentScaleInverter, ____initialParentScale) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::ParentScaleInverter) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
