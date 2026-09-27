#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/BreadcrumbLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BreadcrumbLevel)
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, "Backtrace.Unity.Model.Breadcrumbs", "BreadcrumbLevel");
// Dependencies 
namespace Backtrace::Unity::Model::Breadcrumbs {
// Is value type: true
// CS Name: Backtrace.Unity.Model.Breadcrumbs.BreadcrumbLevel
struct CORDL_TYPE BreadcrumbLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BreadcrumbLevel_Unwrapped
enum struct __BreadcrumbLevel_Unwrapped : int32_t {
__E_Manual = static_cast<int32_t>(0x1),
__E_Log = static_cast<int32_t>(0x2),
__E_Navigation = static_cast<int32_t>(0x4),
__E_Http = static_cast<int32_t>(0x8),
__E_System = static_cast<int32_t>(0x10),
__E_User = static_cast<int32_t>(0x20),
__E_Configuration = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BreadcrumbLevel_Unwrapped () const noexcept {
return static_cast<__BreadcrumbLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BreadcrumbLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BreadcrumbLevel(int32_t  value__) noexcept;

/// @brief Field Configuration value: I32(64)
static ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel const Configuration;

/// @brief Field Http value: I32(8)
static ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel const Http;

/// @brief Field Log value: I32(2)
static ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel const Log;

/// @brief Field Manual value: I32(1)
static ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel const Manual;

/// @brief Field Navigation value: I32(4)
static ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel const Navigation;

/// @brief Field System value: I32(16)
static ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel const System;

/// @brief Field User value: I32(32)
static ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel const User;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs
