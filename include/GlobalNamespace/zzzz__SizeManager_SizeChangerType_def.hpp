#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeManager_SizeChangerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SizeManager_SizeChangerType)
// Forward declare root types
namespace GlobalNamespace {
struct SizeManager_SizeChangerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SizeManager_SizeChangerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeManager_SizeChangerType, "", "SizeManager/SizeChangerType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SizeManager/SizeChangerType
struct CORDL_TYPE SizeManager_SizeChangerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SizeManager_SizeChangerType_Unwrapped
enum struct __SizeManager_SizeChangerType_Unwrapped : int32_t {
__E_LocalOffline = static_cast<int32_t>(0x0),
__E_LocalOnline = static_cast<int32_t>(0x1),
__E_OtherOnline = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SizeManager_SizeChangerType_Unwrapped () const noexcept {
return static_cast<__SizeManager_SizeChangerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SizeManager_SizeChangerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SizeManager_SizeChangerType(int32_t  value__) noexcept;

/// @brief Field LocalOffline value: I32(0)
static ::GlobalNamespace::SizeManager_SizeChangerType const LocalOffline;

/// @brief Field LocalOnline value: I32(1)
static ::GlobalNamespace::SizeManager_SizeChangerType const LocalOnline;

/// @brief Field OtherOnline value: I32(2)
static ::GlobalNamespace::SizeManager_SizeChangerType const OtherOnline;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SizeManager_SizeChangerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SizeManager_SizeChangerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
