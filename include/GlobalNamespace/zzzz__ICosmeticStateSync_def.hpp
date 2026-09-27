#pragma once
// IWYU pragma private; include "GlobalNamespace/ICosmeticStateSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICosmeticStateSync)
// Forward declare root types
namespace GlobalNamespace {
class ICosmeticStateSync;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICosmeticStateSync*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICosmeticStateSync*, "", "ICosmeticStateSync");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICosmeticStateSync
class CORDL_TYPE ICosmeticStateSync {
public:
// Declarations
 __declspec(property(get=get_StateValue)) int32_t  StateValue;

/// @brief Method OnStateUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnStateUpdate(int32_t  state) ;

/// @brief Method get_StateValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_StateValue() ;

// Ctor Parameters [CppParam { name: "", ty: "ICosmeticStateSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICosmeticStateSync(ICosmeticStateSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
