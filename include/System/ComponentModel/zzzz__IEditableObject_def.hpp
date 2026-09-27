#pragma once
// IWYU pragma private; include "System/ComponentModel/IEditableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEditableObject)
// Forward declare root types
namespace System::ComponentModel {
class IEditableObject;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IEditableObject*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IEditableObject*, "System.ComponentModel", "IEditableObject");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IEditableObject
class CORDL_TYPE IEditableObject {
public:
// Declarations
/// @brief Method BeginEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BeginEdit() ;

/// @brief Method CancelEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CancelEdit() ;

/// @brief Method EndEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EndEdit() ;

// Ctor Parameters [CppParam { name: "", ty: "IEditableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEditableObject(IEditableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
