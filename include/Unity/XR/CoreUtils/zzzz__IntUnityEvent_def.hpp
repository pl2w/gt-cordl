#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/IntUnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntUnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class IntUnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::IntUnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::IntUnityEvent*, "Unity.XR.CoreUtils", "IntUnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.IntUnityEvent
class CORDL_TYPE IntUnityEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::IntUnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f2a0c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntUnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntUnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IntUnityEvent(IntUnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntUnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntUnityEvent(IntUnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::IntUnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
