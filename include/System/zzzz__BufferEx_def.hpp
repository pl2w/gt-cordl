#pragma once
// IWYU pragma private; include "System/BufferEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferEx)
// Forward declare root types
namespace System {
class BufferEx;
}
// Write type traits
MARK_REF_T(::System::BufferEx*);
DEFINE_IL2CPP_CLASS(::System::BufferEx*, "System", "BufferEx");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.BufferEx
class CORDL_TYPE BufferEx : public ::System::Object {
public:
// Declarations
/// @brief Method Memcpy, addr 0xb993c60, size 0x20, virtual false, abstract: false, final false
static inline void Memcpy(uint8_t*  dest, uint8_t*  src, int32_t  len) ;

/// @brief Method ZeroMemory, addr 0xb993c38, size 0x28, virtual false, abstract: false, final false
static inline void ZeroMemory(uint8_t*  dest, uint32_t  len) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferEx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferEx(BufferEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferEx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferEx(BufferEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::BufferEx) == 0x10, "Size mismatch!");

} // namespace end def System
