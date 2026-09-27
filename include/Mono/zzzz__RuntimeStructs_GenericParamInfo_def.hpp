#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs_GenericParamInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeStructs_GenericParamInfo)
namespace GlobalNamespace {
struct RuntimeStructs_MonoClass;
}
// Forward declare root types
namespace GlobalNamespace {
struct RuntimeStructs_GenericParamInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimeStructs_GenericParamInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeStructs_GenericParamInfo, "Mono", "RuntimeStructs/GenericParamInfo");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.RuntimeStructs/GenericParamInfo
struct CORDL_TYPE RuntimeStructs_GenericParamInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeStructs_GenericParamInfo() ;

// Ctor Parameters [CppParam { name: "pklass", ty: "::GlobalNamespace::RuntimeStructs_MonoClass*", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "constraints", ty: "::GlobalNamespace::RuntimeStructs_MonoClass*", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeStructs_GenericParamInfo(::GlobalNamespace::RuntimeStructs_MonoClass*  pklass, ::System::IntPtr  name, uint16_t  flags, uint32_t  token, ::GlobalNamespace::RuntimeStructs_MonoClass*  constraints) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field pklass, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::RuntimeStructs_MonoClass*  pklass;

/// @brief Field name, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  name;

/// @brief Field flags, offset: 0x10, size: 0x2, def value: None
 uint16_t  flags;

/// @brief Field token, offset: 0x14, size: 0x4, def value: None
 uint32_t  token;

/// @brief Field constraints, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::RuntimeStructs_MonoClass*  constraints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeStructs_GenericParamInfo, pklass) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_GenericParamInfo, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_GenericParamInfo, flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_GenericParamInfo, token) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_GenericParamInfo, constraints) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeStructs_GenericParamInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
