#pragma once
// IWYU pragma private; include "CSCore/IWriteable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWriteable)
// Forward declare root types
namespace CSCore {
class IWriteable;
}
// Write type traits
MARK_REF_T(::CSCore::IWriteable*);
DEFINE_IL2CPP_CLASS(::CSCore::IWriteable*, "CSCore", "IWriteable");
// Dependencies 
namespace CSCore {
// Is value type: false
// CS Name: CSCore.IWriteable
class CORDL_TYPE IWriteable {
public:
// Declarations
/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

// Ctor Parameters [CppParam { name: "", ty: "IWriteable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWriteable(IWriteable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28867};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def CSCore
