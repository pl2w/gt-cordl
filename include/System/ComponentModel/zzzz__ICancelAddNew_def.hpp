#pragma once
// IWYU pragma private; include "System/ComponentModel/ICancelAddNew.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICancelAddNew)
// Forward declare root types
namespace System::ComponentModel {
class ICancelAddNew;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ICancelAddNew*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ICancelAddNew*, "System.ComponentModel", "ICancelAddNew");
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ICancelAddNew
class CORDL_TYPE ICancelAddNew {
public:
// Declarations
/// @brief Method CancelNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CancelNew(int32_t  itemIndex) ;

/// @brief Method EndNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EndNew(int32_t  itemIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "ICancelAddNew", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICancelAddNew(ICancelAddNew const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10169};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
