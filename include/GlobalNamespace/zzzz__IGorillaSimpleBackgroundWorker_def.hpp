#pragma once
// IWYU pragma private; include "GlobalNamespace/IGorillaSimpleBackgroundWorker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGorillaSimpleBackgroundWorker)
// Forward declare root types
namespace GlobalNamespace {
class IGorillaSimpleBackgroundWorker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGorillaSimpleBackgroundWorker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGorillaSimpleBackgroundWorker*, "", "IGorillaSimpleBackgroundWorker");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGorillaSimpleBackgroundWorker
class CORDL_TYPE IGorillaSimpleBackgroundWorker {
public:
// Declarations
/// @brief Method SimpleWork, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SimpleWork() ;

// Ctor Parameters [CppParam { name: "", ty: "IGorillaSimpleBackgroundWorker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGorillaSimpleBackgroundWorker(IGorillaSimpleBackgroundWorker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
