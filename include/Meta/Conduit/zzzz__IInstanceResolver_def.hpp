#pragma once
// IWYU pragma private; include "Meta/Conduit/IInstanceResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInstanceResolver)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::Conduit {
class IInstanceResolver;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::IInstanceResolver*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::IInstanceResolver*, "Meta.Conduit", "IInstanceResolver");
// Dependencies 
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.IInstanceResolver
class CORDL_TYPE IInstanceResolver {
public:
// Declarations
/// @brief Method GetObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetObjectsOfType(::System::Type*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "IInstanceResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInstanceResolver(IInstanceResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Conduit
