#pragma once
// IWYU pragma private; include "GlobalNamespace/IPrefabRequirements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPrefabRequirements)
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IPrefabRequirements;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IPrefabRequirements*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IPrefabRequirements*, "", "IPrefabRequirements");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPrefabRequirements
class CORDL_TYPE IPrefabRequirements {
public:
// Declarations
 __declspec(property(get=get_RequiredPrefabs)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*  RequiredPrefabs;

/// @brief Method get_RequiredPrefabs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* get_RequiredPrefabs() ;

// Ctor Parameters [CppParam { name: "", ty: "IPrefabRequirements", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPrefabRequirements(IPrefabRequirements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{254};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
