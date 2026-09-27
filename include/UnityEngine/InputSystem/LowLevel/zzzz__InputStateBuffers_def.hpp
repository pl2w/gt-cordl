#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBuffers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_DoubleBuffers_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateBuffers)
namespace GlobalNamespace {
struct InputStateBuffers_DoubleBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateBuffers);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers");
// Dependencies UnityEngine.InputSystem.LowLevel.InputStateBuffers::DoubleBuffers
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateBuffers
struct CORDL_TYPE InputStateBuffers {
public:
// Declarations
using DoubleBuffers = ::GlobalNamespace::InputStateBuffers_DoubleBuffers;

/// @brief Field s_CurrentBuffers, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_CurrentBuffers, put=setStaticF_s_CurrentBuffers)) ::GlobalNamespace::InputStateBuffers_DoubleBuffers  s_CurrentBuffers;

/// @brief Field s_DefaultStateBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultStateBuffer, put=setStaticF_s_DefaultStateBuffer)) void*  s_DefaultStateBuffer;

/// @brief Field s_NoiseMaskBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NoiseMaskBuffer, put=setStaticF_s_NoiseMaskBuffer)) void*  s_NoiseMaskBuffer;

/// @brief Field s_ResetMaskBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ResetMaskBuffer, put=setStaticF_s_ResetMaskBuffer)) void*  s_ResetMaskBuffer;

/// @brief Method AllocateAll, addr 0xaffac70, size 0xb0, virtual false, abstract: false, final false
inline void AllocateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount) ;

/// @brief Method ComputeSizeOfSingleStateBuffer, addr 0xaffad20, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t ComputeSizeOfSingleStateBuffer(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount) ;

/// @brief Method FreeAll, addr 0xaffae28, size 0xc0, virtual false, abstract: false, final false
inline void FreeAll() ;

/// @brief Method GetBackBufferForDevice, addr 0xaffab78, size 0x6c, virtual false, abstract: false, final false
static inline void* GetBackBufferForDevice(int32_t  deviceIndex) ;

/// @brief Method GetDoubleBuffersFor, addr 0xaffaa20, size 0xcc, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputStateBuffers_DoubleBuffers GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method GetFrontBufferForDevice, addr 0xaffaaec, size 0x68, virtual false, abstract: false, final false
static inline void* GetFrontBufferForDevice(int32_t  deviceIndex) ;

/// @brief Method MigrateAll, addr 0xaffaee8, size 0x15c, virtual false, abstract: false, final false
inline void MigrateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  oldBuffers) ;

/// @brief Method MigrateDoubleBuffer, addr 0xaffb044, size 0x1c8, virtual false, abstract: false, final false
static inline void MigrateDoubleBuffer(::GlobalNamespace::InputStateBuffers_DoubleBuffers  newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount, ::GlobalNamespace::InputStateBuffers_DoubleBuffers  oldBuffer) ;

/// @brief Method MigrateSingleBuffer, addr 0xaffb20c, size 0x108, virtual false, abstract: false, final false
static inline void MigrateSingleBuffer(void*  newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount, void*  oldBuffer) ;

/// @brief Method NextDeviceOffset, addr 0xaffb314, size 0xe4, virtual false, abstract: false, final false
static inline uint32_t NextDeviceOffset(uint32_t  currentOffset, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method SetUpDeviceToBufferMappings, addr 0xaffad8c, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputStateBuffers_DoubleBuffers SetUpDeviceToBufferMappings(int32_t  deviceCount, ::by_ref<uint8_t*>  bufferPtr, uint32_t  sizePerBuffer, uint32_t  mappingTableSizePerBuffer) ;

/// @brief Method SwitchTo, addr 0xaffac0c, size 0x64, virtual false, abstract: false, final false
static inline void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers  buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  update) ;

static inline ::GlobalNamespace::InputStateBuffers_DoubleBuffers getStaticF_s_CurrentBuffers() ;

static inline void* getStaticF_s_DefaultStateBuffer() ;

static inline void* getStaticF_s_NoiseMaskBuffer() ;

static inline void* getStaticF_s_ResetMaskBuffer() ;

static inline void setStaticF_s_CurrentBuffers(::GlobalNamespace::InputStateBuffers_DoubleBuffers  value) ;

static inline void setStaticF_s_DefaultStateBuffer(void*  value) ;

static inline void setStaticF_s_NoiseMaskBuffer(void*  value) ;

static inline void setStaticF_s_ResetMaskBuffer(void*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputStateBuffers() ;

// Ctor Parameters [CppParam { name: "sizePerBuffer", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "totalSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultStateBuffer", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "noiseMaskBuffer", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "resetMaskBuffer", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AllBuffers", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PlayerStateBuffers", ty: "::GlobalNamespace::InputStateBuffers_DoubleBuffers", modifiers: "", def_value: None, comment: None }]
constexpr InputStateBuffers(uint32_t  sizePerBuffer, uint32_t  totalSize, void*  defaultStateBuffer, void*  noiseMaskBuffer, void*  resetMaskBuffer, void*  m_AllBuffers, ::GlobalNamespace::InputStateBuffers_DoubleBuffers  m_PlayerStateBuffers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field sizePerBuffer, offset: 0x0, size: 0x4, def value: None
 uint32_t  sizePerBuffer;

/// @brief Field totalSize, offset: 0x4, size: 0x4, def value: None
 uint32_t  totalSize;

/// @brief Field defaultStateBuffer, offset: 0x8, size: 0x8, def value: None
 void*  defaultStateBuffer;

/// @brief Field noiseMaskBuffer, offset: 0x10, size: 0x8, def value: None
 void*  noiseMaskBuffer;

/// @brief Field resetMaskBuffer, offset: 0x18, size: 0x8, def value: None
 void*  resetMaskBuffer;

/// @brief Field m_AllBuffers, offset: 0x20, size: 0x8, def value: None
 void*  m_AllBuffers;

/// @brief Field m_PlayerStateBuffers, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::InputStateBuffers_DoubleBuffers  m_PlayerStateBuffers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, sizePerBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, totalSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, defaultStateBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, noiseMaskBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, resetMaskBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, m_AllBuffers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, m_PlayerStateBuffers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
