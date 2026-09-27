#pragma once
// IWYU pragma private; include "GlobalNamespace/DelegateExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DelegateExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace GlobalNamespace {
class DelegateExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DelegateExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DelegateExtensions*, "", "DelegateExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DelegateExtensions
class CORDL_TYPE DelegateExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ToStringList, addr 0x56733dc, size 0x1bc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* ToStringList(::ArrayW<::System::Delegate*>  invocationList) ;

/// [Extension]
/// @brief Method ToText, addr 0x5673598, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToText(::ArrayW<::System::Delegate*>  invocationList) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegateExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegateExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateExtensions(DelegateExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateExtensions(DelegateExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DelegateExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
