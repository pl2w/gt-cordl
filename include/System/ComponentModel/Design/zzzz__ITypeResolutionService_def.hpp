#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/ITypeResolutionService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITypeResolutionService)
namespace System::Reflection {
class AssemblyName;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class ITypeResolutionService;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::Design::ITypeResolutionService*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::Design::ITypeResolutionService*, "System.ComponentModel.Design", "ITypeResolutionService");
// Dependencies 
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.ITypeResolutionService
class CORDL_TYPE ITypeResolutionService {
public:
// Declarations
/// @brief Method GetPathOfAssembly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetPathOfAssembly(::System::Reflection::AssemblyName*  name) ;

/// @brief Method GetType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* GetType(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "ITypeResolutionService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITypeResolutionService(ITypeResolutionService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
