#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRProfile)
namespace GlobalNamespace {
struct OVRProfile_State;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRProfile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRProfile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRProfile*, "", "OVRProfile");
// [HelpURL("https://developer.oculus.com/reference/unity/latest/class_o_v_r_profile")]
// Dependencies UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRProfile
class CORDL_TYPE OVRProfile : public ::UnityEngine::Object {
public:
// Declarations
using State = ::GlobalNamespace::OVRProfile_State;

 __declspec(property(get=get_eyeDepth)) float_t  eyeDepth;

 __declspec(property(get=get_eyeHeight)) float_t  eyeHeight;

/// @brief [Obsolete]
 __declspec(property(get=get_id)) ::StringW  id;

 __declspec(property(get=get_ipd)) float_t  ipd;

/// @brief [Obsolete]
 __declspec(property(get=get_locale)) ::StringW  locale;

 __declspec(property(get=get_neckHeight)) float_t  neckHeight;

/// @brief [Obsolete]
 __declspec(property(get=get_state)) ::GlobalNamespace::OVRProfile_State  state;

/// @brief [Obsolete]
 __declspec(property(get=get_userName)) ::StringW  userName;

static inline ::GlobalNamespace::OVRProfile* New_ctor() ;

/// @brief Method .ctor, addr 0xa62bab0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_eyeDepth, addr 0xa62ba3c, size 0x50, virtual false, abstract: false, final false
inline float_t get_eyeDepth() ;

/// @brief Method get_eyeHeight, addr 0xa62b9ec, size 0x50, virtual false, abstract: false, final false
inline float_t get_eyeHeight() ;

/// @brief Method get_id, addr 0xa62b7f8, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_ipd, addr 0xa62b8b8, size 0x134, virtual false, abstract: false, final false
inline float_t get_ipd() ;

/// @brief Method get_locale, addr 0xa62b878, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_locale() ;

/// @brief Method get_neckHeight, addr 0xa62ba8c, size 0x1c, virtual false, abstract: false, final false
inline float_t get_neckHeight() ;

/// @brief Method get_state, addr 0xa62baa8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRProfile_State get_state() ;

/// @brief Method get_userName, addr 0xa62b838, size 0x40, virtual false, abstract: false, final false
inline ::StringW get_userName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRProfile(OVRProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRProfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRProfile(OVRProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRProfile) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
