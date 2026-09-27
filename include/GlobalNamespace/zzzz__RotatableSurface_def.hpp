#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatableSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotatableSurface)
namespace GlobalNamespace {
class ManipulatableSpinner;
}
// Forward declare root types
namespace GlobalNamespace {
class RotatableSurface;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotatableSurface*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatableSurface*, "", "RotatableSurface");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatableSurface
class CORDL_TYPE RotatableSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field rotationScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationScale, put=__cordl_internal_set_rotationScale)) float_t  rotationScale;

/// @brief Field spinner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinner, put=__cordl_internal_set_spinner)) ::UnityW<::GlobalNamespace::ManipulatableSpinner>  spinner;

/// @brief Method LateUpdate, addr 0x578907c, size 0x64, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::RotatableSurface* New_ctor() ;

constexpr float_t const& __cordl_internal_get_rotationScale() const;

constexpr float_t& __cordl_internal_get_rotationScale() ;

constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner> const& __cordl_internal_get_spinner() const;

constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner>& __cordl_internal_get_spinner() ;

constexpr void __cordl_internal_set_rotationScale(float_t  value) ;

constexpr void __cordl_internal_set_spinner(::UnityW<::GlobalNamespace::ManipulatableSpinner>  value) ;

/// @brief Method .ctor, addr 0x57890e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatableSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatableSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatableSurface(RotatableSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatableSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatableSurface(RotatableSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1417};

/// @brief Field spinner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ManipulatableSpinner>  ___spinner;

/// @brief Field rotationScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___rotationScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatableSurface, ___spinner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatableSurface, ___rotationScale) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatableSurface) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
