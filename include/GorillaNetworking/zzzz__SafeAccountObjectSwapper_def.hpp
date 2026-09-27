#pragma once
// IWYU pragma private; include "GorillaNetworking/SafeAccountObjectSwapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SafeAccountObjectSwapper)
// Forward declare root types
namespace GorillaNetworking {
class SafeAccountObjectSwapper;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::SafeAccountObjectSwapper*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::SafeAccountObjectSwapper*, "GorillaNetworking", "SafeAccountObjectSwapper");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.SafeAccountObjectSwapper
class CORDL_TYPE SafeAccountObjectSwapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field SafeModeObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SafeModeObjects, put=__cordl_internal_set_SafeModeObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  SafeModeObjects;

/// @brief Field SafeTexts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SafeTexts, put=__cordl_internal_set_SafeTexts)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  SafeTexts;

/// @brief Field UnSafeGameObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnSafeGameObjects, put=__cordl_internal_set_UnSafeGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  UnSafeGameObjects;

/// @brief Field UnSafeTexts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnSafeTexts, put=__cordl_internal_set_UnSafeTexts)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  UnSafeTexts;

static inline ::GorillaNetworking::SafeAccountObjectSwapper* New_ctor() ;

/// @brief Method SafeAccountUpdated, addr 0x5c706bc, size 0xc, virtual false, abstract: false, final false
inline void SafeAccountUpdated(bool  isSafety) ;

/// @brief Method Start, addr 0x5c7036c, size 0x128, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchToSafeMode, addr 0x5c70494, size 0x228, virtual false, abstract: false, final false
inline void SwitchToSafeMode() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_SafeModeObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_SafeModeObjects() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_SafeTexts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_SafeTexts() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_UnSafeGameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_UnSafeGameObjects() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_UnSafeTexts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_UnSafeTexts() ;

constexpr void __cordl_internal_set_SafeModeObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_SafeTexts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_UnSafeGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_UnSafeTexts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5c706c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeAccountObjectSwapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeAccountObjectSwapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeAccountObjectSwapper(SafeAccountObjectSwapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeAccountObjectSwapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeAccountObjectSwapper(SafeAccountObjectSwapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4309};

/// @brief Field UnSafeGameObjects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___UnSafeGameObjects;

/// @brief Field UnSafeTexts, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___UnSafeTexts;

/// @brief Field SafeTexts, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___SafeTexts;

/// @brief Field SafeModeObjects, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___SafeModeObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::SafeAccountObjectSwapper, ___UnSafeGameObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SafeAccountObjectSwapper, ___UnSafeTexts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SafeAccountObjectSwapper, ___SafeTexts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SafeAccountObjectSwapper, ___SafeModeObjects) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::SafeAccountObjectSwapper) == 0x40, "Size mismatch!");

} // namespace end def GorillaNetworking
