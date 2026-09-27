#pragma once
// IWYU pragma private; include "System/ComponentModel/IListSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListSource)
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::ComponentModel {
class IListSource;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IListSource*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IListSource*, "System.ComponentModel", "IListSource");
// [MergableProperty(false)]
// Dependencies 
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IListSource
class CORDL_TYPE IListSource {
public:
// Declarations
 __declspec(property(get=get_ContainsListCollection)) bool  ContainsListCollection;

/// @brief Method GetList, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IList* GetList() ;

/// @brief Method get_ContainsListCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ContainsListCollection() ;

// Ctor Parameters [CppParam { name: "", ty: "IListSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IListSource(IListSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
