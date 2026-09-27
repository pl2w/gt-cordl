#pragma once
// IWYU pragma private; include "GlobalNamespace/FXSystemSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimitType_1_def.hpp"
#include "GlobalNamespace/zzzz__CooldownType_def.hpp"
#include "GlobalNamespace/zzzz__LimiterType_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FXSystemSettings)
namespace GlobalNamespace {
class CallLimiter;
}
// Forward declare root types
namespace GlobalNamespace {
class FXSystemSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FXSystemSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FXSystemSettings*, "", "FXSystemSettings");
// [CreateAssetMenu(menuName = "ScriptableObjects/FXSystemSettings", order = 2)]
// Dependencies CallLimitType`1<T>, CooldownType, LimiterType, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: FXSystemSettings
class CORDL_TYPE FXSystemSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field CallLimitsCooldown, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CallLimitsCooldown, put=__cordl_internal_set_CallLimitsCooldown)) ::ArrayW<::GlobalNamespace::CooldownType*>  CallLimitsCooldown;

/// @brief Field callLimits, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimits, put=__cordl_internal_set_callLimits)) ::ArrayW<::GlobalNamespace::LimiterType*>  callLimits;

/// @brief Field callSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callSettings, put=__cordl_internal_set_callSettings)) ::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*>  callSettings;

/// @brief Field forLocalRig, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_forLocalRig, put=__cordl_internal_set_forLocalRig)) bool  forLocalRig;

/// @brief Method Awake, addr 0x5ac4d24, size 0x484, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::FXSystemSettings* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::CooldownType*> const& __cordl_internal_get_CallLimitsCooldown() const;

constexpr ::ArrayW<::GlobalNamespace::CooldownType*>& __cordl_internal_get_CallLimitsCooldown() ;

constexpr ::ArrayW<::GlobalNamespace::LimiterType*> const& __cordl_internal_get_callLimits() const;

constexpr ::ArrayW<::GlobalNamespace::LimiterType*>& __cordl_internal_get_callLimits() ;

constexpr ::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*> const& __cordl_internal_get_callSettings() const;

constexpr ::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*>& __cordl_internal_get_callSettings() ;

constexpr bool const& __cordl_internal_get_forLocalRig() const;

constexpr bool& __cordl_internal_get_forLocalRig() ;

constexpr void __cordl_internal_set_CallLimitsCooldown(::ArrayW<::GlobalNamespace::CooldownType*>  value) ;

constexpr void __cordl_internal_set_callLimits(::ArrayW<::GlobalNamespace::LimiterType*>  value) ;

constexpr void __cordl_internal_set_callSettings(::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*>  value) ;

constexpr void __cordl_internal_set_forLocalRig(bool  value) ;

/// @brief Method .ctor, addr 0x5ac51a8, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FXSystemSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FXSystemSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FXSystemSettings(FXSystemSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FXSystemSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FXSystemSettings(FXSystemSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3372};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  FXSystemSettings: "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"FXSystemSettings: "};

/// [SerializeField]
/// @brief Field callLimits, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LimiterType*>  ___callLimits;

/// [SerializeField]
/// @brief Field CallLimitsCooldown, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CooldownType*>  ___CallLimitsCooldown;

/// @brief Field forLocalRig, offset: 0x28, size: 0x1, def value: None
 bool  ___forLocalRig;

/// @brief Field callSettings, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>*>  ___callSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FXSystemSettings, ___callLimits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FXSystemSettings, ___CallLimitsCooldown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FXSystemSettings, ___forLocalRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FXSystemSettings, ___callSettings) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FXSystemSettings) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
