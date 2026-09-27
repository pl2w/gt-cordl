#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Vector2UnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Vector2UnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector2UnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Vector2UnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Vector2UnityEvent*, "Unity.XR.CoreUtils", "Vector2UnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Vector2
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Vector2UnityEvent
class CORDL_TYPE Vector2UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Vector2UnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f28ec, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2UnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2UnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2UnityEvent(Vector2UnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2UnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2UnityEvent(Vector2UnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30406};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Vector2UnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
