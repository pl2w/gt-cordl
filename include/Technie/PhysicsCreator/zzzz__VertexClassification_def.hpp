#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/VertexClassification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexClassification)
// Forward declare root types
namespace Technie::PhysicsCreator {
struct VertexClassification;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::VertexClassification);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::VertexClassification, "Technie.PhysicsCreator", "VertexClassification");
// Dependencies 
namespace Technie::PhysicsCreator {
// Is value type: true
// CS Name: Technie.PhysicsCreator.VertexClassification
struct CORDL_TYPE VertexClassification {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VertexClassification_Unwrapped
enum struct __VertexClassification_Unwrapped : int32_t {
__E_Front = static_cast<int32_t>(0x1),
__E_Back = static_cast<int32_t>(0x2),
__E_OnPlane = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexClassification_Unwrapped () const noexcept {
return static_cast<__VertexClassification_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VertexClassification() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VertexClassification(int32_t  value__) noexcept;

/// @brief Field Back value: I32(2)
static ::Technie::PhysicsCreator::VertexClassification const Back;

/// @brief Field Front value: I32(1)
static ::Technie::PhysicsCreator::VertexClassification const Front;

/// @brief Field OnPlane value: I32(4)
static ::Technie::PhysicsCreator::VertexClassification const OnPlane;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30504};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::VertexClassification, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::VertexClassification) == 0x4, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
