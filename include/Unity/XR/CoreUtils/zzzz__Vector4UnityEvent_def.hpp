#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Vector4UnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(Vector4UnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector4UnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Vector4UnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Vector4UnityEvent*, "Unity.XR.CoreUtils", "Vector4UnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Vector4
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Vector4UnityEvent
class CORDL_TYPE Vector4UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector4> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Vector4UnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f297c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector4UnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector4UnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector4UnityEvent(Vector4UnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector4UnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector4UnityEvent(Vector4UnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30408};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Vector4UnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
