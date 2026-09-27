#pragma once
// IWYU pragma private; include "GorillaTag/DestroyOnAwake.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DestroyOnAwake)
// Forward declare root types
namespace GorillaTag {
class DestroyOnAwake;
}
// Write type traits
MARK_REF_T(::GorillaTag::DestroyOnAwake*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DestroyOnAwake*, "GorillaTag", "DestroyOnAwake");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.DestroyOnAwake
class CORDL_TYPE DestroyOnAwake : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5d215dc, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::DestroyOnAwake* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d216bc, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5d2179c, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5d2187c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestroyOnAwake() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestroyOnAwake", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DestroyOnAwake(DestroyOnAwake && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestroyOnAwake", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestroyOnAwake(DestroyOnAwake const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4597};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::DestroyOnAwake) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag
