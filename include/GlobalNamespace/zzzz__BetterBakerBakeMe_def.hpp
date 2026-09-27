#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerBakeMe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlagForBaking_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BetterBakerBakeMe)
namespace GlobalNamespace {
struct ShaderConfigData_ShaderConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BetterBakerBakeMe;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BetterBakerBakeMe*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterBakerBakeMe*, "", "BetterBakerBakeMe");
// Dependencies FlagForBaking, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterBakerBakeMe
class CORDL_TYPE BetterBakerBakeMe : public ::GlobalNamespace::FlagForBaking {
public:
// Declarations
/// @brief Field allConfigs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_allConfigs, put=__cordl_internal_set_allConfigs)) ::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>*  allConfigs;

/// @brief Field getMatStuffFromHere, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_getMatStuffFromHere, put=__cordl_internal_set_getMatStuffFromHere)) ::UnityW<::UnityEngine::GameObject>  getMatStuffFromHere;

/// @brief Field stuffIncludingParentsToBake, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stuffIncludingParentsToBake, put=__cordl_internal_set_stuffIncludingParentsToBake)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  stuffIncludingParentsToBake;

static inline ::GlobalNamespace::BetterBakerBakeMe* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>* const& __cordl_internal_get_allConfigs() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>*& __cordl_internal_get_allConfigs() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_getMatStuffFromHere() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_getMatStuffFromHere() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_stuffIncludingParentsToBake() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_stuffIncludingParentsToBake() ;

constexpr void __cordl_internal_set_allConfigs(::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>*  value) ;

constexpr void __cordl_internal_set_getMatStuffFromHere(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stuffIncludingParentsToBake(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5ae1d90, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterBakerBakeMe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterBakerBakeMe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterBakerBakeMe(BetterBakerBakeMe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterBakerBakeMe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterBakerBakeMe(BetterBakerBakeMe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3466};

/// @brief Field stuffIncludingParentsToBake, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___stuffIncludingParentsToBake;

/// @brief Field getMatStuffFromHere, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___getMatStuffFromHere;

/// @brief Field allConfigs, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ShaderConfigData_ShaderConfig>*  ___allConfigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterBakerBakeMe, ___stuffIncludingParentsToBake) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBakerBakeMe, ___getMatStuffFromHere) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterBakerBakeMe, ___allConfigs) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterBakerBakeMe) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
