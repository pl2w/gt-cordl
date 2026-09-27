#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/StringUnityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringUnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class StringUnityEvent;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::StringUnityEvent*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::StringUnityEvent*, "Unity.XR.CoreUtils", "StringUnityEvent");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.StringUnityEvent
class CORDL_TYPE StringUnityEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::StringUnityEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb3f2a9c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringUnityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringUnityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringUnityEvent(StringUnityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringUnityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringUnityEvent(StringUnityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::StringUnityEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
