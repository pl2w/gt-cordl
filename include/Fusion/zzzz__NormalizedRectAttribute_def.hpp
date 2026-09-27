#pragma once
// IWYU pragma private; include "Fusion/NormalizedRectAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NormalizedRectAttribute)
// Forward declare root types
namespace Fusion {
class NormalizedRectAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NormalizedRectAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NormalizedRectAttribute*, "Fusion", "NormalizedRectAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NormalizedRectAttribute
class CORDL_TYPE NormalizedRectAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field AspectRatio, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_AspectRatio, put=__cordl_internal_set_AspectRatio)) float_t  AspectRatio;

/// @brief Field InvertY, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_InvertY, put=__cordl_internal_set_InvertY)) bool  InvertY;

static inline ::Fusion::NormalizedRectAttribute* New_ctor(bool  invertY, float_t  aspectRatio) ;

constexpr float_t const& __cordl_internal_get_AspectRatio() const;

constexpr float_t& __cordl_internal_get_AspectRatio() ;

constexpr bool const& __cordl_internal_get_InvertY() const;

constexpr bool& __cordl_internal_get_InvertY() ;

constexpr void __cordl_internal_set_AspectRatio(float_t  value) ;

constexpr void __cordl_internal_set_InvertY(bool  value) ;

/// @brief Method .ctor, addr 0x5f70328, size 0x38, virtual false, abstract: false, final false
inline void _ctor(bool  invertY, float_t  aspectRatio) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NormalizedRectAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NormalizedRectAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NormalizedRectAttribute(NormalizedRectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NormalizedRectAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NormalizedRectAttribute(NormalizedRectAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18814};

/// @brief Field InvertY, offset: 0x15, size: 0x1, def value: None
 bool  ___InvertY;

/// @brief Field AspectRatio, offset: 0x18, size: 0x4, def value: None
 float_t  ___AspectRatio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NormalizedRectAttribute, ___InvertY) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Fusion::NormalizedRectAttribute, ___AspectRatio) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NormalizedRectAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
