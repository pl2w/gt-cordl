#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/PropertyDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/Rigging/zzzz__PropertyType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyDescriptor)
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct PropertyDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::PropertyDescriptor);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::PropertyDescriptor, "UnityEngine.Animations.Rigging", "PropertyDescriptor");
// Dependencies UnityEngine.Animations.Rigging.PropertyType
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.PropertyDescriptor
struct CORDL_TYPE PropertyDescriptor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyDescriptor() ;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::UnityEngine::Animations::Rigging::PropertyType", modifiers: "", def_value: None, comment: None }]
constexpr PropertyDescriptor(int32_t  size, ::UnityEngine::Animations::Rigging::PropertyType  type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field size, offset: 0x0, size: 0x4, def value: None
 int32_t  size;

/// @brief Field type, offset: 0x4, size: 0x1, def value: None
 ::UnityEngine::Animations::Rigging::PropertyType  type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::PropertyDescriptor, size) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::PropertyDescriptor, type) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::PropertyDescriptor) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
