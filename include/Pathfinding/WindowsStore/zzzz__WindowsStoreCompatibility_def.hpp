#pragma once
// IWYU pragma private; include "Pathfinding/WindowsStore/WindowsStoreCompatibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WindowsStoreCompatibility)
namespace System {
class Type;
}
// Forward declare root types
namespace Pathfinding::WindowsStore {
class WindowsStoreCompatibility;
}
// Write type traits
MARK_REF_T(::Pathfinding::WindowsStore::WindowsStoreCompatibility*);
DEFINE_IL2CPP_CLASS(::Pathfinding::WindowsStore::WindowsStoreCompatibility*, "Pathfinding.WindowsStore", "WindowsStoreCompatibility");
// Dependencies System.Object
namespace Pathfinding::WindowsStore {
// Is value type: false
// CS Name: Pathfinding.WindowsStore.WindowsStoreCompatibility
class CORDL_TYPE WindowsStoreCompatibility : public ::System::Object {
public:
// Declarations
/// @brief Method GetTypeFromInfo, addr 0x5ed5410, size 0x4, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeFromInfo(::System::Type*  type) ;

/// @brief Method GetTypeInfo, addr 0x5ed2e38, size 0x4, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeInfo(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsStoreCompatibility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsStoreCompatibility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsStoreCompatibility(WindowsStoreCompatibility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsStoreCompatibility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsStoreCompatibility(WindowsStoreCompatibility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::WindowsStore::WindowsStoreCompatibility) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::WindowsStore
