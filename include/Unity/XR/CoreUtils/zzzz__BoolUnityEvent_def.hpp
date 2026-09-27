#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/BoolUnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(BoolUnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class BoolUnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::BoolUnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::BoolUnityEvent*, "Unity.XR.CoreUtils", "BoolUnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.BoolUnityEvent
class CORDL_TYPE BoolUnityEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::BoolUnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f285c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoolUnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoolUnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoolUnityEvent(BoolUnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoolUnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoolUnityEvent(BoolUnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30404};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::BoolUnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
