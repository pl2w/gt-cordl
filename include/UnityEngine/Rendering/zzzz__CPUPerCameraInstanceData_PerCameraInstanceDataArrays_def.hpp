#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUPerCameraInstanceData_PerCameraInstanceDataArrays.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUPerCameraInstanceData_PerCameraInstanceDataArrays)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct CPUPerCameraInstanceData_PerCameraInstanceDataArrays;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays, "UnityEngine.Rendering", "CPUPerCameraInstanceData/PerCameraInstanceDataArrays");
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUPerCameraInstanceData/PerCameraInstanceDataArrays
struct CORDL_TYPE CPUPerCameraInstanceData_PerCameraInstanceDataArrays {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb1ffe94, size 0x54, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Grow, addr 0xb2007e4, size 0x68, virtual false, abstract: false, final false
inline void Grow(int32_t  previousCapacity, int32_t  newCapacity) ;

/// @brief Method Remove, addr 0xb2003b4, size 0x6c, virtual false, abstract: false, final false
inline void Remove(int32_t  index, int32_t  lastIndex) ;

/// @brief Method SetDefault, addr 0xb200a48, size 0x50, virtual false, abstract: false, final false
inline void SetDefault(int32_t  index) ;

/// @brief Method .ctor, addr 0xb2000dc, size 0x100, virtual false, abstract: false, final false
inline void _ctor(int32_t  initCapacity) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CPUPerCameraInstanceData_PerCameraInstanceDataArrays() ;

// Ctor Parameters [CppParam { name: "meshLods", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "crossFades", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr CPUPerCameraInstanceData_PerCameraInstanceDataArrays(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  meshLods, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  crossFades) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field meshLods, offset: 0x0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  meshLods;

/// @brief Field crossFades, offset: 0x18, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  crossFades;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays, meshLods) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays, crossFades) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
