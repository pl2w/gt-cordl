#pragma once
// IWYU pragma private; include "Fusion/ScenePathAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DrawerPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ScenePathAttribute)
// Forward declare root types
namespace Fusion {
class ScenePathAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::ScenePathAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::ScenePathAttribute*, "Fusion", "ScenePathAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies Fusion.DrawerPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ScenePathAttribute
class CORDL_TYPE ScenePathAttribute : public ::Fusion::DrawerPropertyAttribute {
public:
// Declarations
static inline ::Fusion::ScenePathAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3d80c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScenePathAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScenePathAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScenePathAttribute(ScenePathAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScenePathAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScenePathAttribute(ScenePathAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ScenePathAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
