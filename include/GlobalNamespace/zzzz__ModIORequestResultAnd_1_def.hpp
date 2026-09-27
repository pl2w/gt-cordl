#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIORequestResultAnd_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ModIORequestResult_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModIORequestResultAnd_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct ModIORequestResultAnd_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ModIORequestResultAnd_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ModIORequestResultAnd_1, "", "ModIORequestResultAnd`1");
// Dependencies ModIORequestResult
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: ModIORequestResultAnd`1<T>
struct CORDL_TYPE ModIORequestResultAnd_1 {
public:
// Declarations
/// @brief Method CreateFailureResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ModIORequestResultAnd_1<T> CreateFailureResult(::StringW  inMessage) ;

/// @brief Method CreateSuccessResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ModIORequestResultAnd_1<T> CreateSuccessResult(T  payload) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIORequestResultAnd_1() ;

// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::ModIORequestResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr ModIORequestResultAnd_1(::GlobalNamespace::ModIORequestResult  result, T  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field result, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ModIORequestResult  result;

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 T  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
