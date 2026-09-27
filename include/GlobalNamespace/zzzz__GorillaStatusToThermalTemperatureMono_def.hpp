#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaStatusToThermalTemperatureMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaStatusToThermalTemperatureMono)
namespace GlobalNamespace {
struct GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature;
}
namespace GlobalNamespace {
class ThermalSourceVolume;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaStatusToThermalTemperatureMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaStatusToThermalTemperatureMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaStatusToThermalTemperatureMono*, "", "GorillaStatusToThermalTemperatureMono");
// Dependencies GorillaStatusToThermalTemperatureMono::_MaterialIndexToTemperature, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaStatusToThermalTemperatureMono
class CORDL_TYPE GorillaStatusToThermalTemperatureMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MaterialIndexToTemperature = ::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field <hasRig>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRig_k__BackingField, put=__cordl_internal_set__hasRig_k__BackingField)) bool  _hasRig_k__BackingField;

/// @brief Field _runtimeMatIndexes_to_temperatures, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__runtimeMatIndexes_to_temperatures, put=__cordl_internal_set__runtimeMatIndexes_to_temperatures)) ::ArrayW<float_t>  _runtimeMatIndexes_to_temperatures;

 __declspec(property(get=get_hasRig, put=set_hasRig)) bool  hasRig;

/// @brief Field m_materialIndexesToTemperatures, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_materialIndexesToTemperatures, put=__cordl_internal_set_m_materialIndexesToTemperatures)) ::ArrayW<::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature>  m_materialIndexesToTemperatures;

/// @brief Field m_rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rig, put=__cordl_internal_set_m_rig)) ::UnityW<::GlobalNamespace::VRRig>  m_rig;

/// @brief Field m_thermalSourceVolume, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_thermalSourceVolume, put=__cordl_internal_set_m_thermalSourceVolume)) ::UnityW<::GlobalNamespace::ThermalSourceVolume>  m_thermalSourceVolume;

 __declspec(property(get=get_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Awake, addr 0x5675af0, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaStatusToThermalTemperatureMono* New_ctor() ;

/// @brief Method OnDespawn, addr 0x5675f24, size 0x8, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x5675dc8, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5675b64, size 0x264, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x5675f20, size 0x4, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  newRig) ;

/// @brief Method SetRig, addr 0x5675640, size 0x260, virtual false, abstract: false, final false
inline void SetRig(::GlobalNamespace::VRRig*  newRig) ;

/// @brief Method _InitRuntimeArray, addr 0x56758a0, size 0x200, virtual false, abstract: false, final false
inline void _InitRuntimeArray() ;

/// @brief Method _OnMatChanged, addr 0x5675aa0, size 0x50, virtual false, abstract: false, final false
inline void _OnMatChanged(int32_t  oldIndex, int32_t  newIndex) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get__hasRig_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasRig_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__runtimeMatIndexes_to_temperatures() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__runtimeMatIndexes_to_temperatures() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature> const& __cordl_internal_get_m_materialIndexesToTemperatures() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature>& __cordl_internal_get_m_materialIndexesToTemperatures() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_m_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_m_rig() ;

constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume> const& __cordl_internal_get_m_thermalSourceVolume() const;

constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume>& __cordl_internal_get_m_thermalSourceVolume() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__hasRig_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__runtimeMatIndexes_to_temperatures(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_materialIndexesToTemperatures(::ArrayW<::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature>  value) ;

constexpr void __cordl_internal_set_m_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_m_thermalSourceVolume(::UnityW<::GlobalNamespace::ThermalSourceVolume>  value) ;

/// @brief Method .ctor, addr 0x5675f2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5675f10, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5675f00, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method get_hasRig, addr 0x5675628, size 0x8, virtual false, abstract: false, final false
inline bool get_hasRig() ;

/// @brief Method get_rig, addr 0x5675638, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_rig() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5675f18, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5675f08, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasRig, addr 0x5675630, size 0x8, virtual false, abstract: false, final false
inline void set_hasRig(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaStatusToThermalTemperatureMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaStatusToThermalTemperatureMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaStatusToThermalTemperatureMono(GorillaStatusToThermalTemperatureMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaStatusToThermalTemperatureMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaStatusToThermalTemperatureMono(GorillaStatusToThermalTemperatureMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{838};

/// @brief Field _k_invalidTemperature offset 0xffffffff size 0x4
static constexpr float_t  _k_invalidTemperature{static_cast<float_t>(-32768.0f)};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GorillaStatusToThermalTemperatureMono]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GorillaStatusToThermalTemperatureMono]  "};

/// [Tooltip("Should either be assigned here or via another script.")]
/// [SerializeField]
/// @brief Field m_rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___m_rig;

/// [CompilerGenerated]
/// @brief Field <hasRig>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____hasRig_k__BackingField;

/// [SerializeField]
/// @brief Field m_thermalSourceVolume, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThermalSourceVolume>  ___m_thermalSourceVolume;

/// [SerializeField]
/// @brief Field m_materialIndexesToTemperatures, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature>  ___m_materialIndexesToTemperatures;

/// [DebugReadout]
/// @brief Field _runtimeMatIndexes_to_temperatures, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____runtimeMatIndexes_to_temperatures;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono, ___m_rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono, ____hasRig_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono, ___m_thermalSourceVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono, ___m_materialIndexesToTemperatures) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono, ____runtimeMatIndexes_to_temperatures) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono, ____IsSpawned_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono, ____CosmeticSelectedSide_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
