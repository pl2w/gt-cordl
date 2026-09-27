#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/IKeyGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IKeyGenerator)
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class IKeyGenerator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::IKeyGenerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::IKeyGenerator*, "UnityEngine.Localization.Tables", "IKeyGenerator");
// Dependencies 
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.IKeyGenerator
class CORDL_TYPE IKeyGenerator {
public:
// Declarations
/// @brief Method GetNextKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t GetNextKey() ;

// Ctor Parameters [CppParam { name: "", ty: "IKeyGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKeyGenerator(IKeyGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25078};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Tables
