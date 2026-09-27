#pragma once
// IWYU pragma private; include "Fusion/RuntimeUnityFlagsSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__RuntimeFlagsBuildFlags_def.hpp"
#include "Fusion/zzzz__RuntimeFlagsBuildTypes_def.hpp"
#include "Fusion/zzzz__RuntimeFlagsDotNetVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeUnityFlagsSetup)
// Forward declare root types
namespace Fusion {
class RuntimeUnityFlagsSetup;
}
// Write type traits
MARK_REF_T(::Fusion::RuntimeUnityFlagsSetup*);
DEFINE_IL2CPP_CLASS(::Fusion::RuntimeUnityFlagsSetup*, "Fusion", "RuntimeUnityFlagsSetup");
// Dependencies Fusion.RuntimeFlagsBuildFlags, Fusion.RuntimeFlagsBuildTypes, Fusion.RuntimeFlagsDotNetVersion, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RuntimeUnityFlagsSetup
class CORDL_TYPE RuntimeUnityFlagsSetup : public ::System::Object {
public:
// Declarations
/// @brief Field flagsBuildFlags, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_flagsBuildFlags, put=setStaticF_flagsBuildFlags)) ::Fusion::RuntimeFlagsBuildFlags  flagsBuildFlags;

/// @brief Field flagsBuildTypes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_flagsBuildTypes, put=setStaticF_flagsBuildTypes)) ::Fusion::RuntimeFlagsBuildTypes  flagsBuildTypes;

/// @brief Field flagsDotNetVersion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_flagsDotNetVersion, put=setStaticF_flagsDotNetVersion)) ::Fusion::RuntimeFlagsDotNetVersion  flagsDotNetVersion;

/// [Conditional("ENABLE_IL2CPP")]
/// @brief Method Check_ENABLE_IL2CPP, addr 0x5f40474, size 0x50, virtual false, abstract: false, final false
static inline void Check_ENABLE_IL2CPP() ;

/// [Conditional("NET_STANDARD_2_0")]
/// @brief Method Check_NET_STANDARD_2_0, addr 0x5f4055c, size 0x50, virtual false, abstract: false, final false
static inline void Check_NET_STANDARD_2_0() ;

/// [Conditional("UNITY_2019_4_OR_NEWER")]
/// @brief Method Check_UNITY_2019_4_OR_NEWER, addr 0x5f4038c, size 0x50, virtual false, abstract: false, final false
static inline void Check_UNITY_2019_4_OR_NEWER() ;

static inline ::Fusion::RuntimeFlagsBuildFlags getStaticF_flagsBuildFlags() ;

static inline ::Fusion::RuntimeFlagsBuildTypes getStaticF_flagsBuildTypes() ;

static inline ::Fusion::RuntimeFlagsDotNetVersion getStaticF_flagsDotNetVersion() ;

/// @brief Method get_IsENABLE_IL2CPP, addr 0x5f40428, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsENABLE_IL2CPP() ;

/// @brief Method get_IsENABLE_MONO, addr 0x5f403dc, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsENABLE_MONO() ;

/// @brief Method get_IsNET_4_6, addr 0x5f404c4, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsNET_4_6() ;

/// @brief Method get_IsNET_STANDARD_2_0, addr 0x5f40510, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsNET_STANDARD_2_0() ;

/// @brief Method get_IsUNITY_EDITOR, addr 0x5f40340, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsUNITY_EDITOR() ;

/// @brief Method get_IsUNITY_GAMECORE, addr 0x5f402f4, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsUNITY_GAMECORE() ;

/// @brief Method get_IsUNITY_WEBGL, addr 0x5f4025c, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsUNITY_WEBGL() ;

/// @brief Method get_IsUNITY_XBOXONE, addr 0x5f402a8, size 0x4c, virtual false, abstract: false, final false
static inline bool get_IsUNITY_XBOXONE() ;

static inline void setStaticF_flagsBuildFlags(::Fusion::RuntimeFlagsBuildFlags  value) ;

static inline void setStaticF_flagsBuildTypes(::Fusion::RuntimeFlagsBuildTypes  value) ;

static inline void setStaticF_flagsDotNetVersion(::Fusion::RuntimeFlagsDotNetVersion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeUnityFlagsSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUnityFlagsSetup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeUnityFlagsSetup(RuntimeUnityFlagsSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeUnityFlagsSetup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeUnityFlagsSetup(RuntimeUnityFlagsSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31313};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RuntimeUnityFlagsSetup) == 0x10, "Size mismatch!");

} // namespace end def Fusion
