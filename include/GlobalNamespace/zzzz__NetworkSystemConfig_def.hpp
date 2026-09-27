#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSystemConfig)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSystemConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSystemConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSystemConfig, "", "NetworkSystemConfig");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkSystemConfig
struct CORDL_TYPE NetworkSystemConfig {
public:
// Declarations
/// @brief Field gameVersionType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameVersionType, put=setStaticF_gameVersionType)) ::StringW  gameVersionType;

/// @brief Field majorVersion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_majorVersion, put=setStaticF_majorVersion)) int32_t  majorVersion;

/// @brief Field minorVersion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_minorVersion, put=setStaticF_minorVersion)) int32_t  minorVersion;

/// @brief Field minorVersion2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_minorVersion2, put=setStaticF_minorVersion2)) int32_t  minorVersion2;

/// @brief Field prependCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_prependCode, put=setStaticF_prependCode)) ::StringW  prependCode;

static inline ::StringW getStaticF_gameVersionType() ;

static inline int32_t getStaticF_majorVersion() ;

static inline int32_t getStaticF_minorVersion() ;

static inline int32_t getStaticF_minorVersion2() ;

static inline ::StringW getStaticF_prependCode() ;

/// @brief Method get_AppVersion, addr 0x56e8e04, size 0x80, virtual false, abstract: false, final false
static inline ::StringW get_AppVersion() ;

/// @brief Method get_AppVersionStripped, addr 0x56e8e84, size 0x1c0, virtual false, abstract: false, final false
static inline ::StringW get_AppVersionStripped() ;

/// @brief Method get_BundleVersion, addr 0x56e9044, size 0x178, virtual false, abstract: false, final false
static inline ::StringW get_BundleVersion() ;

/// @brief Method get_GameMajorVersion, addr 0x56e9214, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_GameMajorVersion() ;

/// @brief Method get_GameMinorVersion, addr 0x56e926c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_GameMinorVersion() ;

/// @brief Method get_GameMinorVersion2, addr 0x56e92c4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_GameMinorVersion2() ;

/// @brief Method get_GameVersionType, addr 0x56e91bc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW get_GameVersionType() ;

static inline void setStaticF_gameVersionType(::StringW  value) ;

static inline void setStaticF_majorVersion(int32_t  value) ;

static inline void setStaticF_minorVersion(int32_t  value) ;

static inline void setStaticF_minorVersion2(int32_t  value) ;

static inline void setStaticF_prependCode(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSystemConfig() ;

// Ctor Parameters [CppParam { name: "MaxPlayerCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSystemConfig(int32_t  MaxPlayerCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1121};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [HideInInspector]
/// @brief Field MaxPlayerCount, offset: 0x0, size: 0x4, def value: None
 int32_t  MaxPlayerCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSystemConfig, MaxPlayerCount) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSystemConfig) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
