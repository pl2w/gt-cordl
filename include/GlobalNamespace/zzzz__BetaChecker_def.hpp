#pragma once
// IWYU pragma private; include "GlobalNamespace/BetaChecker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BetaChecker)
// Forward declare root types
namespace GlobalNamespace {
class BetaChecker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BetaChecker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetaChecker*, "", "BetaChecker");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetaChecker
class CORDL_TYPE BetaChecker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field doNotEnable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_doNotEnable, put=__cordl_internal_set_doNotEnable)) bool  doNotEnable;

/// @brief Field objectsToEnable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToEnable, put=__cordl_internal_set_objectsToEnable)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objectsToEnable;

static inline ::GlobalNamespace::BetaChecker* New_ctor() ;

/// @brief Method Start, addr 0x574a6c8, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x574a774, size 0x16c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_doNotEnable() const;

constexpr bool& __cordl_internal_get_doNotEnable() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objectsToEnable() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objectsToEnable() ;

constexpr void __cordl_internal_set_doNotEnable(bool  value) ;

constexpr void __cordl_internal_set_objectsToEnable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x574a8e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetaChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetaChecker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetaChecker(BetaChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetaChecker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetaChecker(BetaChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1286};

/// @brief Field objectsToEnable, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objectsToEnable;

/// @brief Field doNotEnable, offset: 0x28, size: 0x1, def value: None
 bool  ___doNotEnable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetaChecker, ___objectsToEnable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetaChecker, ___doNotEnable) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetaChecker) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
