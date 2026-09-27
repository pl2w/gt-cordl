#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/Property.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/Rigging/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Property)
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct Property;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::Property);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::Property, "UnityEngine.Animations.Rigging", "Property");
// Dependencies UnityEngine.Animations.Rigging.PropertyDescriptor
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.Property
struct CORDL_TYPE Property {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Property() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "descriptor", ty: "::UnityEngine::Animations::Rigging::PropertyDescriptor", modifiers: "", def_value: None, comment: None }]
constexpr Property(::StringW  name, ::UnityEngine::Animations::Rigging::PropertyDescriptor  descriptor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32319};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field descriptor, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Animations::Rigging::PropertyDescriptor  descriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::Property, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::Property, descriptor) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::Property) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
