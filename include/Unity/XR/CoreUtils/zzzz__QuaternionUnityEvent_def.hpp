#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/QuaternionUnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(QuaternionUnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class QuaternionUnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::QuaternionUnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::QuaternionUnityEvent*, "Unity.XR.CoreUtils", "QuaternionUnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>, UnityEngine.Quaternion
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.QuaternionUnityEvent
class CORDL_TYPE QuaternionUnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::QuaternionUnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f29c4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuaternionUnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuaternionUnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuaternionUnityEvent(QuaternionUnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionUnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuaternionUnityEvent(QuaternionUnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30409};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::QuaternionUnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
