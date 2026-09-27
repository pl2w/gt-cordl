#pragma once
// IWYU pragma private; include "GlobalNamespace/ScratchSoundType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScratchSoundType)
// Forward declare root types
namespace GlobalNamespace {
struct ScratchSoundType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScratchSoundType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScratchSoundType, "", "ScratchSoundType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScratchSoundType
struct CORDL_TYPE ScratchSoundType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScratchSoundType_Unwrapped
enum struct __ScratchSoundType_Unwrapped : int32_t {
__E_Pause = static_cast<int32_t>(0x0),
__E_Resume = static_cast<int32_t>(0x1),
__E_Forward = static_cast<int32_t>(0x2),
__E_Back = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScratchSoundType_Unwrapped () const noexcept {
return static_cast<__ScratchSoundType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScratchSoundType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScratchSoundType(int32_t  value__) noexcept;

/// @brief Field Back value: I32(3)
static ::GlobalNamespace::ScratchSoundType const Back;

/// @brief Field Forward value: I32(2)
static ::GlobalNamespace::ScratchSoundType const Forward;

/// @brief Field Pause value: I32(0)
static ::GlobalNamespace::ScratchSoundType const Pause;

/// @brief Field Resume value: I32(1)
static ::GlobalNamespace::ScratchSoundType const Resume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{706};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScratchSoundType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScratchSoundType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
