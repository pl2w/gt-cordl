#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_MOnlineError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_MOnlineError)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_MOnlineError;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_MOnlineError);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_MOnlineError, "", "Bindings/MOnlineError");
// [BurstCompile]
// Dependencies Unity.Collections.FixedString512Bytes, Unity.Collections.FixedString64Bytes
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/MOnlineError
struct CORDL_TYPE Bindings_MOnlineError {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_MOnlineError() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "ErrorCode", ty: "::Unity::Collections::FixedString64Bytes", modifiers: "", def_value: None, comment: None }, CppParam { name: "HttpCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_MOnlineError(::Unity::Collections::FixedString512Bytes  Name, ::Unity::Collections::FixedString512Bytes  Message, ::Unity::Collections::FixedString64Bytes  ErrorCode, int32_t  HttpCode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x444};

/// @brief Field Name, offset: 0x0, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  Name;

/// @brief Field Message, offset: 0x200, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  Message;

/// @brief Field ErrorCode, offset: 0x400, size: 0x40, def value: None
 ::Unity::Collections::FixedString64Bytes  ErrorCode;

/// @brief Field HttpCode, offset: 0x440, size: 0x4, def value: None
 int32_t  HttpCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_MOnlineError, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MOnlineError, Message) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MOnlineError, ErrorCode) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_MOnlineError, HttpCode) == 0x440, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_MOnlineError) == 0x444, "Size mismatch!");

} // namespace end def GlobalNamespace
