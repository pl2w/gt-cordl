#pragma once
// IWYU pragma private; include "System/ComponentModel/IIntellisenseBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IIntellisenseBuilder)
// Forward declare root types
namespace System::ComponentModel {
class IIntellisenseBuilder;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IIntellisenseBuilder*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IIntellisenseBuilder*, "System.ComponentModel", "IIntellisenseBuilder");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IIntellisenseBuilder
class CORDL_TYPE IIntellisenseBuilder {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Show, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Show(::StringW  language, ::StringW  value, ::by_ref<::StringW>  newValue) ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Name() ;

// Ctor Parameters [CppParam { name: "", ty: "IIntellisenseBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IIntellisenseBuilder(IIntellisenseBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
