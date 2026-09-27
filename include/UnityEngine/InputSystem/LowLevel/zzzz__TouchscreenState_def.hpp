#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TouchscreenState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState__primaryTouchData_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState__touchData_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchscreenState)
namespace GlobalNamespace {
struct TouchscreenState__primaryTouchData_e__FixedBuffer;
}
namespace GlobalNamespace {
struct TouchscreenState__touchData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchscreenState);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::TouchscreenState, "UnityEngine.InputSystem.LowLevel", "TouchscreenState");
// Dependencies UnityEngine.InputSystem.LowLevel.TouchscreenState::<primaryTouchData>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.TouchscreenState::<touchData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState
#pragma pack(push, 0)
struct CORDL_TYPE TouchscreenState {
public:
// Declarations
using _primaryTouchData_e__FixedBuffer = ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer;

using _touchData_e__FixedBuffer = ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

 __declspec(property(get=get_primaryTouch)) ::UnityEngine::InputSystem::LowLevel::TouchState*  primaryTouch;

/// @brief Field primaryTouchData, offset 0x0, size 0x38 
 __declspec(property(get=__cordl_internal_get_primaryTouchData, put=__cordl_internal_set_primaryTouchData)) ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer  primaryTouchData;

/// @brief Field touchData, offset 0x38, size 0x230 
 __declspec(property(get=__cordl_internal_get_touchData, put=__cordl_internal_set_touchData)) ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer  touchData;

 __declspec(property(get=get_touches)) ::UnityEngine::InputSystem::LowLevel::TouchState*  touches;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer const& __cordl_internal_get_primaryTouchData() const;

constexpr ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer& __cordl_internal_get_primaryTouchData() ;

constexpr ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer const& __cordl_internal_get_touchData() const;

constexpr ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer& __cordl_internal_get_touchData() ;

constexpr void __cordl_internal_set_primaryTouchData(::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_touchData(::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer  value) ;

/// @brief Method get_Format, addr 0xafee754, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method get_format, addr 0xafee790, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method get_primaryTouch, addr 0xafee784, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState* get_primaryTouch() ;

/// @brief Method get_touches, addr 0xafee788, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState* get_touches() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr TouchscreenState() ;

// Ctor Parameters [CppParam { name: "primaryTouchData", ty: "::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "touchData", ty: "::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr TouchscreenState(::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer  primaryTouchData, ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer  touchData) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___primaryTouchData_padding[0x0];
/// [FixedBuffer(typeof(System.Byte), 56)]
/// [InputControl(name = "primaryTouch", displayName = "Primary Touch", layout = "Touch", synthetic = true)]
/// [InputControl(name = "primaryTouch/tap", usage = "PrimaryAction")]
/// [InputControl(name = "position", useStateFrom = "primaryTouch/position")]
/// [InputControl(name = "delta", useStateFrom = "primaryTouch/delta", layout = "Delta")]
/// [InputControl(name = "pressure", useStateFrom = "primaryTouch/pressure")]
/// [InputControl(name = "radius", useStateFrom = "primaryTouch/radius")]
/// [InputControl(name = "press", useStateFrom = "primaryTouch/phase", layout = "TouchPress", synthetic = true, usages = new[] {  })]
/// [InputControl(name = "displayIndex", useStateFrom = "primaryTouch/displayIndex", format = "BYTE")]
/// @brief Field primaryTouchData, offset: 0x0, size: 0x38, def value: None
 ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer  ___primaryTouchData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___primaryTouchData_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Byte), 56)]
/// [InputControl(name = "primaryTouch", displayName = "Primary Touch", layout = "Touch", synthetic = true)]
/// [InputControl(name = "primaryTouch/tap", usage = "PrimaryAction")]
/// [InputControl(name = "position", useStateFrom = "primaryTouch/position")]
/// [InputControl(name = "delta", useStateFrom = "primaryTouch/delta", layout = "Delta")]
/// [InputControl(name = "pressure", useStateFrom = "primaryTouch/pressure")]
/// [InputControl(name = "radius", useStateFrom = "primaryTouch/radius")]
/// [InputControl(name = "press", useStateFrom = "primaryTouch/phase", layout = "TouchPress", synthetic = true, usages = new[] {  })]
/// [InputControl(name = "displayIndex", useStateFrom = "primaryTouch/displayIndex", format = "BYTE")]
/// @brief Field primaryTouchData, offset: 0x0, size: 0x38, def value: None
 ::GlobalNamespace::TouchscreenState__primaryTouchData_e__FixedBuffer  ___primaryTouchData_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___touchData_padding[0x38];
/// [FixedBuffer(typeof(System.Byte), 560)]
/// [InputControl(layout = "Touch", name = "touch", displayName = "Touch", arraySize = 10)]
/// @brief Field touchData, offset: 0x38, size: 0x230, def value: None
 ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer  ___touchData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___touchData_padding_forAlignment[0x38];
/// [FixedBuffer(typeof(System.Byte), 560)]
/// [InputControl(layout = "Touch", name = "touch", displayName = "Touch", arraySize = 10)]
/// @brief Field touchData, offset: 0x38, size: 0x230, def value: None
 ::GlobalNamespace::TouchscreenState__touchData_e__FixedBuffer  ___touchData_forAlignment;
};
};
public:

/// @brief Field MaxTouches offset 0xffffffff size 0x4
static constexpr int32_t  MaxTouches{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13741};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x268};

/// @brief Field kTouchDataOffset offset 0xffffffff size 0x4
static constexpr int32_t  kTouchDataOffset{static_cast<int32_t>(0x38)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::TouchscreenState) == 0x268, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
