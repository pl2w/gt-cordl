#pragma once
// IWYU pragma private; include "Meta/Conduit/IManifestLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IManifestLoader)
namespace Meta::Conduit {
class Manifest;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Meta::Conduit {
class IManifestLoader;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::IManifestLoader*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::IManifestLoader*, "Meta.Conduit", "IManifestLoader");
// Dependencies 
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.IManifestLoader
class CORDL_TYPE IManifestLoader {
public:
// Declarations
/// @brief Method LoadManifestAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>* LoadManifestAsync(::StringW  filePath) ;

// Ctor Parameters [CppParam { name: "", ty: "IManifestLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IManifestLoader(IManifestLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Conduit
