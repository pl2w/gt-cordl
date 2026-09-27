#pragma once
// IWYU pragma private; include "Fusion/JoinProcessStage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinProcessStage)
// Forward declare root types
namespace Fusion {
struct JoinProcessStage;
}
// Write type traits
MARK_VAL_T(::Fusion::JoinProcessStage);
DEFINE_IL2CPP_CLASS(::Fusion::JoinProcessStage, "Fusion", "JoinProcessStage");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.JoinProcessStage
struct CORDL_TYPE JoinProcessStage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JoinProcessStage_Unwrapped
enum struct __JoinProcessStage_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Joining = static_cast<int32_t>(0x1),
__E_Done = static_cast<int32_t>(0x2),
__E_Fail = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinProcessStage_Unwrapped () const noexcept {
return static_cast<__JoinProcessStage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinProcessStage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JoinProcessStage(int32_t  value__) noexcept;

/// @brief Field Done value: I32(2)
static ::Fusion::JoinProcessStage const Done;

/// @brief Field Fail value: I32(3)
static ::Fusion::JoinProcessStage const Fail;

/// @brief Field Idle value: I32(0)
static ::Fusion::JoinProcessStage const Idle;

/// @brief Field Joining value: I32(1)
static ::Fusion::JoinProcessStage const Joining;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18852};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::JoinProcessStage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::JoinProcessStage) == 0x4, "Size mismatch!");

} // namespace end def Fusion
