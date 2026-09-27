#pragma once
// IWYU pragma private; include "GlobalNamespace/LookAtTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LookAtTransform)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LookAtTransform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LookAtTransform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LookAtTransform*, "", "LookAtTransform");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LookAtTransform
class CORDL_TYPE LookAtTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lookAt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookAt, put=__cordl_internal_set_lookAt)) ::UnityW<::UnityEngine::Transform>  lookAt;

static inline ::GlobalNamespace::LookAtTransform* New_ctor() ;

/// @brief Method Update, addr 0x5b087d4, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookAt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookAt() ;

constexpr void __cordl_internal_set_lookAt(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5b08864, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LookAtTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LookAtTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LookAtTransform(LookAtTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LookAtTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LookAtTransform(LookAtTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3511};

/// [SerializeField]
/// @brief Field lookAt, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookAt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LookAtTransform, ___lookAt) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LookAtTransform) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
