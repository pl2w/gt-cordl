#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SilhouettePlaneCache_Slot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SilhouettePlaneCache_Slot)
// Forward declare root types
namespace GlobalNamespace {
struct SilhouettePlaneCache_Slot;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SilhouettePlaneCache_Slot);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SilhouettePlaneCache_Slot, "UnityEngine.Rendering", "SilhouettePlaneCache/Slot");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.SilhouettePlaneCache/Slot
struct CORDL_TYPE SilhouettePlaneCache_Slot {
public:
// Declarations
/// @brief Method .ctor, addr 0xb20d360, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  viewInstanceID, int32_t  planeCount, int32_t  frameIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr SilhouettePlaneCache_Slot() ;

// Ctor Parameters [CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "planeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SilhouettePlaneCache_Slot(bool  isActive, int32_t  viewInstanceID, int32_t  planeCount, int32_t  lastUsedFrameIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field isActive, offset: 0x0, size: 0x1, def value: None
 bool  isActive;

/// @brief Field viewInstanceID, offset: 0x4, size: 0x4, def value: None
 int32_t  viewInstanceID;

/// @brief Field planeCount, offset: 0x8, size: 0x4, def value: None
 int32_t  planeCount;

/// @brief Field lastUsedFrameIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  lastUsedFrameIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SilhouettePlaneCache_Slot, isActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SilhouettePlaneCache_Slot, viewInstanceID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SilhouettePlaneCache_Slot, planeCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SilhouettePlaneCache_Slot, lastUsedFrameIndex) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SilhouettePlaneCache_Slot) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
