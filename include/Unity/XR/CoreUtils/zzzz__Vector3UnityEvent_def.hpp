#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Vector3UnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Vector3UnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector3UnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Vector3UnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Vector3UnityEvent*, "Unity.XR.CoreUtils", "Vector3UnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Vector3
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Vector3UnityEvent
class CORDL_TYPE Vector3UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Vector3UnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f2934, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector3UnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector3UnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3UnityEvent(Vector3UnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3UnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3UnityEvent(Vector3UnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30407};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Vector3UnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
