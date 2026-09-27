#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/UnityEngineLogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityEngineLogLevel)
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs {
struct UnityEngineLogLevel;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, "Backtrace.Unity.Model.Breadcrumbs", "UnityEngineLogLevel");
// [Flags]
// Dependencies 
namespace Backtrace::Unity::Model::Breadcrumbs {
// Is value type: true
// CS Name: Backtrace.Unity.Model.Breadcrumbs.UnityEngineLogLevel
struct CORDL_TYPE UnityEngineLogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityEngineLogLevel_Unwrapped
enum struct __UnityEngineLogLevel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Debug = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x2),
__E_Info = static_cast<int32_t>(0x4),
__E_Fatal = static_cast<int32_t>(0x8),
__E_Error = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngineLogLevel_Unwrapped () const noexcept {
return static_cast<__UnityEngineLogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityEngineLogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityEngineLogLevel(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(1)
static ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const Debug;

/// @brief Field Error value: I32(16)
static ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const Error;

/// @brief Field Fatal value: I32(8)
static ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const Fatal;

/// @brief Field Info value: I32(4)
static ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const Info;

/// @brief Field None value: I32(0)
static ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const None;

/// @brief Field Warning value: I32(2)
static ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs
