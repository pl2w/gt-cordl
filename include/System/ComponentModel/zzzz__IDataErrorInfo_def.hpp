#pragma once
// IWYU pragma private; include "System/ComponentModel/IDataErrorInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IDataErrorInfo)
// Forward declare root types
namespace System::ComponentModel {
class IDataErrorInfo;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IDataErrorInfo*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IDataErrorInfo*, "System.ComponentModel", "IDataErrorInfo");
// [DefaultMember("Item")]
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IDataErrorInfo
class CORDL_TYPE IDataErrorInfo {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_Item)) ::StringW  Item[];

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Error() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Item(::StringW  columnName) ;

// Ctor Parameters [CppParam { name: "", ty: "IDataErrorInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDataErrorInfo(IDataErrorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
