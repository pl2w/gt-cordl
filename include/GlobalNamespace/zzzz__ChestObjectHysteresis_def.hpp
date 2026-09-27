#pragma once
// IWYU pragma private; include "GlobalNamespace/ChestObjectHysteresis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ChestObjectHysteresis)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ChestObjectHysteresis;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChestObjectHysteresis*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChestObjectHysteresis*, "", "ChestObjectHysteresis");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChestObjectHysteresis
class CORDL_TYPE ChestObjectHysteresis : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field angleBetween, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleBetween, put=__cordl_internal_set_angleBetween)) float_t  angleBetween;

/// @brief Field angleFollower, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_angleFollower, put=__cordl_internal_set_angleFollower)) ::UnityW<::UnityEngine::Transform>  angleFollower;

/// @brief Field angleFollower_path, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_angleFollower_path, put=__cordl_internal_set_angleFollower_path)) ::StringW  angleFollower_path;

/// @brief Field angleHysteresis, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleHysteresis, put=__cordl_internal_set_angleHysteresis)) float_t  angleHysteresis;

/// @brief Field currentAngleQuat, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_currentAngleQuat, put=__cordl_internal_set_currentAngleQuat)) ::UnityEngine::Quaternion  currentAngleQuat;

/// @brief Field lastAngleQuat, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastAngleQuat, put=__cordl_internal_set_lastAngleQuat)) ::UnityEngine::Quaternion  lastAngleQuat;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5754a08, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5754784, size 0x284, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5754774, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5754764, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x575477c, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x575476c, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

/// @brief Method InvokeUpdate, addr 0x5754d58, size 0x128, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

static inline ::GlobalNamespace::ChestObjectHysteresis* New_ctor() ;

/// @brief Method OnDisable, addr 0x5754c04, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5754a5c, size 0x54, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5754a0c, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_angleBetween() const;

constexpr float_t& __cordl_internal_get_angleBetween() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_angleFollower() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_angleFollower() ;

constexpr ::StringW const& __cordl_internal_get_angleFollower_path() const;

constexpr ::StringW& __cordl_internal_get_angleFollower_path() ;

constexpr float_t const& __cordl_internal_get_angleHysteresis() const;

constexpr float_t& __cordl_internal_get_angleHysteresis() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_currentAngleQuat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_currentAngleQuat() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastAngleQuat() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastAngleQuat() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_angleBetween(float_t  value) ;

constexpr void __cordl_internal_set_angleFollower(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_angleFollower_path(::StringW  value) ;

constexpr void __cordl_internal_set_angleHysteresis(float_t  value) ;

constexpr void __cordl_internal_set_currentAngleQuat(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastAngleQuat(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x5754e80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChestObjectHysteresis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChestObjectHysteresis", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChestObjectHysteresis(ChestObjectHysteresis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChestObjectHysteresis", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChestObjectHysteresis(ChestObjectHysteresis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1315};

/// @brief Field angleHysteresis, offset: 0x20, size: 0x4, def value: None
 float_t  ___angleHysteresis;

/// @brief Field angleBetween, offset: 0x24, size: 0x4, def value: None
 float_t  ___angleBetween;

/// @brief Field angleFollower, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___angleFollower;

/// [Delayed]
/// @brief Field angleFollower_path, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___angleFollower_path;

/// @brief Field lastAngleQuat, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastAngleQuat;

/// @brief Field currentAngleQuat, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___currentAngleQuat;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ___angleHysteresis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ___angleBetween) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ___angleFollower) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ___angleFollower_path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ___lastAngleQuat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ___currentAngleQuat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChestObjectHysteresis, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChestObjectHysteresis) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
