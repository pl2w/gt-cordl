#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ColorUnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ColorUnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ColorUnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::ColorUnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::ColorUnityEvent*, "Unity.XR.CoreUtils", "ColorUnityEvent");
// Dependencies UnityEngine.Color, UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.ColorUnityEvent
class CORDL_TYPE ColorUnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::ColorUnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f2a54, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorUnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorUnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUnityEvent(ColorUnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUnityEvent(ColorUnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::ColorUnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
