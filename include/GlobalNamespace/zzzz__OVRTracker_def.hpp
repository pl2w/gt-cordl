#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTracker)
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct OVRTracker_Frustum;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTracker*, "", "OVRTracker");
// [HelpURL("https://developer.oculus.com/reference/unity/latest/class_o_v_r_tracker")]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTracker
class CORDL_TYPE OVRTracker : public ::System::Object {
public:
// Declarations
using Frustum = ::GlobalNamespace::OVRTracker_Frustum;

 __declspec(property(get=get_count)) int32_t  count;

 __declspec(property(get=get_isEnabled, put=set_isEnabled)) bool  isEnabled;

 __declspec(property(get=get_isPositionTracked)) bool  isPositionTracked;

 __declspec(property(get=get_isPresent)) bool  isPresent;

/// @brief Method GetFrustum, addr 0xa64ce78, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTracker_Frustum GetFrustum(int32_t  tracker) ;

/// @brief Method GetPose, addr 0xa64cf1c, size 0x2ac, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPose GetPose(int32_t  tracker) ;

/// @brief Method GetPoseValid, addr 0xa64d1c8, size 0xe4, virtual false, abstract: false, final false
inline bool GetPoseValid(int32_t  tracker) ;

/// @brief Method GetPresent, addr 0xa64cd94, size 0xe4, virtual false, abstract: false, final false
inline bool GetPresent(int32_t  tracker) ;

static inline ::GlobalNamespace::OVRTracker* New_ctor() ;

/// @brief Method .ctor, addr 0xa64d2ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_count, addr 0xa64cd58, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_isEnabled, addr 0xa64cc34, size 0x90, virtual false, abstract: false, final false
inline bool get_isEnabled() ;

/// @brief Method get_isPositionTracked, addr 0xa64cbe4, size 0x50, virtual false, abstract: false, final false
inline bool get_isPositionTracked() ;

/// @brief Method get_isPresent, addr 0xa64cb54, size 0x90, virtual false, abstract: false, final false
inline bool get_isPresent() ;

/// @brief Method set_isEnabled, addr 0xa64ccc4, size 0x94, virtual false, abstract: false, final false
inline void set_isEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTracker(OVRTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTracker(OVRTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12521};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRTracker) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
