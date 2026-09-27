#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_UpdateStepCount_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdate)
namespace GlobalNamespace {
struct InputUpdate_SerializedState;
}
namespace GlobalNamespace {
struct InputUpdate_UpdateStepCount;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdate;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::LowLevel::InputUpdate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::InputUpdate*, "UnityEngine.InputSystem.LowLevel", "InputUpdate");
// [Extension]
// Dependencies System.Object, UnityEngine.InputSystem.LowLevel.InputUpdate::UpdateStepCount, UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate
class CORDL_TYPE InputUpdate : public ::System::Object {
public:
// Declarations
using SerializedState = ::GlobalNamespace::InputUpdate_SerializedState;

using UpdateStepCount = ::GlobalNamespace::InputUpdate_UpdateStepCount;

/// @brief Field s_LatestUpdateType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LatestUpdateType, put=setStaticF_s_LatestUpdateType)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  s_LatestUpdateType;

/// @brief Field s_PlayerUpdateStepCount, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PlayerUpdateStepCount, put=setStaticF_s_PlayerUpdateStepCount)) ::GlobalNamespace::InputUpdate_UpdateStepCount  s_PlayerUpdateStepCount;

/// @brief Field s_UpdateStepCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_UpdateStepCount, put=setStaticF_s_UpdateStepCount)) uint32_t  s_UpdateStepCount;

/// [Extension]
/// @brief Method GetUpdateTypeForPlayer, addr 0xaff61bc, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType  mask) ;

/// [Extension]
/// @brief Method IsPlayerUpdate, addr 0xaff61d8, size 0xc, virtual false, abstract: false, final false
static inline bool IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method OnBeforeUpdate, addr 0xaff5f80, size 0x80, virtual false, abstract: false, final false
static inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  type) ;

/// @brief Method OnUpdate, addr 0xaff6018, size 0x88, virtual false, abstract: false, final false
static inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  type) ;

/// @brief Method Restore, addr 0xaff6128, size 0x94, virtual false, abstract: false, final false
static inline void Restore(::GlobalNamespace::InputUpdate_SerializedState  state) ;

/// @brief Method Save, addr 0xaff60bc, size 0x6c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputUpdate_SerializedState Save() ;

static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType getStaticF_s_LatestUpdateType() ;

static inline ::GlobalNamespace::InputUpdate_UpdateStepCount getStaticF_s_PlayerUpdateStepCount() ;

static inline uint32_t getStaticF_s_UpdateStepCount() ;

static inline void setStaticF_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

static inline void setStaticF_s_PlayerUpdateStepCount(::GlobalNamespace::InputUpdate_UpdateStepCount  value) ;

static inline void setStaticF_s_UpdateStepCount(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputUpdate(InputUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputUpdate(InputUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13780};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputUpdate) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
