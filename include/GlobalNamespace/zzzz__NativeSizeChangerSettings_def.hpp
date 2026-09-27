#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeChangerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NativeSizeChangerSettings)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NativeSizeChangerSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NativeSizeChangerSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeSizeChangerSettings*, "", "NativeSizeChangerSettings");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NativeSizeChangerSettings
class CORDL_TYPE NativeSizeChangerSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActivationTime, put=set_ActivationTime)) float_t  ActivationTime;

/// @brief Field ExpireAfterSeconds, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExpireAfterSeconds, put=__cordl_internal_set_ExpireAfterSeconds)) float_t  ExpireAfterSeconds;

/// @brief Field ExpireInWater, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExpireInWater, put=__cordl_internal_set_ExpireInWater)) bool  ExpireInWater;

/// @brief Field ExpireOnDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExpireOnDistance, put=__cordl_internal_set_ExpireOnDistance)) float_t  ExpireOnDistance;

/// @brief Field ExpireOnRoomJoin, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExpireOnRoomJoin, put=__cordl_internal_set_ExpireOnRoomJoin)) bool  ExpireOnRoomJoin;

 __declspec(property(get=get_WorldPosition, put=set_WorldPosition)) ::UnityEngine::Vector3  WorldPosition;

/// @brief Field activationTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationTime, put=__cordl_internal_set_activationTime)) float_t  activationTime;

/// @brief Field playerSizeScale, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerSizeScale, put=__cordl_internal_set_playerSizeScale)) float_t  playerSizeScale;

/// @brief Field worldPosition, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_worldPosition, put=__cordl_internal_set_worldPosition)) ::UnityEngine::Vector3  worldPosition;

static inline ::GlobalNamespace::NativeSizeChangerSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_ExpireAfterSeconds() const;

constexpr float_t& __cordl_internal_get_ExpireAfterSeconds() ;

constexpr bool const& __cordl_internal_get_ExpireInWater() const;

constexpr bool& __cordl_internal_get_ExpireInWater() ;

constexpr float_t const& __cordl_internal_get_ExpireOnDistance() const;

constexpr float_t& __cordl_internal_get_ExpireOnDistance() ;

constexpr bool const& __cordl_internal_get_ExpireOnRoomJoin() const;

constexpr bool& __cordl_internal_get_ExpireOnRoomJoin() ;

constexpr float_t const& __cordl_internal_get_activationTime() const;

constexpr float_t& __cordl_internal_get_activationTime() ;

constexpr float_t const& __cordl_internal_get_playerSizeScale() const;

constexpr float_t& __cordl_internal_get_playerSizeScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldPosition() ;

constexpr void __cordl_internal_set_ExpireAfterSeconds(float_t  value) ;

constexpr void __cordl_internal_set_ExpireInWater(bool  value) ;

constexpr void __cordl_internal_set_ExpireOnDistance(float_t  value) ;

constexpr void __cordl_internal_set_ExpireOnRoomJoin(bool  value) ;

constexpr void __cordl_internal_set_activationTime(float_t  value) ;

constexpr void __cordl_internal_set_playerSizeScale(float_t  value) ;

constexpr void __cordl_internal_set_worldPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x56d3a20, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivationTime, addr 0x56d3a10, size 0x8, virtual false, abstract: false, final false
inline float_t get_ActivationTime() ;

/// @brief Method get_WorldPosition, addr 0x56d39f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_WorldPosition() ;

/// @brief Method set_ActivationTime, addr 0x56d3a18, size 0x8, virtual false, abstract: false, final false
inline void set_ActivationTime(float_t  value) ;

/// @brief Method set_WorldPosition, addr 0x56d3a04, size 0xc, virtual false, abstract: false, final false
inline void set_WorldPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeSizeChangerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeChangerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeSizeChangerSettings(NativeSizeChangerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeChangerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeSizeChangerSettings(NativeSizeChangerSettings const& ) = delete;

/// @brief Field MaxAllowedSize offset 0xffffffff size 0x4
static constexpr float_t  MaxAllowedSize{static_cast<float_t>(10.0f)};

/// @brief Field MinAllowedSize offset 0xffffffff size 0x4
static constexpr float_t  MinAllowedSize{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1068};

/// @brief Field worldPosition, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___worldPosition;

/// @brief Field activationTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___activationTime;

/// [Range(0.1, 10)]
/// @brief Field playerSizeScale, offset: 0x20, size: 0x4, def value: None
 float_t  ___playerSizeScale;

/// @brief Field ExpireOnRoomJoin, offset: 0x24, size: 0x1, def value: None
 bool  ___ExpireOnRoomJoin;

/// @brief Field ExpireInWater, offset: 0x25, size: 0x1, def value: None
 bool  ___ExpireInWater;

/// @brief Field ExpireAfterSeconds, offset: 0x28, size: 0x4, def value: None
 float_t  ___ExpireAfterSeconds;

/// @brief Field ExpireOnDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___ExpireOnDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeSizeChangerSettings, ___worldPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeChangerSettings, ___activationTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeChangerSettings, ___playerSizeScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeChangerSettings, ___ExpireOnRoomJoin) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeChangerSettings, ___ExpireInWater) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeChangerSettings, ___ExpireAfterSeconds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeChangerSettings, ___ExpireOnDistance) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeSizeChangerSettings) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
