#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/BoxFitMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoxFitMethod)
// Forward declare root types
namespace Technie::PhysicsCreator {
struct BoxFitMethod;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::BoxFitMethod);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::BoxFitMethod, "Technie.PhysicsCreator", "BoxFitMethod");
// Dependencies 
namespace Technie::PhysicsCreator {
// Is value type: true
// CS Name: Technie.PhysicsCreator.BoxFitMethod
struct CORDL_TYPE BoxFitMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoxFitMethod_Unwrapped
enum struct __BoxFitMethod_Unwrapped : int32_t {
__E_AxisAligned = static_cast<int32_t>(0x0),
__E_MinimumVolume = static_cast<int32_t>(0x1),
__E_AlignFaces = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoxFitMethod_Unwrapped () const noexcept {
return static_cast<__BoxFitMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoxFitMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoxFitMethod(int32_t  value__) noexcept;

/// @brief Field AlignFaces value: I32(2)
static ::Technie::PhysicsCreator::BoxFitMethod const AlignFaces;

/// @brief Field AxisAligned value: I32(0)
static ::Technie::PhysicsCreator::BoxFitMethod const AxisAligned;

/// @brief Field MinimumVolume value: I32(1)
static ::Technie::PhysicsCreator::BoxFitMethod const MinimumVolume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30488};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::BoxFitMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::BoxFitMethod) == 0x4, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
