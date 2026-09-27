#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IDataUploadHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDataUploadHandler)
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IDataUploadHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IDataUploadHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IDataUploadHandler*, "Meta.WitAi.Interfaces", "IDataUploadHandler");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IDataUploadHandler
class CORDL_TYPE IDataUploadHandler {
public:
// Declarations
/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "IDataUploadHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDataUploadHandler(IDataUploadHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25660};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
