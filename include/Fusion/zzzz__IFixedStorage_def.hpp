#pragma once
// IWYU pragma private; include "Fusion/IFixedStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFixedStorage)
// Forward declare root types
namespace Fusion {
class IFixedStorage;
}
// Write type traits
MARK_REF_T(::Fusion::IFixedStorage*);
DEFINE_IL2CPP_CLASS(::Fusion::IFixedStorage*, "Fusion", "IFixedStorage");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IFixedStorage
class CORDL_TYPE IFixedStorage {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IFixedStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFixedStorage(IFixedStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19022};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
