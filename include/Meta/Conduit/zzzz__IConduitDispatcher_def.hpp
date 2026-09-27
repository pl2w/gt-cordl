#pragma once
// IWYU pragma private; include "Meta/Conduit/IConduitDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IConduitDispatcher)
namespace Meta::Conduit {
class IParameterProvider;
}
namespace Meta::Conduit {
class Manifest;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Meta::Conduit {
class IConduitDispatcher;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::IConduitDispatcher*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::IConduitDispatcher*, "Meta.Conduit", "IConduitDispatcher");
// Dependencies 
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.IConduitDispatcher
class CORDL_TYPE IConduitDispatcher {
public:
// Declarations
 __declspec(property(get=get_Manifest)) ::Meta::Conduit::Manifest*  Manifest;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* Initialize(::StringW  manifestFilePath) ;

/// @brief Method InvokeAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool InvokeAction(::Meta::Conduit::IParameterProvider*  parameterProvider, ::StringW  actionId, bool  relaxed, float_t  confidence, bool  partial) ;

/// @brief Method get_Manifest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Conduit::Manifest* get_Manifest() ;

// Ctor Parameters [CppParam { name: "", ty: "IConduitDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConduitDispatcher(IConduitDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Conduit
