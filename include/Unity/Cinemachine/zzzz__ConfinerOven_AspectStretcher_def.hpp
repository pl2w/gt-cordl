#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_AspectStretcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ConfinerOven_AspectStretcher)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConfinerOven_AspectStretcher;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConfinerOven_AspectStretcher);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConfinerOven_AspectStretcher, "Unity.Cinemachine", "ConfinerOven/AspectStretcher");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ConfinerOven/AspectStretcher
struct CORDL_TYPE ConfinerOven_AspectStretcher {
public:
// Declarations
 __declspec(property(get=get_Aspect)) float_t  Aspect;

/// @brief Method Stretch, addr 0xaeb5ff8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Stretch(::UnityEngine::Vector2  p) ;

/// @brief Method Unstretch, addr 0xaeb71c4, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Unstretch(::UnityEngine::Vector2  p) ;

/// @brief Method .ctor, addr 0xaeb51c0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(float_t  aspect, float_t  centerX) ;

/// [CompilerGenerated]
/// @brief Method get_Aspect, addr 0xaeb7354, size 0x8, virtual false, abstract: false, final false
inline float_t get_Aspect() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfinerOven_AspectStretcher() ;

// Ctor Parameters [CppParam { name: "_Aspect_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InverseAspect", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CenterX", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ConfinerOven_AspectStretcher(float_t  _Aspect_k__BackingField, float_t  m_InverseAspect, float_t  m_CenterX) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22311};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [CompilerGenerated]
/// @brief Field <Aspect>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  _Aspect_k__BackingField;

/// @brief Field m_InverseAspect, offset: 0x4, size: 0x4, def value: None
 float_t  m_InverseAspect;

/// @brief Field m_CenterX, offset: 0x8, size: 0x4, def value: None
 float_t  m_CenterX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConfinerOven_AspectStretcher, _Aspect_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_AspectStretcher, m_InverseAspect) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_AspectStretcher, m_CenterX) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConfinerOven_AspectStretcher) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
