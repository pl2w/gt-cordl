#pragma once
// IWYU pragma private; include "System/Configuration/Provider/ProviderCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProviderCollection)
namespace System::Configuration::Provider {
class ProviderBase;
}
// Forward declare root types
namespace System::Configuration::Provider {
class ProviderCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::Provider::ProviderCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::Provider::ProviderCollection*, "System.Configuration.Provider", "ProviderCollection");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Configuration::Provider {
// Is value type: false
// CS Name: System.Configuration.Provider.ProviderCollection
class CORDL_TYPE ProviderCollection : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0xa84ed74, size 0x38, virtual true, abstract: false, final false
inline void Add(::System::Configuration::Provider::ProviderBase*  provider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProviderCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProviderCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProviderCollection(ProviderCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProviderCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProviderCollection(ProviderCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33070};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::Provider::ProviderCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration::Provider
