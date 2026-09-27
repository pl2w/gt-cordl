#pragma once
// IWYU pragma private; include "Meta/Conduit/IManifestMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IManifestMethod)
namespace Meta::Conduit {
class ManifestParameter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::Conduit {
class IManifestMethod;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::IManifestMethod*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::IManifestMethod*, "Meta.Conduit", "IManifestMethod");
// Dependencies 
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.IManifestMethod
class CORDL_TYPE IManifestMethod {
public:
// Declarations
 __declspec(property(get=get_Assembly)) ::StringW  Assembly;

 __declspec(property(get=get_Parameters)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  Parameters;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Method get_Assembly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Assembly() ;

/// @brief Method get_ID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ID() ;

/// @brief Method get_Parameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* get_Parameters() ;

// Ctor Parameters [CppParam { name: "", ty: "IManifestMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IManifestMethod(IManifestMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Conduit
