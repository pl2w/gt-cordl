#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightningStrike_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightningGenerator)
namespace GlobalNamespace {
class LightningStrike;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightningGenerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightningGenerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightningGenerator*, "", "LightningGenerator");
// Dependencies LightningStrike, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightningGenerator
class CORDL_TYPE LightningGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field index, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field maxConcurrentStrikes, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConcurrentStrikes, put=__cordl_internal_set_maxConcurrentStrikes)) uint32_t  maxConcurrentStrikes;

/// @brief Field prototype, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototype, put=__cordl_internal_set_prototype)) ::UnityW<::GlobalNamespace::LightningStrike>  prototype;

/// @brief Field strikes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_strikes, put=__cordl_internal_set_strikes)) ::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>>  strikes;

/// @brief Method Awake, addr 0x5b2eacc, size 0x1b0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LightningDispatcher_RequestLightningStrike, addr 0x5b2ed6c, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LightningStrike> LightningDispatcher_RequestLightningStrike(::UnityEngine::Vector3  t1, ::UnityEngine::Vector3  t2) ;

static inline ::GlobalNamespace::LightningGenerator* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b2ecf4, size 0x78, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b2ec7c, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr uint32_t const& __cordl_internal_get_maxConcurrentStrikes() const;

constexpr uint32_t& __cordl_internal_get_maxConcurrentStrikes() ;

constexpr ::UnityW<::GlobalNamespace::LightningStrike> const& __cordl_internal_get_prototype() const;

constexpr ::UnityW<::GlobalNamespace::LightningStrike>& __cordl_internal_get_prototype() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>> const& __cordl_internal_get_strikes() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>>& __cordl_internal_get_strikes() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_maxConcurrentStrikes(uint32_t  value) ;

constexpr void __cordl_internal_set_prototype(::UnityW<::GlobalNamespace::LightningStrike>  value) ;

constexpr void __cordl_internal_set_strikes(::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>>  value) ;

/// @brief Method .ctor, addr 0x5b2edb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightningGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightningGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightningGenerator(LightningGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightningGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightningGenerator(LightningGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3650};

/// [SerializeField]
/// @brief Field maxConcurrentStrikes, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___maxConcurrentStrikes;

/// [SerializeField]
/// @brief Field prototype, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightningStrike>  ___prototype;

/// @brief Field strikes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LightningStrike>>  ___strikes;

/// @brief Field index, offset: 0x38, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightningGenerator, ___maxConcurrentStrikes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningGenerator, ___prototype) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningGenerator, ___strikes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningGenerator, ___index) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightningGenerator) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
