#pragma once
// IWYU pragma private; include "UnityEngine/Animations/PropertyStreamHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyStreamHandle)
// Forward declare root types
namespace UnityEngine::Animations {
struct PropertyStreamHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::PropertyStreamHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::PropertyStreamHandle, "UnityEngine.Animations", "PropertyStreamHandle");
// [MovedFrom("UnityEngine.Experimental.Animations")]
// [NativeHeader("Modules/Animation/Director/AnimationStreamHandles.h")]
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.PropertyStreamHandle
struct CORDL_TYPE PropertyStreamHandle {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropertyStreamHandle() ;

// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "handleIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "valueArrayIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindType", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PropertyStreamHandle(uint32_t  m_AnimatorBindingsVersion, int32_t  handleIndex, int32_t  valueArrayIndex, int32_t  bindType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_AnimatorBindingsVersion, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_AnimatorBindingsVersion;

/// @brief Field handleIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  handleIndex;

/// @brief Field valueArrayIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  valueArrayIndex;

/// @brief Field bindType, offset: 0xc, size: 0x4, def value: None
 int32_t  bindType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, m_AnimatorBindingsVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, handleIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, valueArrayIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::PropertyStreamHandle, bindType) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::PropertyStreamHandle) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
