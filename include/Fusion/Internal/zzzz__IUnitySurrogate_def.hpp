#pragma once
// IWYU pragma private; include "Fusion/Internal/IUnitySurrogate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUnitySurrogate)
// Forward declare root types
namespace Fusion::Internal {
class IUnitySurrogate;
}
// Write type traits
MARK_REF_T(::Fusion::Internal::IUnitySurrogate*);
DEFINE_IL2CPP_CLASS(::Fusion::Internal::IUnitySurrogate*, "Fusion.Internal", "IUnitySurrogate");
// Dependencies 
namespace Fusion::Internal {
// Is value type: false
// CS Name: Fusion.Internal.IUnitySurrogate
class CORDL_TYPE IUnitySurrogate {
public:
// Declarations
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Read(int32_t*  data, int32_t  capacity) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(int32_t*  data, int32_t  capacity) ;

// Ctor Parameters [CppParam { name: "", ty: "IUnitySurrogate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnitySurrogate(IUnitySurrogate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19383};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Internal
