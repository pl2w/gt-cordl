#pragma once
// IWYU pragma private; include "GlobalNamespace/IFactoryItemProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFactoryItemProvider)
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IFactoryItemProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IFactoryItemProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IFactoryItemProvider*, "", "IFactoryItemProvider");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IFactoryItemProvider
class CORDL_TYPE IFactoryItemProvider {
public:
// Declarations
/// @brief Method GetFactoryItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* GetFactoryItems() ;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryItemProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFactoryItemProvider(IFactoryItemProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
