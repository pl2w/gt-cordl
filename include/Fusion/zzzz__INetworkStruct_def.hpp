#pragma once
// IWYU pragma private; include "Fusion/INetworkStruct.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkStruct)
// Forward declare root types
namespace Fusion {
class INetworkStruct;
}
// Write type traits
MARK_REF_T(::Fusion::INetworkStruct*);
DEFINE_IL2CPP_CLASS(::Fusion::INetworkStruct*, "Fusion", "INetworkStruct");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.INetworkStruct
class CORDL_TYPE INetworkStruct {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "INetworkStruct", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkStruct(INetworkStruct const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19375};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
