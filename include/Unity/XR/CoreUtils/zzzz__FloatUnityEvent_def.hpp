#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/FloatUnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatUnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class FloatUnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::FloatUnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::FloatUnityEvent*, "Unity.XR.CoreUtils", "FloatUnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.FloatUnityEvent
class CORDL_TYPE FloatUnityEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::FloatUnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f28a4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatUnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatUnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatUnityEvent(FloatUnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatUnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatUnityEvent(FloatUnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30405};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::FloatUnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
