#pragma once
// IWYU pragma private; include "Fusion/UnityPlayerLoopSystemUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityPlayerLoopSystemUtils)
namespace Fusion {
struct UnityPlayerLoopSystemAddMode;
}
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
class PlayerLoopSystem_UpdateFunction;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace Fusion {
class UnityPlayerLoopSystemUtils;
}
// Write type traits
MARK_REF_T(::Fusion::UnityPlayerLoopSystemUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityPlayerLoopSystemUtils*, "Fusion", "UnityPlayerLoopSystemUtils");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityPlayerLoopSystemUtils
class CORDL_TYPE UnityPlayerLoopSystemUtils : public ::System::Object {
public:
// Declarations
/// @brief Method AddToPlayerLoop, addr 0x5fa7678, size 0x1ec, virtual false, abstract: false, final false
static inline bool AddToPlayerLoop(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentSystem, ::System::Type*  referenceSystemType, ::Fusion::UnityPlayerLoopSystemAddMode  addMode, ::System::Type*  ownerType, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  updateDelegate) ;

/// @brief Method InsertSystem, addr 0x5fa7864, size 0x1a4, virtual false, abstract: false, final false
static inline void InsertSystem(::by_ref<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>  systems, int32_t  position, ::System::Type*  ownerType, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  updateDelegate) ;

/// @brief Method RemoveFromPlayerLoop, addr 0x5fa7a08, size 0x168, virtual false, abstract: false, final false
static inline bool RemoveFromPlayerLoop(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentSystem, ::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityPlayerLoopSystemUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopSystemUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityPlayerLoopSystemUtils(UnityPlayerLoopSystemUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopSystemUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityPlayerLoopSystemUtils(UnityPlayerLoopSystemUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UnityPlayerLoopSystemUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
