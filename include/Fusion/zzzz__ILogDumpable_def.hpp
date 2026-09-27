#pragma once
// IWYU pragma private; include "Fusion/ILogDumpable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILogDumpable)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Fusion {
class ILogDumpable;
}
// Write type traits
MARK_REF_T(::Fusion::ILogDumpable*);
DEFINE_IL2CPP_CLASS(::Fusion::ILogDumpable*, "Fusion", "ILogDumpable");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ILogDumpable
class CORDL_TYPE ILogDumpable {
public:
// Declarations
/// @brief Method Dump, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dump(::System::Text::StringBuilder*  builder) ;

// Ctor Parameters [CppParam { name: "", ty: "ILogDumpable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILogDumpable(ILogDumpable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32732};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
