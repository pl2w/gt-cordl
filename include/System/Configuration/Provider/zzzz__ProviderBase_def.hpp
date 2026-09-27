#pragma once
// IWYU pragma private; include "System/Configuration/Provider/ProviderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProviderBase)
namespace System::Collections::Specialized {
class NameValueCollection;
}
// Forward declare root types
namespace System::Configuration::Provider {
class ProviderBase;
}
// Write type traits
MARK_REF_T(::System::Configuration::Provider::ProviderBase*);
DEFINE_IL2CPP_CLASS(::System::Configuration::Provider::ProviderBase*, "System.Configuration.Provider", "ProviderBase");
// Dependencies System.Object
namespace System::Configuration::Provider {
// Is value type: false
// CS Name: System.Configuration.Provider.ProviderBase
class CORDL_TYPE ProviderBase : public ::System::Object {
public:
// Declarations
/// @brief Method Initialize, addr 0xa84e9a8, size 0x38, virtual true, abstract: false, final false
inline void Initialize(::StringW  name, ::System::Collections::Specialized::NameValueCollection*  config) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProviderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProviderBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProviderBase(ProviderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProviderBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProviderBase(ProviderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33060};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::Provider::ProviderBase) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration::Provider
