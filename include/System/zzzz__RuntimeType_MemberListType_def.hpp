#pragma once
// IWYU pragma private; include "System/RuntimeType_MemberListType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeType_MemberListType)
// Forward declare root types
namespace GlobalNamespace {
struct RuntimeType_MemberListType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimeType_MemberListType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeType_MemberListType, "System", "RuntimeType/MemberListType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.RuntimeType/MemberListType
struct CORDL_TYPE RuntimeType_MemberListType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RuntimeType_MemberListType_Unwrapped
enum struct __RuntimeType_MemberListType_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_CaseSensitive = static_cast<int32_t>(0x1),
__E_CaseInsensitive = static_cast<int32_t>(0x2),
__E_HandleToInfo = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RuntimeType_MemberListType_Unwrapped () const noexcept {
return static_cast<__RuntimeType_MemberListType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeType_MemberListType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeType_MemberListType(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::RuntimeType_MemberListType const All;

/// @brief Field CaseInsensitive value: I32(2)
static ::GlobalNamespace::RuntimeType_MemberListType const CaseInsensitive;

/// @brief Field CaseSensitive value: I32(1)
static ::GlobalNamespace::RuntimeType_MemberListType const CaseSensitive;

/// @brief Field HandleToInfo value: I32(3)
static ::GlobalNamespace::RuntimeType_MemberListType const HandleToInfo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeType_MemberListType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeType_MemberListType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
