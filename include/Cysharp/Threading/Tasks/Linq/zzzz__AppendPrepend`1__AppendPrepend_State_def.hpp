#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AppendPrepend`1__AppendPrepend_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppendPrepend`1__AppendPrepend_State)
// Forward declare root types
namespace GlobalNamespace {
template<typename TSource>
struct _AppendPrepend_AppendPrepend_1_State;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State, "Cysharp.Threading.Tasks.Linq", "AppendPrepend`1/_AppendPrepend/State");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TSource>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.AppendPrepend`1/_AppendPrepend/State<TSource>
struct CORDL_TYPE _AppendPrepend_AppendPrepend_1_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ___AppendPrepend_AppendPrepend_1_State_Unwrapped
enum struct ___AppendPrepend_AppendPrepend_1_State_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_RequirePrepend = static_cast<uint8_t>(0x1u),
__E_RequireAppend = static_cast<uint8_t>(0x2u),
__E_Completed = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ___AppendPrepend_AppendPrepend_1_State_Unwrapped () const noexcept {
return static_cast<___AppendPrepend_AppendPrepend_1_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr _AppendPrepend_AppendPrepend_1_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr _AppendPrepend_AppendPrepend_1_State(uint8_t  value__) noexcept;

/// @brief Field Completed value: U8(3)
static ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource> const Completed;

/// @brief Field None value: U8(0)
static ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource> const None;

/// @brief Field RequireAppend value: U8(2)
static ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource> const RequireAppend;

/// @brief Field RequirePrepend value: U8(1)
static ::GlobalNamespace::_AppendPrepend_AppendPrepend_1_State<TSource> const RequirePrepend;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20399};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
