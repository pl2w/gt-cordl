#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/ConstraintsUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConstraintsUtils)
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class ConstraintsUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::ConstraintsUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::ConstraintsUtils*, "UnityEngine.Animations.Rigging", "ConstraintsUtils");
// Dependencies System.Object
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.ConstraintsUtils
class CORDL_TYPE ConstraintsUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ConstructConstraintDataPropertyName, addr 0xae7bb9c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW ConstructConstraintDataPropertyName(::StringW  property) ;

/// @brief Method ConstructCustomPropertyName, addr 0xae7f9c0, size 0x170, virtual false, abstract: false, final false
static inline ::StringW ConstructCustomPropertyName(::UnityEngine::Component*  component, ::StringW  property) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstraintsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstraintsUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstraintsUtils(ConstraintsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintsUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstraintsUtils(ConstraintsUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32324};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::ConstraintsUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
