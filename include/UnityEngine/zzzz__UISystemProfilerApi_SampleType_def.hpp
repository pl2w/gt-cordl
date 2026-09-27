#pragma once
// IWYU pragma private; include "UnityEngine/UISystemProfilerApi_SampleType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UISystemProfilerApi_SampleType)
// Forward declare root types
namespace GlobalNamespace {
struct UISystemProfilerApi_SampleType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UISystemProfilerApi_SampleType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UISystemProfilerApi_SampleType, "UnityEngine", "UISystemProfilerApi/SampleType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UISystemProfilerApi/SampleType
struct CORDL_TYPE UISystemProfilerApi_SampleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UISystemProfilerApi_SampleType_Unwrapped
enum struct __UISystemProfilerApi_SampleType_Unwrapped : int32_t {
__E_Layout = static_cast<int32_t>(0x0),
__E_Render = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UISystemProfilerApi_SampleType_Unwrapped () const noexcept {
return static_cast<__UISystemProfilerApi_SampleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UISystemProfilerApi_SampleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UISystemProfilerApi_SampleType(int32_t  value__) noexcept;

/// @brief Field Layout value: I32(0)
static ::GlobalNamespace::UISystemProfilerApi_SampleType const Layout;

/// @brief Field Render value: I32(1)
static ::GlobalNamespace::UISystemProfilerApi_SampleType const Render;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32091};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UISystemProfilerApi_SampleType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UISystemProfilerApi_SampleType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
