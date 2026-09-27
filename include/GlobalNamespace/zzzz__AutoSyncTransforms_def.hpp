#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoSyncTransforms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AutoSyncTransforms)
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class AutoSyncTransforms;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AutoSyncTransforms*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutoSyncTransforms*, "", "AutoSyncTransforms");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutoSyncTransforms
class CORDL_TYPE AutoSyncTransforms : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TargetRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  TargetRigidbody;

 __declspec(property(get=get_TargetTransform)) ::UnityW<::UnityEngine::Transform>  TargetTransform;

/// @brief Field clean, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_clean, put=__cordl_internal_set_clean)) bool  clean;

/// @brief Field m_rigidbody, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rigidbody, put=__cordl_internal_set_m_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  m_rigidbody;

/// @brief Field m_transform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_transform, put=__cordl_internal_set_m_transform)) ::UnityW<::UnityEngine::Transform>  m_transform;

/// @brief Method Awake, addr 0x57a0aa4, size 0x198, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AutoSyncTransforms* New_ctor() ;

/// @brief Method OnDisable, addr 0x57a0ca8, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57a0c3c, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_clean() const;

constexpr bool& __cordl_internal_get_clean() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_rigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_transform() ;

constexpr void __cordl_internal_set_clean(bool  value) ;

constexpr void __cordl_internal_set_m_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x57a0d14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TargetRigidbody, addr 0x57a0a9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_TargetRigidbody() ;

/// @brief Method get_TargetTransform, addr 0x57a0a94, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TargetTransform() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoSyncTransforms() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoSyncTransforms", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoSyncTransforms(AutoSyncTransforms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoSyncTransforms", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoSyncTransforms(AutoSyncTransforms const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1532};

/// [SerializeField]
/// @brief Field m_transform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_transform;

/// [SerializeField]
/// @brief Field m_rigidbody, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_rigidbody;

/// @brief Field clean, offset: 0x30, size: 0x1, def value: None
 bool  ___clean;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoSyncTransforms, ___m_transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSyncTransforms, ___m_rigidbody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutoSyncTransforms, ___clean) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutoSyncTransforms) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
