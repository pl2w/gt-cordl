#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Eye.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Eye)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Eye;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Eye);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Eye, "", "OVRPlugin/Eye");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Eye
struct CORDL_TYPE OVRPlugin_Eye {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_Eye_Unwrapped
enum struct __OVRPlugin_Eye_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_Eye_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_Eye_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Eye() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Eye(int32_t  value__) noexcept;

/// @brief Field Count value: I32(2)
static ::GlobalNamespace::OVRPlugin_Eye const Count;

/// @brief Field Left value: I32(0)
static ::GlobalNamespace::OVRPlugin_Eye const Left;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::OVRPlugin_Eye const None;

/// @brief Field Right value: I32(1)
static ::GlobalNamespace::OVRPlugin_Eye const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12053};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Eye, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Eye) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
