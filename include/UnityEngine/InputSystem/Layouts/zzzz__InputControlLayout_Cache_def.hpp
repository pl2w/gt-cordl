#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Cache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputControlLayout_Cache)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlLayout_Cache;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlLayout_Cache);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlLayout_Cache, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Cache");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct CORDL_TYPE InputControlLayout_Cache {
public:
// Declarations
/// @brief Method Clear, addr 0xb008214, size 0xc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method FindOrLoadLayout, addr 0xb0076d8, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::StringW  name, bool  throwIfNotFound) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_Cache() ;

// Ctor Parameters [CppParam { name: "table", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*", modifiers: "", def_value: None, comment: None }]
constexpr InputControlLayout_Cache(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13836};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field table, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlLayout_Cache, table) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlLayout_Cache) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
